/*
 * XREFs of ?UpdateDropFeedback@JointResize@@AEAAJUtagRECT@@@Z @ 0x18052AE88
 * Callers:
 *     ?OnArrangedWindowSizeUpdated@JointResize@@UEAAXUtagRECT@@@Z @ 0x180529F80 (-OnArrangedWindowSizeUpdated@JointResize@@UEAAXUtagRECT@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MszAdjustment@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800DBEB4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MszAdjustment@@@details@wil@@QEAAX_NW4Rep.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CDropFeedbackList_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x18052D784 (-CDropFeedbackList_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall JointResize::UpdateDropFeedback(JointResize *this, struct tagRECT *a2)
{
  const struct _GUID *v4; // rcx
  int v5; // eax
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // ebx
  __int64 v9; // rdx
  unsigned int *v10; // rbx
  unsigned int *v11; // r15
  int left; // edx
  int v13; // r9d
  __int32 v14; // r8d
  LONG top; // ecx
  LONG bottom; // ecx
  LONG right; // edx
  struct tagRECT *p_right; // rax
  void *v20; // [rsp+30h] [rbp-20h] BYREF
  __m128i v21; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]

  if ( *((_QWORD *)this + 30) )
    return 0LL;
  v20 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v20);
  v5 = CDropFeedbackList_CreateInstance(v4, &v20);
  v8 = v5;
  if ( v5 < 0 )
  {
    v9 = 704LL;
    goto LABEL_33;
  }
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_MszAdjustment>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_MszAdjustment>::GetImpl'::`2'::impl,
    1u,
    v6,
    v7);
  v10 = (unsigned int *)*((_QWORD *)this + 27);
  v11 = (unsigned int *)*((_QWORD *)this + 28);
  while ( v10 != v11 )
  {
    v21 = *(__m128i *)(v10 + 6);
    left = _mm_cvtsi128_si32(v21);
    v13 = _mm_cvtsi128_si32(_mm_srli_si128(v21, 8)) - left;
    v14 = _mm_srli_si128(v21, 8).m128i_i32[1] - v21.m128i_i32[1];
    switch ( v10[2] )
    {
      case 0xAu:
        p_right = (struct tagRECT *)&a2->right;
        if ( !*((_BYTE *)v10 + 40) )
          p_right = a2;
        left = p_right->left;
        v10[17] = p_right->left;
        goto LABEL_24;
      case 0xBu:
        if ( *((_BYTE *)v10 + 40) )
          right = a2->left;
        else
          right = a2->right;
        v10[19] = right;
        left = right - v13;
LABEL_24:
        bottom = v21.m128i_i32[1];
        break;
      case 0xCu:
        if ( *((_BYTE *)v10 + 40) )
          bottom = a2->bottom;
        else
          bottom = a2->top;
        v10[18] = bottom;
        break;
      case 0xFu:
        if ( *((_BYTE *)v10 + 40) )
          top = a2->top;
        else
          top = a2->bottom;
        v10[20] = top;
        bottom = top - v14;
        break;
      default:
        goto LABEL_24;
    }
    if ( left < (int)v10[6] )
      left = v10[6];
    v21.m128i_i32[0] = left;
    if ( bottom < (int)v10[7] )
      bottom = v10[7];
    v21.m128i_i32[1] = bottom;
    v21.m128i_i32[2] = left + v13;
    v21.m128i_i32[3] = bottom + v14;
    (*(void (__fastcall **)(void *, _QWORD, _QWORD, __m128i *, int))(*(_QWORD *)v20 + 88LL))(v20, *v10, 0LL, &v21, 768);
    v10 += 22;
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD, void *, _QWORD))(**((_QWORD **)this + 23) + 32LL))(
         *((_QWORD *)this + 23),
         v20,
         0LL);
  v8 = v5;
  if ( v5 >= 0 )
  {
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v20);
    return 0LL;
  }
  v9 = 768LL;
LABEL_33:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
    (const char *)(unsigned int)v5);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v20);
  return v8;
}
