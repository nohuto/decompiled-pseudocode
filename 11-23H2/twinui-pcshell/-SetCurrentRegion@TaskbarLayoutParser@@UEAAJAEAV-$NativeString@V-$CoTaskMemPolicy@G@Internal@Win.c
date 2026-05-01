/*
 * XREFs of ?SetCurrentRegion@TaskbarLayoutParser@@UEAAJAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@Z @ 0x1803EB1A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TaskbarLayoutParser::SetCurrentRegion(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r8
  __int64 v3; // rcx

  v2 = *(_QWORD *)(a2 + 8);
  v3 = a1 + 160;
  if ( v2 == -1LL )
  {
    if ( *(_QWORD *)a2 )
    {
      do
        ++v2;
      while ( *(_WORD *)(*(_QWORD *)a2 + 2 * v2) );
    }
    else
    {
      v2 = 0LL;
    }
  }
  return Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
           v3,
           *(const unsigned __int16 **)a2,
           v2);
}
