/*
 * XREFs of sub_14025868C @ 0x14025868C
 * Callers:
 *     sub_14027AA30 @ 0x14027AA30 (sub_14027AA30.c)
 * Callees:
 *     sub_14027B080 @ 0x14027B080 (sub_14027B080.c)
 *     sub_140284EB0 @ 0x140284EB0 (sub_140284EB0.c)
 *     sub_1402E670C @ 0x1402E670C (sub_1402E670C.c)
 */

void __fastcall sub_14025868C(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rdi
  unsigned __int64 v8; // rbp
  unsigned __int64 *v9; // rbx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rdx
  char v13; // al
  _QWORD v14[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = a2[3];
  v5 = a3;
  if ( v4 < a2[2] )
  {
    v8 = *(_QWORD *)(a1 + 224);
    if ( v8 >= 0xFFFF800000000000uLL && (unsigned int)sub_14027B080(*(_QWORD *)(a1 + 224), a2, a3, a4) != 1 )
      v5 = 1LL;
    v9 = (unsigned __int64 *)(a2[1] + 16 * v4);
    v10 = (*(unsigned int *)(a1 + 184) + v8 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    v11 = *v9;
    if ( v10 >= *v9 )
    {
      v12 = v9[1];
      if ( v10 < v12 + v11 )
      {
        v14[0] = (*(unsigned int *)(a1 + 184) + v8 + 4095) & 0xFFFFFFFFFFFFF000uLL;
        v14[1] = v11 + v12 - v10;
        v13 = sub_1402E670C(KeGetCurrentThread());
        ((void (__fastcall *)(__int64, _QWORD *, __int64, _QWORD))sub_140284EB0)(
          1LL,
          v14,
          v5,
          v13 & 7 | (8 * (v13 & 7 | 0x2800u)));
      }
    }
  }
}
