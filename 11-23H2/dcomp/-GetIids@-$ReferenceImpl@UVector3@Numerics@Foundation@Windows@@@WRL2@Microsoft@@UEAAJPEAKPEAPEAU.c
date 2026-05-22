/*
 * XREFs of ?GetIids@?$ReferenceImpl@UVector3@Numerics@Foundation@Windows@@@WRL2@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1801392D0
 * Callers:
 *     ?GetIids@?$ReferenceImpl@UVector3@Numerics@Foundation@Windows@@@WRL2@Microsoft@@WBA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800AF540 (-GetIids@-$ReferenceImpl@UVector3@Numerics@Foundation@Windows@@@WRL2@Microsoft@@WBA@EAAJPEAKPEAP.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::ReferenceImpl<Windows::Foundation::Numerics::Vector3>::GetIids(
        __int64 a1,
        _DWORD *a2,
        GUID **a3)
{
  unsigned int v3; // ebx
  GUID *v6; // rax

  v3 = 0;
  *a3 = 0LL;
  *a2 = 0;
  v6 = (GUID *)CoTaskMemAlloc(0x30uLL);
  if ( v6 )
  {
    *v6 = GUID_1ee770ff_c954_59ca_a754_6199a9be282c;
    v6[1] = GUID_00000038_0000_0000_c000_000000000046;
    v6[2] = GUID_4bd682dd_7554_40e9_9a9b_82654ede7e62;
    *a2 = 3;
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
