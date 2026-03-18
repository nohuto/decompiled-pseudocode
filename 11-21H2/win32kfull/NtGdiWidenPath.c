/*
 * XREFs of NtGdiWidenPath @ 0x1C02AC590
 * Callers:
 *     <none>
 * Callees:
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C003FC30 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0041DDC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00E47F8 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C012FEB0 (-bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     ?bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C0131254 (-bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C0137840 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1C013789C (--0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ?bInactive@DC@@QEBAHXZ @ 0x1C0138894 (-bInactive@DC@@QEBAHXZ.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C015DE30 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 *     ?vReComputeBounds@EPATHOBJ@@QEAAXXZ @ 0x1C02CE1A4 (-vReComputeBounds@EPATHOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall NtGdiWidenPath(HDC a1)
{
  unsigned int v1; // ebx
  ULONG v2; // ecx
  struct _LINEATTRS *v3; // rdi
  ULONG v4; // ecx
  struct _XFORMOBJ v6; // [rsp+38h] [rbp-69h] BYREF
  DC *v7[6]; // [rsp+48h] [rbp-59h] BYREF
  _BYTE v8[8]; // [rsp+78h] [rbp-29h] BYREF
  __int64 v9; // [rsp+80h] [rbp-21h]

  DCOBJ::DCOBJ((DCOBJ *)v7, a1);
  v1 = 0;
  if ( v7[0] )
  {
    if ( !(unsigned int)DC::bInactive(v7[0]) )
    {
      v2 = 1003;
      goto LABEL_5;
    }
    XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v8, v7);
    if ( v9 )
    {
      if ( *((_WORD *)v7[0] + 6) > 1u )
      {
        TraceLoggingWriteUnsupportedGdiUsage(7);
LABEL_11:
        v4 = 1003;
LABEL_17:
        EngSetLastError(v4);
LABEL_19:
        XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v8);
        goto LABEL_20;
      }
      EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v6, (struct XDCOBJ *)v7, 516);
      v3 = (struct _LINEATTRS *)((char *)v7[0] + 208);
      if ( (*((_DWORD *)v7[0] + 52) & 1) == 0 )
      {
        if ( (*(_DWORD *)(*((_QWORD *)v7[0] + 18) + 40LL) & 0x800) == 0 )
          goto LABEL_11;
        v3 = (struct _LINEATTRS *)&unk_1C032E9A0;
      }
      if ( !(unsigned int)EPATHOBJ::bComputeWidenedBounds((EPATHOBJ *)v8, (struct EPATHOBJ *)v8, &v6, v3) )
      {
        v4 = 534;
        goto LABEL_17;
      }
      if ( (unsigned int)EPATHOBJ::bWiden((EPATHOBJ *)v8, (struct EPATHOBJ *)v8, &v6, v3) )
      {
        EPATHOBJ::vReComputeBounds((EPATHOBJ *)v8);
        v1 = 1;
        goto LABEL_19;
      }
    }
    v4 = 8;
    goto LABEL_17;
  }
  v2 = 87;
LABEL_5:
  EngSetLastError(v2);
LABEL_20:
  DCOBJ::~DCOBJ((DCOBJ *)v7);
  return v1;
}
