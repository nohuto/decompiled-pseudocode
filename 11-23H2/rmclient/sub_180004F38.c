/*
 * XREFs of sub_180004F38 @ 0x180004F38
 * Callers:
 *     sub_1800037A0 @ 0x1800037A0 (sub_1800037A0.c)
 * Callees:
 *     sub_18000246C @ 0x18000246C (sub_18000246C.c)
 *     sub_180004C40 @ 0x180004C40 (sub_180004C40.c)
 *     sub_180004FD4 @ 0x180004FD4 (sub_180004FD4.c)
 */

__int64 __fastcall sub_180004F38(__int64 a1, __int128 *a2)
{
  unsigned int v2; // edi
  __int64 v4; // r8
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF
  volatile signed __int32 *v7; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  v7 = 0LL;
  AcquireSRWLockExclusive(&stru_180032C50);
  sub_180004FD4(&v7, &qword_180032C48);
  ReleaseSRWLockExclusive(&stru_180032C50);
  if ( v7 )
  {
    v6 = *a2;
    v2 = sub_18000246C(&v6, (__int64)v7, v4);
  }
  if ( v7 )
    sub_180004C40(v7);
  return v2;
}
