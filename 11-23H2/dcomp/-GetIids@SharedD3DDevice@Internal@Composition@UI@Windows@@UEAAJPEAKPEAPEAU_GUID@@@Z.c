/*
 * XREFs of ?GetIids@SharedD3DDevice@Internal@Composition@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800A1580
 * Callers:
 *     ?GetIids@SharedD3DDevice@Internal@Composition@UI@Windows@@WDA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800AA630 (-GetIids@SharedD3DDevice@Internal@Composition@UI@Windows@@WDA@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::UI::Composition::Internal::SharedD3DDevice::GetIids(
        Windows::UI::Composition::Internal::SharedD3DDevice *this,
        unsigned int *a2,
        struct _GUID **a3)
{
  unsigned int v3; // ebx
  struct _GUID *v6; // rax

  v3 = 0;
  *a3 = 0LL;
  *a2 = 0;
  v6 = (struct _GUID *)CoTaskMemAlloc(0x40uLL);
  if ( v6 )
  {
    *v6 = GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90;
    v6[1] = GUID_00000038_0000_0000_c000_000000000046;
    v6[2] = GUID_dc3c7485_387e_4a8a_928c_10b90761c7b7;
    v6[3] = GUID_d2777277_2ec2_4d71_a7c9_eda09b58ca92;
    *a2 = 4;
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
