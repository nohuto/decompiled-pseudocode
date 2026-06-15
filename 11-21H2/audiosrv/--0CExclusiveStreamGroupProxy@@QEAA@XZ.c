/*
 * XREFs of ??0CExclusiveStreamGroupProxy@@QEAA@XZ @ 0x1800F6F28
 * Callers:
 *     ??$MakeAndInitialize@VCExclusiveStreamGroupProxy@@UIStreamGroupProxy@@AEAPEAUStreamGroupParams@@AEAV?$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@AEAK@Details@WRL@Microsoft@@YAJPEAPEAUIStreamGroupProxy@@AEAPEAUStreamGroupParams@@AEAV?$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@AEAK@Z @ 0x1800F6638 (--$MakeAndInitialize@VCExclusiveStreamGroupProxy@@UIStreamGroupProxy@@AEAPEAUStreamGroupParams@@.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VCBaseStreamGroupProxy@@UIInspectable@@@WRL@Microsoft@@QEAA@XZ @ 0x1800F6DFC (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@VCBaseStreamGroupProxy@@UIInspectable@.c)
 */

CExclusiveStreamGroupProxy *__fastcall CExclusiveStreamGroupProxy::CExclusiveStreamGroupProxy(
        CExclusiveStreamGroupProxy *this)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CBaseStreamGroupProxy,IInspectable>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CBaseStreamGroupProxy,IInspectable>(this);
  *(_QWORD *)this = &CExclusiveStreamGroupProxy::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 73) = 0LL;
  *((_QWORD *)this + 1) = &CExclusiveStreamGroupProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<CBaseStreamGroupProxy>,IWeakReferenceSource,IInspectable>'};
  *((_QWORD *)this + 31) = &CExclusiveStreamGroupProxy::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 32) = &CExclusiveStreamGroupProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IInspectable>'};
  return this;
}
