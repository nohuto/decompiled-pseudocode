/*
 * XREFs of ?GetFrameIdFromBatchId@CDevice@DirectComposition@@UEAAJKPEA_K@Z @ 0x1800F1EB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CDevice::GetFrameIdFromBatchId(
        DirectComposition::CDevice *this,
        __int64 a2,
        unsigned __int64 *a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64 *))(**((_QWORD **)this + 15) + 64LL))(
           *((_QWORD *)this + 15),
           a2,
           a3);
}
