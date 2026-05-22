/*
 * XREFs of ??$_Emplace_reallocate@AEBM@?$vector@MV?$allocator@M@std@@@std@@QEAAPEAMQEAMAEBM@Z @ 0x18016FC80
 * Callers:
 *     ?Append@?$VectorBasedCollection@M@Composition@UI@Windows@@QEAAJM@Z @ 0x18017066C (-Append@-$VectorBasedCollection@M@Composition@UI@Windows@@QEAAJM@Z.c)
 *     ?InsertAt@?$VectorBasedCollection@M@Composition@UI@Windows@@QEAAJIM@Z @ 0x1801710EC (-InsertAt@-$VectorBasedCollection@M@Composition@UI@Windows@@QEAAJIM@Z.c)
 *     ?CalcAverageAppCommitLatency@CTouchFrameStats@@IEBAMXZ @ 0x1801A6CF8 (-CalcAverageAppCommitLatency@CTouchFrameStats@@IEBAMXZ.c)
 *     ?CalcAverageAppDeliveryLatency@CTouchFrameStats@@IEBAMXZ @ 0x1801A6E54 (-CalcAverageAppDeliveryLatency@CTouchFrameStats@@IEBAMXZ.c)
 *     ?CalcAverageAppInputLatency@CTouchFrameStats@@IEBAMXZ @ 0x1801A6FB0 (-CalcAverageAppInputLatency@CTouchFrameStats@@IEBAMXZ.c)
 *     ?CalcAverageAppLatency@CTouchFrameStats@@IEBAMXZ @ 0x1801A7114 (-CalcAverageAppLatency@CTouchFrameStats@@IEBAMXZ.c)
 *     ?CalcAverageDwmPresentLatency@CTouchFrameStats@@IEBAMXZ @ 0x1801A7270 (-CalcAverageDwmPresentLatency@CTouchFrameStats@@IEBAMXZ.c)
 *     ?CalcAverageDwmRenderLatency@CTouchFrameStats@@IEBAMXZ @ 0x1801A73E0 (-CalcAverageDwmRenderLatency@CTouchFrameStats@@IEBAMXZ.c)
 *     ?CalcAverageGestureTargetingLatency@CTouchFrameStats@@IEBAMXZ @ 0x1801A7550 (-CalcAverageGestureTargetingLatency@CTouchFrameStats@@IEBAMXZ.c)
 *     ?CalcAverageInputProcessorLatency@CTouchFrameStats@@IEBAMXZ @ 0x1801A76AC (-CalcAverageInputProcessorLatency@CTouchFrameStats@@IEBAMXZ.c)
 *     ?CalcAverageIsmLatency@CTouchFrameStats@@IEBAMXZ @ 0x1801A7808 (-CalcAverageIsmLatency@CTouchFrameStats@@IEBAMXZ.c)
 *     ?CalcAverageRimQueueLatency@CTouchFrameStats@@IEBAMXZ @ 0x1801A7964 (-CalcAverageRimQueueLatency@CTouchFrameStats@@IEBAMXZ.c)
 *     ?CalcAverageRimReadLatency@CTouchFrameStats@@IEBAMXZ @ 0x1801A7AC8 (-CalcAverageRimReadLatency@CTouchFrameStats@@IEBAMXZ.c)
 *     ?CalcAverageRimSignalLatency@CTouchFrameStats@@IEBAMXZ @ 0x1801A7C24 (-CalcAverageRimSignalLatency@CTouchFrameStats@@IEBAMXZ.c)
 *     ?CalcAverageTotalLatency@CTouchFrameStats@@IEBAMW4__MIDL___MIDL_itf_touchtelemetry_0000_0000_0006@@@Z @ 0x1801A7D80 (-CalcAverageTotalLatency@CTouchFrameStats@@IEBAMW4__MIDL___MIDL_itf_touchtelemetry_0000_0000_000.c)
 *     ?CalcAverageVSyncsMissed@CTouchFrameStats@@IEBAMXZ @ 0x1801A7EF0 (-CalcAverageVSyncsMissed@CTouchFrameStats@@IEBAMXZ.c)
 *     ?TargetAverageGlitchDuration@CCompFrameStats@@UEBAMAEBUtagCOMPOSITION_TARGET_ID@@PEAM_K2@Z @ 0x1801A9910 (-TargetAverageGlitchDuration@CCompFrameStats@@UEBAMAEBUtagCOMPOSITION_TARGET_ID@@PEAM_K2@Z.c)
 * Callees:
 *     ??$_Get_size_of_n@$03@std@@YA_K_K@Z @ 0x18004490C (--$_Get_size_of_n@$03@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180046CF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x1800A8138 (memmove_0.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x1801004AC (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 *     ?_Change_array@?$vector@MV?$allocator@M@std@@@std@@AEAAXQEAM_K1@Z @ 0x180171928 (-_Change_array@-$vector@MV-$allocator@M@std@@@std@@AEAAXQEAM_K1@Z.c)
 */

char *__fastcall std::vector<float>::_Emplace_reallocate<float const &>(__int64 a1, _BYTE *a2, _DWORD *a3)
{
  unsigned __int64 v3; // rbx
  __int64 v5; // r14
  __int64 v7; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  SIZE_T size_of; // rax
  char *v13; // rsi
  char *v14; // r14
  void *v15; // rcx
  _BYTE *v16; // r8
  _BYTE *v17; // rdx
  size_t v18; // r8

  v3 = 0x3FFFFFFFFFFFFFFFLL;
  v5 = (__int64)&a2[-*(_QWORD *)a1] >> 2;
  v7 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 2;
  if ( v7 == 0x3FFFFFFFFFFFFFFFLL )
    std::_Dwm_Xlength_error((const char *)a1);
  v9 = v7 + 1;
  v10 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 2;
  v11 = v10 >> 1;
  if ( v10 <= 0x3FFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v7 + 1;
  }
  size_of = std::_Get_size_of_n<4>(v3);
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = &v13[4 * v5];
  *(_DWORD *)v14 = *a3;
  v15 = v13;
  v16 = *(_BYTE **)(a1 + 8);
  v17 = *(_BYTE **)a1;
  if ( a2 == v16 )
  {
    v18 = v16 - v17;
  }
  else
  {
    memmove_0(v13, v17, (size_t)&a2[-*(_QWORD *)a1]);
    v15 = v14 + 4;
    v18 = *(_QWORD *)(a1 + 8) - (_QWORD)a2;
    v17 = a2;
  }
  memmove_0(v15, v17, v18);
  std::vector<float>::_Change_array(a1, v13, v9, v3);
  return v14;
}
