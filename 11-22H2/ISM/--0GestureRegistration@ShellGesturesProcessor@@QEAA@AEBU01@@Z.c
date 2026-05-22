/*
 * XREFs of ??0GestureRegistration@ShellGesturesProcessor@@QEAA@AEBU01@@Z @ 0x18017CA5C
 * Callers:
 *     ?RegisterGestureSource@ShellGesturesProcessor@@QEAAX_KW4InputGestureSourceType@Input@Internal@UI@Windows@@W4InputType@3456@PEAVDragManagerClientProxy@@@Z @ 0x1800747CC (-RegisterGestureSource@ShellGesturesProcessor@@QEAAX_KW4InputGestureSourceType@Input@Internal@UI.c)
 *     ??0?$pair@$$CBW4EdgyLocation@ShellEdgyRecognizer@@V?$vector@UGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@@std@@QEAA@AEBU01@@Z @ 0x18017C92C (--0-$pair@$$CBW4EdgyLocation@ShellEdgyRecognizer@@V-$vector@UGestureRegistration@ShellGesturesPr.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x18001B20C (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 */

ShellGesturesProcessor::GestureRegistration *__fastcall ShellGesturesProcessor::GestureRegistration::GestureRegistration(
        ShellGesturesProcessor::GestureRegistration *this,
        const struct ShellGesturesProcessor::GestureRegistration *a2)
{
  __int64 (__fastcall ****v4)(_QWORD); // rcx

  *(_QWORD *)this = *(_QWORD *)a2;
  *((_DWORD *)this + 2) = *((_DWORD *)a2 + 2);
  v4 = (__int64 (__fastcall ****)(_QWORD))((char *)this + 16);
  *v4 = (__int64 (__fastcall ***)(_QWORD))*((_QWORD *)a2 + 2);
  Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef(v4);
  *((_BYTE *)this + 24) = *((_BYTE *)a2 + 24);
  return this;
}
