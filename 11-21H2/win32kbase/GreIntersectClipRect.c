/*
 * XREFs of GreIntersectClipRect @ 0x1C00CA500
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x1C006E680 (xxxEnumDisplayMonitors.c)
 * Callees:
 *     ?bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z @ 0x1C001B2A4 (-bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C0027E60 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C002E3D4 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C002E7BC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z @ 0x1C0031540 (-vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z.c)
 *     EngSetLastError @ 0x1C008B610 (EngSetLastError.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C008E64C (-vOrder@ERECTL@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C00DA864 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C016D4E0 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 */

__int64 __fastcall GreIntersectClipRect(HDC a1, LONG a2, LONG a3, LONG a4, LONG a5)
{
  unsigned int v8; // ebx
  __int64 v9; // rax
  unsigned int v10; // ecx
  ULONG v11; // ecx
  __int64 v13; // rcx
  int v14; // ecx
  int v15; // eax
  __int64 v16; // [rsp+30h] [rbp-31h] BYREF
  int v17; // [rsp+38h] [rbp-29h]
  int v18; // [rsp+3Ch] [rbp-25h]
  DC *v19[6]; // [rsp+40h] [rbp-21h] BYREF
  struct _RECTL v20; // [rsp+70h] [rbp+Fh] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v19, a1);
  v8 = 0;
  if ( !v19[0] )
  {
LABEL_7:
    v11 = 6;
LABEL_8:
    EngSetLastError(v11);
    goto LABEL_9;
  }
  if ( *((_WORD *)v19[0] + 6) > 1u )
  {
    v9 = *((_QWORD *)v19[0] + 6);
    if ( v9 )
      v10 = *(_DWORD *)(v9 + 40);
    else
      v10 = 0;
    TraceLoggingWriteUnsupportedGdiUsage(12LL, v10, *((unsigned __int16 *)v19[0] + 6), 0LL, 0LL);
    goto LABEL_7;
  }
  v13 = *((_QWORD *)v19[0] + 122);
  v17 = *(_DWORD *)(v13 + 208);
  v18 = *(_DWORD *)(v13 + 108) & 1;
  EXFORMOBJ::vInit((EXFORMOBJ *)&v16, v19, 516, 0x80000000);
  v20.left = a2;
  v20.top = a3;
  v14 = *(_DWORD *)(v16 + 32);
  v20.right = a4;
  v20.bottom = a5;
  if ( (v14 & 1) != 0 )
  {
    EXFORMOBJ::bXform((EXFORMOBJ *)&v16, (struct ERECTL *)&v20);
    ERECTL::vOrder((ERECTL *)&v20);
    v15 = DC::iCombine(v19[0], &v20, 1);
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
    v15 = DC::iCombine(v19[0], (struct EXFORMOBJ *)&v16, &v20, 1);
  }
  v8 = v15;
  if ( v15 > 1 )
    v8 = 3;
LABEL_9:
  DCOBJ::~DCOBJ((DCOBJ *)v19);
  return v8;
}
