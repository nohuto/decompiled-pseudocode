/*
 * XREFs of GreExcludeClipRect @ 0x1C0088400
 * Callers:
 *     NtGdiExcludeClipRect @ 0x1C00883E0 (NtGdiExcludeClipRect.c)
 *     ?BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z @ 0x1C009050C (-BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z.c)
 * Callees:
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C002F5C4 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C003FC30 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0041DDC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z @ 0x1C0088D44 (-bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00E47F8 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C015DE30 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 */

__int64 __fastcall GreExcludeClipRect(HDC a1, LONG a2, LONG a3, LONG a4, LONG a5)
{
  unsigned int v8; // ebx
  __int64 v9; // rax
  unsigned int v10; // ecx
  ULONG v11; // ecx
  int v13; // eax
  _QWORD v14[2]; // [rsp+30h] [rbp-31h] BYREF
  DC *v15[6]; // [rsp+40h] [rbp-21h] BYREF
  struct _RECTL v16; // [rsp+70h] [rbp+Fh] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v15, a1);
  v8 = 0;
  if ( !v15[0] )
  {
LABEL_7:
    v11 = 6;
LABEL_8:
    EngSetLastError(v11);
    goto LABEL_9;
  }
  if ( *((_WORD *)v15[0] + 6) > 1u )
  {
    v9 = *((_QWORD *)v15[0] + 6);
    if ( v9 )
      v10 = *(_DWORD *)(v9 + 40);
    else
      v10 = 0;
    TraceLoggingWriteUnsupportedGdiUsage(10LL, v10, *((unsigned __int16 *)v15[0] + 6));
    goto LABEL_7;
  }
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v14, (struct XDCOBJ *)v15, 0x80000204);
  v16.left = a2;
  v16.top = a3;
  v16.right = a4;
  v16.bottom = a5;
  if ( (*(_DWORD *)(v14[0] + 32LL) & 1) != 0 )
  {
    EXFORMOBJ::bXform((EXFORMOBJ *)v14, (struct ERECTL *)&v16);
    ERECTL::vOrder((ERECTL *)&v16);
    v13 = DC::iCombine(v15[0], &v16, 4);
  }
  else
  {
    if ( (((a2 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
      || (((a5 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
      || (((a4 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
      || (((a3 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0 )
    {
      v11 = 87;
      goto LABEL_8;
    }
    v13 = DC::iCombine(v15[0], (struct EXFORMOBJ *)v14, &v16, 4);
  }
  v8 = v13;
  if ( v13 > 1 )
    v8 = 3;
LABEL_9:
  DCOBJ::~DCOBJ((DCOBJ *)v15);
  return v8;
}
