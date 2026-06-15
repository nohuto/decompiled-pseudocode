/*
 * XREFs of sub_14003E999 @ 0x14003E999
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall sub_14003E999(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        __int64 a14,
        int a15,
        int a16,
        LPCRITICAL_SECTION lpCriticalSection)
{
  if ( a15 < 0 )
  {
    LeaveCriticalSection(lpCriticalSection);
    JUMPOUT(0x14000C22ALL);
  }
  JUMPOUT(0x14000C20ELL);
}
