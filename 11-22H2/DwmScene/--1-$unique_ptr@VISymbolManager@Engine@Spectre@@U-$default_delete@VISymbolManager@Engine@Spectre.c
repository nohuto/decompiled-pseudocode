/*
 * XREFs of ??1?$unique_ptr@VISymbolManager@Engine@Spectre@@U?$default_delete@VISymbolManager@Engine@Spectre@@@std@@@std@@QEAA@XZ @ 0x180031BD4
 * Callers:
 *     ??1Engine@0Spectre@@UEAA@XZ @ 0x180031CC4 (--1Engine@0Spectre@@UEAA@XZ.c)
 *     _Spectre::dtor$5::Engine::Engine_::_1_::dtor$5 @ 0x1800E549F (_Spectre--dtor$5--Engine--Engine_--_1_--dtor$5.c)
 *     _Spectre::dtor$2::Engine::_Engine_::_1_::dtor$2 @ 0x1800E57A2 (_Spectre--dtor$2--Engine--_Engine_--_1_--dtor$2.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::unique_ptr<Spectre::Engine::ISymbolManager>::~unique_ptr<Spectre::Engine::ISymbolManager>(
        __int64 (__fastcall ****a1)(_QWORD, __int64))
{
  __int64 (__fastcall ***v1)(_QWORD, __int64); // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (**v1)(v1, 1LL);
  return result;
}
