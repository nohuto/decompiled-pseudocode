/*
 * XREFs of NtWaitForDebugEvent @ 0x140938E90
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F5D0 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireFastMutex @ 0x140230720 (ExAcquireFastMutex.c)
 *     ExReleaseFastMutex @ 0x140230860 (ExReleaseFastMutex.c)
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x140243CC0 (KeWaitForSingleObject.c)
 *     KeResetEvent @ 0x1402AFB70 (KeResetEvent.c)
 *     ObfReferenceObjectWithTag @ 0x1402B6890 (ObfReferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     memset @ 0x140435400 (memset.c)
 *     ObReferenceObjectByHandle @ 0x1406E6370 (ObReferenceObjectByHandle.c)
 *     DbgkpConvertKernelToUserStateChange @ 0x1409372E4 (DbgkpConvertKernelToUserStateChange.c)
 *     DbgkpOpenHandles @ 0x1409375D4 (DbgkpOpenHandles.c)
 */

NTSTATUS __cdecl NtWaitForDebugEvent(
        HANDLE DebugObjectHandle,
        BOOLEAN Alertable,
        PLARGE_INTEGER Timeout,
        PDBGUI_WAIT_STATE_CHANGE WaitStateChange)
{
  KPROCESSOR_MODE PreviousMode; // r15
  __int64 v8; // rdx
  NTSTATUS result; // eax
  void *v10; // r13
  BOOLEAN v11; // r9
  char *v12; // rdi
  char v13; // r14
  _QWORD *v14; // rdx
  __int64 i; // rax
  __int64 v16; // rbx
  int v17; // r8d
  _QWORD *v18; // rcx
  int v19; // ebx
  bool v20; // sf
  unsigned __int64 *v21; // rsi
  LONGLONG QuadPart; // [rsp+38h] [rbp-140h] BYREF
  PLARGE_INTEGER Timeouta; // [rsp+40h] [rbp-138h]
  PVOID Object; // [rsp+48h] [rbp-130h] BYREF
  __int64 v26; // [rsp+50h] [rbp-128h]
  PVOID v27; // [rsp+58h] [rbp-120h]
  _OWORD v28[12]; // [rsp+70h] [rbp-108h] BYREF

  Timeouta = Timeout;
  QuadPart = 0LL;
  v26 = 0LL;
  DWORD1(v28[0]) = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  memset(v28, 0, 0xB8uLL);
  v8 = 0x7FFFFFFF0000LL;
  if ( Timeouta )
  {
    QuadPart = Timeouta->QuadPart;
    Timeouta = (PLARGE_INTEGER)&QuadPart;
    v26 = MEMORY[0xFFFFF78000000014];
  }
  if ( PreviousMode )
  {
    if ( (unsigned __int64)WaitStateChange < 0x7FFFFFFF0000LL )
      v8 = (__int64)WaitStateChange;
    *(_BYTE *)v8 = *(_BYTE *)v8;
    *(_BYTE *)(v8 + 183) = *(_BYTE *)(v8 + 183);
  }
  Object = 0LL;
  result = ObReferenceObjectByHandle(DebugObjectHandle, 1u, DbgkDebugObjectType, PreviousMode, &Object, 0LL);
  if ( result >= 0 )
  {
    v10 = 0LL;
    v27 = 0LL;
    v11 = Alertable;
    v12 = (char *)Object;
    while ( 1 )
    {
      v19 = KeWaitForSingleObject(v12, Executive, PreviousMode, v11, Timeouta);
      if ( v19 < 0 || v19 == 192 || (unsigned int)(v19 - 257) <= 1 )
        break;
      v13 = 0;
      ExAcquireFastMutex((PFAST_MUTEX)(v12 + 24));
      if ( (*((_DWORD *)v12 + 24) & 1) != 0 )
      {
        v19 = -1073740972;
      }
      else
      {
        v14 = v12 + 80;
        for ( i = *((_QWORD *)v12 + 10); ; i = *(_QWORD *)i )
        {
          if ( (_QWORD *)i == v14 )
          {
            KeResetEvent((PRKEVENT)v12);
            goto LABEL_24;
          }
          v16 = i;
          v17 = *(_DWORD *)(i + 76);
          if ( (v17 & 5) == 0 )
          {
            v13 = 1;
            v18 = (_QWORD *)*v14;
            if ( *v14 != i )
            {
              while ( *(_QWORD *)(i + 40) != v18[5] )
              {
                v18 = (_QWORD *)*v18;
                if ( v18 == (_QWORD *)i )
                  goto LABEL_19;
              }
              *(_DWORD *)(i + 76) = v17 | 4;
              *(_QWORD *)(i + 80) = 0LL;
              v13 = 0;
            }
LABEL_19:
            if ( v13 )
              break;
          }
        }
        v10 = *(void **)(i + 56);
        v27 = *(PVOID *)(i + 64);
        ObfReferenceObjectWithTag(v27, 0x4F676244u);
        ObfReferenceObjectWithTag(v10, 0x4F676244u);
        DbgkpConvertKernelToUserStateChange((__int64)v28, v16);
        *(_DWORD *)(v16 + 76) |= 1u;
LABEL_24:
        v19 = 0;
      }
      ExReleaseFastMutex((PFAST_MUTEX)(v12 + 24));
      if ( v19 < 0 )
        break;
      if ( v13 )
      {
        DbgkpOpenHandles((__int64)v28, v10, v27);
        ObfDereferenceObjectWithTag(v27, 0x4F676244u);
        ObfDereferenceObjectWithTag(v10, 0x4F676244u);
        break;
      }
      if ( QuadPart < 0 )
      {
        v20 = MEMORY[0xFFFFF78000000014] - v26 + QuadPart < 0;
        QuadPart += MEMORY[0xFFFFF78000000014] - v26;
        v26 = MEMORY[0xFFFFF78000000014];
        v12 = (char *)Object;
        if ( !v20 )
        {
          v19 = 258;
          break;
        }
      }
      v11 = Alertable;
    }
    ObfDereferenceObject(v12);
    *(_OWORD *)&WaitStateChange->NewState = v28[0];
    *(_OWORD *)&WaitStateChange->AppClientId.UniqueThread = v28[1];
    *(_OWORD *)(&WaitStateChange->StateInfo.UnloadDll + 1) = v28[2];
    *(_OWORD *)(&WaitStateChange->StateInfo.UnloadDll + 3) = v28[3];
    *(_OWORD *)(&WaitStateChange->StateInfo.UnloadDll + 5) = v28[4];
    *(_OWORD *)(&WaitStateChange->StateInfo.UnloadDll + 7) = v28[5];
    *(_OWORD *)(&WaitStateChange->StateInfo.UnloadDll + 9) = v28[6];
    v21 = &WaitStateChange->StateInfo.Exception.ExceptionRecord.ExceptionInformation[9];
    *((_OWORD *)v21 - 1) = v28[7];
    *(_OWORD *)v21 = v28[8];
    *((_OWORD *)v21 + 1) = v28[9];
    *((_OWORD *)v21 + 2) = v28[10];
    v21[6] = *(_QWORD *)&v28[11];
    return v19;
  }
  return result;
}
