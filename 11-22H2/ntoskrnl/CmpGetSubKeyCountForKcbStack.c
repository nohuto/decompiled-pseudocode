/*
 * XREFs of CmpGetSubKeyCountForKcbStack @ 0x140A235C0
 * Callers:
 *     CmDeleteLayeredKey @ 0x14061695C (CmDeleteLayeredKey.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     memset @ 0x140435400 (memset.c)
 *     CmpInitializeKeyNodeStack @ 0x1407D21DC (CmpInitializeKeyNodeStack.c)
 *     CmpCleanupKeyNodeStack @ 0x1407D2230 (CmpCleanupKeyNodeStack.c)
 *     CmpStartKeyNodeStackFromKcbStack @ 0x140A203FC (CmpStartKeyNodeStackFromKcbStack.c)
 *     CmpGetSubKeyCountForKeyNodeStack @ 0x140A23664 (CmpGetSubKeyCountForKeyNodeStack.c)
 */

__int64 __fastcall CmpGetSubKeyCountForKcbStack(__int64 a1, __int64 a2, __int64 a3)
{
  int started; // ebx
  _QWORD v7[10]; // [rsp+20h] [rbp-68h] BYREF

  memset(v7, 0, 0x4AuLL);
  CmpInitializeKeyNodeStack(v7);
  started = CmpStartKeyNodeStackFromKcbStack((__int64)v7, a1, 0LL);
  if ( started >= 0 )
  {
    started = CmpGetSubKeyCountForKeyNodeStack(v7, a3);
    if ( started >= 0 )
      started = 0;
  }
  CmpCleanupKeyNodeStack((__int64)v7);
  return (unsigned int)started;
}
