/*
 * XREFs of ??$make_unique@VCEndpointVolumeState@@PEAUIVolumeProvider@@AEAPEBG$0A@@std@@YA?AV?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@0@$$QEAPEAUIVolumeProvider@@AEAPEBG@Z @ 0x18003F564
 * Callers:
 *     ?AddEndpointVolumeReference@CEndpointVolumeStateManager@@UEAAJPEBGAEA_N1AEAM11@Z @ 0x18003FAD0 (-AddEndpointVolumeReference@CEndpointVolumeStateManager@@UEAAJPEBGAEA_N1AEAM11@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000CCA0 (--2@YAPEAX_K@Z.c)
 *     ??0CEndpointVolumeState@@QEAA@PEAUIVolumeProvider@@PEBG@Z @ 0x18003F5D0 (--0CEndpointVolumeState@@QEAA@PEAUIVolumeProvider@@PEBG@Z.c)
 */

// Hidden C++ exception states: #wind=1
CEndpointVolumeState **__fastcall std::make_unique<CEndpointVolumeState,IVolumeProvider *,unsigned short const * &,0>(
        CEndpointVolumeState **a1,
        struct IVolumeProvider **a2,
        const unsigned __int16 **a3)
{
  CEndpointVolumeState *v6; // rdi
  CEndpointVolumeState *v7; // rax

  v6 = 0LL;
  v7 = (CEndpointVolumeState *)operator new(0x38uLL);
  if ( v7 )
    v6 = CEndpointVolumeState::CEndpointVolumeState(v7, *a2, *a3);
  *a1 = v6;
  return a1;
}
