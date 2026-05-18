/*
 * XREFs of sub_1800FB3B0 @ 0x1800FB3B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001E060 @ 0x18001E060 (sub_18001E060.c)
 */

int __fastcall sub_1800FB3B0(__int64 a1)
{
  int v2; // eax
  __int64 v3; // rdi

  v2 = Mtx_lock((_Mtx_t)(a1 + 8));
  if ( v2 )
  {
    std::_Throw_C_error(v2);
    __debugbreak();
  }
  v3 = *(_QWORD *)(a1 + 96);
  sub_18001E060(a1 + 96, a1 + 96, *(char **)(v3 + 8));
  *(_QWORD *)(v3 + 8) = v3;
  *(_QWORD *)v3 = v3;
  *(_QWORD *)(v3 + 16) = v3;
  *(_QWORD *)(a1 + 104) = 0LL;
  return Mtx_unlock((_Mtx_t)(a1 + 8));
}
