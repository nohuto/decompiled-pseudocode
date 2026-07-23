/*
 * XREFs of RtlXSave @ 0x14020DFB0
 * Callers:
 *     KiSaveNpxState @ 0x14020DD30 (KiSaveNpxState.c)
 *     KeSaveExtendedAndSupervisorState @ 0x14020DDDC (KeSaveExtendedAndSupervisorState.c)
 *     RtlXSaveS @ 0x14036E644 (RtlXSaveS.c)
 *     ViCtxCaptureInitialIsrState @ 0x140AE4AD8 (ViCtxCaptureInitialIsrState.c)
 *     ViCtxCheckAndReleaseIsrState @ 0x140AE4B78 (ViCtxCheckAndReleaseIsrState.c)
 * Callees:
 *     XSaveCHelper @ 0x14042A520 (XSaveCHelper.c)
 */

__int64 __fastcall RtlXSave(_DWORD *a1, unsigned __int64 a2, __int64 a3)
{
  __int64 result; // rax
  int v5; // r8d
  int v6; // ecx

  if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
    return XSaveCHelper(a1, a2, a3, a1);
  result = a2;
  if ( (a2 & 6) == 4 )
  {
    v5 = a1[6];
    v6 = a1[7];
    _xsave(a1, a2);
    a1[6] = v5;
    a1[7] = v6;
  }
  else
  {
    _xsave(a1, a2);
  }
  return result;
}
