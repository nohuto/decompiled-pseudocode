/*
 * XREFs of ?RuntimeClassInitialize@CompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@@QEAAJPEAVCompositor@345@PEAVExpressionAnimation@345@AEBV?$span@PEAUICompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@@$0?0@gsl@@@Z @ 0x1801873DC
 * Callers:
 *     ??$MakeAndInitialize2@VCompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@@V12345@PEAVCompositor@345@AEAPEAVExpressionAnimation@345@AEBV?$span@PEAUICompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@@$0?0@gsl@@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@@$$QEAPEAVCompositor@567@AEAPEAVExpressionAnimation@567@AEBV?$span@PEAUICompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@@$0?0@gsl@@@Z @ 0x180120064 (--$MakeAndInitialize2@VCompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@@V1234.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z @ 0x180058D30 (-RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ??4?$RefPtr@VExpressionAnimation@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@PEAVExpressionAnimation@Composition@UI@Windows@@@Z @ 0x1800B6908 (--4-$RefPtr@VExpressionAnimation@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@PEAVExpres.c)
 *     ??$_Emplace_reallocate@AEBV?$RefPtr@VCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@@@WRL2@Microsoft@@@?$vector@V?$RefPtr@VCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@@@WRL2@Microsoft@@V?$allocator@V?$RefPtr@VCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@@@WRL2@Microsoft@@@std@@@std@@QEAAPEAV?$RefPtr@VCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@@@WRL2@Microsoft@@QEAV234@AEBV234@@Z @ 0x1801867FC (--$_Emplace_reallocate@AEBV-$RefPtr@VCompositionAnimationTriggerValuePartner@Internal@Compositio.c)
 *     ?GenerateAnimators@CompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@@AEAAJXZ @ 0x180186C5C (-GenerateAnimators@CompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@@AEAAJXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::Internal::CompositionAnimationTriggerPartner::RuntimeClassInitialize(
        Windows::UI::Composition::Internal::CompositionAnimationTriggerPartner *this,
        struct Windows::UI::Composition::Compositor *a2,
        Microsoft::WRL2::NestableRuntimeClass *a3,
        __int64 *a4)
{
  int Animators; // ebx
  __int64 v8; // rdx
  __int64 v10; // rax
  struct IUnknown **v11; // rsi
  struct IUnknown **v12; // r14
  int v13; // eax
  Microsoft::WRL2::NestableRuntimeClass *v14; // rbx
  unsigned int v15; // ebp
  Microsoft::WRL2::NestableRuntimeClass **v16; // rdx
  int v17[2]; // [rsp+20h] [rbp-18h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v18; // [rsp+28h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  Animators = Windows::UI::Composition::ProxyObject::RuntimeClassInitialize(this, a2, 5, 0);
  if ( Animators < 0 )
  {
    v8 = 43LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionanimationtriggerpartner.cpp",
      (const char *)(unsigned int)Animators);
    return (unsigned int)Animators;
  }
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::ExpressionAnimation>::operator=(
    (Microsoft::WRL2::NestableRuntimeClass **)this + 20,
    a3);
  v10 = *a4;
  if ( *a4 )
  {
    v11 = (struct IUnknown **)a4[1];
    v12 = &v11[v10];
    while ( v11 != v12 )
    {
      v13 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
              *((struct Microsoft::WRL2::ContextSession **)this + 3),
              *v11,
              (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner::s_InterfaceType,
              &v18);
      v14 = v18;
      v15 = v13;
      *(_QWORD *)v17 = v18;
      if ( v13 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x37,
          (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionanimationtriggerpartner.cpp",
          (const char *)(unsigned int)v13);
        if ( v14 )
          Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v14);
        return v15;
      }
      v16 = (Microsoft::WRL2::NestableRuntimeClass **)*((_QWORD *)this + 22);
      if ( v16 == *((Microsoft::WRL2::NestableRuntimeClass ***)this + 23) )
      {
        std::vector<Microsoft::WRL2::RefPtr<Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>>::_Emplace_reallocate<Microsoft::WRL2::RefPtr<Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner> const &>(
          (const char *)this + 168,
          (__int64)v16,
          (Microsoft::WRL2::NestableRuntimeClass **)v17);
        v14 = *(Microsoft::WRL2::NestableRuntimeClass **)v17;
      }
      else
      {
        *v16 = v18;
        if ( v14 )
          Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(v14);
        *((_QWORD *)this + 22) += 8LL;
      }
      if ( v14 )
        Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v14);
      ++v11;
    }
  }
  Animators = Windows::UI::Composition::Internal::CompositionAnimationTriggerPartner::GenerateAnimators(this);
  if ( Animators < 0 )
  {
    v8 = 61LL;
    goto LABEL_3;
  }
  return 0LL;
}
