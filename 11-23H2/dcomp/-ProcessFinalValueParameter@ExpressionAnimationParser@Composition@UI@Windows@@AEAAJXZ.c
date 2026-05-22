/*
 * XREFs of ?ProcessFinalValueParameter@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJXZ @ 0x18003E5A8
 * Callers:
 *     ?ProcessIdentifier@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJPEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@_N@Z @ 0x180057060 (-ProcessIdentifier@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJPEAV-$unordered_map@V-.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PushConstantParameter@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@W4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18003E85C (-PushConstantParameter@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@W4.c)
 *     ?TryGetParameterType@CompositionAnimation@Composition@UI@Windows@@QEAA_NPEAUHSTRING__@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18003F980 (-TryGetParameterType@CompositionAnimation@Composition@UI@Windows@@QEAA_NPEAUHSTRING__@@PEAW4DCOM.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x180086C8C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 *     ?TryGetReferenceParameter@CompositionAnimation@Composition@UI@Windows@@QEAA?AW4CompositionGetValueStatus@234@PEAUHSTRING__@@PEAPEAVCompositionObject@234@PEAW4AnimationReferenceType@@@Z @ 0x18014FFB4 (-TryGetReferenceParameter@CompositionAnimation@Composition@UI@Windows@@QEAA-AW4CompositionGetVal.c)
 *     ?PushReferenceParameter@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@0W4DCOMPOSITION_EXPRESSION_TYPE@@PEAVSubchannelMaskInfo@@@Z @ 0x1801632B4 (-PushReferenceParameter@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@0.c)
 */

__int64 __fastcall Windows::UI::Composition::ExpressionAnimationParser::ProcessFinalValueParameter(
        Windows::UI::Composition::ExpressionAnimationParser *this)
{
  int v2; // ebx
  int v4; // eax
  __int64 v5; // rbx
  _QWORD *v6; // rdi
  __int64 v7; // rax
  unsigned __int8 (__fastcall *v8)(_QWORD *, __int64, _BYTE *, _DWORD *, unsigned int *); // rbx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // r14
  unsigned int v12; // esi
  __int64 v13; // rdi
  __int64 v14; // rbx
  unsigned int v15; // [rsp+30h] [rbp-49h] BYREF
  int v16; // [rsp+34h] [rbp-45h] BYREF
  _BYTE v17[8]; // [rsp+38h] [rbp-41h] BYREF
  _QWORD *v18; // [rsp+40h] [rbp-39h] BYREF
  _DWORD v19[4]; // [rsp+48h] [rbp-31h] BYREF
  HSTRING_HEADER v20; // [rsp+58h] [rbp-21h] BYREF
  __int64 v21; // [rsp+70h] [rbp-9h]
  HSTRING_HEADER hstringHeader; // [rsp+78h] [rbp-1h] BYREF
  HSTRING v23; // [rsp+90h] [rbp+17h]
  HSTRING_HEADER v24; // [rsp+98h] [rbp+1Fh] BYREF
  __int64 v25; // [rsp+B0h] [rbp+37h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v19[0] = 0;
  v19[1] = 0;
  v19[2] = -1;
  v23 = 0LL;
  v19[3] = 2;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"this.FinalValue", 0x10u, 0xFu);
  if ( !Windows::UI::Composition::CompositionAnimation::TryGetParameterType(
          *((Windows::UI::Composition::CompositionAnimation **)this + 13),
          v23,
          (enum DCOMPOSITION_EXPRESSION_TYPE *)&v15)
    && !Windows::UI::Composition::CompositionAnimation::TryGetParameterType(
          *((Windows::UI::Composition::CompositionAnimation **)this + 12),
          v23,
          (enum DCOMPOSITION_EXPRESSION_TYPE *)&v15) )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, HSTRING))(**(_QWORD **)(*((_QWORD *)this + 13) + 272LL) + 216LL))(
           *(_QWORD *)(*((_QWORD *)this + 13) + 272LL),
           *(_QWORD *)(*((_QWORD *)this + 13) + 280LL),
           v23);
    v5 = *((_QWORD *)this + 13);
    if ( v4 < 0 )
    {
      v16 = 0;
      v18 = 0LL;
      v21 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v20, L"this", 5u, 4u);
      if ( (unsigned int)Windows::UI::Composition::CompositionAnimation::TryGetReferenceParameter(v5, v21, &v18, &v16) )
        Microsoft::WRL2::FailFast::Unexpected(0LL);
      v6 = v18;
      v7 = *v18;
      v21 = 0LL;
      v8 = *(unsigned __int8 (__fastcall **)(_QWORD *, __int64, _BYTE *, _DWORD *, unsigned int *))(v7 + 200);
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v20, L"startingvalue", 0xEu, 0xDu);
      if ( v8(v6, v21, v17, v19, &v15) )
      {
        if ( (v17[0] & 1) != 0 )
        {
          v10 = *((_QWORD *)this + 13);
          v11 = *((_QWORD *)this + 11);
          v12 = v15;
          v13 = *(_QWORD *)(v10 + 288);
          v21 = 0LL;
          Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v20, L"startingvalue", 0xEu, 0xDu);
          v14 = v21;
          v25 = 0LL;
          Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v24, L"this", 5u, 4u);
          v2 = Windows::UI::Composition::ExpressionAnimationBuilder::PushReferenceParameter(v11, v25, v14, v12, v13);
          if ( v2 >= 0 )
            return 0LL;
          v9 = 2290LL;
        }
        else
        {
          v2 = -2147024809;
          v9 = 2284LL;
        }
      }
      else
      {
        v2 = -2147024809;
        v9 = 2281LL;
      }
      goto LABEL_17;
    }
    if ( !Windows::UI::Composition::CompositionAnimation::TryGetParameterType(
            *((Windows::UI::Composition::CompositionAnimation **)this + 13),
            v23,
            (enum DCOMPOSITION_EXPRESSION_TYPE *)&v15) )
      Microsoft::WRL2::FailFast::Unexpected(0LL);
  }
  v2 = Windows::UI::Composition::ExpressionAnimationBuilder::PushConstantParameter(*((_QWORD *)this + 11), v23, v15);
  if ( v2 >= 0 )
    return 0LL;
  v9 = 2253LL;
LABEL_17:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtexpressionanimationparser.cpp",
    (const char *)(unsigned int)v2);
  return (unsigned int)v2;
}
