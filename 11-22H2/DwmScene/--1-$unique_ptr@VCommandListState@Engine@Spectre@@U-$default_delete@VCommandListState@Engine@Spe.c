/*
 * XREFs of ??1?$unique_ptr@VCommandListState@Engine@Spectre@@U?$default_delete@VCommandListState@Engine@Spectre@@@std@@@std@@QEAA@XZ @ 0x18003903C
 * Callers:
 *     ??1CommandList@Engine@Spectre@@UEAA@XZ @ 0x18003905C (--1CommandList@Engine@Spectre@@UEAA@XZ.c)
 *     ?Create@CommandList@Engine@Spectre@@UEAA_NAEBVState@23@@Z @ 0x1800391E0 (-Create@CommandList@Engine@Spectre@@UEAA_NAEBVState@23@@Z.c)
 * Callees:
 *     ??R?$default_delete@VCommandListState@Engine@Spectre@@@std@@QEBAXPEAVCommandListState@Engine@Spectre@@@Z @ 0x1800390C0 (--R-$default_delete@VCommandListState@Engine@Spectre@@@std@@QEBAXPEAVCommandListState@Engine@Spe.c)
 */

__int64 __fastcall std::unique_ptr<Spectre::Engine::CommandListState>::~unique_ptr<Spectre::Engine::CommandListState>(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<Spectre::Engine::CommandListState>::operator()();
  return result;
}
