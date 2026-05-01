/*
 * XREFs of ?IsValid@KBViewInfo@@QEBA_NXZ @ 0x1802DBE36
 * Callers:
 *     ?GetApplicationViewIdIfExists@TouchKeyboardExperienceManager@@AEAA_NIAEAI@Z @ 0x1802096BC (-GetApplicationViewIdIfExists@TouchKeyboardExperienceManager@@AEAA_NIAEAI@Z.c)
 *     ?GetFirstViewTypeIfExists@TouchKeyboardExperienceManager@@AEAA_NIAEAW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@@Z @ 0x18020A46C (-GetFirstViewTypeIfExists@TouchKeyboardExperienceManager@@AEAA_NIAEAW4CoreKeyboardViewType@Core@.c)
 *     ?FindFrameWrapper@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@AEAV?$ComPtr@UIApplicationFrameWrapper@@@WRL@Microsoft@@@Z @ 0x1802DB10E (-FindFrameWrapper@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@AEAV-$ComPtr@UIApp.c)
 *     ?FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV?$shared_ptr@UKBViewInfo@@@std@@@Z @ 0x1802DB1F8 (-FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV-$shared_ptr@UKBViewInfo@@@std@@@Z.c)
 *     ?FindViewInfo@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@AEAV?$shared_ptr@UKBViewInfo@@@std@@@Z @ 0x1802DB2A6 (-FindViewInfo@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@AEAV-$shared_pt.c)
 * Callees:
 *     ?GetFirstViewType@KBViewInfo@@QEBAIXZ @ 0x1805100B8 (-GetFirstViewType@KBViewInfo@@QEBAIXZ.c)
 */

char __fastcall KBViewInfo::IsValid(KBViewInfo *this)
{
  char v1; // dl
  __int64 v2; // rcx

  v1 = 0;
  if ( !*((_BYTE *)this + 32)
    && *((_BYTE *)this + 33)
    && KBViewInfo::GetFirstViewType(this) != -1
    && *(_DWORD *)(v2 + 104) != -1 )
  {
    return 1;
  }
  return v1;
}
