/*
 * XREFs of ?GetIids@CompositionPartnerDebugSettingsStatics@Private@Composition@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x180106B30
 * Callers:
 *     ?GetIids@CompositionPartnerDebugSettingsStatics@Private@Composition@UI@Windows@@WCI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800AA2D0 (-GetIids@CompositionPartnerDebugSettingsStatics@Private@Composition@UI@Windows@@WCI@EAAJPEAKPEAP.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::UI::Composition::Private::CompositionPartnerDebugSettingsStatics::GetIids(
        Windows::UI::Composition::Private::CompositionPartnerDebugSettingsStatics *this,
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
    v6[1] = GUID_a0817f60_477d_4d8a_b0cc_0509bd48635b;
    *a2 = 2;
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
