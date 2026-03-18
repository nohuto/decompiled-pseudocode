/*
 * XREFs of NtGdiSelectClipPath @ 0x1C01376C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C003FC30 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0041DDC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?iSelect@DC@@QEAAHPEAVREGION@@H@Z @ 0x1C0041E44 (-iSelect@DC@@QEAAHPEAVREGION@@H@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C008E0D4 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C0137840 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1C013789C (--0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ?bInactive@DC@@QEBAHXZ @ 0x1C0138894 (-bInactive@DC@@QEBAHXZ.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C015DE30 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 */

__int64 __fastcall NtGdiSelectClipPath(HDC a1, int a2)
{
  unsigned int v3; // ebx
  int v4; // edi
  __int64 v5; // rax
  unsigned int v6; // ecx
  ULONG v7; // ecx
  DC *v9; // rcx
  unsigned int v10; // r8d
  DC *v11; // rcx
  struct REGION *v12; // [rsp+38h] [rbp-69h] BYREF
  int v13; // [rsp+40h] [rbp-61h]
  DC *v14[6]; // [rsp+48h] [rbp-59h] BYREF
  _BYTE v15[8]; // [rsp+78h] [rbp-29h] BYREF
  __int64 v16; // [rsp+80h] [rbp-21h]

  DCOBJ::DCOBJ((DCOBJ *)v14, a1);
  v3 = 0;
  if ( !v14[0] || (unsigned int)(a2 - 1) > 4 )
  {
LABEL_8:
    v7 = 87;
LABEL_9:
    EngSetLastError(v7);
    goto LABEL_10;
  }
  v4 = 1;
  if ( *((_WORD *)v14[0] + 6) > 1u )
  {
    v5 = *((_QWORD *)v14[0] + 6);
    if ( v5 )
      v6 = *(_DWORD *)(v5 + 40);
    else
      v6 = 0;
    TraceLoggingWriteUnsupportedGdiUsage(14LL, v6, *((unsigned __int16 *)v14[0] + 6));
    goto LABEL_8;
  }
  if ( !(unsigned int)DC::bInactive(v14[0]) )
  {
    v7 = 1003;
    goto LABEL_9;
  }
  XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v15, (struct XDCOBJ *)v14);
  if ( v16 )
  {
    v10 = *(unsigned __int8 *)(*((_QWORD *)v14[0] + 122) + 214LL);
    v13 = 0;
    RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v12, (struct EPATHOBJ *)v15, v10, 0LL);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v12);
    if ( !v12 || !(unsigned int)DC::iSelect(v14[0], v12, a2) )
      v4 = 0;
    v11 = v14[0];
    *((_DWORD *)v14[0] + 62) &= ~1u;
    DC::hpath(v11, 0LL);
    v3 = v4;
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v12);
  }
  else
  {
    EngSetLastError(8u);
    v9 = v14[0];
    *((_DWORD *)v14[0] + 62) &= ~1u;
    DC::hpath(v9, 0LL);
  }
  XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v15);
LABEL_10:
  DCOBJ::~DCOBJ((DCOBJ *)v14);
  return v3;
}
