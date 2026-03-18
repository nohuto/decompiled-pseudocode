/*
 * XREFs of NtGdiInvertRgn @ 0x1C0138CF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C003FC30 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0041DDC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bDWMDesktop@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ @ 0x1C01387C0 (-bDWMDesktop@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ.c)
 *     ?NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x1C0138E34 (-NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C015DE30 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 *     ?bInPathBracket@DWMSCREENREADMODIFYWRITEASSIST@@QEBAHXZ @ 0x1C029DBA8 (-bInPathBracket@DWMSCREENREADMODIFYWRITEASSIST@@QEBAHXZ.c)
 *     ?bReadFromAccumulatedBounds@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ @ 0x1C029DBD0 (-bReadFromAccumulatedBounds@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ.c)
 *     ?vRestoreAccumBoundsAndEnableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QEAAXXZ @ 0x1C029DC94 (-vRestoreAccumBoundsAndEnableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QEAAXXZ.c)
 *     ?vSaveAccumBoundsAndDisableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QEAAXXZ @ 0x1C029DDB0 (-vSaveAccumBoundsAndDisableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QEAAXXZ.c)
 */

__int64 __fastcall NtGdiInvertRgn(HDC a1, HRGN a2)
{
  unsigned int v4; // ebx
  int v5; // esi
  __int64 v6; // rax
  unsigned int v7; // ecx
  __int64 v8; // rcx
  unsigned int v9; // edi
  __int64 v10; // rax
  _QWORD v12[6]; // [rsp+30h] [rbp-A8h] BYREF
  _BYTE v13[24]; // [rsp+60h] [rbp-78h] BYREF
  _QWORD *v14; // [rsp+78h] [rbp-60h]

  v4 = 0;
  v5 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v12, a1);
  if ( v12[0] )
  {
    if ( *(_WORD *)(v12[0] + 12LL) != 1 )
    {
      v6 = *(_QWORD *)(v12[0] + 48LL);
      if ( v6 )
        v7 = *(_DWORD *)(v6 + 40);
      else
        v7 = 0;
      TraceLoggingWriteUnsupportedGdiUsage(21LL, v7, *(unsigned __int16 *)(v12[0] + 12LL));
      EngSetLastError(0x57u);
      goto LABEL_15;
    }
    v14 = v12;
    if ( (unsigned int)DWMSCREENREADMODIFYWRITEASSIST::bDWMDesktop((DWMSCREENREADMODIFYWRITEASSIST *)v13)
      && !(unsigned int)DWMSCREENREADMODIFYWRITEASSIST::bInPathBracket((DWMSCREENREADMODIFYWRITEASSIST *)v13) )
    {
      DWMSCREENREADMODIFYWRITEASSIST::vSaveAccumBoundsAndDisableSpriteUpdates((DWMSCREENREADMODIFYWRITEASSIST *)v13);
      if ( (unsigned int)NtGdiInvertRgnInternal(a1, a2) )
        v5 = DWMSCREENREADMODIFYWRITEASSIST::bReadFromAccumulatedBounds((DWMSCREENREADMODIFYWRITEASSIST *)v13);
      DWMSCREENREADMODIFYWRITEASSIST::vRestoreAccumBoundsAndEnableSpriteUpdates((DWMSCREENREADMODIFYWRITEASSIST *)v13);
    }
  }
  v9 = NtGdiInvertRgnInternal(a1, a2);
  if ( v5 )
  {
    v10 = UserReferenceDwmApiPort(v8);
    DwmSyncFlushAndWaitForBatch(v10);
  }
  v4 = v9;
LABEL_15:
  DCOBJ::~DCOBJ((DCOBJ *)v12);
  return v4;
}
