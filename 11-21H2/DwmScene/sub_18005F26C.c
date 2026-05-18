/*
 * XREFs of sub_18005F26C @ 0x18005F26C
 * Callers:
 *     sub_18005E94C @ 0x18005E94C (sub_18005E94C.c)
 *     sub_180060014 @ 0x180060014 (sub_180060014.c)
 * Callees:
 *     sub_1800441CC @ 0x1800441CC (sub_1800441CC.c)
 *     sub_1800441D8 @ 0x1800441D8 (sub_1800441D8.c)
 *     sub_1800441E4 @ 0x1800441E4 (sub_1800441E4.c)
 */

int __fastcall sub_18005F26C(__int64 a1, _Mtx_t *a2)
{
  _BYTE *v4; // rax
  char v5; // r8
  _BYTE *v6; // rax
  char v7; // dl
  struct _Cnd_internal_imp_t *v8; // rsi
  char *v9; // rax
  char *v10; // rbx
  char i; // cl
  char v13; // [rsp+30h] [rbp+8h] BYREF

  v13 = 0;
  sub_1800441E4((__int64)&v13);
  v4 = (_BYTE *)sub_1800441CC(a1 + 425);
  *v4 = v5;
  v13 = 0;
  sub_1800441E4((__int64)&v13);
  v6 = (_BYTE *)sub_1800441CC(a1 + 424);
  *v6 = v7;
  Cnd_signal((_Cnd_t)(a1 + 208));
  Cnd_signal((_Cnd_t)(a1 + 280));
  v8 = (struct _Cnd_internal_imp_t *)(a1 + 352);
  v9 = (char *)sub_1800441D8(a1 + 426);
  v10 = v9;
  for ( i = *v9; !i; i = *v10 )
    LODWORD(v9) = Cnd_wait(v8, *a2);
  return (int)v9;
}
