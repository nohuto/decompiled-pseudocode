/*
 * XREFs of ?GetLatestLookupId@CSynchronousSuperWetInk@@AEBA_KXZ @ 0x1802534C4
 * Callers:
 *     ?CleanupOldPerFrameData@CSynchronousSuperWetInk@@AEAAXXZ @ 0x18025300C (-CleanupOldPerFrameData@CSynchronousSuperWetInk@@AEAAXXZ.c)
 *     ?PullNewPerFrameData@CSynchronousSuperWetInk@@AEAAXIPEA_N@Z @ 0x180253BA4 (-PullNewPerFrameData@CSynchronousSuperWetInk@@AEAAXIPEA_N@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CSynchronousSuperWetInk::GetLatestLookupId(CSynchronousSuperWetInk *this)
{
  unsigned __int64 result; // rax

  result = *((_QWORD *)this + 31);
  if ( result )
    return *(_QWORD *)result;
  return result;
}
