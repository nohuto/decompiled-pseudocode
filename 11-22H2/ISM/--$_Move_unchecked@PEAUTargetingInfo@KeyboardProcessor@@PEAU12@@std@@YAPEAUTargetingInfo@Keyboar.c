/*
 * XREFs of ??$_Move_unchecked@PEAUTargetingInfo@KeyboardProcessor@@PEAU12@@std@@YAPEAUTargetingInfo@KeyboardProcessor@@PEAU12@00@Z @ 0x1801BEA34
 * Callers:
 *     _lambda_ebc29ddd5dd0a3c27fbc9fad58cec528_::operator() @ 0x1801BF180 (_lambda_ebc29ddd5dd0a3c27fbc9fad58cec528_--operator().c)
 *     ?OnDeviceRemoval@KeyboardProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x1801BF530 (-OnDeviceRemoval@KeyboardProcessor@@UEAAJPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ??4TargetingInfo@KeyboardProcessor@@QEAAAEAU01@$$QEAU01@@Z @ 0x1801BF02C (--4TargetingInfo@KeyboardProcessor@@QEAAAEAU01@$$QEAU01@@Z.c)
 */

__int64 __fastcall std::_Move_unchecked<KeyboardProcessor::TargetingInfo *,KeyboardProcessor::TargetingInfo *>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 i; // rdi

  for ( i = a1; i != a2; i += 384LL )
  {
    KeyboardProcessor::TargetingInfo::operator=(a3, i);
    a3 += 384LL;
  }
  return a3;
}
