/*
 * XREFs of sub_1407F35F8 @ 0x1407F35F8
 * Callers:
 *     sub_1407F3718 @ 0x1407F3718 (sub_1407F3718.c)
 *     sub_14082BCA0 @ 0x14082BCA0 (sub_14082BCA0.c)
 *     sub_140B0675C @ 0x140B0675C (sub_140B0675C.c)
 *     sub_140B0681C @ 0x140B0681C (sub_140B0681C.c)
 *     sub_140B06A84 @ 0x140B06A84 (sub_140B06A84.c)
 *     sub_140B07C00 @ 0x140B07C00 (sub_140B07C00.c)
 * Callees:
 *     sub_1402691C4 @ 0x1402691C4 (sub_1402691C4.c)
 *     sub_1402821F4 @ 0x1402821F4 (sub_1402821F4.c)
 *     sub_1402A0624 @ 0x1402A0624 (sub_1402A0624.c)
 *     sub_14036DA68 @ 0x14036DA68 (sub_14036DA68.c)
 */

__int64 __fastcall sub_1407F35F8(ULONG_PTR *a1, __int64 a2, int a3, __int64 a4)
{
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r15
  unsigned __int64 v11; // r14
  __int64 v12; // r13
  __int64 *v13; // rbp

  if ( a3 == 1 )
  {
    v13 = (__int64 *)(a2 + 320);
LABEL_8:
    *(_DWORD *)a2 = 0;
    *(_WORD *)(a2 + 174) = *(_WORD *)a1;
    sub_1402A0624(a2, (__int64)v13, a3, a4);
    sub_14036DA68(a2);
    return 1LL;
  }
  v8 = sub_1402691C4(a3);
  if ( v8 > 2 )
  {
    *(_BYTE *)(v9 + 184) ^= (a3 ^ *(_BYTE *)(v9 + 184)) & 7;
    *(_DWORD *)v9 = 0;
    *(_WORD *)(v9 + 174) = *(_WORD *)a1;
    return 1LL;
  }
  v10 = v8;
  v11 = (-(__int64)(a1[2090] < 0x4000) & 0xFFFFFFFFFFFFFF20uLL) + 256;
  v12 = 5LL * v8;
  v13 = &qword_140C4F040[5 * v8 + 1407];
  if ( (unsigned int)sub_1402821F4(a1, v11, 20LL) )
  {
    if ( a1 != &StartContext )
    {
      v13 = (__int64 *)&a1[v12 + 2152];
      a4 = qword_140C4F040[40 * v10 + 2231];
    }
    *(_QWORD *)(a2 + 112) = v11;
    goto LABEL_8;
  }
  return 0LL;
}
