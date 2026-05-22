/*
 * XREFs of ?EnumerateVisualTreePreOrder_Locked@CompositionDiagnosticsInterop@Composition@UI@Windows@@UEAAJPEAUIVisual@234@0PEAUIVisualTreeEnumerationDiagnostics@234@@Z @ 0x1801012C0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?ValidateInterface@NestableRuntimeClass@WRL2@Microsoft@@SAJPEAUIUnknown@@PEBUInterfaceType@123@PEAPEAV123@@Z @ 0x18006BB3C (-ValidateInterface@NestableRuntimeClass@WRL2@Microsoft@@SAJPEAUIUnknown@@PEBUInterfaceType@123@P.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x180082D58 (-InternalUnlock@-$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 *     Windows::UI::Composition::EnumerateVisualTreePreOrderImpl @ 0x180101040 (Windows--UI--Composition--EnumerateVisualTreePreOrderImpl.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionDiagnosticsInterop::EnumerateVisualTreePreOrder_Locked(
        Windows::UI::Composition::CompositionDiagnosticsInterop *this,
        struct IUnknown *a2,
        struct IUnknown *a3,
        struct Windows::UI::Composition::IVisualTreeEnumerationDiagnostics *a4)
{
  int v7; // eax
  __int64 v8; // rdx
  Microsoft::WRL2::NestableRuntimeClass *v9; // rsi
  unsigned int v10; // ebx
  __int64 v11; // rdx
  unsigned int v12; // edx
  __int64 v13; // rdx
  struct Microsoft::WRL2::NestableRuntimeClass *v15[2]; // [rsp+20h] [rbp-10h] BYREF
  struct Microsoft::WRL2::NestableRuntimeClass *v16; // [rsp+58h] [rbp+28h] BYREF

  if ( a2 && a4 )
  {
    v15[0] = 0LL;
    v16 = 0LL;
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBatch>::InternalUnlock(
      (volatile signed __int32 **)v15,
      (__int64)a2);
    v7 = Microsoft::WRL2::NestableRuntimeClass::ValidateInterface(
           a2,
           (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::Visual::s_InterfaceType,
           v15);
    v9 = v15[0];
    v10 = v7;
    if ( v7 < 0 )
    {
      v12 = 330;
    }
    else
    {
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBatch>::InternalUnlock(
        (volatile signed __int32 **)&v16,
        v8);
      v7 = Microsoft::WRL2::NestableRuntimeClass::ValidateInterface(
             a3,
             (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::Visual::s_InterfaceType,
             &v16);
      v10 = v7;
      if ( v7 < 0 )
      {
        v12 = 331;
      }
      else
      {
        v7 = Windows::UI::Composition::EnumerateVisualTreePreOrderImpl(v9, v16, (__int64)a4);
        v10 = v7;
        if ( v7 >= 0 )
        {
LABEL_10:
          Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBatch>::InternalUnlock(
            (volatile signed __int32 **)&v16,
            v11);
          Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBatch>::InternalUnlock(
            (volatile signed __int32 **)v15,
            v13);
          return v10;
        }
        v12 = 333;
      }
    }
    DoStackCaptureDirect(v7, v12);
    goto LABEL_10;
  }
  return 2147942487LL;
}
