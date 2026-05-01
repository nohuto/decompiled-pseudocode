/*
 * XREFs of ?SetDropEffect@CDragVisualAcc@@UEAAXPEBG@Z @ 0x18053C520
 * Callers:
 *     ?OnPlaceModeMoveToInitialPosition@CDragVisualAcc@@UEAAXXZ @ 0x18053C2B0 (-OnPlaceModeMoveToInitialPosition@CDragVisualAcc@@UEAAXXZ.c)
 *     ?PlaceModeMouseOver@CDragVisualAcc@@UEAAXUtagPOINT@@@Z @ 0x18053C2D0 (-PlaceModeMouseOver@CDragVisualAcc@@UEAAXUtagPOINT@@@Z.c)
 * Callees:
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18008D220 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?CompareOrdinal@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEBAHPEBG_K@Z @ 0x1802E2090 (-CompareOrdinal@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEBAHPE.c)
 *     ?_RaiseDropEffectChangeEvent@CDragVisualAcc@@AEAAXXZ @ 0x18053C858 (-_RaiseDropEffectChangeEvent@CDragVisualAcc@@AEAAXXZ.c)
 */

void __fastcall CDragVisualAcc::SetDropEffect(CDragVisualAcc *this, const unsigned __int16 *a2)
{
  char *v4; // rsi

  if ( *((_BYTE *)this + 20) )
  {
    v4 = (char *)this + 128;
    if ( Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::CompareOrdinal(
           (const WCHAR **)this + 16,
           a2,
           -1) != 2 )
    {
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
        (__int64)v4,
        (__int64)a2,
        0xFFFFFFFFFFFFFFFFuLL);
      CDragVisualAcc::_RaiseDropEffectChangeEvent((IRawElementProviderSimple *)this - 4);
    }
  }
}
