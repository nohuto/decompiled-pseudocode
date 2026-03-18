/*
 * XREFs of xxxDrawScrollBar @ 0x1C00C5DC8
 * Callers:
 *     xxxDrawWindowFrame @ 0x1C00638D4 (xxxDrawWindowFrame.c)
 *     ?xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z @ 0x1C00C6AA0 (-xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z.c)
 * Callees:
 *     GetWndSBDisableFlags @ 0x1C0065218 (GetWndSBDisableFlags.c)
 *     CalcSBStuff @ 0x1C0065248 (CalcSBStuff.c)
 *     ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x1C00C3E78 (-xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

void __fastcall xxxDrawScrollBar(struct tagWND *a1, HDC a2, unsigned int a3)
{
  __int64 v6; // rcx
  struct tagSBCALC *v7; // rbx
  unsigned int WndSBDisableFlags; // eax
  _BYTE v9[64]; // [rsp+30h] [rbp-68h] BYREF

  memset(v9, 0, sizeof(v9));
  v6 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 720LL);
  if ( v6 && a1 == *(struct tagWND **)(v6 + 8) && (*(_DWORD *)v6 & 4) == 0 && a3 == ((*(_DWORD *)v6 >> 1) & 1) )
    v7 = *(struct tagSBCALC **)(v6 + 96);
  else
    v7 = (struct tagSBCALC *)v9;
  CalcSBStuff((__int64)a1, (__int64)v7, a3);
  WndSBDisableFlags = GetWndSBDisableFlags((__int64)a1, a3);
  xxxDrawSB2(a1, v7, a2, a3, WndSBDisableFlags);
}
