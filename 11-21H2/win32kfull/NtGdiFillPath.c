/*
 * XREFs of NtGdiFillPath @ 0x1C0136730
 * Callers:
 *     <none>
 * Callees:
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C003FC30 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0041DDC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C0134298 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C0137840 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1C013789C (--0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ?bInactive@DC@@QEBAHXZ @ 0x1C0138894 (-bInactive@DC@@QEBAHXZ.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C015DE30 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 */

__int64 __fastcall NtGdiFillPath(HDC a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rcx
  unsigned int v3; // eax
  ULONG v4; // ecx
  __int64 v5; // r8
  __int64 v6; // rdx
  DC *v7; // rcx
  DC *v9[6]; // [rsp+30h] [rbp-59h] BYREF
  PATHOBJ ppo; // [rsp+60h] [rbp-29h] BYREF
  __int64 v11; // [rsp+68h] [rbp-21h]

  DCOBJ::DCOBJ((DCOBJ *)v9, a1);
  v1 = 0;
  if ( !v9[0] )
    goto LABEL_8;
  if ( *((_WORD *)v9[0] + 6) != 1 )
  {
    v2 = *((_QWORD *)v9[0] + 6);
    if ( v2 )
      v3 = *(_DWORD *)(v2 + 40);
    else
      v3 = 0;
    TraceLoggingWriteUnsupportedGdiUsage(18LL, v3, *((unsigned __int16 *)v9[0] + 6));
    goto LABEL_8;
  }
  if ( (*((_DWORD *)v9[0] + 9) & 0x10000) != 0 )
  {
LABEL_8:
    v4 = 87;
LABEL_11:
    EngSetLastError(v4);
    goto LABEL_18;
  }
  if ( !(unsigned int)DC::bInactive(v9[0]) )
  {
    v4 = 1003;
    goto LABEL_11;
  }
  v6 = *(_QWORD *)(v5 + 976);
  if ( (*(_DWORD *)(v6 + 152) & 0x1000) != 0 )
    GreDCSelectBrush(v5, *(_QWORD *)(v6 + 160));
  XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)&ppo, (struct XDCOBJ *)v9);
  if ( v11 )
  {
    EPATHOBJ::vCloseAllFigures((EPATHOBJ *)&ppo);
    v1 = EPATHOBJ::bStrokeAndOrFill(&ppo, (POINTL **)v9, 0LL, 0LL, 2u);
  }
  else
  {
    EngSetLastError(8u);
  }
  v7 = v9[0];
  *((_DWORD *)v9[0] + 62) &= ~1u;
  DC::hpath(v7, 0LL);
  XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&ppo);
LABEL_18:
  DCOBJ::~DCOBJ((DCOBJ *)v9);
  return v1;
}
