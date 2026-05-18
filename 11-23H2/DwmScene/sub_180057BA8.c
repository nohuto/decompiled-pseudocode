/*
 * XREFs of sub_180057BA8 @ 0x180057BA8
 * Callers:
 *     sub_180018FC0 @ 0x180018FC0 (sub_180018FC0.c)
 *     sub_1800363BC @ 0x1800363BC (sub_1800363BC.c)
 * Callees:
 *     sub_180011C7C @ 0x180011C7C (sub_180011C7C.c)
 *     sub_1800401E8 @ 0x1800401E8 (sub_1800401E8.c)
 *     sub_180057C24 @ 0x180057C24 (sub_180057C24.c)
 */

// Hidden C++ exception states: #wind=1
int __fastcall sub_180057BA8(__int64 a1)
{
  struct _Mtx_internal_imp_t *v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  int result; // eax

  if ( *(_BYTE *)(a1 + 433) )
  {
    v2 = (struct _Mtx_internal_imp_t *)(a1 + 128);
    sub_180011C7C((struct _Mtx_internal_imp_t *)(a1 + 128));
    if ( *(_DWORD *)(a1 + 36) )
    {
      LOBYTE(v3) = 1;
      sub_1800401E8(a1 + 120, v3, v4, v5);
      Cnd_signal((_Cnd_t)(a1 + 208));
    }
    else
    {
      sub_180057C24(a1);
    }
    return Mtx_unlock(v2);
  }
  return result;
}
