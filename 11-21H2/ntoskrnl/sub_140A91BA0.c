/*
 * XREFs of sub_140A91BA0 @ 0x140A91BA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140A91F88 @ 0x140A91F88 (sub_140A91F88.c)
 */

__int64 __fastcall sub_140A91BA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v7; // rax
  __int64 v8; // rcx

  if ( dword_140D57528 && a5 != 120 && (v7 = sub_140A91F88()) != 0 )
    v8 = v7 + 16;
  else
    v8 = a1;
  return sub_14042A5E0(v8, a2);
}
