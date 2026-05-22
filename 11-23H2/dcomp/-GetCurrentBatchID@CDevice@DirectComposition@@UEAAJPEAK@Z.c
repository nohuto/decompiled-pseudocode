/*
 * XREFs of ?GetCurrentBatchId@CDevice@DirectComposition@@UEAAJPEAK@Z @ 0x180012B70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CDevice::GetCurrentBatchId(DirectComposition::CDevice *this, unsigned int *a2)
{
  return (*(__int64 (__fastcall **)(char *, unsigned int *))(*((_QWORD *)this - 3) + 360LL))((char *)this - 24, a2);
}
