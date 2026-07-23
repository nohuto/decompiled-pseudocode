/*
 * XREFs of sub_140A590DC @ 0x140A590DC
 * Callers:
 *     sub_140A580F0 @ 0x140A580F0 (sub_140A580F0.c)
 * Callees:
 *     sub_1403C1398 @ 0x1403C1398 (sub_1403C1398.c)
 *     sub_1403C1454 @ 0x1403C1454 (sub_1403C1454.c)
 */

char __fastcall sub_140A590DC(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v5; // r10d
  __int64 v9; // rax
  __int64 v10; // [rsp+20h] [rbp-38h]
  unsigned __int16 v11; // [rsp+28h] [rbp-30h]
  __int16 v12; // [rsp+40h] [rbp-18h]
  void *v13; // [rsp+70h] [rbp+18h] BYREF

  v5 = 0;
  v13 = a1;
  if ( (_BYTE)byte_140E01841 )
  {
    v5 = 1;
    v9 = *(_QWORD *)(*(_QWORD *)(a5 + 240) + 3712LL) + 4112LL;
    a1[131] = v9;
    a1[132] = a1[132] & 0xFF8 | (v9 - 12288) & 0xFFFFFFFFFFFFF002uLL | 2;
  }
  LOBYTE(v12) = 1;
  sub_1403C1454(&v13, a2, (__int64)sub_140424300, a4, v10, v11, a4, (__int64)&unk_140C06598, v12, v5);
  return sub_1403C1398(*(_BYTE **)(a4 + 56), (struct _KPRCB *)a4, (__int64)a1);
}
