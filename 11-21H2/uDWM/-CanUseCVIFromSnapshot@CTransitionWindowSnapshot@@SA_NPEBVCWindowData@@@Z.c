/*
 * XREFs of ?CanUseCVIFromSnapshot@CTransitionWindowSnapshot@@SA_NPEBVCWindowData@@@Z @ 0x1800EA120
 * Callers:
 *     ?EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z @ 0x1800EC7CC (-EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?Initialize@CTransitionWindowSnapshot@@MEAAJPEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@@Z @ 0x1800F0360 (-Initialize@CTransitionWindowSnapshot@@MEAAJPEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@@Z.c)
 * Callees:
 *     ?HasCVIOfCompatibleSize@CWindowSnapshot@@QEAA_NPEBUtagRECT@@@Z @ 0x1801072B4 (-HasCVIOfCompatibleSize@CWindowSnapshot@@QEAA_NPEBUtagRECT@@@Z.c)
 */

char __fastcall CTransitionWindowSnapshot::CanUseCVIFromSnapshot(const struct CWindowData *a1)
{
  char v1; // r11
  CWindowSnapshot *v2; // r8

  v1 = 0;
  if ( (*((_BYTE *)a1 + 668) & 8) != 0 )
  {
    v2 = (CWindowSnapshot *)*((_QWORD *)a1 + 60);
    if ( v2 )
      return CWindowSnapshot::HasCVIOfCompatibleSize(
               v2,
               (const struct tagRECT *)((char *)a1 + ((*((_DWORD *)a1 + 168) & 0x1000000) != 0 ? 0x274 : 0) + 48));
  }
  return v1;
}
