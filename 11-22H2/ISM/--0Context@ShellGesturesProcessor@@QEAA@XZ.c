/*
 * XREFs of ??0Context@ShellGesturesProcessor@@QEAA@XZ @ 0x18017C9D0
 * Callers:
 *     ??$Make@UContext@ShellGesturesProcessor@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@UContext@ShellGesturesProcessor@@@12@XZ @ 0x18017C140 (--$Make@UContext@ShellGesturesProcessor@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@UContext@Shell.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@QEAA@XZ @ 0x18003FE50 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@QEAA@XZ.c)
 *     memset_0 @ 0x180057418 (memset_0.c)
 *     ??0ShellGesturesRecognizer@@QEAA@XZ @ 0x18017CB24 (--0ShellGesturesRecognizer@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
ShellGesturesProcessor::Context *__fastcall ShellGesturesProcessor::Context::Context(
        ShellGesturesProcessor::Context *this)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>((__int64)this);
  *(_QWORD *)this = &ShellGesturesProcessor::Context::`vftable';
  *((_WORD *)this + 8) = 0;
  *((_BYTE *)this + 18) = 0;
  memset_0((char *)this + 24, 0, 0xC8uLL);
  ShellGesturesRecognizer::ShellGesturesRecognizer((ShellGesturesProcessor::Context *)((char *)this + 24));
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_BYTE *)this + 384) = 0;
  *((_BYTE *)this + 424) = 0;
  return this;
}
