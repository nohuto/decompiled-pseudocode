/*
 * XREFs of ?RemoveReceiver@CompositionProjectedShadow@Composition@UI@Windows@@QEAAJPEAVCompositionProjectedShadowReceiver@234@@Z @ 0x180183910
 * Callers:
 *     ?Remove@Api@CompositionProjectedShadowReceiverUnorderedCollection@Composition@UI@Windows@@UEAAJPEAUICompositionProjectedShadowReceiver@345@@Z @ 0x1801A1820 (-Remove@Api@CompositionProjectedShadowReceiverUnorderedCollection@Composition@UI@Windows@@UEAAJP.c)
 * Callees:
 *     ?UpdateReceivers@CompositionProjectedShadow@Composition@UI@Windows@@QEAAJXZ @ 0x180006D94 (-UpdateReceivers@CompositionProjectedShadow@Composition@UI@Windows@@QEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionProjectedShadow::RemoveReceiver(
        Windows::UI::Composition::CompositionProjectedShadow *this,
        struct Windows::UI::Composition::CompositionProjectedShadowReceiver *a2)
{
  __int64 v2; // rax
  int v3; // r8d
  __int64 v5; // r9
  struct Windows::UI::Composition::CompositionProjectedShadowReceiver **i; // rcx
  Microsoft::WRL2::NestableRuntimeClass **v8; // rbp
  Microsoft::WRL2::NestableRuntimeClass **j; // rbx
  Microsoft::WRL2::NestableRuntimeClass *v10; // rcx
  Microsoft::WRL2::NestableRuntimeClass *v11; // rax
  int updated; // eax
  unsigned int v13; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  Microsoft::WRL2::NestableRuntimeClass *v15; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 27);
  v3 = 0;
  v5 = (*((_QWORD *)this + 28) - v2) >> 3;
  if ( (int)v5 <= 0 )
    return 0LL;
  for ( i = (struct Windows::UI::Composition::CompositionProjectedShadowReceiver **)*((_QWORD *)this + 27); *i != a2; ++i )
  {
    if ( ++v3 >= (int)v5 )
      return 0LL;
  }
  v8 = (Microsoft::WRL2::NestableRuntimeClass **)*((_QWORD *)this + 28);
  for ( j = (Microsoft::WRL2::NestableRuntimeClass **)(v2 + 8LL * v3 + 8); j != v8; ++j )
  {
    v10 = 0LL;
    if ( &v15 != j )
    {
      v10 = *j;
      *j = 0LL;
    }
    v11 = *(j - 1);
    *(j - 1) = v10;
    v15 = v11;
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v15);
  }
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock((Microsoft::WRL2::NestableRuntimeClass **)(*((_QWORD *)this + 28) - 8LL));
  *((_QWORD *)this + 28) -= 8LL;
  updated = Windows::UI::Composition::CompositionProjectedShadow::UpdateReceivers(this);
  v13 = updated;
  if ( updated >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1CF,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionprojectedshadowscene.cpp",
    (const char *)(unsigned int)updated);
  return v13;
}
