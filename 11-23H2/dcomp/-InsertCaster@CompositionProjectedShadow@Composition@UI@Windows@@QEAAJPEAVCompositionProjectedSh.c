/*
 * XREFs of ?InsertCaster@CompositionProjectedShadow@Composition@UI@Windows@@QEAAJPEAVCompositionProjectedShadowCaster@234@_N0@Z @ 0x180007224
 * Callers:
 *     ?InsertAtTop@Api@CompositionProjectedShadowCasterCollection@Composition@UI@Windows@@UEAAJPEAUICompositionProjectedShadowCaster@345@@Z @ 0x180007070 (-InsertAtTop@Api@CompositionProjectedShadowCasterCollection@Composition@UI@Windows@@UEAAJPEAUICo.c)
 *     ?InsertAbove@Api@CompositionProjectedShadowCasterCollection@Composition@UI@Windows@@UEAAJPEAUICompositionProjectedShadowCaster@345@0@Z @ 0x1801300A0 (-InsertAbove@Api@CompositionProjectedShadowCasterCollection@Composition@UI@Windows@@UEAAJPEAUICo.c)
 *     ?InsertAtBottom@Api@CompositionProjectedShadowCasterCollection@Composition@UI@Windows@@UEAAJPEAUICompositionProjectedShadowCaster@345@@Z @ 0x180130220 (-InsertAtBottom@Api@CompositionProjectedShadowCasterCollection@Composition@UI@Windows@@UEAAJPEAU.c)
 *     ?InsertBelow@Api@CompositionProjectedShadowCasterCollection@Composition@UI@Windows@@UEAAJPEAUICompositionProjectedShadowCaster@345@0@Z @ 0x180130340 (-InsertBelow@Api@CompositionProjectedShadowCasterCollection@Composition@UI@Windows@@UEAAJPEAUICo.c)
 * Callees:
 *     ?UpdateCasters@CompositionProjectedShadow@Composition@UI@Windows@@QEAAJXZ @ 0x18000745C (-UpdateCasters@CompositionProjectedShadow@Composition@UI@Windows@@QEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ??$_Emplace_reallocate@AEBV?$RefPtr@VCompositionProjectedShadowCaster@Composition@UI@Windows@@@WRL2@Microsoft@@@?$vector@V?$RefPtr@VCompositionProjectedShadowCaster@Composition@UI@Windows@@@WRL2@Microsoft@@V?$allocator@V?$RefPtr@VCompositionProjectedShadowCaster@Composition@UI@Windows@@@WRL2@Microsoft@@@std@@@std@@QEAAPEAV?$RefPtr@VCompositionProjectedShadowCaster@Composition@UI@Windows@@@WRL2@Microsoft@@QEAV234@AEBV234@@Z @ 0x18000E4A8 (--$_Emplace_reallocate@AEBV-$RefPtr@VCompositionProjectedShadowCaster@Composition@UI@Windows@@@W.c)
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1801097EC (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ??$emplace@AEBV?$RefPtr@VCompositionProjectedShadowCaster@Composition@UI@Windows@@@WRL2@Microsoft@@@?$vector@V?$RefPtr@VCompositionProjectedShadowCaster@Composition@UI@Windows@@@WRL2@Microsoft@@V?$allocator@V?$RefPtr@VCompositionProjectedShadowCaster@Composition@UI@Windows@@@WRL2@Microsoft@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$RefPtr@VCompositionProjectedShadowCaster@Composition@UI@Windows@@@WRL2@Microsoft@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$RefPtr@VCompositionProjectedShadowCaster@Composition@UI@Windows@@@WRL2@Microsoft@@@std@@@std@@@1@AEBV?$RefPtr@VCompositionProjectedShadowCaster@Composition@UI@Windows@@@WRL2@Microsoft@@@Z @ 0x180183634 (--$emplace@AEBV-$RefPtr@VCompositionProjectedShadowCaster@Composition@UI@Windows@@@WRL2@Microsof.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionProjectedShadow::InsertCaster(
        Windows::UI::Composition::CompositionProjectedShadow *this,
        struct IUnknown *a2,
        char a3,
        struct Windows::UI::Composition::CompositionProjectedShadowCaster *a4)
{
  char *v4; // rdi
  __int64 v6; // rbx
  int v9; // eax
  Microsoft::WRL2::NestableRuntimeClass *v10; // rcx
  unsigned int v11; // esi
  Microsoft::WRL2::NestableRuntimeClass **v12; // rdx
  int updated; // eax
  int v14; // ebx
  __int64 v16; // r8
  struct Windows::UI::Composition::CompositionProjectedShadowCaster **v17; // rdx
  int v18; // ecx
  __int64 v19; // rax
  int v20; // [rsp+20h] [rbp-20h]
  const char *v21; // [rsp+28h] [rbp-18h]
  _BYTE v22[16]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  Microsoft::WRL2::NestableRuntimeClass *v24; // [rsp+70h] [rbp+30h] BYREF

  v4 = (char *)this + 192;
  v6 = *((_QWORD *)this + 24);
  v9 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
         *((struct Microsoft::WRL2::ContextSession **)this + 3),
         a2,
         (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionProjectedShadowCaster::s_InterfaceType,
         &v24);
  v10 = v24;
  v11 = v9;
  if ( v9 >= 0 )
  {
    if ( a4 )
    {
      v17 = *(struct Windows::UI::Composition::CompositionProjectedShadowCaster ***)v4;
      v18 = 0;
      v19 = (__int64)(*((_QWORD *)v4 + 1) - *(_QWORD *)v4) >> 3;
      if ( (int)v19 <= 0 )
      {
LABEL_16:
        wil::details::in1diag3::Return_HrMsg(
          retaddr,
          (void *)0x173,
          (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionprojectedshadowscene.cpp",
          (const char *)0x80070057LL,
          (int)"Trying to reference an element that is not in the list",
          v21);
        Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v24);
        return 2147942487LL;
      }
      while ( *v17 != a4 )
      {
        ++v18;
        ++v17;
        if ( v18 >= (int)v19 )
          goto LABEL_16;
      }
      v16 = v6 + 8LL * v18;
      if ( a3 )
        v16 += 8LL;
    }
    else
    {
      if ( a3 )
      {
        v12 = (Microsoft::WRL2::NestableRuntimeClass **)*((_QWORD *)v4 + 1);
        if ( v12 == *((Microsoft::WRL2::NestableRuntimeClass ***)v4 + 2) )
        {
          std::vector<Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionProjectedShadowCaster>>::_Emplace_reallocate<Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionProjectedShadowCaster> const &>(
            v4,
            v12,
            &v24);
        }
        else
        {
          *v12 = v24;
          if ( v10 )
            Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(v10);
          *((_QWORD *)v4 + 1) += 8LL;
        }
        goto LABEL_6;
      }
      v16 = v6;
    }
    std::vector<Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionProjectedShadowCaster>>::emplace<Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionProjectedShadowCaster> const &>(
      v4,
      v22,
      v16,
      &v24);
LABEL_6:
    updated = Windows::UI::Composition::CompositionProjectedShadow::UpdateCasters(this);
    v14 = updated;
    if ( updated >= 0 )
    {
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v24);
      return 0LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x176,
      (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionprojectedshadowscene.cpp",
      (const char *)(unsigned int)updated,
      v20);
    v11 = v14;
    goto LABEL_21;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x14F,
    (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionprojectedshadowscene.cpp",
    (const char *)(unsigned int)v9,
    v20);
LABEL_21:
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v24);
  return v11;
}
