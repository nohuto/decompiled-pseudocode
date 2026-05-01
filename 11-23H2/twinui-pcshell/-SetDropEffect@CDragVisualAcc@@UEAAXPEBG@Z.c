/*
 * XREFs of ?SetDropEffect@CDragVisualAcc@@UEAAXPEBG@Z @ 0x1805F72B0
 * Callers:
 *     ?OnPlaceModeMoveToInitialPosition@CDragVisualAcc@@UEAAXXZ @ 0x1805F7040 (-OnPlaceModeMoveToInitialPosition@CDragVisualAcc@@UEAAXXZ.c)
 *     ?PlaceModeMouseOver@CDragVisualAcc@@UEAAXUtagPOINT@@@Z @ 0x1805F7060 (-PlaceModeMouseOver@CDragVisualAcc@@UEAAXUtagPOINT@@@Z.c)
 * Callees:
 *     ?CompareOrdinal@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEBAHPEBG_K@Z @ 0x18005C358 (-CompareOrdinal@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEBAHPE.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18015423C (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?_RaiseDropEffectChangeEvent@CDragVisualAcc@@AEAAXXZ @ 0x1805F75E8 (-_RaiseDropEffectChangeEvent@CDragVisualAcc@@AEAAXXZ.c)
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
        a2,
        0xFFFFFFFFFFFFFFFFuLL);
      CDragVisualAcc::_RaiseDropEffectChangeEvent((IRawElementProviderSimple *)this - 4);
    }
  }
}
