/*
 * XREFs of ?SetExpression@ExpressionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@@Z @ 0x18005ECE8
 * Callers:
 *     ?put_Expression@Api@ExpressionAnimation@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@@Z @ 0x18005E9A0 (-put_Expression@Api@ExpressionAnimation@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?RuntimeClassInitialize@ExpressionAnimation@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAUHSTRING__@@@Z @ 0x18006019C (-RuntimeClassInitialize@ExpressionAnimation@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAU.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Reset@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJXZ @ 0x18005FE80 (-Reset@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJXZ.c)
 *     ?EnqueueOperationAndPassOwnershipWorker@ContextSession@WRL2@Microsoft@@AEAAXPEAUIUnknown@@W4DeferredOperationKind@123@@Z @ 0x180065280 (-EnqueueOperationAndPassOwnershipWorker@ContextSession@WRL2@Microsoft@@AEAAXPEAUIUnknown@@W4Defe.c)
 *     ??$_Destroy_range@V?$allocator@UAnimationObjectInfo@Composition@UI@Windows@@@std@@@std@@YAXPEAUAnimationObjectInfo@Composition@UI@Windows@@QEAU1234@AEAV?$allocator@UAnimationObjectInfo@Composition@UI@Windows@@@0@@Z @ 0x180068CA4 (--$_Destroy_range@V-$allocator@UAnimationObjectInfo@Composition@UI@Windows@@@std@@@std@@YAXPEAUA.c)
 */

__int64 __fastcall Windows::UI::Composition::ExpressionAnimation::SetExpression(
        Windows::UI::Composition::ExpressionAnimation *this,
        HSTRING a2)
{
  HSTRING *v2; // rdi
  HSTRING v4; // rcx
  HRESULT v6; // eax
  unsigned int v7; // edi
  __int64 v8; // rbp
  __int64 v9; // rsi
  __int64 i; // rdi
  Windows::UI::Composition::AnimationObjectInfo *v11; // rcx
  __int64 v13; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (HSTRING *)((char *)this + 992);
  v4 = (HSTRING)*((_QWORD *)this + 124);
  if ( v4 )
  {
    WindowsDeleteString(v4);
    *v2 = 0LL;
  }
  if ( a2 && (v6 = WindowsDuplicateString(a2, v2), v7 = v6, v6 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1A1,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtexpressionanimation.cpp",
      (const char *)(unsigned int)v6);
    return v7;
  }
  else
  {
    Windows::UI::Composition::ExpressionAnimationBuilder::Reset((Windows::UI::Composition::ExpressionAnimation *)((char *)this + 360));
    v8 = *((_QWORD *)this + 3);
    *((_BYTE *)this + 336) &= 0xFCu;
    v9 = *((_QWORD *)this + 40);
    for ( i = *((_QWORD *)this + 39); i != v9; i += 40LL )
    {
      v13 = *(_QWORD *)(i + 8);
      *(_QWORD *)(i + 8) = 0LL;
      Microsoft::WRL2::ContextSession::EnqueueOperationAndPassOwnershipWorker(v8, v13);
    }
    v11 = (Windows::UI::Composition::AnimationObjectInfo *)*((_QWORD *)this + 39);
    if ( 0xCCCCCCCCCCCCCCCDuLL * ((__int64)(*((_QWORD *)this + 40) - (_QWORD)v11) >> 3) )
    {
      std::_Destroy_range<std::allocator<Windows::UI::Composition::AnimationObjectInfo>>(v11);
      *((_QWORD *)this + 40) = *((_QWORD *)this + 39);
      ++*((_DWORD *)this + 85);
    }
    return 0LL;
  }
}
