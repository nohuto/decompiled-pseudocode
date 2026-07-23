/*
 * XREFs of sub_140923614 @ 0x140923614
 * Callers:
 *     sub_140922DB4 @ 0x140922DB4 (sub_140922DB4.c)
 *     sub_14092317C @ 0x14092317C (sub_14092317C.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     sub_1403C7B20 @ 0x1403C7B20 (sub_1403C7B20.c)
 *     ZwQueryWnfStateData @ 0x14041E4C0 (ZwQueryWnfStateData.c)
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 */

NTSTATUS __fastcall sub_140923614(__int64 a1, unsigned __int64 a2)
{
  __int64 i; // rbx
  NTSTATUS result; // eax
  __int64 BufferSize; // [rsp+80h] [rbp+28h] BYREF
  unsigned __int64 Buffer; // [rsp+88h] [rbp+30h] BYREF
  WNF_CHANGE_STAMP ChangeStamp; // [rsp+90h] [rbp+38h] BYREF
  unsigned __int64 v7; // [rsp+98h] [rbp+40h] BYREF

  Buffer = a2;
  BufferSize = a1;
  ChangeStamp = 0;
  ExAcquirePushLockSharedEx((ULONG_PTR)&stru_140C49670, 0LL);
  for ( i = qword_140C49678; (__int64 *)i != &qword_140C49678; i = *(_QWORD *)i )
    sub_1403C7B20((PWORK_QUEUE_ITEM)(i + 16));
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&stru_140C49670, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&stru_140C49670);
  sub_1402AFC00((ULONG_PTR)&stru_140C49670);
  do
  {
    v7 = 0LL;
    LODWORD(BufferSize) = 8;
    result = ZwQueryWnfStateData(&stru_140012640, &TypeId, 0LL, &ChangeStamp, &v7, (PULONG)&BufferSize);
    if ( result < 0 )
      break;
    result = Buffer;
    if ( v7 >= Buffer )
      break;
    result = ZwUpdateWnfStateData(&stru_140012640, &Buffer, 8u, &TypeId, 0LL, ChangeStamp, 1u);
  }
  while ( result == -1073741823 );
  return result;
}
