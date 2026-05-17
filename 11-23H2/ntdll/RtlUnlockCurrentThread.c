/*
 * XREFs of RtlUnlockCurrentThread @ 0x1800879B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpUnlockStack @ 0x180087A40 (RtlpUnlockStack.c)
 *     ZwQueryVirtualMemory @ 0x1800A1310 (ZwQueryVirtualMemory.c)
 *     ZwUnlockVirtualMemory @ 0x1800A4A00 (ZwUnlockVirtualMemory.c)
 */

__int64 RtlUnlockCurrentThread()
{
  struct _TEB *v0; // rdx
  unsigned int LockCount; // eax
  unsigned int v2; // eax
  _QWORD v4[7]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v5; // [rsp+70h] [rbp+8h] BYREF
  __int64 v6; // [rsp+78h] [rbp+10h] BYREF

  v0 = NtCurrentTeb();
  LockCount = v0->LockCount;
  if ( !LockCount )
    return 3221225514LL;
  v2 = LockCount - 1;
  v0->LockCount = v2;
  if ( !v2 )
  {
    if ( (int)ZwQueryVirtualMemory(-1LL, v0, 0LL, v4, 48LL, 0LL) >= 0 )
    {
      v6 = v4[0];
      v5 = v4[3];
      ZwUnlockVirtualMemory(-1LL, &v6, &v5, 1LL);
    }
    RtlpUnlockStack();
  }
  return 0LL;
}
