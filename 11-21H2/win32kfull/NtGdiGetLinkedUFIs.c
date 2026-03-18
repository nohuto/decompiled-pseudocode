/*
 * XREFs of NtGdiGetLinkedUFIs @ 0x1C0124330
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0019ED8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00364E0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C003FC30 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0041DDC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?GetLinkedFontUFIs@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C0124A18 (-GetLinkedFontUFIs@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@H@Z.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 */

__int64 __fastcall NtGdiGetLinkedUFIs(HDC a1, void *a2, int a3)
{
  __int64 v3; // r14
  int LinkedFontUFIs; // ebx
  struct _UNIVERSAL_FONT_ID *v7; // rsi
  bool v8; // zf
  _QWORD v10[7]; // [rsp+28h] [rbp-50h] BYREF
  __int64 v11; // [rsp+98h] [rbp+20h] BYREF

  v3 = a3;
  LinkedFontUFIs = 0;
  v7 = 0LL;
  v8 = a3 == 0;
  if ( a3 > 0 )
  {
    if ( a2 )
    {
      if ( (unsigned int)a3 <= 0x4E2000 && 8 * a3 )
        v7 = (struct _UNIVERSAL_FONT_ID *)Win32AllocPool((unsigned int)(8 * a3), 1684629063LL);
      LinkedFontUFIs = (v7 != 0LL) - 1;
      goto LABEL_7;
    }
    v8 = a3 == 0;
  }
  if ( !v8 && !a2 )
  {
    LinkedFontUFIs = -1;
    goto LABEL_29;
  }
  if ( a3 < 0 && a2 )
    LinkedFontUFIs = -1;
LABEL_7:
  if ( LinkedFontUFIs != -1 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v10, a1);
    if ( v10[0] )
    {
      v11 = 0LL;
      if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&v11, (struct XDCOBJ *)v10, 0, 2u) )
        GreAcquireSemaphore(*(_QWORD *)(v11 + 504));
      if ( v11 )
        LinkedFontUFIs = RFONTOBJ::GetLinkedFontUFIs((RFONTOBJ *)&v11, (struct XDCOBJ *)v10, v7, v3);
      else
        LinkedFontUFIs = -1;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v11);
    }
    else
    {
      LinkedFontUFIs = -1;
    }
    DCOBJ::~DCOBJ((DCOBJ *)v10);
    if ( LinkedFontUFIs > 0 && a2 )
    {
      ProbeForWrite(a2, 8 * v3, 4u);
      if ( LinkedFontUFIs < (int)v3 )
        LODWORD(v3) = LinkedFontUFIs;
      memmove(a2, v7, 8LL * (int)v3);
    }
  }
LABEL_29:
  if ( v7 )
    Win32FreePool(v7);
  if ( LinkedFontUFIs == -1 )
    EngSetLastError(8u);
  return (unsigned int)LinkedFontUFIs;
}
