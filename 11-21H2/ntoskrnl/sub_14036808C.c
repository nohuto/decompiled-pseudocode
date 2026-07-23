/*
 * XREFs of sub_14036808C @ 0x14036808C
 * Callers:
 *     sub_140350B40 @ 0x140350B40 (sub_140350B40.c)
 *     sub_1403633A0 @ 0x1403633A0 (sub_1403633A0.c)
 *     sub_14036DD30 @ 0x14036DD30 (sub_14036DD30.c)
 *     sub_14036EDA8 @ 0x14036EDA8 (sub_14036EDA8.c)
 * Callees:
 *     sub_140362B58 @ 0x140362B58 (sub_140362B58.c)
 *     sub_140368170 @ 0x140368170 (sub_140368170.c)
 *     sub_14036843C @ 0x14036843C (sub_14036843C.c)
 */

__int64 __fastcall sub_14036808C(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  _QWORD *v7; // rax
  unsigned __int64 v8; // r8
  __int64 v9; // rdx
  unsigned __int64 i; // rcx
  __int64 result; // rax
  __int128 v12; // [rsp+20h] [rbp-18h] BYREF

  if ( a4 )
  {
    v12 = *(_OWORD *)(a1 + 40);
    v7 = sub_140362B58(&v12);
    sub_140368170(v7 + 2, 2 * ((unsigned __int64)(v9 - v7[1]) >> 20), 2 * (v8 >> 20));
  }
  if ( a3 == 0x7FFFFFFF )
  {
    a3 = 2;
    for ( i = 32LL * *(unsigned __int8 *)(a1 + 10) + a2; i < a2 + 0x2000; i += 32LL * *(unsigned __int8 *)(i + 31) )
      a3 += (unsigned __int16)~*(_WORD *)(i + 28);
  }
  sub_14036843C(a1);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1 + 8), -(__int64)a3);
  result = *(__int16 *)(a1 + 22);
  _InterlockedExchangeAdd64(
    (volatile signed __int64 *)(result + a1),
    -(__int64)((unsigned __int64)(unsigned int)-*(_DWORD *)a1 >> 12));
  return result;
}
