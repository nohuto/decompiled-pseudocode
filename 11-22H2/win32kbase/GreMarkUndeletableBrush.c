/*
 * XREFs of GreMarkUndeletableBrush @ 0x1C00620E0
 * Callers:
 *     SetSysColor @ 0x1C005FA7C (SetSysColor.c)
 * Callees:
 *     HmgMarkUndeletable @ 0x1C0060900 (HmgMarkUndeletable.c)
 */

__int64 __fastcall GreMarkUndeletableBrush(__int64 a1)
{
  __int64 result; // rax

  if ( a1 )
    return HmgMarkUndeletable(a1, 16);
  return result;
}
