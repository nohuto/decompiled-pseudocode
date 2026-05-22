/*
 * XREFs of ??0Context@ShellGesturesProcessor@@QEAA@XZ @ 0x1801508DC
 * Callers:
 *     ??$MakeAndInitialize@UContext@ShellGesturesProcessor@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180150420 (--$MakeAndInitialize@UContext@ShellGesturesProcessor@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJP.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@QEAA@XZ @ 0x180039650 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0ShellGesturesRecognizer@@QEAA@XZ @ 0x180150940 (--0ShellGesturesRecognizer@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
ShellGesturesProcessor::Context *__fastcall ShellGesturesProcessor::Context::Context(
        ShellGesturesProcessor::Context *this)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>((__int64)this);
  *(_QWORD *)this = &ShellGesturesProcessor::Context::`vftable';
  *((_WORD *)this + 8) = 0;
  *((_BYTE *)this + 18) = 0;
  ShellGesturesRecognizer::ShellGesturesRecognizer((ShellGesturesProcessor::Context *)((char *)this + 24));
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  return this;
}
