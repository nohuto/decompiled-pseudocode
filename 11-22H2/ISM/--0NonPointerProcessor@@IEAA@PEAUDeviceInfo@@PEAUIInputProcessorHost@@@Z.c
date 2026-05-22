/*
 * XREFs of ??0NonPointerProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x180051260
 * Callers:
 *     ??0ControllerProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x1801A2958 (--0ControllerProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z.c)
 * Callees:
 *     <none>
 */

NonPointerProcessor *__fastcall NonPointerProcessor::NonPointerProcessor(
        NonPointerProcessor *this,
        struct DeviceInfo *a2,
        struct IInputProcessorHost *a3)
{
  NonPointerProcessor *result; // rax

  *((_QWORD *)this + 5) = a2;
  *((_QWORD *)this + 2) = &RefCountedObject::`vftable';
  *(_QWORD *)this = &NonPointerProcessor::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 1) = &NonPointerProcessor::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 2) = &NonPointerProcessor::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_BYTE *)this + 64) = 0;
  result = this;
  *((_DWORD *)this + 6) = 1;
  *((_QWORD *)this + 4) = a3;
  return result;
}
