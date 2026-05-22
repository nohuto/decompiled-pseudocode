/*
 * XREFs of ?OnContextualInput@EdgyProcessorTarget@@QEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1801AD128
 * Callers:
 *     ?OnInput@EdgyLegacyProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1801AA430 (-OnInput@EdgyLegacyProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRespo.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?OnInput@InteractionContext@EdgyProcessorTarget@@QEAAXPEBUPointerInputInfo@@@Z @ 0x1801AD788 (-OnInput@InteractionContext@EdgyProcessorTarget@@QEAAXPEBUPointerInputInfo@@@Z.c)
 *     ?QualifyEdgyInputReport@EdgyProcessorTarget@@IEAA_NPEBUPointerInputInfo@@PEAUEdgyPointerInfo@@@Z @ 0x1801ADB58 (-QualifyEdgyInputReport@EdgyProcessorTarget@@IEAA_NPEBUPointerInputInfo@@PEAUEdgyPointerInfo@@@Z.c)
 *     ?ApplyCachedTarget@EdgyImpl@@QEAAJPEAUContextualProcessorResponse@@@Z @ 0x1801AE0A4 (-ApplyCachedTarget@EdgyImpl@@QEAAJPEAUContextualProcessorResponse@@@Z.c)
 *     ?EnsureInputTargeting@EdgyImpl@@QEAAJPEAUContextualProcessorResponse@@@Z @ 0x1801AE244 (-EnsureInputTargeting@EdgyImpl@@QEAAJPEAUContextualProcessorResponse@@@Z.c)
 *     ?GetCandidateEdgyDetectedInfo@EdgyImpl@@QEAA_NPEAUCandidateEdgyDetectedInfo@@@Z @ 0x1801AE3E4 (-GetCandidateEdgyDetectedInfo@EdgyImpl@@QEAA_NPEAUCandidateEdgyDetectedInfo@@@Z.c)
 *     ?HasCandidates@EdgyImpl@@QEAA_NXZ @ 0x1801AE4B4 (-HasCandidates@EdgyImpl@@QEAA_NXZ.c)
 *     ?Reset@EdgyImpl@@QEAAXXZ @ 0x1801AE630 (-Reset@EdgyImpl@@QEAAXXZ.c)
 *     ?EndCurrentSession@SessionBasedPointerDeviceArbitration@@QEAAJK@Z @ 0x1801CD8AC (-EndCurrentSession@SessionBasedPointerDeviceArbitration@@QEAAJK@Z.c)
 *     ?OnInputReport@SessionBasedPointerDeviceArbitration@@QEAAJPEAUInputInfo@@@Z @ 0x1801CD938 (-OnInputReport@SessionBasedPointerDeviceArbitration@@QEAAJPEAUInputInfo@@@Z.c)
 */

__int64 __fastcall EdgyProcessorTarget::OnContextualInput(
        EdgyProcessorTarget *this,
        struct InputInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorResponse *a4)
{
  __int64 v8; // rdx
  int v9; // ebx
  __int128 v11; // xmm0
  SessionBasedPointerDeviceArbitration *v12; // rcx
  __int128 v13; // xmm1
  int v14; // eax
  unsigned int v15; // esi
  int v16; // edx
  int v17; // r9d
  int v18; // r8d
  int v19; // ecx
  EdgyImpl *v20; // rcx
  __int64 v21; // rcx
  const char *v22; // r9
  __m256i v23; // [rsp+28h] [rbp-29h] BYREF
  __int16 v24; // [rsp+48h] [rbp-9h] BYREF
  __int64 v25; // [rsp+50h] [rbp-1h]
  __int64 v26; // [rsp+58h] [rbp+7h]
  __int64 v27; // [rsp+60h] [rbp+Fh]
  __int128 v28; // [rsp+68h] [rbp+17h]
  __int128 v29; // [rsp+78h] [rbp+27h]
  __int64 v30; // [rsp+88h] [rbp+37h]
  __int64 v31; // [rsp+90h] [rbp+3Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  v23.m256i_i32[0] = -1;
  *(_OWORD *)((char *)v23.m256i_i64 + 4) = 0uLL;
  v23.m256i_i64[3] = 0LL;
  if ( !a2 )
  {
    v8 = 226LL;
LABEL_3:
    v9 = -2147024809;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edgytarget.cpp",
      (const char *)(unsigned int)v9);
    return (unsigned int)v9;
  }
  if ( !a4 )
  {
    v8 = 227LL;
    goto LABEL_3;
  }
  if ( *((_DWORD *)a3 + 26) == 2 )
  {
    if ( *(_QWORD *)(*((_QWORD *)this + 15) + 112LL) )
    {
      *((_DWORD *)a4 + 2) = 2;
      v9 = EdgyImpl::ApplyCachedTarget((EdgyImpl *)(*((_QWORD *)this + 15) + 80LL), a4);
      if ( v9 < 0 )
      {
        v8 = 241LL;
        goto LABEL_4;
      }
      return 0LL;
    }
    goto LABEL_44;
  }
  if ( *((_DWORD *)a3 + 26) == 3 )
  {
LABEL_44:
    *((_DWORD *)a4 + 2) = 3;
    return 0LL;
  }
  if ( !EdgyProcessorTarget::QualifyEdgyInputReport(this, a2, (struct EdgyPointerInfo *)&v23) )
  {
    *((_DWORD *)this + 8) = 1;
LABEL_34:
    *((_DWORD *)a4 + 2) = 0;
    v9 = SessionBasedPointerDeviceArbitration::EndCurrentSession(
           *((SessionBasedPointerDeviceArbitration **)this + 17),
           *((_DWORD *)a2 + 1));
    if ( v9 < 0 )
    {
      v8 = 406LL;
      goto LABEL_4;
    }
    return 0LL;
  }
  v11 = *(_OWORD *)v23.m256i_i8;
  v12 = (SessionBasedPointerDeviceArbitration *)*((_QWORD *)this + 17);
  v13 = *(_OWORD *)&v23.m256i_u64[2];
  *((_DWORD *)this + 9) = *((_DWORD *)a3 + 26);
  *((_OWORD *)this + 3) = v11;
  *((_OWORD *)this + 4) = v13;
  v14 = SessionBasedPointerDeviceArbitration::OnInputReport(v12, a2);
  v15 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x116,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edgytarget.cpp",
      (const char *)(unsigned int)v14);
    return v15;
  }
  v16 = *((_DWORD *)this + 8);
  v17 = v16;
  if ( v16 != 1 )
  {
    EdgyProcessorTarget::InteractionContext::OnInput((EdgyProcessorTarget *)((char *)this + 168), a2);
    v16 = *((_DWORD *)this + 8);
    v17 = v16;
  }
  v18 = v16;
  v19 = v17;
  if ( v16 != 1 && *((_DWORD *)a2 + 2) >= *((_DWORD *)this + 10) && !v16 )
  {
    v20 = (EdgyImpl *)(*((_QWORD *)this + 15) + 80LL);
    *((_DWORD *)this + 8) = 1;
    EdgyImpl::Reset(v20);
    v18 = *((_DWORD *)this + 8);
    v19 = v18;
  }
  if ( v18 == 3 )
  {
    v21 = *((_QWORD *)this + 15);
    v24 = 0;
    v25 = 0LL;
    v26 = 0LL;
    v27 = 0LL;
    v28 = 0LL;
    v30 = 0LL;
    v29 = 0LL;
    v31 = 0LL;
    if ( EdgyImpl::GetCandidateEdgyDetectedInfo((EdgyImpl *)(v21 + 80), (struct CandidateEdgyDetectedInfo *)&v24) )
    {
      if ( !v25 )
        *((_DWORD *)this + 8) = 2;
    }
    else
    {
      *((_DWORD *)this + 8) = 1;
      *((_DWORD *)this + 20) = -1;
      *(_QWORD *)((char *)this + 84) = 0LL;
      *(_QWORD *)((char *)this + 92) = 0LL;
      *((_QWORD *)this + 13) = 0LL;
      EdgyImpl::Reset((EdgyImpl *)(*((_QWORD *)this + 15) + 80LL));
    }
    v19 = *((_DWORD *)this + 8);
  }
  if ( v19 == 2 )
  {
    if ( EdgyImpl::EnsureInputTargeting((EdgyImpl *)(*((_QWORD *)this + 15) + 80LL), a4) >= 0 )
    {
      if ( *((_DWORD *)a4 + 2) == 1 )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          343LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edgytarget.cpp",
          v22);
    }
    else
    {
      *((_DWORD *)a4 + 2) = 0;
    }
    v9 = SessionBasedPointerDeviceArbitration::EndCurrentSession(
           *((SessionBasedPointerDeviceArbitration **)this + 17),
           *((_DWORD *)a2 + 1));
    if ( v9 < 0 )
    {
      v8 = 357LL;
      goto LABEL_4;
    }
    return 0LL;
  }
  if ( v19 && v19 != 3 )
    goto LABEL_34;
  if ( EdgyImpl::HasCandidates((EdgyImpl *)(*((_QWORD *)this + 15) + 80LL)) && (*((_BYTE *)a2 + 332) & 4) != 0 )
  {
    *((_DWORD *)a4 + 2) = 1;
  }
  else
  {
    *((_DWORD *)a4 + 2) = 0;
    v9 = SessionBasedPointerDeviceArbitration::EndCurrentSession(
           *((SessionBasedPointerDeviceArbitration **)this + 17),
           *((_DWORD *)a2 + 1));
    if ( v9 < 0 )
    {
      v8 = 383LL;
      goto LABEL_4;
    }
  }
  return 0LL;
}
