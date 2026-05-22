/*
 * XREFs of ?RuntimeClassInitialize@CompositionSurfaceBrush@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z @ 0x180045580
 * Callers:
 *     ??$MakeAndInitialize2@VCompositionSurfaceBrush@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionSurfaceBrush@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x180045644 (--$MakeAndInitialize2@VCompositionSurfaceBrush@Composition@UI@Windows@@V1234@PEAVCompositor@234@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z @ 0x180058D30 (-RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionSurfaceBrush::RuntimeClassInitialize(
        Microsoft::WRL2::NestableRuntimeClass **this,
        struct Windows::UI::Composition::Compositor *a2)
{
  int v4; // eax
  unsigned int v5; // esi
  Microsoft::WRL2::NestableRuntimeClass *v6; // rcx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = Windows::UI::Composition::ProxyObject::RuntimeClassInitialize(
         (Windows::UI::Composition::ProxyObject *)this,
         a2,
         0xB5u,
         0);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x36,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionsurfacebrush.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
  else
  {
    if ( this[27] != a2 )
    {
      if ( a2 && _InterlockedIncrement((volatile signed __int32 *)a2 + 4) == 1 )
        (*(void (__fastcall **)(struct Windows::UI::Composition::Compositor *))(*(_QWORD *)a2 + 80LL))(a2);
      v6 = this[27];
      this[27] = a2;
      if ( v6 )
        Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v6);
    }
    this[28] = (Microsoft::WRL2::NestableRuntimeClass *)((unsigned __int64)(this + 25) & -(__int64)(this != 0LL));
    *((_DWORD *)this + 68) = 1056964608;
    *((_DWORD *)this + 69) = 1056964608;
    result = 0LL;
    *((_DWORD *)this + 71) = 2;
    *((_DWORD *)this + 70) = 1;
  }
  return result;
}
