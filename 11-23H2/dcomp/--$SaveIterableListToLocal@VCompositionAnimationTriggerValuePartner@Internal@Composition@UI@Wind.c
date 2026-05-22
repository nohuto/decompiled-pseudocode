/*
 * XREFs of ??$SaveIterableListToLocal@VCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@@UICompositionAnimationTriggerValuePartner@2345@@AnimationHelper@Composition@UI@Windows@@YAJPEAU?$IIterable@PEAVCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@@@Collections@Foundation@3@PEAV?$vector@PEAUICompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@@V?$allocator@PEAUICompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@@@std@@@std@@@Z @ 0x18010DF68
 * Callers:
 *     ?CreateAnimationTriggerPartner@Internal@Compositor@Composition@UI@Windows@@UEAAJPEAUIExpressionAnimation@345@PEAU?$IIterable@PEAVCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@@@Collections@Foundation@5@PEAPEAUICompositionAnimationTriggerPartner@1345@@Z @ 0x18010E7E0 (-CreateAnimationTriggerPartner@Internal@Compositor@Composition@UI@Windows@@UEAAJPEAUIExpressionA.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@PEAUICompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@@@?$vector@PEAUICompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@@V?$allocator@PEAUICompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@@@std@@@std@@QEAAPEAPEAUICompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@@QEAPEAU23456@$$QEAPEAU23456@@Z @ 0x18010E1C4 (--$_Emplace_reallocate@PEAUICompositionAnimationTriggerValuePartner@Internal@Composition@UI@Wind.c)
 */

__int64 __fastcall Windows::UI::Composition::AnimationHelper::SaveIterableListToLocal<Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner,Windows::UI::Composition::Internal::ICompositionAnimationTriggerValuePartner>(
        __int64 a1,
        __int64 a2)
{
  unsigned int v3; // ebx
  int v4; // eax
  int i; // eax
  int v6; // eax
  _QWORD *v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // edx
  int v10; // ecx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v14; // [rsp+20h] [rbp-10h] BYREF
  char v15; // [rsp+50h] [rbp+20h] BYREF
  __int64 v16; // [rsp+60h] [rbp+30h] BYREF
  __int64 v17; // [rsp+68h] [rbp+38h] BYREF

  v17 = 0LL;
  v15 = 0;
  if ( a1 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 48LL))(a1, &v17);
    v3 = v4;
    if ( v4 < 0 )
    {
      v9 = 313;
      v10 = v4;
LABEL_18:
      DoStackCaptureDirect(v10, v9);
    }
    else
    {
      for ( i = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v17 + 56LL))(v17, &v15);
            ;
            i = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v17 + 64LL))(v17, &v15) )
      {
        v3 = i;
        if ( i < 0 )
        {
          v9 = 325;
          v10 = i;
          goto LABEL_18;
        }
        if ( !v15 )
          goto LABEL_2;
        v16 = 0LL;
        v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v17 + 48LL))(v17, &v16);
        v3 = v6;
        if ( v6 < 0 )
          break;
        v7 = *(_QWORD **)(a2 + 8);
        v14 = v16;
        if ( v7 == *(_QWORD **)(a2 + 16) )
        {
          std::vector<Windows::UI::Composition::Internal::ICompositionAnimationTriggerValuePartner *>::_Emplace_reallocate<Windows::UI::Composition::Internal::ICompositionAnimationTriggerValuePartner *>(
            a2,
            v7,
            &v14);
        }
        else
        {
          *v7 = v16;
          *(_QWORD *)(a2 + 8) += 8LL;
        }
        v8 = v16;
        if ( v16 )
        {
          v16 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
        }
      }
      DoStackCaptureDirect(v6, 0x140u);
      v11 = v16;
      if ( v16 )
      {
        v16 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      }
    }
  }
  else
  {
LABEL_2:
    v3 = 0;
  }
  v12 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  return v3;
}
