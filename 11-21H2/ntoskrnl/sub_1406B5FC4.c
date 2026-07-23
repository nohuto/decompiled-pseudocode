/*
 * XREFs of sub_1406B5FC4 @ 0x1406B5FC4
 * Callers:
 *     sub_1406B5F74 @ 0x1406B5F74 (sub_1406B5F74.c)
 * Callees:
 *     sub_14036669C @ 0x14036669C (sub_14036669C.c)
 *     sub_1407E5518 @ 0x1407E5518 (sub_1407E5518.c)
 *     sub_1407F8C9C @ 0x1407F8C9C (sub_1407F8C9C.c)
 */

__int64 __fastcall sub_1406B5FC4(__int64 a1, __int64 a2)
{
  int v4; // ebx
  __int64 v5; // rax
  _QWORD *v6; // rcx
  __int64 v7; // rax
  _OWORD *v9; // [rsp+50h] [rbp+18h] BYREF

  v9 = 0LL;
  v4 = sub_14036669C(a2, 4u, &v9);
  if ( v4 < 0 )
  {
    sub_1407F8C9C(a2);
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 16);
    v6 = v9;
    *v9 = 0LL;
    *v6 = 29LL;
    v6[1] = v5;
    v7 = sub_1407E5518(v6, 3LL, 40LL, *(unsigned int *)(a1 + 40), *(_DWORD *)(a1 + 44));
    *(_DWORD *)(v7 + 16) &= 0xFFFFFFFC;
    v4 = 0;
    *(_QWORD *)(v7 + 24) = *(_QWORD *)(a1 + 16);
  }
  return (unsigned int)v4;
}
