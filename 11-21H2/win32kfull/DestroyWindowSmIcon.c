/*
 * XREFs of DestroyWindowSmIcon @ 0x1C0060E08
 * Callers:
 *     xxxFreeWindow @ 0x1C005E458 (xxxFreeWindow.c)
 *     xxxRecreateSmallIcons @ 0x1C0158A28 (xxxRecreateSmallIcons.c)
 *     ?xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z @ 0x1C016DFC0 (-xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z.c)
 * Callees:
 *     ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1C00233C4 (-_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 *     SetOrClrWF @ 0x1C0069680 (SetOrClrWF.c)
 *     HMValidateHandleNoRip @ 0x1C00A3A40 (HMValidateHandleNoRip.c)
 */

__int64 __fastcall DestroyWindowSmIcon(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v5; // rax
  struct tagCURSOR *v6; // rbx

  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 264LL);
  if ( !v3 )
    return 0LL;
  LOBYTE(a2) = 3;
  v5 = HMValidateHandleNoRip(v3, a2);
  v6 = (struct tagCURSOR *)v5;
  if ( !v5 || (*(_DWORD *)(v5 + 80) & 0x80u) == 0 )
    return 0LL;
  SetOrClrWF(0LL, a1, 1824LL, 1LL);
  *(_QWORD *)(*(_QWORD *)(a1 + 40) + 264LL) = 0LL;
  _DestroyCursor(v6, 0);
  return 1LL;
}
