/*
 * XREFs of _lambda_52b218abed3a9faf511895c4c218b272_::operator() @ 0x1800688A0
 * Callers:
 *     ?AugmentOEMSpeechProcessingSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x1800469F8 (-AugmentOEMSpeechProcessingSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengin.c)
 *     _lambda_d964387455321ab6cd7bc18fda753d22_::operator() @ 0x1800692D8 (_lambda_d964387455321ab6cd7bc18fda753d22_--operator().c)
 * Callees:
 *     ??A?$span@VCAudioSignalProcessingModeMap@@$0?0@gsl@@QEBAAEAVCAudioSignalProcessingModeMap@@_K@Z @ 0x18000ED54 (--A-$span@VCAudioSignalProcessingModeMap@@$0-0@gsl@@QEBAAEAVCAudioSignalProcessingModeMap@@_K@Z.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x18000F714 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ??A?$span@VCAudioSignalProcessingModeArray@@$0?0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_K@Z @ 0x18001058C (--A-$span@VCAudioSignalProcessingModeArray@@$0-0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_.c)
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x180048F04 (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x18004A0DC (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Add@?$CSimpleMap@U_GUID@@U1@V?$CSimpleMapEqualHelper@U_GUID@@U1@@ATL@@@ATL@@QEAAHAEBU_GUID@@0@Z @ 0x180144C78 (-Add@-$CSimpleMap@U_GUID@@U1@V-$CSimpleMapEqualHelper@U_GUID@@U1@@ATL@@@ATL@@QEAAHAEBU_GUID@@0@Z.c)
 *     ?Remove@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x18014BF28 (-Remove@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x18014DFC8 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 __fastcall lambda_52b218abed3a9faf511895c4c218b272_::operator()(int *a1)
{
  unsigned __int64 *v2; // rcx
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rdx
  unsigned int v9; // ebx
  __int64 *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rax
  int v20; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (unsigned __int64 *)*((_QWORD *)a1 + 3);
  v3 = *a1;
  if ( v3 >= v2[8] )
    goto LABEL_23;
  v4 = v2[9];
  if ( *(_DWORD *)(v4 + 4 * v3) )
  {
    if ( *a1
      && (v11 = (__int64 *)gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](v2 + 19, v3),
          (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                          v11,
                          &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3) == -1) )
    {
      if ( *a1 != 3 )
      {
        v9 = -2147418113;
        v8 = 2192LL;
        goto LABEL_6;
      }
      v12 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](
              (unsigned __int64 *)(*((_QWORD *)a1 + 3) + 152LL),
              3uLL);
      if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Remove(v12, a1 + 1) )
      {
        v9 = -2147418113;
        v8 = 2185LL;
        goto LABEL_6;
      }
      v13 = gsl::span<CAudioSignalProcessingModeMap,-1>::operator[](
              (unsigned __int64 *)(*((_QWORD *)a1 + 3) + 1856LL),
              *a1);
      if ( !(unsigned int)ATL::CSimpleMap<_GUID,_GUID,ATL::CSimpleMapEqualHelper<_GUID,_GUID>>::Add(v13, v14, a1 + 1) )
      {
        v8 = 2187LL;
        goto LABEL_5;
      }
    }
    else
    {
      v15 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](
              (unsigned __int64 *)(*((_QWORD *)a1 + 3) + 152LL),
              *a1);
      if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Remove(
                            v15,
                            &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3) )
      {
        v9 = -2147418113;
        v8 = 2177LL;
        goto LABEL_6;
      }
      v16 = gsl::span<CAudioSignalProcessingModeMap,-1>::operator[](
              (unsigned __int64 *)(*((_QWORD *)a1 + 3) + 1856LL),
              *a1);
      if ( !(unsigned int)ATL::CSimpleMap<_GUID,_GUID,ATL::CSimpleMapEqualHelper<_GUID,_GUID>>::Add(
                            v16,
                            v17,
                            &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3) )
      {
        v8 = 2179LL;
        goto LABEL_5;
      }
    }
  }
  else
  {
    *(_DWORD *)(v4 + 4 * v3) = 1;
    v5 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](v2 + 19, v3);
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(v5);
    v6 = gsl::span<CAudioSignalProcessingModeMap,-1>::operator[](
           (unsigned __int64 *)(*((_QWORD *)a1 + 3) + 1856LL),
           *a1);
    if ( !(unsigned int)ATL::CSimpleMap<_GUID,_GUID,ATL::CSimpleMapEqualHelper<_GUID,_GUID>>::Add(
                          v6,
                          v7,
                          &GUID_00000000_0000_0000_0000_000000000000) )
    {
      v8 = 2170LL;
LABEL_5:
      v9 = -2147024882;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)v9,
        v20);
      return v9;
    }
  }
  v18 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](
          (unsigned __int64 *)(*((_QWORD *)a1 + 3) + 152LL),
          *a1);
  if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(
                        v18,
                        &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf) )
  {
    v8 = 2196LL;
    goto LABEL_5;
  }
  v19 = *((_QWORD *)a1 + 3);
  v2 = (unsigned __int64 *)*a1;
  if ( (unsigned __int64)v2 >= *(_QWORD *)(v19 + 1840) )
  {
LABEL_23:
    gsl::details::terminate((gsl::details *)v2);
    JUMPOUT(0x180068A86LL);
  }
  *(_DWORD *)(*(_QWORD *)(v19 + 1848) + 4LL * (_QWORD)v2) = 1;
  return 0LL;
}
