/*
 * XREFs of wil::details::ScopeExitFn__lambda_39f801ab22cf2ee958e837ec87d3c136___::_ScopeExitFn__lambda_39f801ab22cf2ee958e837ec87d3c136___ @ 0x18043521C
 * Callers:
 *     _CToastCenterExperienceManager::RuntimeClassInitialize_::_1_::dtor$2 @ 0x1802BB1A0 (_CToastCenterExperienceManager--RuntimeClassInitialize_--_1_--dtor$2.c)
 * Callees:
 *     ?Close@CToastCenterExperienceManager@@UEAAJXZ @ 0x180143A70 (-Close@CToastCenterExperienceManager@@UEAAJXZ.c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_39f801ab22cf2ee958e837ec87d3c136___::_ScopeExitFn__lambda_39f801ab22cf2ee958e837ec87d3c136___(
        _BYTE *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 result; // rax

  if ( a1[8] )
  {
    a1[8] = 0;
    return CToastCenterExperienceManager::Close((CToastCenterExperienceManager *)(*(_QWORD *)a1 + 48LL), a2, a3);
  }
  return result;
}
