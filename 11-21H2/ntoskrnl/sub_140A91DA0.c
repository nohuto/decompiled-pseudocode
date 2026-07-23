/*
 * XREFs of sub_140A91DA0 @ 0x140A91DA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140A91F88 @ 0x140A91F88 (sub_140A91F88.c)
 */

__int64 __fastcall sub_140A91DA0(__int64 a1, __int64 a2, int a3)
{
  __int64 v5; // rax
  __int64 v6; // rcx

  if ( dword_140D57528 && a3 != 120 && (v5 = sub_140A91F88()) != 0 )
    v6 = v5 + 16;
  else
    v6 = a1;
  return sub_14042A5E0(v6, a2);
}
