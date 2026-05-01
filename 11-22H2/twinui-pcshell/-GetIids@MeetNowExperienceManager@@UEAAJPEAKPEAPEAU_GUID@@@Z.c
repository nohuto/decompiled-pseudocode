/*
 * XREFs of ?GetIids@MeetNowExperienceManager@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1804722C0
 * Callers:
 *     ?GetIids@MeetNowExperienceManager@@WBI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1802998F0 (-GetIids@MeetNowExperienceManager@@WBI@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MeetNowExperienceManager::GetIids(
        MeetNowExperienceManager *this,
        unsigned int *a2,
        struct _GUID **a3)
{
  unsigned int v3; // ebx
  struct _GUID *v6; // rax

  v3 = 0;
  *a3 = 0LL;
  *a2 = 0;
  v6 = (struct _GUID *)CoTaskMemAlloc(0x50uLL);
  if ( v6 )
  {
    *v6 = GUID_c9ddc674_b44b_4c67_9d79_2b237d9be05a;
    v6[1] = _uuidof__AUIWeakReferenceSource_Details_Platform__;
    v6[2] = GUID_8d4d1ec2_4740_4fc5_b4b1_6dc3722a2eeb;
    v6[3] = GUID_30d5a829_7fa4_4026_83bb_d75bae4ea99e;
    v6[4] = GUID_f4b0e171_08a9_413c_b179_71d7602d8ef0;
    *a2 = 5;
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
