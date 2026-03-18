/*
 * XREFs of ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0284824
 * Callers:
 *     ?GreLineTo@@YAHPEAUHDC__@@HH@Z @ 0x1C02AA938 (-GreLineTo@@YAHPEAUHDC__@@HH@Z.c)
 *     ?GrePolyBezierInternal@@YAHPEAUHDC__@@PEAUtagPOINT@@K@Z @ 0x1C02AB188 (-GrePolyBezierInternal@@YAHPEAUHDC__@@PEAUtagPOINT@@K@Z.c)
 *     ?GrePolyDraw@@YAHPEAUHDC__@@AEAV?$umptr_r@UtagPOINT@@@@AEAV?$umptr_r@E@@K@Z @ 0x1C02AB378 (-GrePolyDraw@@YAHPEAUHDC__@@AEAV-$umptr_r@UtagPOINT@@@@AEAV-$umptr_r@E@@K@Z.c)
 *     GreAngleArc @ 0x1C02AB948 (GreAngleArc.c)
 *     GrePolyBezierTo @ 0x1C02AC0F0 (GrePolyBezierTo.c)
 *     GrePolyPolygonInternal @ 0x1C02AC44C (GrePolyPolygonInternal.c)
 *     GrePolyPolylineInternal @ 0x1C02AC73C (GrePolyPolylineInternal.c)
 *     GrePolylineTo @ 0x1C02AC970 (GrePolylineTo.c)
 *     GreRectangle @ 0x1C02ACBA0 (GreRectangle.c)
 *     NtGdiEllipse @ 0x1C02AD420 (NtGdiEllipse.c)
 *     NtGdiRoundRect @ 0x1C02AD7B0 (NtGdiRoundRect.c)
 *     NtGdiArcInternal @ 0x1C02C6710 (NtGdiArcInternal.c)
 * Callees:
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0099E60 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?vLock@EPATHOBJ@@QEAAXPEAUHPATH__@@@Z @ 0x1C01597BA (-vLock@EPATHOBJ@@QEAAXPEAUHPATH__@@@Z.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C015A6C4 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ?bMoveTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@@Z @ 0x1C015A700 (-bMoveTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@@Z.c)
 *     ?ptfxGetCurrent@EPATHOBJ@@QEBA?AU_POINTFIX@@XZ @ 0x1C015A7AA (-ptfxGetCurrent@EPATHOBJ@@QEBA-AU_POINTFIX@@XZ.c)
 *     ??0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z @ 0x1C0284DC8 (--0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z.c)
 */

PATHSTACKOBJ *__fastcall PATHSTACKOBJ::PATHSTACKOBJ(PATHSTACKOBJ *this, DC **a2, int a3)
{
  int v6; // eax
  __int64 v7; // rcx
  int v8; // eax
  struct HPATH__ *v9; // rdx
  struct _POINTL *v10; // r8
  _BYTE v12[16]; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v13[8]; // [rsp+30h] [rbp-D0h] BYREF
  struct HPATH__ **v14; // [rsp+38h] [rbp-C8h]
  _BYTE v15[8]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v16; // [rsp+B8h] [rbp-48h]
  __int64 v17; // [rsp+160h] [rbp+60h] BYREF

  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 28) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  v6 = *((_DWORD *)*a2 + 62);
  if ( (v6 & 1) != 0 )
  {
    if ( (v6 & 2) != 0 )
    {
      *((_DWORD *)*a2 + 62) = v6 & 0xFFFFFFFD;
      XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v15, *((struct HPATH__ **)*a2 + 25));
      PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v13);
      if ( v14 && v16 && EPATHOBJ::bClone((EPATHOBJ *)v13, (struct EPATHOBJ *)v15) )
        v9 = *v14;
      else
        v9 = 0LL;
      DC::hpath(*a2, v9);
      PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v13);
      XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v15);
    }
    *((_QWORD *)this + 1) = 0LL;
    if ( !*((_DWORD *)this + 28) )
    {
      PushThreadGuardedObject((char *)this + 80, this, XEPATHOBJ_vDestructWrap);
      *((_DWORD *)this + 28) = 1;
    }
    EPATHOBJ::vLock(this, *((struct HPATH__ **)*a2 + 25));
    if ( *((_QWORD *)this + 1) && a3 )
    {
      if ( (*(_DWORD *)(*((_QWORD *)*a2 + 122) + 152LL) & 0x200) != 0 )
      {
        EXFORMOBJ::vQuickInit((EXFORMOBJ *)v12, (struct XDCOBJ *)a2, 516);
        EXFORMOBJ::bXformRound(
          (EXFORMOBJ *)v12,
          (struct _POINTL *)(*((_QWORD *)*a2 + 122) + 216LL),
          (struct _POINTFIX *)(*((_QWORD *)*a2 + 122) + 8LL),
          1uLL);
        *(_DWORD *)(*((_QWORD *)*a2 + 122) + 152LL) &= ~0x200u;
        v10 = (struct _POINTL *)*((_QWORD *)*a2 + 122);
      }
      else
      {
        EPATHOBJ::ptfxGetCurrent(this, &v17);
        if ( v10[1].x == (_DWORD)v17 && v10[1].y == HIDWORD(v17) )
          return this;
      }
      EPATHOBJ::bMoveTo(this, 0LL, v10 + 1);
    }
  }
  else
  {
    *(_QWORD *)this = 0LL;
    *((_QWORD *)this + 1) = (char *)this + 120;
    *((_QWORD *)this + 18) = (char *)this + 440;
    *((_QWORD *)this + 55) = 0LL;
    *((_QWORD *)this + 56) = (char *)this + 464;
    *((_DWORD *)this + 50) = 1;
    *((_QWORD *)this + 19) = 0LL;
    *((_QWORD *)this + 20) = 0LL;
    *((_QWORD *)this + 21) = 0LL;
    *((_QWORD *)this + 22) = 0LL;
    *((_DWORD *)this + 51) = 1;
    *((_DWORD *)this + 114) = 256;
    if ( a3 )
    {
      if ( (*(_DWORD *)(*((_QWORD *)*a2 + 122) + 152LL) & 0x200) != 0 )
      {
        EXFORMOBJ::vQuickInit((EXFORMOBJ *)v12, (struct XDCOBJ *)a2, 516);
        EXFORMOBJ::bXformRound(
          (EXFORMOBJ *)v12,
          (struct _POINTL *)(*((_QWORD *)*a2 + 122) + 216LL),
          (struct _POINTFIX *)(*((_QWORD *)*a2 + 122) + 8LL),
          1uLL);
        *(_DWORD *)(*((_QWORD *)*a2 + 122) + 152LL) &= ~0x200u;
      }
      *((_QWORD *)this + 23) = *(_QWORD *)(*((_QWORD *)*a2 + 122) + 8LL);
      v7 = *((_QWORD *)*a2 + 122);
      v8 = *(_DWORD *)(v7 + 152);
      if ( (v8 & 0x400) != 0 )
      {
        *(_DWORD *)(v7 + 152) = v8 & 0xFFFFFBFF;
        *((_DWORD *)*a2 + 60) = 0;
      }
    }
  }
  return this;
}
