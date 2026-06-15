/*
 * XREFs of ?SwapRTPointer@?$CRealTimeSafeStruct@VCProcessingData@@$00@@IEAAJXZ @ 0x14000C3DC
 * Callers:
 *     ?CommitGraphChanges@CAudioProcessor@@UEAAJ_K@Z @ 0x14000EF90 (-CommitGraphChanges@CAudioProcessor@@UEAAJ_K@Z.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAXXZ @ 0x14000B15C (-RemoveAll@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAXXZ.c)
 *     ?RemoveAll@?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@QEAAXXZ @ 0x14000BCC0 (-RemoveAll@-$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@QEAAXXZ.c)
 *     ?CopyEndpointList@CProcessingData@@AEAAXAEAV?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@AEBV23@@Z @ 0x14000C580 (-CopyEndpointList@CProcessingData@@AEAAXAEAV-$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTrai.c)
 *     ?CopyAPOList@CProcessingData@@AEAAXAEAV?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@AEBV23@@Z @ 0x14000FDA0 (-CopyAPOList@CProcessingData@@AEAAXAEAV-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@AEBV23@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1400265D0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ContinueWaitingForRTActive@?$CRealTimeSafeStruct@VCProcessingData@@$00@@IEAAJXZ @ 0x140081FC8 (-ContinueWaitingForRTActive@-$CRealTimeSafeStruct@VCProcessingData@@$00@@IEAAJXZ.c)
 *     ?Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x14008231C (-Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CRealTimeSafeStruct<CProcessingData,1>::SwapRTPointer(__int64 a1)
{
  int v2; // r14d
  __int64 v3; // rdx
  __int64 v4; // r8
  signed __int64 v5; // rax
  signed __int64 i; // rcx
  signed __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v13; // eax
  unsigned int v14; // esi
  __int64 v15; // rcx
  __int64 v16; // rdx
  int v17; // [rsp+20h] [rbp-C8h]
  const char *v18; // [rsp+28h] [rbp-C0h]
  __int128 v19; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v20; // [rsp+40h] [rbp-A8h]
  __int64 v21; // [rsp+48h] [rbp-A0h]
  __int64 v22; // [rsp+50h] [rbp-98h]
  int v23; // [rsp+58h] [rbp-90h]
  __int128 v24; // [rsp+60h] [rbp-88h] BYREF
  __int64 v25; // [rsp+70h] [rbp-78h]
  __int64 v26; // [rsp+78h] [rbp-70h]
  __int64 v27; // [rsp+80h] [rbp-68h]
  int v28; // [rsp+88h] [rbp-60h]
  __int128 v29; // [rsp+90h] [rbp-58h] BYREF
  __int64 v30; // [rsp+A0h] [rbp-48h]
  __int64 v31; // [rsp+A8h] [rbp-40h]
  __int64 v32; // [rsp+B0h] [rbp-38h]
  int v33; // [rsp+B8h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+0h]

  v2 = 0;
  v3 = *(unsigned __int16 *)(a1 + 328);
  v4 = *(_QWORD *)(a1 + 320);
  v5 = v4 ^ (a1 + 144 * v3);
  for ( i = v4 ^ (a1 + 144 * (v3 ^ 1)); ; i = v16 ^ (a1 + 144 * (v15 ^ 1)) )
  {
    v7 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 288), i, v5);
    if ( v7 )
      break;
    v13 = CRealTimeSafeStruct<CProcessingData,1>::ContinueWaitingForRTActive(a1);
    v14 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1BD,
        (unsigned int)"avcore\\audiocore\\Engine\\Include\\RealTimeSafeStruct.h",
        (const char *)(unsigned int)v13,
        v17);
      return v14;
    }
    ++v2;
    if ( v2 == 100 * (v2 / 100) )
      wil::details::in1diag3::Log_HrMsg(
        retaddr,
        (void *)0x1C1,
        (unsigned int)"avcore\\audiocore\\Engine\\Include\\RealTimeSafeStruct.h",
        (const char *)0x887C0033LL,
        (int)"Non-fatal. Will continue waiting for RT thread...",
        v18);
    v15 = *(unsigned __int16 *)(a1 + 328);
    v16 = *(_QWORD *)(a1 + 320);
    v5 = v16 ^ (a1 + 144 * v15);
  }
  *(_BYTE *)(a1 + 376) = 1;
  v8 = *(unsigned __int16 *)(a1 + 328);
  if ( v7 == (*(_QWORD *)(a1 + 320) ^ (a1 + 144 * v8)) )
  {
    LOWORD(v8) = v8 ^ 1;
    *(_WORD *)(a1 + 328) = v8;
    v19 = 0LL;
    v20 = 0LL;
    v21 = 0LL;
    v22 = 0LL;
    v23 = 10;
    v24 = 0LL;
    v25 = 0LL;
    v26 = 0LL;
    v27 = 0LL;
    v28 = 10;
    v29 = 0LL;
    v30 = 0LL;
    v31 = 0LL;
    v32 = 0LL;
    v33 = 10;
    v9 = a1 + 144 * (*(unsigned __int16 *)(a1 + 328) ^ 1LL);
    CProcessingData::CopyAPOList(v8, v9, &v19);
    CProcessingData::CopyEndpointList(v10, v9 + 48, &v24);
    CProcessingData::CopyEndpointList(v11, v9 + 96, &v29);
    ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>::RemoveAll((__int64 *)&v29);
    ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>::RemoveAll((__int64 *)&v24);
    ATL::CAtlList<CAPONode *,CAPONodeTraits>::RemoveAll((__int64)&v19);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1D2,
      (unsigned int)"avcore\\audiocore\\Engine\\Include\\RealTimeSafeStruct.h",
      (const char *)0x8000000CLL,
      v17);
    return 2147483660LL;
  }
}
