/*
 * XREFs of sub_140580CE0 @ 0x140580CE0
 * Callers:
 *     sub_14031C290 @ 0x14031C290 (sub_14031C290.c)
 *     sub_1405845D4 @ 0x1405845D4 (sub_1405845D4.c)
 * Callees:
 *     sub_1402806E0 @ 0x1402806E0 (sub_1402806E0.c)
 *     sub_140282AD0 @ 0x140282AD0 (sub_140282AD0.c)
 *     sub_1402ED128 @ 0x1402ED128 (sub_1402ED128.c)
 *     sub_1403126F0 @ 0x1403126F0 (sub_1403126F0.c)
 *     sub_140580028 @ 0x140580028 (sub_140580028.c)
 */

__int64 __fastcall sub_140580CE0(unsigned __int64 a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx
  char v4; // al
  __int64 v5; // rcx
  __int64 **v6; // rax

  v2 = 1;
  v3 = *((_QWORD *)KeGetCurrentThread() + 23);
  v4 = *(_BYTE *)(v3 + 1851);
  v5 = v3 + 1664;
  if ( (v4 & 0x60) == 0x60 && *((_QWORD *)sub_140282AD0(v5) + 4) && a1 < 0xFFFF800000000000uLL )
  {
    sub_1402ED128(1);
    v6 = sub_1403126F0(a1);
    if ( !v6 || sub_140580028((__int64)v6) )
      v2 = 0;
    sub_1402806E0(1, 0x11u);
  }
  return v2;
}
