/*
 * XREFs of ?GetIids@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UICortanaExperienceManager@Experience@Shell@Internal@Windows@@UIInitializeTrustedComponentForegroundControl@@VIDeferralMessage@@@Details@WRL@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x18038EAD0
 * Callers:
 *     ?GetIids@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UICortanaExperienceManager@Experience@Shell@Internal@Windows@@UIInitializeTrustedComponentForegroundControl@@VIDeferralMessage@@@Details@WRL@Microsoft@@WBI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1801F5A50 (-GetIids@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UICortanaExperienc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::ICortanaExperienceManager,IInitializeTrustedComponentForegroundControl,IDeferralMessage>::GetIids(
        __int64 a1,
        _DWORD *a2,
        GUID **a3)
{
  unsigned int v3; // ebx
  GUID *v6; // rax

  v3 = 0;
  *a3 = 0LL;
  *a2 = 0;
  v6 = (GUID *)CoTaskMemAlloc(0x40uLL);
  if ( v6 )
  {
    *v6 = GUID_0b502ab3_072b_4e6b_9c82_38b49c4132c3;
    v6[1] = _uuidof__AUIWeakReferenceSource_Details_Platform__;
    v6[2] = GUID_5fefbb8e_82c3_4ec4_93a0_05c4b9fcd4cd;
    v6[3] = GUID_d4211406_e345_4633_bd48_e4e2b0cec865;
    *a2 = 4;
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
