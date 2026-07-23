/*
 * XREFs of sub_140A85550 @ 0x140A85550
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140A83D24 @ 0x140A83D24 (sub_140A83D24.c)
 *     sub_140A88430 @ 0x140A88430 (sub_140A88430.c)
 *     sub_140A88738 @ 0x140A88738 (sub_140A88738.c)
 */

__int64 __fastcall sub_140A85550(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  __int64 result; // rax

  sub_140A88738(a1);
  v4 = sub_140A88430(a1);
  if ( v4 )
    sub_140A83D24();
  result = sub_14042A5E0(a1, a2);
  if ( v4 )
  {
    if ( !(_DWORD)result )
      _InterlockedExchange((volatile __int32 *)(v4 + 188), 0);
  }
  return result;
}
