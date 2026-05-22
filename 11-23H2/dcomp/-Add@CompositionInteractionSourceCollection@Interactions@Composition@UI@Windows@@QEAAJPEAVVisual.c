/*
 * XREFs of ?Add@CompositionInteractionSourceCollection@Interactions@Composition@UI@Windows@@QEAAJPEAVVisualInteractionSource@2345@@Z @ 0x18018FDE8
 * Callers:
 *     ?Add@Api@CompositionInteractionSourceCollection@Interactions@Composition@UI@Windows@@UEAAJPEAUICompositionInteractionSource@3456@@Z @ 0x18018FD00 (-Add@Api@CompositionInteractionSourceCollection@Interactions@Composition@UI@Windows@@UEAAJPEAUIC.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180073310 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?AddManipulation@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJPEAVCompositionManipulation@345@PEAVCompositionPointerEventRouter@345@@Z @ 0x180136AB8 (-AddManipulation@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJPEAVCompositionMan.c)
 */

__int64 __fastcall Windows::UI::Composition::Interactions::CompositionInteractionSourceCollection::Add(
        Windows::UI::Composition::Interactions::CompositionInteractionSourceCollection *this,
        struct Windows::UI::Composition::CompositionPointerEventRouter **a2)
{
  char *v4; // rdi
  unsigned int v5; // edx
  struct Windows::UI::Composition::Interactions::VisualInteractionSource **v6; // rax
  int v7; // eax
  __int64 v8; // r8
  unsigned int v9; // esi
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v13; // rax
  unsigned int v14; // edx
  int v15; // ebx
  unsigned int v16; // edx
  int v17; // ecx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct Windows::UI::Composition::CompositionPointerEventRouter **v19; // [rsp+30h] [rbp+8h] BYREF
  struct Windows::UI::Composition::CompositionPointerEventRouter **v20; // [rsp+38h] [rbp+10h] BYREF

  v19 = a2;
  if ( a2 )
    Microsoft::WRL2::NestableRuntimeClass::InternalAddRef((Microsoft::WRL2::NestableRuntimeClass *)a2);
  v4 = (char *)this + 160;
  v5 = 0;
  v6 = (struct Windows::UI::Composition::Interactions::VisualInteractionSource **)*((_QWORD *)this + 20);
  if ( *((_DWORD *)this + 46) )
  {
    while ( a2 != (struct Windows::UI::Composition::CompositionPointerEventRouter **)*v6 )
    {
      ++v5;
      ++v6;
      if ( v5 >= *((_DWORD *)this + 46) )
        goto LABEL_6;
    }
    v9 = -2147024809;
    v11 = 109LL;
    v10 = 2147942487LL;
    goto LABEL_8;
  }
LABEL_6:
  v7 = Windows::UI::Composition::Interactions::InteractionTracker::AddManipulation(
         *((Windows::UI::Composition::Interactions::InteractionTracker **)this + 19),
         a2[31],
         a2[30]);
  v9 = v7;
  if ( v7 < 0 )
  {
    v10 = (unsigned int)v7;
    v11 = 114LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositioninteractionsourcecollection.cpp",
      (const char *)v10);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock((Microsoft::WRL2::NestableRuntimeClass **)&v19);
    return v9;
  }
  v13 = *((unsigned int *)v4 + 6);
  v19 = 0LL;
  v20 = a2;
  v14 = v13 + 1;
  if ( (int)v13 + 1 >= (unsigned int)v13 )
  {
    if ( v14 > *((_DWORD *)v4 + 5) )
    {
      v15 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v4, 8u, v8, &v20);
      v17 = v15;
      if ( v15 < 0 )
      {
        v16 = 192;
        goto LABEL_17;
      }
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)v4 + 8 * v13) = a2;
      *((_DWORD *)v4 + 6) = v14;
    }
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock((Microsoft::WRL2::NestableRuntimeClass **)&v19);
    return 0LL;
  }
  v15 = -2147024362;
  v16 = 181;
  v17 = -2147024362;
LABEL_17:
  DoStackCaptureDirect(v17, v16);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x75,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositioninteractionsourcecollection.cpp",
    (const char *)(unsigned int)v15);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock((Microsoft::WRL2::NestableRuntimeClass **)&v19);
  return (unsigned int)v15;
}
