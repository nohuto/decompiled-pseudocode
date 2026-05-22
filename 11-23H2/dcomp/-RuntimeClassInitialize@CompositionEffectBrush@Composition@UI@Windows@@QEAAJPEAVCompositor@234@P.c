/*
 * XREFs of ?RuntimeClassInitialize@CompositionEffectBrush@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAVCompositionEffectFactory@234@@Z @ 0x18002E13C
 * Callers:
 *     ??$MakeAndInitialize2@VCompositionEffectBrush@Composition@UI@Windows@@V1234@PEAVCompositor@234@PEAVCompositionEffectFactory@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionEffectBrush@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEAPEAVCompositionEffectFactory@456@@Z @ 0x18002E024 (--$MakeAndInitialize2@VCompositionEffectBrush@Composition@UI@Windows@@V1234@PEAVCompositor@234@P.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z @ 0x18002BDA8 (-ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z.c)
 *     ?InitializeInputs@CompositionEffectBrush@Composition@UI@Windows@@AEAAJXZ @ 0x18002E204 (-InitializeInputs@CompositionEffectBrush@Composition@UI@Windows@@AEAAJXZ.c)
 *     ?InitializePropertySet@CompositionEffectBrush@Composition@UI@Windows@@AEAAJXZ @ 0x18002E2FC (-InitializePropertySet@CompositionEffectBrush@Composition@UI@Windows@@AEAAJXZ.c)
 *     ?RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z @ 0x180058D30 (-RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionEffectBrush::RuntimeClassInitialize(
        Windows::UI::Composition::CompositionEffectBrush *this,
        struct Windows::UI::Composition::Compositor *a2,
        struct Windows::UI::Composition::CompositionEffectFactory *a3)
{
  int v5; // eax
  unsigned int v6; // esi
  Microsoft::WRL2::NestableRuntimeClass *v7; // rcx
  int v8; // eax
  unsigned int v9; // edi
  int v10; // eax
  unsigned int v11; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = Windows::UI::Composition::ProxyObject::RuntimeClassInitialize(this, a2, 0x39u, 0);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x27,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositioneffectbrush.cpp",
      (const char *)(unsigned int)v5);
    return v6;
  }
  else
  {
    DirectComposition::CDevice::ResourceSetReferenceProperty(
      *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
      *((_DWORD *)this + 32),
      0,
      *((_DWORD *)a3 + 32));
    if ( *((struct Windows::UI::Composition::CompositionEffectFactory **)this + 21) != a3 )
    {
      if ( _InterlockedIncrement((volatile signed __int32 *)a3 + 4) == 1 )
        (*(void (__fastcall **)(struct Windows::UI::Composition::CompositionEffectFactory *))(*(_QWORD *)a3 + 80LL))(a3);
      v7 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)this + 21);
      *((_QWORD *)this + 21) = a3;
      if ( v7 )
        Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v7);
    }
    *((_DWORD *)this + 46) = 0;
    v8 = Windows::UI::Composition::CompositionEffectBrush::InitializeInputs(this);
    v9 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2F,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositioneffectbrush.cpp",
        (const char *)(unsigned int)v8);
      return v9;
    }
    else
    {
      v10 = Windows::UI::Composition::CompositionEffectBrush::InitializePropertySet(this);
      v11 = v10;
      if ( v10 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x31,
          (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositioneffectbrush.cpp",
          (const char *)(unsigned int)v10);
        return v11;
      }
      else
      {
        return 0LL;
      }
    }
  }
}
