/*
 * XREFs of sub_180058240 @ 0x180058240
 * Callers:
 *     <none>
 * Callees:
 *     sub_180011C7C @ 0x180011C7C (sub_180011C7C.c)
 *     sub_18002B3EC @ 0x18002B3EC (sub_18002B3EC.c)
 *     sub_18002B8E0 @ 0x18002B8E0 (sub_18002B8E0.c)
 *     sub_1800401E8 @ 0x1800401E8 (sub_1800401E8.c)
 *     sub_180042D68 @ 0x180042D68 (sub_180042D68.c)
 *     sub_180057460 @ 0x180057460 (sub_180057460.c)
 *     sub_180057C24 @ 0x180057C24 (sub_180057C24.c)
 */

// Hidden C++ exception states: #wind=1
int __fastcall sub_180058240(__int64 a1)
{
  struct _Mtx_internal_imp_t *v2; // rbx
  __int64 v3; // rbp
  __int64 v4; // rsi
  char v5; // r15
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  _Mtx_t v16[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = (struct _Mtx_internal_imp_t *)(a1 + 128);
  v3 = a1 + 425;
  v4 = a1 + 120;
  do
  {
    sub_180011C7C(v2);
    v5 = sub_180057460(v3);
    if ( sub_180057460(v4) )
    {
      sub_1800401E8(v6, 0LL, v7, v8);
      sub_180057C24(a1, v9, v10, v11);
      Mtx_unlock(v2);
    }
    else
    {
      Mtx_unlock(v2);
      sub_18002B3EC((__int64)v16, v2);
      while ( !sub_180042D68(v4) && sub_180057460(v3) )
        Cnd_wait((_Cnd_t)(a1 + 208), v16[0]);
      sub_18002B8E0((__int64)v16);
    }
  }
  while ( v5 );
  LOBYTE(v12) = 1;
  sub_1800401E8(a1 + 426, v12, v13, v14);
  return Cnd_signal((_Cnd_t)(a1 + 352));
}
