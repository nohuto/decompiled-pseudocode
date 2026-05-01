/*
 * XREFs of sub_180004E90 @ 0x180004E90
 * Callers:
 *     sub_180003764 @ 0x180003764 (sub_180003764.c)
 * Callees:
 *     sub_18000238C @ 0x18000238C (sub_18000238C.c)
 *     sub_180004C40 @ 0x180004C40 (sub_180004C40.c)
 *     sub_180004FD4 @ 0x180004FD4 (sub_180004FD4.c)
 */

__int64 __fastcall sub_180004E90(RTL_SRWLOCK *a1, __int128 *a2)
{
  RTL_SRWLOCK *v2; // rbx
  unsigned int v4; // edi
  volatile signed __int32 *v6; // rbx
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF
  volatile signed __int32 *v9; // [rsp+40h] [rbp+8h] BYREF

  v2 = a1 + 1;
  v4 = 0;
  v9 = 0LL;
  AcquireSRWLockExclusive(a1 + 1);
  sub_180004FD4(&v9, a1);
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  v6 = v9;
  if ( v9 )
  {
    v8 = *a2;
    v4 = sub_18000238C(&v8, (__int64)v9, (__int64)a1);
    sub_180004C40(v6);
  }
  return v4;
}
