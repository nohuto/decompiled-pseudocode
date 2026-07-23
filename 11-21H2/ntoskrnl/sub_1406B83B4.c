/*
 * XREFs of sub_1406B83B4 @ 0x1406B83B4
 * Callers:
 *     sub_1406B79C8 @ 0x1406B79C8 (sub_1406B79C8.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1406B86D0 @ 0x1406B86D0 (sub_1406B86D0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1406B83B4(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        char a10)
{
  if ( qword_140C1B8C0 )
  {
    if ( (a10 & 1) != 0 )
      _InterlockedCompareExchange(&dword_140CF6644, 0, 0);
    return (unsigned int)sub_14042A5E0(a1, a2);
  }
  else
  {
    return (unsigned int)-1073740760;
  }
}
