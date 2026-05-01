/*
 * XREFs of ?GetFirstViewType@KBViewInfo@@QEBAIXZ @ 0x1805100B8
 * Callers:
 *     ?GetFirstViewTypeIfExists@TouchKeyboardExperienceManager@@AEAA_NIAEAW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@@Z @ 0x18020A46C (-GetFirstViewTypeIfExists@TouchKeyboardExperienceManager@@AEAA_NIAEAW4CoreKeyboardViewType@Core@.c)
 *     ?IsValid@KBViewInfo@@QEBA_NXZ @ 0x1802DBE36 (-IsValid@KBViewInfo@@QEBA_NXZ.c)
 *     ?AnimateInputView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEAUHWND__@@_N@Z @ 0x18050D884 (-AnimateInputView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEAUHWND__@@_N@Z.c)
 *     ?SetViewInfoCloakAndReportVisibilityChanged@TouchKeyboardExperienceManager@@AEAAXPEAUKBViewInfo@@_N@Z @ 0x180516194 (-SetViewInfoCloakAndReportVisibilityChanged@TouchKeyboardExperienceManager@@AEAAXPEAUKBViewInfo@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KBViewInfo::GetFirstViewType(KBViewInfo *this)
{
  if ( *((_QWORD *)this + 7) )
    return *(unsigned int *)(**((_QWORD **)this + 6) + 16LL);
  else
    return 0xFFFFFFFFLL;
}
