/*
 * XREFs of ?GetBackgroundColor@CApplicationFrameWrapper@@UEAAJPEAK@Z @ 0x1802FFB40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationFrameWrapper::GetBackgroundColor(CApplicationFrameWrapper *this, unsigned int *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 13) + 152LL))(
           *((_QWORD *)this + 13),
           a2);
}
