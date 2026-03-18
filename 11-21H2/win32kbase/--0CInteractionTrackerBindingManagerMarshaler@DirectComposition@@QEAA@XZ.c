/*
 * XREFs of ??0CInteractionTrackerBindingManagerMarshaler@DirectComposition@@QEAA@XZ @ 0x1C0213CF0
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C001520C (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CInteractionTrackerBindingManagerMarshaler *__fastcall DirectComposition::CInteractionTrackerBindingManagerMarshaler::CInteractionTrackerBindingManagerMarshaler(
        DirectComposition::CInteractionTrackerBindingManagerMarshaler *this)
{
  DirectComposition::CInteractionTrackerBindingManagerMarshaler *result; // rax

  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 7) = 0LL;
  *(_QWORD *)this = &DirectComposition::CInteractionTrackerBindingManagerMarshaler::`vftable';
  result = this;
  *((_QWORD *)this + 3) = 1LL;
  *((_DWORD *)this + 12) = 88;
  *((_BYTE *)this + 88) = 1;
  *((_QWORD *)this + 14) = 32LL;
  return result;
}
