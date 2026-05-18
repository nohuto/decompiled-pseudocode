/*
 * XREFs of sub_180060014 @ 0x180060014
 * Callers:
 *     sub_18001AB5C @ 0x18001AB5C (sub_18001AB5C.c)
 * Callees:
 *     sub_18005F26C @ 0x18005F26C (sub_18005F26C.c)
 */

// Hidden C++ exception states: #wind=1
int __fastcall sub_180060014(__int64 a1)
{
  struct _Mtx_internal_imp_t *v2; // rdi
  int v3; // eax
  _Mtx_t v5; // [rsp+20h] [rbp-18h] BYREF
  char v6; // [rsp+28h] [rbp-10h]

  v2 = (struct _Mtx_internal_imp_t *)(a1 + 128);
  v5 = (_Mtx_t)(a1 + 128);
  v6 = 0;
  v3 = Mtx_lock((_Mtx_t)(a1 + 128));
  if ( v3 )
  {
    std::_Throw_C_error(v3);
    __debugbreak();
  }
  v6 = 1;
  if ( *(_DWORD *)(a1 + 36) )
  {
    *(_DWORD *)(a1 + 36) = 0;
    sub_18005F26C(a1, &v5);
  }
  return Mtx_unlock(v2);
}
