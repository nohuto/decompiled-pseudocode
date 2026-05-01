/*
 * XREFs of ?SetCurrentRegion@PWSLayoutParser@@UEAAJAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@Z @ 0x1803BE3C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PWSLayoutParser::SetCurrentRegion(__int64 a1, __int64 *a2)
{
  unsigned __int64 v2; // r8
  __int64 v3; // rcx
  __int64 v4; // rdx

  v2 = a2[1];
  v3 = a1 + 144;
  v4 = *a2;
  if ( v2 == -1LL )
  {
    if ( v4 )
    {
      do
        ++v2;
      while ( *(_WORD *)(v4 + 2 * v2) );
    }
    else
    {
      v2 = 0LL;
    }
  }
  return Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(v3, v4, v2);
}
