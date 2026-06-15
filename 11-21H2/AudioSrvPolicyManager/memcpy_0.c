/*
 * XREFs of memcpy_0 @ 0x180044443
 * Callers:
 *     memcpy_s @ 0x180007AFC (memcpy_s.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18000E4A8 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18000F448 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x18002AD28 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ?SetNotificationData@@YAJAEBV?$vector@PEAVCApplication@@V?$allocator@PEAVCApplication@@@std@@@std@@PEAE_K@Z @ 0x18002D050 (-SetNotificationData@@YAJAEBV-$vector@PEAVCApplication@@V-$allocator@PEAVCApplication@@@std@@@st.c)
 *     ?TsSessionRefreshUserSid@@YAJPEAVTSSession@@@Z @ 0x180030428 (-TsSessionRefreshUserSid@@YAJPEAVTSSession@@@Z.c)
 *     _lambda_27a4ba88670a0d404d45da27056d59bf_::operator() @ 0x1800333B8 (_lambda_27a4ba88670a0d404d45da27056d59bf_--operator().c)
 *     ?CopyChars@?$CSimpleStringT@G$0A@@ATL@@SAXPEAG_KPEBGH@Z @ 0x180034024 (-CopyChars@-$CSimpleStringT@G$0A@@ATL@@SAXPEAG_KPEBGH@Z.c)
 *     ?LoadPropertyStore@CAudioSessionPropertyStore@@AEAAJXZ @ 0x1800351A4 (-LoadPropertyStore@CAudioSessionPropertyStore@@AEAAJXZ.c)
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x18003EB4C (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 *     ?GrowBuffer@?$CAtlArray@V?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V?$CAutoPtrElementTraits@VCAccessAce@CDacl@ATL@@@2@@ATL@@AEAA_N_K@Z @ 0x18003F5FC (-GrowBuffer@-$CAtlArray@V-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V-$CAutoPtrElementTraits@VCAcce.c)
 *     ?memcpy_s@Checked@ATL@@YAXPEAX_KPEBX1@Z @ 0x180040C20 (-memcpy_s@Checked@ATL@@YAXPEAX_KPEBX1@Z.c)
 *     ?GetAppUserModelId@AutoSysAppId@ProcessToken@ARI@@QEBAJIPEAIPEAG@Z @ 0x180041638 (-GetAppUserModelId@AutoSysAppId@ProcessToken@ARI@@QEBAJIPEAIPEAG@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memcpy_0(void *a1, const void *Src, size_t Size)
{
  return memcpy(a1, Src, Size);
}
