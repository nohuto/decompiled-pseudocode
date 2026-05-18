/*
 * XREFs of sub_1800964B0 @ 0x1800964B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001085C @ 0x18001085C (sub_18001085C.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     sub_180026618 @ 0x180026618 (sub_180026618.c)
 *     sub_180029824 @ 0x180029824 (sub_180029824.c)
 */

__int64 __fastcall sub_1800964B0(__int64 a1, __int64 a2, int a3, int a4, char a5, __int64 a6)
{
  __int64 v10; // rax
  __int64 v11; // rbx
  void **v12; // rax
  __int64 v14; // [rsp+30h] [rbp-38h] BYREF
  __int64 v15; // [rsp+38h] [rbp-30h]

  v10 = sub_180026618(a2);
  sub_18001085C(v10, &v14);
  sub_180011020((_QWORD *)(a1 + 232), &v14);
  if ( v15 )
    sub_180010530(v15);
  v11 = *(_QWORD *)(a1 + 232);
  v12 = (void **)sub_180010DD0(&v14, (__int64)"ImageProcessingEffectBloom");
  sub_180029824(v11, v12);
  return sub_1800283EC(*(_QWORD *)(a1 + 232), a3, a4, a5, a6, a2);
}
