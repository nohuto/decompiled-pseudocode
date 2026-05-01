/*
 * XREFs of ?SetApplicationId@CApplicationFrameWrapper@@UEAAJPEBGH@Z @ 0x1800727A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationFrameWrapper::SetApplicationId(
        CApplicationFrameWrapper *this,
        const unsigned __int16 *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *))(**((_QWORD **)this + 13) + 72LL))(
           *((_QWORD *)this + 13),
           a2);
}
