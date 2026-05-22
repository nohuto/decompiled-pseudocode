/*
 * XREFs of ?OnContextualInput@EdgyProcessorTarget@@QEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1801CB51C
 * Callers:
 *     ?OnInput@EdgyLegacyProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1801C8810 (-OnInput@EdgyLegacyProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRespo.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?OnInput@InteractionContext@EdgyProcessorTarget@@QEAAXPEBUPointerInputInfo@@@Z @ 0x1801CBB98 (-OnInput@InteractionContext@EdgyProcessorTarget@@QEAAXPEBUPointerInputInfo@@@Z.c)
 *     ?QualifyEdgyInputReport@EdgyProcessorTarget@@IEAA_NPEBUPointerInputInfo@@PEAUEdgyPointerInfo@@@Z @ 0x1801CBF68 (-QualifyEdgyInputReport@EdgyProcessorTarget@@IEAA_NPEBUPointerInputInfo@@PEAUEdgyPointerInfo@@@Z.c)
 *     ?ApplyCachedTarget@EdgyImpl@@QEAAJPEAUContextualProcessorResponse@@@Z @ 0x1801CC4C4 (-ApplyCachedTarget@EdgyImpl@@QEAAJPEAUContextualProcessorResponse@@@Z.c)
 *     ?EnsureInputTargeting@EdgyImpl@@QEAAJPEAUContextualProcessorResponse@@@Z @ 0x1801CC664 (-EnsureInputTargeting@EdgyImpl@@QEAAJPEAUContextualProcessorResponse@@@Z.c)
 *     ?GetCandidateEdgyDetectedInfo@EdgyImpl@@QEAA_NPEAUCandidateEdgyDetectedInfo@@@Z @ 0x1801CC800 (-GetCandidateEdgyDetectedInfo@EdgyImpl@@QEAA_NPEAUCandidateEdgyDetectedInfo@@@Z.c)
 *     ?HasCandidates@EdgyImpl@@QEAA_NXZ @ 0x1801CC8D0 (-HasCandidates@EdgyImpl@@QEAA_NXZ.c)
 *     ?Reset@EdgyImpl@@QEAAXXZ @ 0x1801CCA54 (-Reset@EdgyImpl@@QEAAXXZ.c)
 *     ?EndCurrentSession@SessionBasedPointerDeviceArbitration@@QEAAJK@Z @ 0x1801EC9DC (-EndCurrentSession@SessionBasedPointerDeviceArbitration@@QEAAJK@Z.c)
 *     ?OnInputReport@SessionBasedPointerDeviceArbitration@@QEAAJPEAUInputInfo@@@Z @ 0x1801ECA68 (-OnInputReport@SessionBasedPointerDeviceArbitration@@QEAAJPEAUInputInfo@@@Z.c)
 */

__int64 __fastcall EdgyProcessorTarget::OnContextualInput(
        EdgyProcessorTarget *this,
        struct InputInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorResponse *a4)
{
  __int64 v8; // rdx
  int v9; // ebx
  SessionBasedPointerDeviceArbitration **v11; // r13
  _DWORD *v12; // rsi
  __int128 v13; // xmm0
  SessionBasedPointerDeviceArbitration *v14; // rcx
  __int128 v15; // xmm1
  int v16; // eax
  unsigned int v17; // esi
  _DWORD *v18; // r12
  EdgyImpl *v19; // rcx
  __int64 v20; // rcx
  const char *v21; // r9
  __m256i v22; // [rsp+28h] [rbp-39h] BYREF
  __int16 v23; // [rsp+48h] [rbp-19h] BYREF
  __int64 v24; // [rsp+50h] [rbp-11h]
  __int64 v25; // [rsp+58h] [rbp-9h]
  __int64 v26; // [rsp+60h] [rbp-1h]
  __int128 v27; // [rsp+68h] [rbp+7h]
  __int128 v28; // [rsp+78h] [rbp+17h]
  __int64 v29; // [rsp+88h] [rbp+27h]
  __int64 v30; // [rsp+90h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  v22.m256i_i32[0] = -1;
  *(_OWORD *)((char *)v22.m256i_i64 + 4) = 0uLL;
  v22.m256i_i64[3] = 0LL;
  if ( !a2 )
  {
    v8 = 226LL;
LABEL_3:
    v9 = -2147024809;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edgytarget.cpp",
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
    goto LABEL_43;
  }
  if ( *((_DWORD *)a3 + 26) == 3 )
  {
LABEL_43:
    *((_DWORD *)a4 + 2) = 3;
    return 0LL;
  }
  v11 = (SessionBasedPointerDeviceArbitration **)((char *)this + 136);
  if ( EdgyProcessorTarget::QualifyEdgyInputReport(this, a2, (struct EdgyPointerInfo *)&v22) )
  {
    v13 = *(_OWORD *)v22.m256i_i8;
    v14 = *v11;
    v15 = *(_OWORD *)&v22.m256i_u64[2];
    *((_DWORD *)this + 9) = *((_DWORD *)a3 + 26);
    *((_OWORD *)this + 3) = v13;
    *((_OWORD *)this + 4) = v15;
    v16 = SessionBasedPointerDeviceArbitration::OnInputReport(v14, a2);
    v17 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x116,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edgytarget.cpp",
        (const char *)(unsigned int)v16);
      return v17;
    }
    v18 = (_DWORD *)((char *)this + 32);
    if ( *((_DWORD *)this + 8) != 1 )
      EdgyProcessorTarget::InteractionContext::OnInput((EdgyProcessorTarget *)((char *)this + 168), a2);
    v12 = (_DWORD *)((char *)this + 32);
    if ( *v18 != 1 )
    {
      v11 = (SessionBasedPointerDeviceArbitration **)((char *)this + 136);
      if ( *((_DWORD *)a2 + 2) >= *((_DWORD *)this + 10) && !*v18 )
      {
        v19 = (EdgyImpl *)(*((_QWORD *)this + 15) + 80LL);
        *v18 = 1;
        EdgyImpl::Reset(v19);
        v11 = (SessionBasedPointerDeviceArbitration **)((char *)this + 136);
      }
    }
  }
  else
  {
    v12 = (_DWORD *)((char *)this + 32);
    *((_DWORD *)this + 8) = 1;
  }
  if ( *v12 == 3 )
  {
    v20 = *((_QWORD *)this + 15);
    v23 = 0;
    v26 = 0LL;
    v24 = 0LL;
    v25 = 0LL;
    v27 = 0LL;
    v29 = 0LL;
    v28 = 0LL;
    v30 = 0LL;
    if ( EdgyImpl::GetCandidateEdgyDetectedInfo((EdgyImpl *)(v20 + 80), (struct CandidateEdgyDetectedInfo *)&v23) )
    {
      if ( !v24 )
        *v12 = 2;
    }
    else
    {
      *v12 = 1;
      *((_DWORD *)this + 20) = -1;
      *(_QWORD *)((char *)this + 84) = 0LL;
      *(_QWORD *)((char *)this + 92) = 0LL;
      *((_QWORD *)this + 13) = 0LL;
      EdgyImpl::Reset((EdgyImpl *)(*((_QWORD *)this + 15) + 80LL));
    }
  }
  if ( *v12 == 2 )
  {
    if ( EdgyImpl::EnsureInputTargeting((EdgyImpl *)(*((_QWORD *)this + 15) + 80LL), a4) < 0 )
      *((_DWORD *)a4 + 2) = 0;
    if ( *((_DWORD *)a4 + 2) == 1 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x157,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edgytarget.cpp",
        v21);
    v9 = SessionBasedPointerDeviceArbitration::EndCurrentSession(
           *((SessionBasedPointerDeviceArbitration **)this + 17),
           *((_DWORD *)a2 + 1));
    if ( v9 < 0 )
    {
      v8 = 357LL;
      goto LABEL_4;
    }
  }
  else if ( !*v12 || *v12 == 3 )
  {
    if ( EdgyImpl::HasCandidates((EdgyImpl *)(*((_QWORD *)this + 15) + 80LL)) && (*((_BYTE *)a2 + 332) & 4) != 0 )
    {
      *((_DWORD *)a4 + 2) = 1;
    }
    else
    {
      *((_DWORD *)a4 + 2) = 0;
      v9 = SessionBasedPointerDeviceArbitration::EndCurrentSession(*v11, *((_DWORD *)a2 + 1));
      if ( v9 < 0 )
      {
        v8 = 383LL;
        goto LABEL_4;
      }
    }
  }
  else
  {
    *((_DWORD *)a4 + 2) = 0;
    v9 = SessionBasedPointerDeviceArbitration::EndCurrentSession(
           *((SessionBasedPointerDeviceArbitration **)this + 17),
           *((_DWORD *)a2 + 1));
    if ( v9 < 0 )
    {
      v8 = 406LL;
      goto LABEL_4;
    }
  }
  return 0LL;
}
