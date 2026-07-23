/*
 * XREFs of NtDebugContinue @ 0x140938AE0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutex @ 0x140230810 (ExAcquireFastMutex.c)
 *     ExReleaseFastMutex @ 0x140230950 (ExReleaseFastMutex.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
 *     EtwTraceDebuggerEvent @ 0x1405FCF50 (EtwTraceDebuggerEvent.c)
 *     ObReferenceObjectByHandle @ 0x1406E62F0 (ObReferenceObjectByHandle.c)
 *     DbgkpWakeTarget @ 0x140938638 (DbgkpWakeTarget.c)
 */

NTSTATUS __cdecl NtDebugContinue(HANDLE DebugObjectHandle, PCLIENT_ID ClientId, NTSTATUS ContinueStatus)
{
  KPROCESSOR_MODE PreviousMode; // r9
  NTSTATUS result; // eax
  NTSTATUS v6; // edi
  char v7; // r15
  __int64 *v8; // rsi
  char *v9; // r14
  __int64 *v10; // rcx
  __int64 *v11; // rdx
  __int64 **v12; // rax
  CLIENT_ID v13; // [rsp+40h] [rbp-28h]
  PVOID Object; // [rsp+88h] [rbp+20h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v13 = *ClientId;
  if ( ContinueStatus != -2147418111
    && ContinueStatus != 65537
    && ContinueStatus != 65538
    && ContinueStatus != 1073807361
    && ContinueStatus != 1073807363
    && ContinueStatus != 1073807364 )
  {
    return -1073741811;
  }
  Object = 0LL;
  result = ObReferenceObjectByHandle(DebugObjectHandle, 1u, DbgkDebugObjectType, PreviousMode, &Object, 0LL);
  v6 = result;
  if ( result >= 0 )
  {
    v7 = 0;
    v8 = 0LL;
    v9 = (char *)Object;
    ExAcquireFastMutex((PFAST_MUTEX)((char *)Object + 24));
    v10 = (__int64 *)*((_QWORD *)v9 + 10);
    if ( v10 == (__int64 *)(v9 + 80) )
      goto LABEL_21;
    while ( 1 )
    {
      if ( (HANDLE)v10[5] == v13.UniqueProcess )
      {
        if ( v7 )
        {
          *((_DWORD *)v10 + 19) &= ~4u;
          KeSetEvent((PRKEVENT)v9, 0, 0);
LABEL_21:
          ExReleaseFastMutex((PFAST_MUTEX)(v9 + 24));
          ObfDereferenceObject(v9);
          if ( !v7 )
            return -1073741811;
          if ( (PerfGlobalGroupMask[0] & 0x400000) != 0 )
            EtwTraceDebuggerEvent(v8[7], v8[8], 2);
          *((_DWORD *)v8 + 33) = ContinueStatus;
          *((_DWORD *)v8 + 18) = 0;
          DbgkpWakeTarget((char *)v8);
          return v6;
        }
        if ( (HANDLE)v10[6] == v13.UniqueThread && (*((_DWORD *)v10 + 19) & 1) != 0 )
        {
          v11 = (__int64 *)*v10;
          v12 = (__int64 **)v10[1];
          if ( *(__int64 **)(*v10 + 8) != v10 || *v12 != v10 )
            __fastfail(3u);
          *v12 = v11;
          v11[1] = (__int64)v12;
          v8 = v10;
          v7 = 1;
        }
      }
      v10 = (__int64 *)*v10;
      if ( v10 == (__int64 *)(v9 + 80) )
        goto LABEL_21;
    }
  }
  return result;
}
