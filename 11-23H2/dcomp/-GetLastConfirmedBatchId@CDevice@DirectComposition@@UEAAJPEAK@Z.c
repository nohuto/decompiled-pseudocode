/*
 * XREFs of ?GetLastConfirmedBatchId@CDevice@DirectComposition@@UEAAJPEAK@Z @ 0x1800F1EE0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateLastConfirmedBatchId@CDevice@DirectComposition@@QEAAJXZ @ 0x18002E8C4 (-UpdateLastConfirmedBatchId@CDevice@DirectComposition@@QEAAJXZ.c)
 */

__int64 __fastcall DirectComposition::CDevice::GetLastConfirmedBatchId(
        DirectComposition::CDevice *this,
        unsigned int *a2)
{
  __int64 result; // rax

  if ( !a2 )
    return 2147942487LL;
  result = DirectComposition::CDevice::UpdateLastConfirmedBatchId((DirectComposition::CDevice *)((char *)this - 16));
  if ( (int)result >= 0 )
    *a2 = *((_DWORD *)this + 101);
  return result;
}
