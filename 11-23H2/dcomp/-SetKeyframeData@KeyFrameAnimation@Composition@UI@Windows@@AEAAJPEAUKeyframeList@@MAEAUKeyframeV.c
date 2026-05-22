/*
 * XREFs of ?SetKeyframeData@KeyFrameAnimation@Composition@UI@Windows@@AEAAJPEAUKeyframeList@@MAEAUKeyframeValueDefinition@@PEAVCompositionEasingFunction@234@@Z @ 0x180082E70
 * Callers:
 *     ?InsertKeyFrameHelper@KeyFrameAnimation@Composition@UI@Windows@@IEAAJMAEAUKeyframeValueDefinition@@PEAVCompositionEasingFunction@234@@Z @ 0x18004BEE0 (-InsertKeyFrameHelper@KeyFrameAnimation@Composition@UI@Windows@@IEAAJMAEAUKeyframeValueDefinitio.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Attach@?$RefPtr@VExpressionAnimation@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAXPEAVExpressionAnimation@Composition@UI@Windows@@@Z @ 0x18003E4F8 (-Attach@-$RefPtr@VExpressionAnimation@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAXPEAVExpressi.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionDrawingSurface@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x180080BA8 (-InternalUnlock@-$RefPtr@VCompositionDrawingSurface@Composition@UI@Windows@@@WRL2@Microsoft@@IEA.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::KeyFrameAnimation::SetKeyframeData(
        Windows::UI::Composition::KeyFrameAnimation *this,
        struct KeyframeList *a2,
        float a3,
        struct KeyframeValueDefinition *a4,
        struct Windows::UI::Composition::CompositionEasingFunction *a5)
{
  struct Windows::UI::Composition::CompositionEasingFunction *v7; // rcx
  int v8; // eax
  unsigned int v9; // ebx
  Microsoft::WRL2::NestableRuntimeClass *v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  Microsoft::WRL2::NestableRuntimeClass *v13; // [rsp+50h] [rbp+8h] BYREF

  v13 = this;
  if ( *((_DWORD *)a2 + 6) == 2 )
  {
    v11 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)a2 + 4);
    v13 = 0LL;
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::ExpressionAnimation>::Attach(&v13, v11);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionDrawingSurface>::InternalUnlock(&v13);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionDrawingSurface>::InternalUnlock(&v13);
  }
  v7 = a5;
  *(float *)a2 = a3;
  *(_OWORD *)((char *)a2 + 24) = *(_OWORD *)a4;
  *((_QWORD *)a2 + 5) = *((_QWORD *)a4 + 2);
  *((_DWORD *)a2 + 1) = *((_DWORD *)v7 + 36);
  v8 = (*(__int64 (__fastcall **)(struct Windows::UI::Composition::CompositionEasingFunction *, char *, char *, char *, char *))(*(_QWORD *)v7 + 280LL))(
         v7,
         (char *)a2 + 8,
         (char *)a2 + 12,
         (char *)a2 + 16,
         (char *)a2 + 20);
  v9 = v8;
  if ( v8 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x4B6,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtkeyframeanimation.cpp",
    (const char *)(unsigned int)v8);
  return v9;
}
