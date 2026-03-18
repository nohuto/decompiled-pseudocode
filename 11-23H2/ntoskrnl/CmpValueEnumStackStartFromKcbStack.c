/*
 * XREFs of CmpValueEnumStackStartFromKcbStack @ 0x140A2585C
 * Callers:
 *     CmEnumerateValueFromLayeredKey @ 0x140A13B64 (CmEnumerateValueFromLayeredKey.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     memset @ 0x140435A00 (memset.c)
 *     CmpValueEnumStackStartFromKeyNodeStack @ 0x1406167C0 (CmpValueEnumStackStartFromKeyNodeStack.c)
 *     CmpInitializeKeyNodeStack @ 0x1407D1C5C (CmpInitializeKeyNodeStack.c)
 *     CmpCleanupKeyNodeStack @ 0x1407D1CB0 (CmpCleanupKeyNodeStack.c)
 *     CmpStartKeyNodeStackFromKcbStack @ 0x140A2034C (CmpStartKeyNodeStackFromKcbStack.c)
 */

__int64 __fastcall CmpValueEnumStackStartFromKcbStack(__int64 a1, __int64 a2, __int64 a3)
{
  int started; // ebx
  __int16 v8[40]; // [rsp+20h] [rbp-68h] BYREF

  memset(v8, 0, 0x4AuLL);
  CmpInitializeKeyNodeStack(v8);
  started = CmpStartKeyNodeStackFromKcbStack((__int64)v8, a2, a3);
  if ( started >= 0 )
  {
    started = CmpValueEnumStackStartFromKeyNodeStack(a1, v8);
    if ( started >= 0 )
      started = 0;
  }
  CmpCleanupKeyNodeStack((__int64)v8);
  return (unsigned int)started;
}
