/*
 * XREFs of sub_18005FE50 @ 0x18005FE50
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800441CC @ 0x1800441CC (sub_1800441CC.c)
 *     sub_1800441D8 @ 0x1800441D8 (sub_1800441D8.c)
 *     sub_1800441E4 @ 0x1800441E4 (sub_1800441E4.c)
 *     sub_18005F684 @ 0x18005F684 (sub_18005F684.c)
 */

// Hidden C++ exception states: #wind=1
int __fastcall sub_18005FE50(__int64 a1)
{
  struct _Mtx_internal_imp_t *v2; // rsi
  struct _Mtx_internal_imp_t *v3; // rbx
  int v4; // eax
  char *v5; // r15
  char v6; // bp
  __int64 v7; // rcx
  _BYTE *v8; // r14
  char v9; // al
  char *v10; // rdx
  int v11; // eax
  _BYTE *v12; // rax
  char v13; // dl
  char v15; // [rsp+58h] [rbp+10h] BYREF
  _Mtx_t v16; // [rsp+60h] [rbp+18h] BYREF

  v2 = (struct _Mtx_internal_imp_t *)(a1 + 128);
  v3 = (struct _Mtx_internal_imp_t *)(a1 + 128);
  v16 = (_Mtx_t)(a1 + 128);
  do
  {
    v4 = Mtx_lock(v3);
    if ( v4 )
      goto LABEL_13;
    v5 = (char *)sub_1800441D8(a1 + 425);
    v6 = *v5;
    v8 = (_BYTE *)sub_1800441D8(a1 + 120);
    if ( *v8 )
    {
      v15 = 0;
      sub_1800441CC(v7);
      v9 = sub_1800441E4((__int64)&v15);
      *v10 = v9;
      sub_18005F684(a1);
      v3 = v16;
      Mtx_unlock(v16);
    }
    else
    {
      Mtx_unlock(v16);
      v11 = Mtx_lock(v2);
      if ( v11 )
      {
        std::_Throw_C_error(v11);
        __debugbreak();
LABEL_13:
        std::_Throw_C_error(v4);
        __debugbreak();
        JUMPOUT(0x18005FFB0LL);
      }
      while ( !*v8 && *v5 )
        Cnd_wait((_Cnd_t)(a1 + 208), v2);
      Mtx_unlock(v2);
      v3 = v16;
    }
  }
  while ( v6 );
  LOBYTE(v16) = 1;
  sub_1800441E4((__int64)&v16);
  v12 = (_BYTE *)sub_1800441CC(a1 + 426);
  *v12 = v13;
  return Cnd_signal((_Cnd_t)(a1 + 352));
}
