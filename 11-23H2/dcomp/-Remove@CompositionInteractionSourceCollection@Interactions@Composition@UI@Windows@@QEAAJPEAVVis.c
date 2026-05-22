/*
 * XREFs of ?Remove@CompositionInteractionSourceCollection@Interactions@Composition@UI@Windows@@QEAAJPEAVVisualInteractionSource@2345@@Z @ 0x180190138
 * Callers:
 *     ?Remove@Api@CompositionInteractionSourceCollection@Interactions@Composition@UI@Windows@@UEAAJPEAUICompositionInteractionSource@3456@@Z @ 0x180190050 (-Remove@Api@CompositionInteractionSourceCollection@Interactions@Composition@UI@Windows@@UEAAJPEA.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?RemoveManipulation@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJPEAVCompositionManipulation@345@@Z @ 0x18013A78C (-RemoveManipulation@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJPEAVComposition.c)
 *     ?Attach@?$RefPtr@VVisualInteractionSource@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAXPEAVVisualInteractionSource@Interactions@Composition@UI@Windows@@@Z @ 0x18018FF30 (-Attach@-$RefPtr@VVisualInteractionSource@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@.c)
 */

__int64 __fastcall Windows::UI::Composition::Interactions::CompositionInteractionSourceCollection::Remove(
        Windows::UI::Composition::Interactions::CompositionInteractionSourceCollection *this,
        struct Windows::UI::Composition::Interactions::VisualInteractionSource *a2,
        __int64 a3,
        const char *a4)
{
  __int64 v4; // r8
  unsigned int v6; // ecx
  __int64 v7; // rbx
  struct Windows::UI::Composition::Interactions::VisualInteractionSource **v8; // rax
  unsigned int v9; // ebx
  int v10; // eax
  unsigned int v11; // esi
  __int64 v13; // rdx
  unsigned int v14; // ecx
  __int64 i; // r8
  __int64 v16; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  Microsoft::WRL2::NestableRuntimeClass *v18; // [rsp+30h] [rbp+8h] BYREF

  v4 = *((_QWORD *)this + 20);
  v6 = *((_DWORD *)this + 46);
  v7 = 0LL;
  if ( v6 )
  {
    v8 = (struct Windows::UI::Composition::Interactions::VisualInteractionSource **)v4;
    do
    {
      if ( a2 == *v8 )
        break;
      v7 = (unsigned int)(v7 + 1);
      ++v8;
    }
    while ( (unsigned int)v7 < v6 );
  }
  if ( (_DWORD)v7 == v6 )
  {
    v9 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8D,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositioninteractionsourcecollection.cpp",
      (const char *)0x80070057LL);
  }
  else
  {
    v10 = Windows::UI::Composition::Interactions::InteractionTracker::RemoveManipulation(
            *((Windows::UI::Composition::Interactions::InteractionTracker **)this + 19),
            *(struct Windows::UI::Composition::CompositionManipulation **)(*(_QWORD *)(v4 + 8 * v7) + 248LL),
            v4,
            a4);
    v11 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x91,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositioninteractionsourcecollection.cpp",
        (const char *)(unsigned int)v10);
      return v11;
    }
    v13 = *((_QWORD *)this + 20);
    v18 = 0LL;
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::VisualInteractionSource>::Attach(
      &v18,
      *(Microsoft::WRL2::NestableRuntimeClass **)(v13 + 8 * v7));
    v14 = *((_DWORD *)this + 46);
    if ( (unsigned int)v7 < v14 )
    {
      for ( i = *((_QWORD *)this + 20); (unsigned int)v7 < v14 - 1; v14 = *((_DWORD *)this + 46) )
      {
        v16 = (unsigned int)v7;
        LODWORD(v7) = v7 + 1;
        *(_QWORD *)(i + 8 * v16) = *(_QWORD *)(i + 8LL * (unsigned int)v7);
      }
      v9 = 0;
      *((_DWORD *)this + 46) = v14 - 1;
    }
    else
    {
      v9 = -2147024809;
      DoStackCaptureDirect(-2147024809, 0x19Cu);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x96,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositioninteractionsourcecollection.cpp",
        (const char *)0x80070057LL);
    }
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v18);
  }
  return v9;
}
