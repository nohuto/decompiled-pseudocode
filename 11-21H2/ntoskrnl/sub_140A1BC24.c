/*
 * XREFs of sub_140A1BC24 @ 0x140A1BC24
 * Callers:
 *     sub_1403CC5E8 @ 0x1403CC5E8 (sub_1403CC5E8.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_140A1AEE8 @ 0x140A1AEE8 (sub_140A1AEE8.c)
 *     sub_140A1B050 @ 0x140A1B050 (sub_140A1B050.c)
 *     sub_140A1B1B8 @ 0x140A1B1B8 (sub_140A1B1B8.c)
 */

__int64 __fastcall sub_140A1BC24(__int16 *a1, UNICODE_STRING *a2, _BYTE *a3, UNICODE_STRING *a4, _BYTE *a5)
{
  unsigned int v5; // ebx
  __int16 v8; // ax

  v5 = 0;
  if ( a3 )
    *a3 = 0;
  if ( a5 )
    *a5 = 0;
  v8 = *a1;
  if ( *a1 == 2 )
    return (unsigned int)sub_140A1AEE8(a1, (__int64)a2, a3, (__int64)a4, a5);
  if ( v8 == 23 )
    return (unsigned int)sub_140A1B050(a1, (__int64)a2, a3, (__int64)a4, a5);
  if ( v8 == 33 )
    return (unsigned int)sub_140A1B1B8((__int64)a1, (__int64)a2, a3);
  if ( a2 && a3 )
  {
    RtlInitUnicodeString(a2, L"-");
    *a3 = 0;
  }
  if ( a4 && a5 )
  {
    RtlInitUnicodeString(a4, L"-");
    *a5 = 0;
  }
  return v5;
}
