/*
 * XREFs of ?RuntimeClassInitialize@CompositionEffectFactory@Composition@UI@Windows@@QEAAJPEAV1234@@Z @ 0x18001A114
 * Callers:
 *     ??$MakeAndInitialize2@VCompositionEffectFactory@Composition@UI@Windows@@V1234@PEAV1234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionEffectFactory@Composition@UI@Windows@@$$QEAPEAV3456@@Z @ 0x180019FF8 (--$MakeAndInitialize2@VCompositionEffectFactory@Composition@UI@Windows@@V1234@PEAV1234@@Details@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResourceSetHandleProperty@CDevice@DirectComposition@@QEAAJIIPEAX@Z @ 0x18001A2D4 (-ResourceSetHandleProperty@CDevice@DirectComposition@@QEAAJIIPEAX@Z.c)
 *     ?MarshalEffectDescription@CompositionEffectFactory@Composition@UI@Windows@@AEAAJXZ @ 0x18001A5B4 (-MarshalEffectDescription@CompositionEffectFactory@Composition@UI@Windows@@AEAAJXZ.c)
 *     ?RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z @ 0x180058D30 (-RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionEffectFactory::RuntimeClassInitialize(
        Windows::UI::Composition::CompositionEffectFactory *this,
        struct Windows::UI::Composition::CompositionEffectFactory *a2)
{
  void (__fastcall ***v2)(_QWORD); // rbx
  __int64 v5; // rcx
  int v6; // ebx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (void (__fastcall ***)(_QWORD))*((_QWORD *)a2 + 19);
  if ( *((void (__fastcall ****)(_QWORD))this + 19) != v2 )
  {
    if ( v2 )
      (**v2)(*((_QWORD *)a2 + 19));
    v5 = *((_QWORD *)this + 19);
    *((_QWORD *)this + 19) = v2;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  }
  *((_BYTE *)this + 232) = 0;
  v6 = Windows::UI::Composition::ProxyObject::RuntimeClassInitialize(
         this,
         *(struct Windows::UI::Composition::Compositor **)(*((_QWORD *)a2 + 3) + 528LL),
         0x1Cu,
         0);
  if ( v6 < 0 )
  {
    v8 = 112LL;
  }
  else
  {
    v6 = Windows::UI::Composition::CompositionEffectFactory::MarshalEffectDescription(this);
    if ( v6 < 0 )
    {
      v8 = 114LL;
    }
    else
    {
      v6 = DirectComposition::CDevice::ResourceSetHandleProperty(
             *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
             *((_DWORD *)this + 32),
             5u,
             *((void **)a2 + 27));
      if ( v6 < 0 )
      {
        v8 = 120LL;
      }
      else
      {
        v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 3) + 456LL) + 24LL))(*(_QWORD *)(*((_QWORD *)this + 3) + 456LL));
        if ( v6 >= 0 )
          return 0LL;
        v8 = 123LL;
      }
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositioneffectfactory.cpp",
    (const char *)(unsigned int)v6);
  return (unsigned int)v6;
}
