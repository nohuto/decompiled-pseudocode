/*
 * XREFs of ??1?$unique_ptr@VSpeechRuntimeListener@@U?$default_delete@VSpeechRuntimeListener@@@std@@@std@@QEAA@XZ @ 0x1800DF4D0
 * Callers:
 *     _SpectrumListener::SpectrumListener_::_1_::dtor$2 @ 0x1800DF483 (_SpectrumListener--SpectrumListener_--_1_--dtor$2.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 *     ??1SpeechRuntimeListener@@QEAA@XZ @ 0x1800E210C (--1SpeechRuntimeListener@@QEAA@XZ.c)
 */

void __fastcall std::unique_ptr<SpeechRuntimeListener>::~unique_ptr<SpeechRuntimeListener>(SpeechRuntimeListener **a1)
{
  SpeechRuntimeListener *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    SpeechRuntimeListener::~SpeechRuntimeListener(*a1);
    operator delete(v1);
  }
}
