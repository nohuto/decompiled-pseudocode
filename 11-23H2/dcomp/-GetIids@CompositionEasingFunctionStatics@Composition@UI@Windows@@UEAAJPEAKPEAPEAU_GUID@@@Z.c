/*
 * XREFs of ?GetIids@CompositionEasingFunctionStatics@Composition@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1801069B0
 * Callers:
 *     ?GetIids@CompositionEasingFunctionStatics@Composition@UI@Windows@@WCI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800AA270 (-GetIids@CompositionEasingFunctionStatics@Composition@UI@Windows@@WCI@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::UI::Composition::CompositionEasingFunctionStatics::GetIids(
        Windows::UI::Composition::CompositionEasingFunctionStatics *this,
        unsigned int *a2,
        struct _GUID **a3)
{
  unsigned int v3; // ebx
  struct _GUID *v6; // rax

  v3 = 0;
  *a3 = 0LL;
  *a2 = 0;
  v6 = (struct _GUID *)CoTaskMemAlloc(0x20uLL);
  if ( v6 )
  {
    *v6 = GUID_00000035_0000_0000_c000_000000000046;
    v6[1] = GUID_17a766b6_2936_53ea_b5af_c642f4a61083;
    *a2 = 2;
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
