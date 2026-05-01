/*
 * XREFs of ?get_IsExclusive@WindowingEnvironmentSettings@@UEAAJPEAE@Z @ 0x1804CD6C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall WindowingEnvironmentSettings::get_IsExclusive(
        WindowingEnvironmentSettings *this,
        unsigned __int8 *a2)
{
  bool v2; // al

  *a2 = 0;
  if ( *((_BYTE *)this + 68) )
    v2 = *((_DWORD *)this + 16) == 2;
  else
    v2 = 0;
  if ( !v2 )
    return 2147943568LL;
  *a2 = *((_BYTE *)this + 152);
  return 0LL;
}
