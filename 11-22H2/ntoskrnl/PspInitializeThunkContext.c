/*
 * XREFs of PspInitializeThunkContext @ 0x14077070C
 * Callers:
 *     PspUserThreadStartup @ 0x14076FBF0 (PspUserThreadStartup.c)
 * Callees:
 *     KiDispatchException @ 0x14030CAC0 (KiDispatchException.c)
 *     RtlGetExtendedContextLength2 @ 0x14030D5B0 (RtlGetExtendedContextLength2.c)
 *     RtlInitializeExtendedContext2 @ 0x14030D6A0 (RtlInitializeExtendedContext2.c)
 *     KePopulateContinuationContext @ 0x14030DD38 (KePopulateContinuationContext.c)
 *     KiCheckForKernelApcDelivery @ 0x14030F640 (KiCheckForKernelApcDelivery.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     _alloca_probe @ 0x140429450 (_alloca_probe.c)
 *     memset @ 0x140435400 (memset.c)
 *     PspCallThreadNotifyRoutines @ 0x1406AFDA0 (PspCallThreadNotifyRoutines.c)
 *     ProbeForWrite @ 0x1407293F0 (ProbeForWrite.c)
 *     RtlCopyContext @ 0x1407709E0 (RtlCopyContext.c)
 *     PspSetContextThreadInternal @ 0x140770B00 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x140770CE4 (PspGetContextThreadInternal.c)
 *     PspCreateUserContext @ 0x14077124C (PspCreateUserContext.c)
 */

char PspInitializeThunkContext()
{
  struct _KTHREAD *CurrentThread; // r14
  int v1; // ecx
  ULONG64 v2; // rsi
  ULONG v3; // r12d
  $C71981A45BEB2B45F82C232A7085991E *v4; // rax
  int v5; // ebx
  SIZE_T v6; // r15
  unsigned __int64 v7; // rax
  void *v8; // rsp
  int v9; // r9d
  _CONTEXT *v10; // r13
  void *InstrumentationCallback; // rdx
  __int64 v12; // rcx
  __int64 v13; // r15
  _QWORD *InitialStack; // rdx
  _QWORD *v16; // r8
  _BYTE Context[1440]; // [rsp+30h] [rbp+0h] BYREF

  memset(&Context[76], 0, 0x7CuLL);
  *(_QWORD *)&Context[8] = 0LL;
  *(_DWORD *)&Context[4] = 0;
  *(_QWORD *)&Context[24] = 0LL;
  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)&Context[40] = CurrentThread;
  v1 = CurrentThread->MiscFlags & 0x100000;
  v2 = v1 != 0 ? 0x800 : 0;
  *(_QWORD *)&Context[16] = v2;
  v3 = v1 != 0 ? 1048667 : 1048603;
  LODWORD(v4) = RtlGetExtendedContextLength2(v3, (PULONG)&Context[4], (unsigned int)v2);
  v5 = (int)v4;
  if ( (int)v4 >= 0 )
  {
    v6 = *(unsigned int *)&Context[4];
    v7 = *(unsigned int *)&Context[4] + 15LL;
    if ( v7 <= *(unsigned int *)&Context[4] )
      v7 = 0xFFFFFFFFFFFFFF0LL;
    v8 = alloca(v7 & 0xFFFFFFFFFFFFFFF0uLL);
    *(_QWORD *)&Context[32] = Context;
    memset(Context, 0, *(unsigned int *)&Context[4]);
    LODWORD(v4) = RtlInitializeExtendedContext2((PCONTEXT)Context, v3, (PCONTEXT_EX *)&Context[8], v2);
    v5 = (int)v4;
    if ( (int)v4 >= 0 )
    {
      memset(&Context[208], 0, 0x4D0uLL);
      --CurrentThread->SpecialApcDisable;
      PspCallThreadNotifyRoutines(CurrentThread, 1u, 1);
      LOBYTE(v9) = 1;
      LODWORD(v4) = PspGetContextThreadInternal((_DWORD)CurrentThread, (unsigned int)Context, 0, v9, 0);
      v5 = (int)v4;
      *(_DWORD *)Context = (_DWORD)v4;
      if ( (int)v4 >= 0 )
      {
        v10 = (_CONTEXT *)((*(_QWORD *)&Context[152] - v6) & 0xFFFFFFFFFFFFFFF0uLL);
        *(_QWORD *)&Context[360] = (char *)v10 - 40;
        PspCreateUserContext(
          (unsigned int)&Context[208],
          0,
          qword_140D1F328,
          (*(_DWORD *)&Context[152] - v6) & 0xFFFFFFF0,
          (__int64)PspSystemDlls[0][4]);
        InstrumentationCallback = CurrentThread->ApcState.Process->InstrumentationCallback;
        if ( InstrumentationCallback )
        {
          *(_QWORD *)&Context[408] = *(_QWORD *)&Context[456];
          *(_QWORD *)&Context[456] = InstrumentationCallback;
        }
        v12 = (__int64)v10;
        if ( v6 - 1 > 0xFFE )
        {
          ProbeForWrite(v10, v6, 0x10u);
        }
        else
        {
          if ( (unsigned __int64)v10 >= 0x7FFFFFFF0000LL )
            v12 = 0x7FFFFFFF0000LL;
          *(_BYTE *)v12 = *(_BYTE *)v12;
          *(_BYTE *)(v12 + v6 - 1) = *(_BYTE *)(v12 + v6 - 1);
        }
        LODWORD(v4) = RtlInitializeExtendedContext2(v10, v3, (PCONTEXT_EX *)&Context[24], *(ULONG64 *)&Context[16]);
        v5 = (int)v4;
        *(_DWORD *)Context = (_DWORD)v4;
        if ( (int)v4 >= 0 )
        {
          v13 = *(_QWORD *)&Context[32];
          LODWORD(v4) = RtlCopyContext(v10, v3, *(PCONTEXT *)&Context[32]);
          v5 = (int)v4;
          *(_DWORD *)Context = (_DWORD)v4;
          if ( (int)v4 >= 0 )
            LOBYTE(v4) = (unsigned __int8)KePopulateContinuationContext(*(_QWORD *)(v13 + 248));
        }
        if ( v5 >= 0 )
        {
          LODWORD(v4) = PspSetContextThreadInternal(CurrentThread, 2);
          v5 = (int)v4;
        }
      }
    }
  }
  if ( CurrentThread->SpecialApcDisable++ == -1 )
  {
    v4 = &CurrentThread->152;
    if ( ($C71981A45BEB2B45F82C232A7085991E *)v4->ApcState.ApcListHead[0].Flink != v4 )
      LOBYTE(v4) = KiCheckForKernelApcDelivery();
  }
  if ( v5 < 0 )
  {
    *(_DWORD *)&Context[52] = 0;
    *(_QWORD *)&Context[64] = qword_140D1F328;
    *(_DWORD *)&Context[48] = v5;
    *(_DWORD *)&Context[72] = 0;
    *(_QWORD *)&Context[56] = 0LL;
    InitialStack = CurrentThread->InitialStack;
    v16 = InitialStack;
    if ( (InitialStack[1] & 1LL) != 0 )
    {
      do
        v16 = (_QWORD *)v16[5];
      while ( (v16[1] & 1) != 0 );
    }
    if ( (InitialStack[1] & 1LL) != 0 )
    {
      do
        InitialStack = (_QWORD *)InitialStack[5];
      while ( (InitialStack[1] & 1) != 0 );
    }
    LOBYTE(v4) = KiDispatchException(
                   (PEXCEPTION_RECORD)&Context[48],
                   (__int64)(InitialStack - 90),
                   (__int64)(v16 - 50),
                   1u,
                   0);
  }
  return (char)v4;
}
