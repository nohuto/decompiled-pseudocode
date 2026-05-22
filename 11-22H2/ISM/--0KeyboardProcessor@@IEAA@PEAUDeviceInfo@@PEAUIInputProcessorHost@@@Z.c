/*
 * XREFs of ??0KeyboardProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x1800367BC
 * Callers:
 *     ?Create@KeyboardProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x180037860 (-Create@KeyboardProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ @ 0x1800182F0 (-InternalRelease@-$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ.c)
 */

KeyboardProcessor *__fastcall KeyboardProcessor::KeyboardProcessor(
        KeyboardProcessor *this,
        struct DeviceInfo *a2,
        struct IInputProcessorHost *a3)
{
  __int64 *v4; // rcx

  *((_DWORD *)this + 10) = 0;
  *((_QWORD *)this + 1) = &RefCountedObject::`vftable';
  *((_DWORD *)this + 4) = 1;
  *(_QWORD *)this = &KeyboardProcessor::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 1) = &KeyboardProcessor::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 3) = a3;
  *((_QWORD *)this + 4) = a2;
  *((_DWORD *)this + 11) = 300;
  v4 = (__int64 *)((char *)this + 48);
  *v4 = 0LL;
  Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease(v4);
  *((_DWORD *)this + 14) = 0;
  return this;
}
