/*
 * XREFs of sub_14029C520 @ 0x14029C520
 * Callers:
 *     sub_1404183E0 @ 0x1404183E0 (sub_1404183E0.c)
 *     NtWriteFile @ 0x14071D850 (NtWriteFile.c)
 * Callees:
 *     sub_14029C5B0 @ 0x14029C5B0 (sub_14029C5B0.c)
 *     sub_140584F10 @ 0x140584F10 (sub_140584F10.c)
 */

__int64 __fastcall sub_14029C520(__int64 a1, unsigned __int8 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  unsigned int v5; // r8d
  bool v7; // zf
  __int64 v8; // rdx
  __int64 result; // rax

  v5 = a2;
  v7 = a2 == 0;
  v8 = 1LL;
  if ( v7 )
    v8 = v5;
  sub_14029C5B0(a1, v8, 0LL);
  result = (unsigned int)dword_140D06994;
  if ( (dword_140D06994 & 1) != 0 )
    return sub_140584F10(a1, *(_QWORD *)(*(_QWORD *)(a4 + 8) + 8LL * a5 + 112), a4);
  return result;
}
