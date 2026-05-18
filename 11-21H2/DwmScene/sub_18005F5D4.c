/*
 * XREFs of sub_18005F5D4 @ 0x18005F5D4
 * Callers:
 *     sub_18001A2B0 @ 0x18001A2B0 (sub_18001A2B0.c)
 *     sub_180039CAC @ 0x180039CAC (sub_180039CAC.c)
 * Callees:
 *     sub_1800441CC @ 0x1800441CC (sub_1800441CC.c)
 *     sub_1800441E4 @ 0x1800441E4 (sub_1800441E4.c)
 *     sub_18005F684 @ 0x18005F684 (sub_18005F684.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_18005F5D4(__int64 a1)
{
  struct _Mtx_internal_imp_t *v2; // rbx
  int v3; // eax
  char v4; // al
  char *v5; // rdx
  char v6; // [rsp+30h] [rbp+8h] BYREF
  struct _Mtx_internal_imp_t *v7; // [rsp+38h] [rbp+10h]

  if ( *(_BYTE *)(a1 + 433) )
  {
    v2 = (struct _Mtx_internal_imp_t *)(a1 + 128);
    v7 = (struct _Mtx_internal_imp_t *)(a1 + 128);
    v3 = Mtx_lock((_Mtx_t)(a1 + 128));
    if ( v3 )
      std::_Throw_C_error(v3);
    if ( *(_DWORD *)(a1 + 36) )
    {
      v6 = 1;
      sub_1800441CC(a1 + 120);
      v4 = sub_1800441E4((__int64)&v6);
      *v5 = v4;
      Cnd_signal((_Cnd_t)(a1 + 208));
      v2 = v7;
    }
    else
    {
      sub_18005F684(a1);
    }
    Mtx_unlock(v2);
  }
}
