/*
 * XREFs of sub_1800F9810 @ 0x1800F9810
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800FA180 @ 0x1800FA180 (sub_1800FA180.c)
 */

int __fastcall sub_1800F9810(__int64 a1, int a2)
{
  struct _Mtx_internal_imp_t *v2; // rbx
  int v4; // eax
  int v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  v2 = (struct _Mtx_internal_imp_t *)(a1 + 160);
  v4 = Mtx_lock((_Mtx_t)(a1 + 160));
  if ( v4 )
  {
    std::_Throw_C_error(v4);
    __debugbreak();
  }
  sub_1800FA180(a1 + 240, &v6);
  return Mtx_unlock(v2);
}
