/*
 * XREFs of ?RemoveAll@CompositionInteractionSourceCollection@Interactions@Composition@UI@Windows@@QEAAJXZ @ 0x18019030C
 * Callers:
 *     ?Destroy@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAXXZ @ 0x180138B90 (-Destroy@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?RemoveAll@Api@CompositionInteractionSourceCollection@Interactions@Composition@UI@Windows@@UEAAJXZ @ 0x180190290 (-RemoveAll@Api@CompositionInteractionSourceCollection@Interactions@Composition@UI@Windows@@UEAAJ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18007C16C (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?RemoveManipulation@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJPEAVCompositionManipulation@345@@Z @ 0x18013A78C (-RemoveManipulation@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJPEAVComposition.c)
 *     ?Attach@?$RefPtr@VVisualInteractionSource@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAXPEAVVisualInteractionSource@Interactions@Composition@UI@Windows@@@Z @ 0x18018FF30 (-Attach@-$RefPtr@VVisualInteractionSource@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@.c)
 */

__int64 __fastcall Windows::UI::Composition::Interactions::CompositionInteractionSourceCollection::RemoveAll(
        Windows::UI::Composition::Interactions::CompositionInteractionSourceCollection *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  char *v4; // rbx
  int v5; // eax
  __int64 v7; // rsi
  int v8; // eax
  unsigned int v9; // ebp
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  Microsoft::WRL2::NestableRuntimeClass *v13; // [rsp+30h] [rbp+8h] BYREF

  v4 = (char *)this + 160;
  v5 = *((_DWORD *)this + 46) - 1;
  v7 = v5;
  if ( v5 < 0 )
  {
LABEL_4:
    *((_DWORD *)v4 + 6) = 0;
    DynArrayImpl<0>::ShrinkToSize((__int64)v4, 8u);
    return 0LL;
  }
  else
  {
    while ( 1 )
    {
      v8 = Windows::UI::Composition::Interactions::InteractionTracker::RemoveManipulation(
             *((Windows::UI::Composition::Interactions::InteractionTracker **)this + 19),
             *(struct Windows::UI::Composition::CompositionManipulation **)(*(_QWORD *)(*(_QWORD *)v4 + 8 * v7) + 248LL),
             a3,
             a4);
      v9 = v8;
      if ( v8 < 0 )
        break;
      v10 = *(_QWORD *)v4;
      v13 = 0LL;
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::VisualInteractionSource>::Attach(
        &v13,
        *(Microsoft::WRL2::NestableRuntimeClass **)(v10 + 8 * v7));
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v13);
      if ( --v7 < 0 )
        goto LABEL_4;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAD,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositioninteractionsourcecollection.cpp",
      (const char *)(unsigned int)v8);
    return v9;
  }
}
