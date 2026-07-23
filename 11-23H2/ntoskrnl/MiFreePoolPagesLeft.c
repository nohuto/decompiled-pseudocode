/*
 * XREFs of MiFreePoolPagesLeft @ 0x14021DC60
 * Callers:
 *     MmRaisePoolQuota @ 0x1402209B0 (MmRaisePoolQuota.c)
 *     ExpQuerySystemPerformanceInformation @ 0x1406B1F34 (ExpQuerySystemPerformanceInformation.c)
 *     MiInitializePagedPoolEvents @ 0x140B72FB0 (MiInitializePagedPoolEvents.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiFreePoolPagesLeft(int a1)
{
  __int64 v1; // rcx
  __int64 v2; // rax

  if ( a1 == 5 )
  {
    v1 = qword_140C65488;
    v2 = MiState;
  }
  else
  {
    v1 = qword_140C69928;
    v2 = qword_140C69938;
  }
  return v2 - v1;
}
