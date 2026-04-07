/*
 * XREFs of ?_HasBlurBehind@CAccent@@IEAA_NXZ @ 0x180098630
 * Callers:
 *     ?_UpdateAccentBlurBehind@CAccent@@IEAAXXZ @ 0x18009873C (-_UpdateAccentBlurBehind@CAccent@@IEAAXXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CAccent::_HasBlurBehind(CAccent *this)
{
  __int64 v1; // rdx
  bool result; // al

  v1 = *((_QWORD *)this + 43);
  result = 0;
  if ( v1 )
    return *(_DWORD *)(v1 + 320) != 0;
  return result;
}
