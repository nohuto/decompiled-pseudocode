/*
 * XREFs of sub_1C003A7B8 @ 0x1C003A7B8
 * Callers:
 *     sub_1C0006CB0 @ 0x1C0006CB0 (sub_1C0006CB0.c)
 *     sub_1C0007400 @ 0x1C0007400 (sub_1C0007400.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C0037EE0 @ 0x1C0037EE0 (sub_1C0037EE0.c)
 */

__int64 __fastcall sub_1C003A7B8(__int64 a1, __int64 a2)
{
  unsigned int v3; // r8d

  if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 16LL) )
    v3 = sub_1C0037EE0(a1, **(_BYTE **)(a2 + 24));
  else
    v3 = -1073741811;
  return sub_1C0003440((PIRP)a2, 0, v3);
}
