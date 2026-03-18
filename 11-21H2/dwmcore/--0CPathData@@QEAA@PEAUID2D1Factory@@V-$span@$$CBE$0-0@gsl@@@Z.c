/*
 * XREFs of ??0CPathData@@QEAA@PEAUID2D1Factory@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x1800CE838
 * Callers:
 *     ?ProcessSetPath@CPathGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PATHGEOMETRY_SETPATH@@@Z @ 0x1800CE460 (-ProcessSetPath@CPathGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PATHGEOMETRY_SETPATH@@@Z.c)
 *     ?GetSimplifiedPathDataInternal@CShape@@MEBAJPEAPEAVCPathData@@@Z @ 0x1801909C0 (-GetSimplifiedPathDataInternal@CShape@@MEBAJPEAPEAVCPathData@@@Z.c)
 *     ?ProcessSetPathData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION_SETPATHDATA@@PEBXI@Z @ 0x1802225B8 (-ProcessSetPathData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION.c)
 *     ?GetShapeDataCore@CLineGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180224340 (-GetShapeDataCore@CLineGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?Simplify@CPathData@@QEBAJPEAPEAV1@@Z @ 0x1802700F8 (-Simplify@CPathData@@QEBAJPEAPEAV1@@Z.c)
 *     ?Trim@CTrimPathOperation@@QEAAJPEBVCPathData@@MMMPEAPEAV2@@Z @ 0x1802A0C90 (-Trim@CTrimPathOperation@@QEAAJPEBVCPathData@@MMMPEAPEAV2@@Z.c)
 * Callees:
 *     ??$insert@V?$span_iterator@$$CBE@details@gsl@@$0A@@?$vector@EV?$allocator@E@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@E@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@E@std@@@std@@@1@V?$span_iterator@$$CBE@details@gsl@@1@Z @ 0x1800CE938 (--$insert@V-$span_iterator@$$CBE@details@gsl@@$0A@@-$vector@EV-$allocator@E@std@@@std@@QEAA-AV-$.c)
 *     ?reserve@?$vector@EV?$allocator@E@std@@@std@@QEAAX_K@Z @ 0x1800CEA58 (-reserve@-$vector@EV-$allocator@E@std@@@std@@QEAAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CPathData::CPathData(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rsi
  __int64 v6; // rbx
  __int64 v7; // r8
  __int64 v8; // xmm1_8
  __int128 v10; // [rsp+30h] [rbp-19h] BYREF
  __int64 v11; // [rsp+40h] [rbp-9h]
  __int128 v12; // [rsp+50h] [rbp+7h]
  __int64 v13; // [rsp+60h] [rbp+17h]
  __int128 v14; // [rsp+70h] [rbp+27h] BYREF
  __int64 v15; // [rsp+80h] [rbp+37h]
  char v16; // [rsp+B0h] [rbp+67h] BYREF

  v3 = a1 + 16;
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = &CPathData::`vftable';
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  *(_QWORD *)(a1 + 52) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_BYTE *)(a1 + 72) = 0;
  v6 = *a3;
  std::vector<unsigned char>::reserve(v3, *a3);
  v7 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)&v10 = a3[1];
  *(_QWORD *)&v12 = v10;
  v13 = v10;
  *((_QWORD *)&v10 + 1) = v6 + v10;
  *((_QWORD *)&v12 + 1) = v6 + v10;
  v14 = v10;
  v15 = v6 + v10;
  v8 = v10;
  v10 = v12;
  v11 = v8;
  std::vector<unsigned char>::insert<gsl::details::span_iterator<unsigned char const>,0>(v3, &v16, v7, &v10, &v14);
  return a1;
}
