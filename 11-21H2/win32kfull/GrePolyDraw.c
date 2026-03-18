/*
 * XREFs of GrePolyDraw @ 0x1C029EE18
 * Callers:
 *     NtGdiPolyDraw @ 0x1C02AE280 (NtGdiPolyDraw.c)
 * Callees:
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C003FC30 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0041DDC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00E47F8 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C0134298 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C0137840 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0137C34 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?ptfxGetCurrent@EPATHOBJ@@QEBA?AU_POINTFIX@@XZ @ 0x1C01388BC (-ptfxGetCurrent@EPATHOBJ@@QEBA-AU_POINTFIX@@XZ.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 __fastcall GrePolyDraw(HDC a1, struct _POINTL *a2, char *a3, unsigned int a4)
{
  __int64 v4; // r15
  POINTL *v7; // rcx
  unsigned int v8; // esi
  POINTL v9; // rdx
  int v10; // edi
  unsigned int v11; // edi
  char *v12; // r15
  char v13; // al
  signed __int64 v14; // r13
  ULONG v15; // ecx
  struct _POINTFIX Current; // rax
  POINTL *v17; // r8
  char *v19; // [rsp+48h] [rbp-360h] BYREF
  char *v20; // [rsp+50h] [rbp-358h]
  struct _XFORMOBJ v21; // [rsp+58h] [rbp-350h] BYREF
  POINTL *v22[7]; // [rsp+68h] [rbp-340h] BYREF
  PATHOBJ ppo; // [rsp+A0h] [rbp-308h] BYREF
  __int64 v24; // [rsp+A8h] [rbp-300h]

  v4 = a4;
  DCOBJ::DCOBJ((DCOBJ *)v22, a1);
  v7 = v22[0];
  v8 = 0;
  if ( !v22[0] || (v22[0][4].y & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    DCOBJ::~DCOBJ((DCOBJ *)v22);
    return 0LL;
  }
  v9 = v22[0][122];
  v10 = *(_DWORD *)(*(_QWORD *)&v9 + 152LL);
  if ( (v10 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v22[0], *(_QWORD *)(*(_QWORD *)&v9 + 160LL));
    v7 = v22[0];
  }
  if ( (v10 & 0x2000) != 0 )
    GreDCSelectPen(v7, *(_QWORD *)(*(_QWORD *)&v7[122] + 168LL));
  if ( !(_DWORD)v4 )
  {
    v11 = 1;
LABEL_47:
    DCOBJ::~DCOBJ((DCOBJ *)v22);
    return v11;
  }
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v21, (struct XDCOBJ *)v22, 516);
  PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&ppo, (DC **)v22, 1);
  if ( !v24 )
  {
    v15 = 8;
LABEL_45:
    EngSetLastError(v15);
LABEL_46:
    XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&ppo);
    v11 = 0;
    goto LABEL_47;
  }
  v12 = &a3[v4];
  v19 = v12;
  while ( a3 < v12 )
  {
    v20 = a3;
    v13 = *a3++;
    switch ( v13 )
    {
      case 2:
        while ( a3 < v12 )
        {
          if ( *a3 != 2 )
          {
            if ( a3 < v12 && (*a3 & 0xFE) == 2 )
              ++a3;
            break;
          }
          ++a3;
        }
LABEL_36:
        if ( !EPATHOBJ::bPolyLineTo((EPATHOBJ *)&ppo, (struct EXFORMOBJ *)&v21, a2, (_DWORD)a3 - (_DWORD)v20) )
          goto LABEL_46;
        a2 += a3 - v20;
        if ( (*(a3 - 1) & 1) != 0 )
          EPATHOBJ::bCloseFigure((EPATHOBJ *)&ppo);
        break;
      case 3:
        goto LABEL_36;
      case 4:
        while ( a3 < v12 )
        {
          if ( *a3 != 4 )
          {
            if ( a3 < v12 && (*a3 & 0xFE) == 4 )
              ++a3;
            break;
          }
          ++a3;
        }
        v14 = a3 - v20;
        if ( a3 - v20 != 3 * ((a3 - v20) / 3uLL) )
        {
LABEL_25:
          v15 = 87;
          goto LABEL_45;
        }
        if ( !EPATHOBJ::bPolyBezierTo((EPATHOBJ *)&ppo, (struct EXFORMOBJ *)&v21, a2, v14) )
          goto LABEL_46;
        a2 += v14;
        if ( (*(a3 - 1) & 1) != 0 )
          EPATHOBJ::bCloseFigure((EPATHOBJ *)&ppo);
        break;
      case 6:
        if ( !EPATHOBJ::bMoveTo((EPATHOBJ *)&ppo, (struct EXFORMOBJ *)&v21, a2) )
          goto LABEL_46;
        ++a2;
        break;
      default:
        goto LABEL_25;
    }
  }
  Current = EPATHOBJ::ptfxGetCurrent((EPATHOBJ *)&ppo, &v19);
  v17 = v22[0];
  *(_DWORD *)(*(_QWORD *)&v22[0][122] + 152LL) &= 0xFFFFFCFF;
  *(_DWORD *)(*(_QWORD *)&v17[122] + 216LL) = a2[-1].x;
  *(_DWORD *)(*(_QWORD *)&v17[122] + 220LL) = a2[-1].y;
  *(_DWORD *)(*(_QWORD *)&v17[122] + 8LL) = *(_DWORD *)Current.x;
  *(_DWORD *)(*(_QWORD *)&v17[122] + 12LL) = *(_DWORD *)(*(_QWORD *)&Current + 4LL);
  if ( (v22[0][31].x & 1) != 0
    || (unsigned int)EPATHOBJ::bStrokeAndOrFill(&ppo, v22, (LINEATTRS *)&v22[0][26], &v21, 1u) )
  {
    v8 = 1;
  }
  XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&ppo);
  DCOBJ::~DCOBJ((DCOBJ *)v22);
  return v8;
}
