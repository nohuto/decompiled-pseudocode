/*
 * XREFs of sub_14023CB20 @ 0x14023CB20
 * Callers:
 *     sub_14023C9F8 @ 0x14023C9F8 (sub_14023C9F8.c)
 *     MmProbeAndLockSelectedPages @ 0x140247CF0 (MmProbeAndLockSelectedPages.c)
 *     sub_14031B810 @ 0x14031B810 (sub_14031B810.c)
 *     sub_14031C290 @ 0x14031C290 (sub_14031C290.c)
 *     sub_1405845D4 @ 0x1405845D4 (sub_1405845D4.c)
 * Callees:
 *     sub_1402CF4F0 @ 0x1402CF4F0 (sub_1402CF4F0.c)
 */

char __fastcall sub_14023CB20(__int64 a1)
{
  int v2; // ecx
  __int64 v3; // rax

  *(_DWORD *)(a1 + 72) &= 0xFFFFFFCF;
  LOBYTE(v3) = sub_1402CF4F0(*(_QWORD *)(a1 + 104));
  v2 = *(_DWORD *)(a1 + 72);
  *(_BYTE *)(a1 + 76) = v3;
  LOBYTE(v3) = v2 & 0xF;
  if ( (v2 & 0xF) == 1 )
  {
    v3 = *(_QWORD *)(a1 + 88);
    if ( *(_QWORD *)(v3 + 1264) )
      *(_DWORD *)(a1 + 72) = v2 | 0x10;
  }
  return v3;
}
