/*
 * XREFs of ?AddReceiver@CompositionProjectedShadow@Composition@UI@Windows@@QEAAJPEAVCompositionProjectedShadowReceiver@234@@Z @ 0x180006A80
 * Callers:
 *     ?Add@Api@CompositionProjectedShadowReceiverUnorderedCollection@Composition@UI@Windows@@UEAAJPEAUICompositionProjectedShadowReceiver@345@@Z @ 0x180006B10 (-Add@Api@CompositionProjectedShadowReceiverUnorderedCollection@Composition@UI@Windows@@UEAAJPEAU.c)
 * Callees:
 *     ?UpdateReceivers@CompositionProjectedShadow@Composition@UI@Windows@@QEAAJXZ @ 0x180006D94 (-UpdateReceivers@CompositionProjectedShadow@Composition@UI@Windows@@QEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ??$_Emplace_reallocate@AEBV?$RefPtr@VCompositionProjectedShadowReceiver@Composition@UI@Windows@@@WRL2@Microsoft@@@?$vector@V?$RefPtr@VCompositionProjectedShadowReceiver@Composition@UI@Windows@@@WRL2@Microsoft@@V?$allocator@V?$RefPtr@VCompositionProjectedShadowReceiver@Composition@UI@Windows@@@WRL2@Microsoft@@@std@@@std@@QEAAPEAV?$RefPtr@VCompositionProjectedShadowReceiver@Composition@UI@Windows@@@WRL2@Microsoft@@QEAV234@AEBV234@@Z @ 0x18000E370 (--$_Emplace_reallocate@AEBV-$RefPtr@VCompositionProjectedShadowReceiver@Composition@UI@Windows@@.c)
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionProjectedShadow::AddReceiver(
        struct Microsoft::WRL2::ContextSession **this,
        struct IUnknown *a2)
{
  int updated; // eax
  Microsoft::WRL2::NestableRuntimeClass *v4; // rcx
  unsigned int v5; // edi
  struct Microsoft::WRL2::ContextSession *v6; // rdx
  __int64 v8; // rdx
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  Microsoft::WRL2::NestableRuntimeClass *v11; // [rsp+30h] [rbp+8h] BYREF

  updated = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
              this[3],
              a2,
              (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionProjectedShadowReceiver::s_InterfaceType,
              &v11);
  v4 = v11;
  v5 = updated;
  if ( updated < 0 )
  {
    v8 = 430LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionprojectedshadowscene.cpp",
      (const char *)(unsigned int)updated,
      v9);
    goto LABEL_6;
  }
  v6 = this[28];
  if ( v6 == this[29] )
  {
    std::vector<Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionProjectedShadowReceiver>>::_Emplace_reallocate<Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionProjectedShadowReceiver> const &>(
      this + 27,
      v6,
      &v11);
  }
  else
  {
    *(_QWORD *)v6 = v11;
    if ( v4 )
      Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(v4);
    this[28] = (struct Microsoft::WRL2::ContextSession *)((char *)this[28] + 8);
  }
  updated = Windows::UI::Composition::CompositionProjectedShadow::UpdateReceivers((Windows::UI::Composition::CompositionProjectedShadow *)this);
  v5 = updated;
  if ( updated < 0 )
  {
    v8 = 433LL;
    goto LABEL_12;
  }
  v5 = 0;
LABEL_6:
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v11);
  return v5;
}
