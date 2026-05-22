/*
 * XREFs of ??0CursorProcessor@@QEAA@XZ @ 0x1801C5420
 * Callers:
 *     ??$MakeAndInitialize@VCursorProcessor@@V1@PEAVDWMInputRouter@@@Details@WRL@Microsoft@@YAJPEAPEAVCursorProcessor@@$$QEAPEAVDWMInputRouter@@@Z @ 0x1801C4A24 (--$MakeAndInitialize@VCursorProcessor@@V1@PEAVDWMInputRouter@@@Details@WRL@Microsoft@@YAJPEAPEAV.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIContextualProcessor@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x1801C539C (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@UIContextualProcessor@@VFtmBase@23@@WR.c)
 */

CursorProcessor *__fastcall CursorProcessor::CursorProcessor(CursorProcessor *this)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IContextualProcessor,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IContextualProcessor,Microsoft::WRL::FtmBase>(this);
  *(_QWORD *)this = &CursorProcessor::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &CursorProcessor::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IContextualProcessor,IWeakReferenceSource,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 2) = &CursorProcessor::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 3) = &CursorProcessor::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_BYTE *)this + 72) = 0;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_BYTE *)this + 120) = 0;
  return this;
}
