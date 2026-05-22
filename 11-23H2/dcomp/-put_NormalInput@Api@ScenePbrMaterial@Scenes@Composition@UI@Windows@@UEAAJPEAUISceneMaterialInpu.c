/*
 * XREFs of ?put_NormalInput@Api@ScenePbrMaterial@Scenes@Composition@UI@Windows@@UEAAJPEAUISceneMaterialInput@3456@@Z @ 0x180192360
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z @ 0x18002BDA8 (-ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ??4?$RefPtr@VSceneMaterialInput@Scenes@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@PEAVSceneMaterialInput@Scenes@Composition@UI@Windows@@@Z @ 0x18013F130 (--4-$RefPtr@VSceneMaterialInput@Scenes@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@PEAV.c)
 */

__int64 __fastcall Windows::UI::Composition::Scenes::ScenePbrMaterial::Api::put_NormalInput(
        Windows::UI::Composition::Scenes::ScenePbrMaterial::Api *this,
        struct IUnknown *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbp
  unsigned int v5; // ebx
  int v6; // eax
  Microsoft::WRL2::NestableRuntimeClass *v7; // rdi
  int v8; // r9d
  struct Microsoft::WRL2::ContextRuntimeClass *v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 18);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v2);
  if ( (*((_BYTE *)this - 136) & 2) != 0 )
  {
    v10 = 0LL;
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v10);
    v6 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
           (struct Microsoft::WRL2::ContextSession *)v2,
           a2,
           (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::Scenes::SceneMaterialInput::s_InterfaceType,
           &v10);
    v7 = v10;
    v5 = v6;
    if ( v6 < 0 )
    {
      DoStackCaptureDirect(v6, 0x131u);
    }
    else
    {
      if ( v10 != *((struct Microsoft::WRL2::ContextRuntimeClass **)this + 3) )
      {
        if ( v10 )
          v8 = *((_DWORD *)v10 + 32);
        else
          v8 = 0;
        DirectComposition::CDevice::ResourceSetReferenceProperty(
          *(DirectComposition::CDevice **)(*((_QWORD *)this - 18) + 456LL),
          *((_DWORD *)this - 10),
          5,
          v8);
        Microsoft::WRL2::RefPtr<Windows::UI::Composition::Scenes::SceneMaterialInput>::operator=(
          (Microsoft::WRL2::NestableRuntimeClass **)this + 3,
          v7);
      }
      v5 = 0;
    }
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v10);
  }
  else
  {
    v5 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v2);
  return v5;
}
