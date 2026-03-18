/*
 * XREFs of ?ProcessSetRectangle@CRectangleGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_RECTANGLEGEOMETRY_SETRECTANGLE@@@Z @ 0x1800DC85C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180190BB4 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 __fastcall CRectangleGeometry::ProcessSetRectangle(
        CRectangleGeometry *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_RECTANGLEGEOMETRY_SETRECTANGLE *a3)
{
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // edi
  unsigned int v8; // r14d
  unsigned __int64 v9; // rsi
  int v10; // eax

  if ( *((_BYTE *)a3 + 41) )
  {
    v5 = ((__int64 (__fastcall *)(char *, void *, char *))xmmword_1803D0328)(
           (char *)this + SDWORD2(xmmword_1803D0328),
           &CRectangleGeometry::sc_CornerRadius,
           (char *)a3 + 8);
    v7 = v5;
    if ( v5 >= 0 )
    {
LABEL_8:
      *((_BYTE *)this + 196) = *((_BYTE *)a3 + 41) != 0;
      *((_BYTE *)this + 136) = *((_BYTE *)a3 + 40) != 0;
      *((_BYTE *)this + 197) = *((_BYTE *)a3 + 42) != 0;
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0LL, v5, 0x14Cu);
    }
  }
  else
  {
    v8 = 0;
    v9 = 0LL;
    while ( 1 )
    {
      if ( v9 >= 0x40 )
      {
        gsl::details::terminate(this);
        JUMPOUT(0x1800DC988LL);
      }
      _mm_lfence();
      v10 = (*(__int64 (__fastcall ***)(char *, _QWORD, char *))((char *)&off_1802BA630 + v9))[3](
              (char *)this + (*(int **)((char *)&off_1802BA630 + v9))[8],
              *(_UNKNOWN **)((char *)&off_1802BA630 + v9),
              (char *)a3 + *(_QWORD *)((char *)&unk_1803685C0 + v9));
      v7 = v10;
      if ( v10 < 0 )
        break;
      ++v8;
      v9 += 8LL;
      if ( v8 >= 8 )
        goto LABEL_8;
    }
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0LL, v10, 0x157u);
  }
  return v7;
}
