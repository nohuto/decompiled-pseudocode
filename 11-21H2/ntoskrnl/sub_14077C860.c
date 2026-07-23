/*
 * XREFs of sub_14077C860 @ 0x14077C860
 * Callers:
 *     sub_14077D454 @ 0x14077D454 (sub_14077D454.c)
 * Callees:
 *     sub_14077D2F8 @ 0x14077D2F8 (sub_14077D2F8.c)
 *     sub_14077D91C @ 0x14077D91C (sub_14077D91C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14077C860(int a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  int v7; // edi
  int v9; // [rsp+60h] [rbp-18h] BYREF
  int v10; // [rsp+64h] [rbp-14h] BYREF
  PVOID P; // [rsp+68h] [rbp-10h] BYREF

  P = 0LL;
  v9 = 0;
  v7 = sub_14077D91C(0x47706E50u, a3, 0LL, (__int64)&qword_140010AD8, (__int64)&v9, (__int64)&P, (__int64)&v10, 0);
  if ( v7 >= 0 )
    v7 = sub_14077D2F8(a1, (_DWORD)P, 0, a4, a5);
  if ( P )
    ExFreePoolWithTag(P, 0x47706E50u);
  return (unsigned int)v7;
}
