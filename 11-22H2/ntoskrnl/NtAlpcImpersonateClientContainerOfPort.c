/*
 * XREFs of NtAlpcImpersonateClientContainerOfPort @ 0x140978B50
 * Callers:
 *     <none>
 * Callees:
 *     ObDereferenceObjectDeferDelete @ 0x14020B8F0 (ObDereferenceObjectDeferDelete.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     PsImpersonateContainerOfThread @ 0x140259DC0 (PsImpersonateContainerOfThread.c)
 *     IoThreadToProcess @ 0x140289E60 (IoThreadToProcess.c)
 *     PsGetWorkOnBehalfThread @ 0x1402B68E4 (PsGetWorkOnBehalfThread.c)
 *     PoEnergyEstimationEnabled @ 0x1402C0B20 (PoEnergyEstimationEnabled.c)
 *     PsEncodeThreadWorkOnBehalfTicket @ 0x140329E28 (PsEncodeThreadWorkOnBehalfTicket.c)
 *     ObReferenceObjectByHandle @ 0x1406E6370 (ObReferenceObjectByHandle.c)
 *     AlpcpUnlockMessage @ 0x14071BF28 (AlpcpUnlockMessage.c)
 *     AlpcpCaptureIdMessage @ 0x14071D0B0 (AlpcpCaptureIdMessage.c)
 *     AlpcpLookupMessage @ 0x140738DC0 (AlpcpLookupMessage.c)
 */

NTSTATUS __cdecl NtAlpcImpersonateClientContainerOfPort(HANDLE PortHandle, PPORT_MESSAGE Message, ULONG Flags)
{
  struct _KTHREAD *CurrentThread; // rax
  PVOID v5; // r14
  NTSTATUS v6; // edi
  KPROCESSOR_MODE PreviousMode; // r9
  __int64 v8; // r9
  struct _KTHREAD *v9; // r15
  struct _KTHREAD *WorkOnBehalfThread; // rax
  struct _KTHREAD *v11; // rsi
  struct _KTHREAD *v12; // r8
  void *Teb; // r8
  __int64 v14; // r8
  int v16; // [rsp+30h] [rbp-48h] BYREF
  ULONG_PTR v17; // [rsp+38h] [rbp-40h] BYREF
  PVOID Object; // [rsp+40h] [rbp-38h] BYREF
  PVOID v19; // [rsp+48h] [rbp-30h]
  __int64 v20[5]; // [rsp+50h] [rbp-28h] BYREF
  NTSTATUS v21; // [rsp+90h] [rbp+18h] BYREF
  int v22; // [rsp+98h] [rbp+20h] BYREF

  v21 = 0;
  v16 = 0;
  v17 = 0LL;
  v22 = 0;
  v20[0] = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = 0LL;
  v19 = 0LL;
  if ( Flags )
  {
    v6 = -1073741811;
  }
  else
  {
    AlpcpCaptureIdMessage((__int64)Message, &v22, &v21);
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    Object = 0LL;
    v6 = ObReferenceObjectByHandle(PortHandle, 0x20000u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
    v5 = Object;
    v19 = Object;
    if ( v6 >= 0 )
    {
      if ( (*((_BYTE *)Object + 416) & 6) == 6
        && KeGetCurrentThread()->ApcState.Process == (_KPROCESS *)*((_QWORD *)Object + 3) )
      {
        v6 = AlpcpLookupMessage((__int64)Object, v22, v21, v8, &v17);
        v21 = v6;
        if ( v6 >= 0 )
        {
          if ( (*(_DWORD *)(v17 + 40) & 0x80u) == 0 )
          {
            v9 = *(struct _KTHREAD **)(v17 + 32);
            if ( v9 )
            {
              WorkOnBehalfThread = (struct _KTHREAD *)PsGetWorkOnBehalfThread(*(struct _KTHREAD **)(v17 + 32), &v16);
              v11 = WorkOnBehalfThread;
              if ( WorkOnBehalfThread )
              {
                PsImpersonateContainerOfThread((__int64)WorkOnBehalfThread);
                if ( v16 )
                  ObDereferenceObjectDeferDelete(v11);
              }
              else if ( IoThreadToProcess(v9)[2].Affinity.StaticBitmap[18]
                     || (unsigned __int8)PoEnergyEstimationEnabled() )
              {
                v11 = v9;
                PsImpersonateContainerOfThread((__int64)v9);
              }
              else
              {
                v11 = 0LL;
              }
              if ( v11 )
              {
                v12 = KeGetCurrentThread();
                if ( (v12->MiscFlags & 0x400) != 0 || v12->ApcStateIndex == 1 )
                  Teb = 0LL;
                else
                  Teb = v12->Teb;
                if ( Teb )
                {
                  PsEncodeThreadWorkOnBehalfTicket((__int64)v11, v20);
                  *(_QWORD *)(v14 + 696) = v20[0];
                }
              }
            }
            AlpcpUnlockMessage(v17);
          }
          else
          {
            AlpcpUnlockMessage(v17);
            v6 = -1073740029;
          }
        }
      }
      else
      {
        v6 = -1073741790;
      }
    }
  }
  if ( v5 )
    ObfDereferenceObject(v5);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v6;
}
