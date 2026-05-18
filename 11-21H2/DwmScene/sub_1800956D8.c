/*
 * XREFs of sub_1800956D8 @ 0x1800956D8
 * Callers:
 *     sub_1800A956C @ 0x1800A956C (sub_1800A956C.c)
 *     sub_1800AAA68 @ 0x1800AAA68 (sub_1800AAA68.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 */

__int64 __fastcall sub_1800956D8(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8
  __int64 v5; // rax
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = a2[1];
  if ( v2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    v2 = a2[1];
  }
  v7[0] = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 48) = *a2;
  v5 = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(a1 + 56) = v2;
  v7[1] = v5;
  sub_180010910((__int64)v7);
  *(_BYTE *)(a1 + 124) = 0;
  return sub_180010910((__int64)a2);
}
