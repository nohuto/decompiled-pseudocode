/*
 * XREFs of ?put_ParentForTransform@Api@Visual@Composition@UI@Windows@@UEAAJPEAUIVisual@345@@Z @ 0x180062840
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?SetParentForTransform@Visual@Composition@UI@Windows@@QEAAJPEAV1234@@Z @ 0x180063354 (-SetParentForTransform@Visual@Composition@UI@Windows@@QEAAJPEAV1234@@Z.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x180082D58 (-InternalUnlock@-$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::Visual::Api::put_ParentForTransform(
        Windows::UI::Composition::Visual::Api *this,
        struct IUnknown *a2)
{
  Windows::UI::Composition::Visual *v2; // rdi
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  int v5; // eax
  unsigned int v6; // ebx
  unsigned int v8; // edx
  struct Microsoft::WRL2::ContextRuntimeClass *v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = (Windows::UI::Composition::Visual::Api *)((char *)this - 176);
  v4 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 19);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (*((_BYTE *)v2 + 32) & 2) == 0 )
  {
    v6 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
    goto LABEL_6;
  }
  v9 = 0LL;
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBatch>::InternalUnlock(&v9);
  v5 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
         (struct Microsoft::WRL2::ContextSession *)v4,
         a2,
         (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::Visual::s_InterfaceType,
         &v9);
  v6 = v5;
  if ( v5 < 0 )
  {
    v8 = 2679;
    goto LABEL_10;
  }
  v5 = Windows::UI::Composition::Visual::SetParentForTransform(v2, v9);
  v6 = v5;
  if ( v5 < 0 )
  {
    v8 = 2681;
LABEL_10:
    DoStackCaptureDirect(v5, v8);
    goto LABEL_5;
  }
  v6 = 0;
LABEL_5:
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBatch>::InternalUnlock(&v9);
LABEL_6:
  Microsoft::WRL2::ContextSession::EndApiEntry(v4);
  return v6;
}
