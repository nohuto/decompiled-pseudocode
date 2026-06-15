/*
 * XREFs of _lambda_7fbb2555f01c0941137ea12a577c6f73_::operator() @ 0x1800746B0
 * Callers:
 *     ?AugmentOEMSpeechProcessingSupport@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x18003FE74 (-AugmentOEMSpeechProcessingSupport@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 *     _lambda_cafd355bc8518bdbec11f1f0c823a855_::operator() @ 0x180075148 (_lambda_cafd355bc8518bdbec11f1f0c823a855_--operator().c)
 * Callees:
 *     ??A?$span@VCAudioSignalProcessingModeMap@@$0?0@gsl@@QEBAAEAVCAudioSignalProcessingModeMap@@_K@Z @ 0x18000E62C (--A-$span@VCAudioSignalProcessingModeMap@@$0-0@gsl@@QEBAAEAVCAudioSignalProcessingModeMap@@_K@Z.c)
 *     ??A?$span@VCAudioSignalProcessingModeArray@@$0?0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_K@Z @ 0x18002C970 (--A-$span@VCAudioSignalProcessingModeArray@@$0-0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x18002EC18 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x1800314FC (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x18003CF74 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?Add@?$CSimpleMap@U_GUID@@U1@V?$CSimpleMapEqualHelper@U_GUID@@U1@@ATL@@@ATL@@QEAAHAEBU_GUID@@0@Z @ 0x18005493C (-Add@-$CSimpleMap@U_GUID@@U1@V-$CSimpleMapEqualHelper@U_GUID@@U1@@ATL@@@ATL@@QEAAHAEBU_GUID@@0@Z.c)
 *     ?Remove@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x18014EB0C (-Remove@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180150E44 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 __fastcall lambda_7fbb2555f01c0941137ea12a577c6f73_::operator()(int *a1)
{
  unsigned __int64 *v2; // rcx
  unsigned __int64 v3; // rdx
  __int64 *v4; // rax
  int v5; // r14d
  __int64 *v6; // rax
  int v7; // eax
  _QWORD *v8; // r8
  int v9; // ebp
  unsigned __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 *v13; // rcx
  __int64 v14; // rdx
  unsigned int v15; // ebx
  __int64 *v17; // rax
  __int64 v18; // rax
  __int64 *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (unsigned __int64 *)*((_QWORD *)a1 + 3);
  v3 = *a1;
  if ( v3 >= v2[164] )
    goto LABEL_28;
  if ( *(_DWORD *)(v2[165] + 4 * v3) )
  {
    if ( *a1
      && (v17 = (__int64 *)gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](v2 + 174, v3),
          (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                          v17,
                          &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3) == -1) )
    {
      if ( *a1 != 3 )
      {
        v15 = -2147418113;
        v14 = 2910LL;
        goto LABEL_9;
      }
      v18 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](
              (unsigned __int64 *)(*((_QWORD *)a1 + 3) + 1392LL),
              3uLL);
      if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Remove(v18, a1 + 1) )
      {
        v15 = -2147418113;
        v14 = 2903LL;
        goto LABEL_9;
      }
      v19 = (__int64 *)gsl::span<CAudioSignalProcessingModeMap,-1>::operator[](
                         (unsigned __int64 *)(*((_QWORD *)a1 + 3) + 1536LL),
                         *a1);
      if ( !(unsigned int)ATL::CSimpleMap<_GUID,_GUID,ATL::CSimpleMapEqualHelper<_GUID,_GUID>>::Add(v19, v20, a1 + 1) )
      {
        v14 = 2905LL;
        goto LABEL_8;
      }
    }
    else
    {
      v21 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](
              (unsigned __int64 *)(*((_QWORD *)a1 + 3) + 1392LL),
              *a1);
      if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Remove(
                            v21,
                            &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3) )
      {
        v15 = -2147418113;
        v14 = 2895LL;
        goto LABEL_9;
      }
      v22 = (__int64 *)gsl::span<CAudioSignalProcessingModeMap,-1>::operator[](
                         (unsigned __int64 *)(*((_QWORD *)a1 + 3) + 1536LL),
                         *a1);
      if ( !(unsigned int)ATL::CSimpleMap<_GUID,_GUID,ATL::CSimpleMapEqualHelper<_GUID,_GUID>>::Add(
                            v22,
                            v23,
                            &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3) )
      {
        v14 = 2897LL;
        goto LABEL_8;
      }
    }
  }
  else
  {
    v4 = (__int64 *)gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](v2 + 174, v3);
    v5 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
           v4,
           &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf);
    v6 = (__int64 *)gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](
                      (unsigned __int64 *)(*((_QWORD *)a1 + 3) + 1392LL),
                      *a1);
    v7 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
           v6,
           &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3);
    v8 = (_QWORD *)*((_QWORD *)a1 + 3);
    v9 = v7;
    v10 = *a1;
    if ( v10 >= v8[164] )
      goto LABEL_28;
    *(_DWORD *)(v8[165] + 4 * v10) = 1;
    v11 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](v8 + 174, v10);
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(v11);
    if ( v5 == -1 )
    {
      v13 = (__int64 *)gsl::span<CAudioSignalProcessingModeMap,-1>::operator[](
                         (unsigned __int64 *)(*((_QWORD *)a1 + 3) + 1536LL),
                         *a1);
      if ( v9 == -1 )
      {
        if ( !(unsigned int)ATL::CSimpleMap<_GUID,_GUID,ATL::CSimpleMapEqualHelper<_GUID,_GUID>>::Add(
                              v13,
                              v12,
                              &GUID_00000000_0000_0000_0000_000000000000) )
        {
          v14 = 2887LL;
          goto LABEL_8;
        }
      }
      else if ( !(unsigned int)ATL::CSimpleMap<_GUID,_GUID,ATL::CSimpleMapEqualHelper<_GUID,_GUID>>::Add(
                                 v13,
                                 v12,
                                 &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3) )
      {
        v14 = 2883LL;
LABEL_8:
        v15 = -2147024882;
LABEL_9:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v14,
          (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)v15);
        return v15;
      }
    }
  }
  v24 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](
          (unsigned __int64 *)(*((_QWORD *)a1 + 3) + 1392LL),
          *a1);
  if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(
                        v24,
                        &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf) )
  {
    v14 = 2914LL;
    goto LABEL_8;
  }
  v25 = *((_QWORD *)a1 + 3);
  v2 = (unsigned __int64 *)*a1;
  if ( (unsigned __int64)v2 >= *(_QWORD *)(v25 + 1424) )
  {
LABEL_28:
    gsl::details::terminate((gsl::details *)v2);
    JUMPOUT(0x180074944LL);
  }
  *(_DWORD *)(*(_QWORD *)(v25 + 1432) + 4LL * (_QWORD)v2) = 1;
  return 0LL;
}
