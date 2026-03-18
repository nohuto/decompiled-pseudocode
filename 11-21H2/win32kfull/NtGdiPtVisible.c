/*
 * XREFs of NtGdiPtVisible @ 0x1C029E1B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C003FC30 (--1DCOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C003FD30 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C0041980 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0041DDC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0042DBC (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C0088D80 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00E47F8 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C015DE30 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 */

__int64 __fastcall NtGdiPtVisible(HDC a1, LONG a2, LONG a3)
{
  unsigned int v5; // edi
  unsigned int v6; // ebx
  char *v7; // rcx
  struct REGION *v9; // [rsp+30h] [rbp-79h] BYREF
  DC *v10[6]; // [rsp+38h] [rbp-71h] BYREF
  _BYTE v11[24]; // [rsp+68h] [rbp-41h] BYREF
  _BYTE v12[32]; // [rsp+80h] [rbp-29h] BYREF
  _BYTE v13[80]; // [rsp+A0h] [rbp-9h] BYREF
  struct _POINTL v14; // [rsp+128h] [rbp+7Fh] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v10, a1);
  v5 = 0;
  if ( !v10[0] )
    goto LABEL_4;
  v6 = 1;
  if ( *((_WORD *)v10[0] + 6) != 1 )
  {
    TraceLoggingWriteUnsupportedGdiUsage(21);
LABEL_4:
    EngSetLastError(6u);
    v6 = -1;
    goto LABEL_10;
  }
  DLODCOBJ::DLODCOBJ((DLODCOBJ *)v13);
  DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v12, (struct XDCOBJ *)v10, 1);
  if ( (v12[24] & 1) != 0 )
  {
    v9 = XDCOBJ::prgnEffRao(v10);
    v14.x = a2;
    v14.y = a3;
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)v11, (struct XDCOBJ *)v10, -2147483132);
    EXFORMOBJ::bXform((EXFORMOBJ *)v11, &v14, 1LL);
    v7 = (char *)v10[0] + 1024;
    if ( (*((_DWORD *)v10[0] + 10) & 1) == 0 )
      v7 = (char *)v10[0] + 1016;
    v14.x += *(_DWORD *)v7;
    v14.y += *((_DWORD *)v7 + 1);
    LOBYTE(v5) = RGNOBJ::bInside((RGNOBJ *)&v9, &v14) == 2;
    v6 = v5;
  }
  DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v12);
LABEL_10:
  DCOBJ::~DCOBJ((DCOBJ *)v10);
  return v6;
}
