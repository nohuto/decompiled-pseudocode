/*
 * XREFs of sub_1406F9060 @ 0x1406F9060
 * Callers:
 *     sub_1402ECFD8 @ 0x1402ECFD8 (sub_1402ECFD8.c)
 *     sub_1406F8C0C @ 0x1406F8C0C (sub_1406F8C0C.c)
 *     sub_1406F8D30 @ 0x1406F8D30 (sub_1406F8D30.c)
 *     sub_1406F9990 @ 0x1406F9990 (sub_1406F9990.c)
 *     sub_1406FB4D0 @ 0x1406FB4D0 (sub_1406FB4D0.c)
 * Callees:
 *     sub_140280D08 @ 0x140280D08 (sub_140280D08.c)
 *     sub_140281750 @ 0x140281750 (sub_140281750.c)
 *     sub_1407BC0B0 @ 0x1407BC0B0 (sub_1407BC0B0.c)
 *     sub_1407DBC0C @ 0x1407DBC0C (sub_1407DBC0C.c)
 *     sub_14096CDB8 @ 0x14096CDB8 (sub_14096CDB8.c)
 */

__int64 __fastcall sub_1406F9060(unsigned int *P, __int64 a2, unsigned __int64 a3)
{
  __int64 v5; // rbx
  unsigned __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // rcx

  if ( (P[16] & 0x2000000) != 0 )
  {
    v5 = **((_QWORD **)P + 9);
    v6 = sub_140281750(v5);
    v7 = *(_QWORD *)(v6 + 24);
    sub_140280D08(v5, v6);
    v8 = *((_QWORD *)KeGetCurrentThread() + 23);
    a3 = (P[7] | ((unsigned __int64)*((unsigned __int8 *)P + 33) << 32))
       - (P[6] | ((unsigned __int64)*((unsigned __int8 *)P + 32) << 32))
       + 1;
    if ( (*(_DWORD *)(v8 + 1124) & 0x4000) != 0 )
      sub_1407DBC0C(*(unsigned int *)(v8 + 1524), v7, a3);
  }
  if ( (xmmword_140D06900[0] & 0x8000) != 0 && *((_QWORD *)P + 9) )
    sub_14096CDB8(P, 1062LL, a3);
  return sub_1407BC0B0(P);
}
