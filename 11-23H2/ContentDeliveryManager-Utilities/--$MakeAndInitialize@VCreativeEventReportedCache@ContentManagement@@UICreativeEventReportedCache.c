/*
 * XREFs of ??$MakeAndInitialize@VCreativeEventReportedCache@ContentManagement@@UICreativeEventReportedCache@2@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAUICreativeEventReportedCache@ContentManagement@@AEAPEBG@Z @ 0x18004D8C4
 * Callers:
 *     ?GetEventCacheIfNeeded@ContentManagement@@YAJPEBGPEAPEAUICreativeEventReportedCache@1@@Z @ 0x180058334 (-GetEventCacheIfNeeded@ContentManagement@@YAJPEBGPEAPEAUICreativeEventReportedCache@1@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800227B4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@V?$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Internal@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18002BC2C (--1-$MakeAllocator@V-$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Inte.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIContentManagementBroker@ContentManagement@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18003DBA0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UICont.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UICreativeEventReportedCache@ContentManagement@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UICreativeEventReportedCache@ContentManagement@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x18004C4CC (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UICre.c)
 *     ??0CreativeEventReportedCache@ContentManagement@@QEAA@XZ @ 0x180051CEC (--0CreativeEventReportedCache@ContentManagement@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CreativeEventReportedCache@ContentManagement@@QEAAJPEBG@Z @ 0x18005DAA0 (-RuntimeClassInitialize@CreativeEventReportedCache@ContentManagement@@QEAAJPEBG@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ContentManagement::CreativeEventReportedCache,ContentManagement::ICreativeEventReportedCache,unsigned short const * &>(
        _QWORD *a1,
        const unsigned __int16 **a2)
{
  void *v4; // rax
  int v5; // edi
  ContentManagement::CreativeEventReportedCache *v6; // rax
  const unsigned __int16 *v7; // rdx
  __int64 v8; // rbx
  void *v10; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v4 = operator new(0x78uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v4;
  if ( v4 )
  {
    v6 = (ContentManagement::CreativeEventReportedCache *)ContentManagement::CreativeEventReportedCache::CreativeEventReportedCache((ContentManagement::CreativeEventReportedCache *)v4);
    v7 = *a2;
    v10 = 0LL;
    v8 = (__int64)v6;
    v5 = ContentManagement::CreativeEventReportedCache::RuntimeClassInitialize(v6, v7);
    if ( v5 >= 0 )
      v5 = Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::ICreativeEventReportedCache>>(
             v8,
             &GUID_d78a1df0_8b05_4341_bb0a_c4447a03a912,
             a1);
    if ( v8 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IContentManagementBroker>::Release(v8);
  }
  else
  {
    v5 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>::~MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>(&v10);
  return (unsigned int)v5;
}
