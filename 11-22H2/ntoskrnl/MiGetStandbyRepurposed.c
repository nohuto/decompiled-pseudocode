/*
 * XREFs of MiGetStandbyRepurposed @ 0x14022051C
 * Callers:
 *     MiComputeSystemTrimCriteria @ 0x1402201DC (MiComputeSystemTrimCriteria.c)
 *     MiUseLowIoPriorityForModifiedPages @ 0x140222EF8 (MiUseLowIoPriorityForModifiedPages.c)
 *     MiAddWorkingSetEntries @ 0x14026BC00 (MiAddWorkingSetEntries.c)
 *     MmQuerySystemWorkingSetInformation @ 0x140361BB0 (MmQuerySystemWorkingSetInformation.c)
 *     MiWorkingSetVeryLarge @ 0x14061C440 (MiWorkingSetVeryLarge.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetStandbyRepurposed(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  _DWORD *v3; // rcx
  __int64 v4; // rdx

  result = 0LL;
  if ( a2 < 8 )
  {
    v3 = (_DWORD *)(a1 + 4LL * a2 + 6888);
    v4 = 8 - a2;
    do
    {
      result = (unsigned int)(*v3++ + result);
      --v4;
    }
    while ( v4 );
  }
  return result;
}
