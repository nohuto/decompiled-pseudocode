/*
 * XREFs of sub_1800AFDE0 @ 0x1800AFDE0
 * Callers:
 *     sub_18003D66C @ 0x18003D66C (sub_18003D66C.c)
 *     sub_18003DAD0 @ 0x18003DAD0 (sub_18003DAD0.c)
 *     sub_18003DAE8 @ 0x18003DAE8 (sub_18003DAE8.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 */

__int64 __fastcall sub_1800AFDE0(__int64 a1, unsigned int a2, _QWORD *a3, unsigned int a4)
{
  __int64 v4; // r10
  __int64 v5; // rdx
  __int64 v6; // r10
  __int64 v7; // rax
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = a2;
  v5 = a3[1];
  v6 = 2 * (a4 + 16 * v4);
  if ( v5 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
    v5 = a3[1];
  }
  v9[0] = *(_QWORD *)(a1 + 8 * v6 + 8);
  *(_QWORD *)(a1 + 8 * v6 + 8) = *a3;
  v7 = *(_QWORD *)(a1 + 8 * v6 + 16);
  *(_QWORD *)(a1 + 8 * v6 + 16) = v5;
  v9[1] = v7;
  return sub_180010910((__int64)v9);
}
