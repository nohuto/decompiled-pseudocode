/*
 * XREFs of ??$MakeAndInitialize@VContentDeliveryManagerAppDisplayInfo@ApplicationModel@Extensions@Internal@Windows@@UIAppDisplayInfo@25@PEBGPEAU625@@Details@WRL@Microsoft@@YAJPEAPEAUIAppDisplayInfo@ApplicationModel@Windows@@$$QEAPEBG$$QEAPEAU345@@Z @ 0x1800C31A4
 * Callers:
 *     ?PrefetchDisplayInfo@ContentDeliveryManagerAppInfo@ApplicationModel@Extensions@Internal@Windows@@AEAAXXZ @ 0x1800C3420 (-PrefetchDisplayInfo@ContentDeliveryManagerAppInfo@ApplicationModel@Extensions@Internal@Windows@.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800227B4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@V?$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Internal@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18002BC2C (--1-$MakeAllocator@V-$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Inte.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppDisplayInfo@ApplicationModel@Windows@@UIInternalAppInfo@5Extensions@Internal@6@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$00@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppDisplayInfo@ApplicationModel@Windows@@UIInternalAppInfo@5Extensions@Internal@6@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1800C2E50 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppDisplayInfo@.c)
 *     ??0ContentDeliveryManagerAppDisplayInfo@ApplicationModel@Extensions@Internal@Windows@@QEAA@XZ @ 0x1800C3258 (--0ContentDeliveryManagerAppDisplayInfo@ApplicationModel@Extensions@Internal@Windows@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppDisplayInfo@ApplicationModel@Windows@@UIInternalAppInfo@5Extensions@Internal@6@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800C3670 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppDisplayInfo@A.c)
 *     ?RuntimeClassInitialize@ContentDeliveryManagerAppDisplayInfo@ApplicationModel@Extensions@Internal@Windows@@QEAAJPEBGPEAUIAppDisplayInfo@25@@Z @ 0x1800C43F4 (-RuntimeClassInitialize@ContentDeliveryManagerAppDisplayInfo@ApplicationModel@Extensions@Interna.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppDisplayInfo,Windows::ApplicationModel::IAppDisplayInfo,unsigned short const *,Windows::ApplicationModel::IAppDisplayInfo *>(
        _QWORD *a1,
        const unsigned __int16 **a2,
        struct Windows::ApplicationModel::IAppDisplayInfo **a3)
{
  void *v6; // rax
  int v7; // edi
  Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppDisplayInfo *v8; // rax
  struct Windows::ApplicationModel::IAppDisplayInfo *v9; // r8
  const unsigned __int16 *v10; // rdx
  __int64 v11; // rbx
  void *v13; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v6 = operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  v13 = v6;
  if ( v6 )
  {
    v8 = (Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppDisplayInfo *)Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppDisplayInfo::ContentDeliveryManagerAppDisplayInfo((Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppDisplayInfo *)v6);
    v9 = *a3;
    v10 = *a2;
    v11 = (__int64)v8;
    v13 = 0LL;
    v7 = Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppDisplayInfo::RuntimeClassInitialize(
           v8,
           v10,
           v9);
    if ( v7 >= 0 )
      v7 = Microsoft::WRL::Details::RuntimeClassBaseT<1>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::ApplicationModel::IAppDisplayInfo,Windows::Internal::Extensions::ApplicationModel::IInternalAppInfo,Microsoft::WRL::FtmBase>>(
             v11,
             &GUID_1aeb1103_e4d4_41aa_a4f6_c4a276e79eac,
             a1);
    if ( v11 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::ApplicationModel::IAppDisplayInfo,Windows::Internal::Extensions::ApplicationModel::IInternalAppInfo,Microsoft::WRL::FtmBase>::Release(v11);
  }
  else
  {
    v7 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>::~MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>(&v13);
  return (unsigned int)v7;
}
