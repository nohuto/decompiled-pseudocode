/*
 * XREFs of ??0PositionAndSizeOptionsProvider@KeyboardHosting@@QEAA@XZ @ 0x1800A9B10
 * Callers:
 *     ??$MakeAndInitialize@VPositionAndSizeOptionsProvider@KeyboardHosting@@V12@$$V@Details@WRL@Microsoft@@YAJPEAPEAVPositionAndSizeOptionsProvider@KeyboardHosting@@@Z @ 0x1800AA9C0 (--$MakeAndInitialize@VPositionAndSizeOptionsProvider@KeyboardHosting@@V12@$$V@Details@WRL@Micros.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIPositionAndSizeOptionsProvider@KeyboardHosting@@@WRL@Microsoft@@QEAA@XZ @ 0x1800A9F34 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIPositionAndSizeOptionsProvider@Keybo.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
KeyboardHosting::PositionAndSizeOptionsProvider *__fastcall KeyboardHosting::PositionAndSizeOptionsProvider::PositionAndSizeOptionsProvider(
        KeyboardHosting::PositionAndSizeOptionsProvider *this)
{
  _QWORD *v2; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,KeyboardHosting::IPositionAndSizeOptionsProvider>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,KeyboardHosting::IPositionAndSizeOptionsProvider>();
  *(_QWORD *)this = &KeyboardHosting::PositionAndSizeOptionsProvider::`vftable';
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  v2 = operator new(0x38uLL);
  *v2 = v2;
  v2[1] = v2;
  v2[2] = v2;
  *((_WORD *)v2 + 12) = 257;
  *((_QWORD *)this + 2) = v2;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_OWORD *)this + 3) = 0LL;
  *((_OWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 20) = 100;
  *(_OWORD *)((char *)this + 84) = 0LL;
  *(_OWORD *)((char *)this + 100) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_OWORD *)this + 8) = 0LL;
  *((_OWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 40) = 100;
  *(_OWORD *)((char *)this + 164) = 0LL;
  *(_OWORD *)((char *)this + 180) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_OWORD *)this + 13) = 0LL;
  *((_OWORD *)this + 14) = 0LL;
  *((_DWORD *)this + 60) = 100;
  *(_OWORD *)((char *)this + 244) = 0LL;
  *(_OWORD *)((char *)this + 260) = 0LL;
  *((_QWORD *)this + 35) = 0x3FF0000000000000LL;
  *((_QWORD *)this + 36) = 0x3FF0000000000000LL;
  *((_QWORD *)this + 37) = 0x3FF0000000000000LL;
  *((_BYTE *)this + 304) = 0;
  *((_QWORD *)this + 39) = 0LL;
  return this;
}
