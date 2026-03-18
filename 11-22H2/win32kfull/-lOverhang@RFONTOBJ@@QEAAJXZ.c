/*
 * XREFs of ?lOverhang@RFONTOBJ@@QEAAJXZ @ 0x1C00835E4
 * Callers:
 *     ?vIFIMetricsToTextMetricWStrict@@YAXAEAVRFONTOBJ@@AEAVDCOBJ@@PEAUtagTEXTMETRICW@@PEAU_IFIMETRICS@@@Z @ 0x1C0083110 (-vIFIMetricsToTextMetricWStrict@@YAXAEAVRFONTOBJ@@AEAVDCOBJ@@PEAUtagTEXTMETRICW@@PEAU_IFIMETRICS.c)
 *     ?bTextExtent@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAGHJJJJIPEAUtagSIZE@@@Z @ 0x1C0083684 (-bTextExtent@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAGHJJJJIPEAUtagSIZE@@@Z.c)
 *     ?bGetWidthData@RFONTOBJ@@QEAAHPEAU_WIDTHDATA@@AEAVXDCOBJ@@@Z @ 0x1C0085224 (-bGetWidthData@RFONTOBJ@@QEAAHPEAU_WIDTHDATA@@AEAVXDCOBJ@@@Z.c)
 *     ?GreGetCharWidthW@@YAHPEAUHDC__@@IIPEAGKPEAXW4EntryPoint@RFONTOBJ@@@Z @ 0x1C028D974 (-GreGetCharWidthW@@YAHPEAUHDC__@@IIPEAGKPEAXW4EntryPoint@RFONTOBJ@@@Z.c)
 * Callees:
 *     ?pptlBaseline@IFIOBJ@@QEAAPEAU_POINTL@@XZ @ 0x1C0084B38 (-pptlBaseline@IFIOBJ@@QEAAPEAU_POINTL@@XZ.c)
 *     ?vSetNotionalToDevice@RFONTOBJ@@QEAAXAEAVEXFORMOBJ@@@Z @ 0x1C0085154 (-vSetNotionalToDevice@RFONTOBJ@@QEAAXAEAVEXFORMOBJ@@@Z.c)
 *     bFToL @ 0x1C009BB20 (bFToL.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ??0EXFORMOBJ@@QEAA@PEAVMATRIX@@K@Z @ 0x1C028D870 (--0EXFORMOBJ@@QEAA@PEAVMATRIX@@K@Z.c)
 */

__int64 __fastcall RFONTOBJ::lOverhang(RFONTOBJ *this)
{
  _DWORD *v1; // rdx
  unsigned int v2; // ebx
  __int64 v4; // r8
  int v5; // r9d
  int v7; // ecx
  __int64 v8; // rax
  __int64 v9; // rcx
  int v10; // r8d
  int v11; // [rsp+20h] [rbp-60h] BYREF
  int v12; // [rsp+24h] [rbp-5Ch] BYREF
  float v13[2]; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v14[2]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v15; // [rsp+40h] [rbp-40h] BYREF
  _OWORD v16[2]; // [rsp+50h] [rbp-30h] BYREF
  int v17; // [rsp+70h] [rbp-10h]

  v1 = *(_DWORD **)this;
  v2 = 0;
  v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 120LL) + 32LL);
  v5 = *(_DWORD *)(v4 + 48);
  if ( (v5 & 6) == 0 || v1[23] )
    return v2;
  v7 = v1[3];
  if ( (v7 & 0x4000) != 0 )
    v2 = (v1[89] - 1) / 2;
  if ( (v7 & 0x2000) == 0 )
    return v2;
  v15 = v4;
  if ( (v5 & 4) == 0 )
    return ++v2;
  v17 = 0;
  memset(v16, 0, sizeof(v16));
  EXFORMOBJ::EXFORMOBJ((EXFORMOBJ *)v14, (struct MATRIX *)v16, 8u);
  if ( !v14[0] )
    return 0LL;
  RFONTOBJ::vSetNotionalToDevice(this, (struct EXFORMOBJ *)v14);
  v8 = (__int64)*IFIOBJ::pptlBaseline((IFIOBJ *)&v15);
  v13[0] = (float)(int)v8;
  v13[1] = (float)SHIDWORD(v8);
  if ( (*(_DWORD *)(v14[0] + 32LL) & 2) != 0
    || EXFORMOBJ::bXform((EXFORMOBJ *)v14, (struct VECTORFL *)v13, (struct VECTORFL *)v13, 1uLL) )
  {
    v12 = 0;
    EFLOAT::eqLength(&v12, &v11, v13);
    v11 = 0;
    bFToL(v9, &v11, 0LL);
    v10 = v11;
    if ( !v11 )
      v10 = 1;
    v2 += v10;
    return v2;
  }
  return 1LL;
}
