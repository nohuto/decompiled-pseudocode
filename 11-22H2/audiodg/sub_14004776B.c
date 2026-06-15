/*
 * XREFs of sub_14004776B @ 0x14004776B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall sub_14004776B(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        __int64 a16,
        int a17,
        int a18,
        LPCRITICAL_SECTION lpCriticalSection)
{
  if ( a17 < 0 )
  {
    LeaveCriticalSection(lpCriticalSection);
    JUMPOUT(0x14001FC08LL);
  }
  JUMPOUT(0x14001FBF3LL);
}
