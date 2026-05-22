/*
 * XREFs of ??1?$unique_ptr@VSpeechRuntimeListener@@U?$default_delete@VSpeechRuntimeListener@@@std@@@std@@QEAA@XZ @ 0x1800D0310
 * Callers:
 *     _SpectrumListener::SpectrumListener_::_1_::dtor$2 @ 0x1800D02C3 (_SpectrumListener--SpectrumListener_--_1_--dtor$2.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 *     ??1SpeechRuntimeListener@@QEAA@XZ @ 0x1800D31A0 (--1SpeechRuntimeListener@@QEAA@XZ.c)
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
