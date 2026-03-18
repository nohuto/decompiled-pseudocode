/*
 * XREFs of ?DepartBufferedOutputPointer@CInteractionProcessor@@QEAA_NIW4InputType@@@Z @ 0x18018D208
 * Callers:
 *     ?DepartBufferedOutputPointer@CInteractionRoot@@UEAA_NI@Z @ 0x180182870 (-DepartBufferedOutputPointer@CInteractionRoot@@UEAA_NI@Z.c)
 *     ?DepartBufferedOutputPointer@CInteraction@@UEAA_NI@Z @ 0x1801F20F0 (-DepartBufferedOutputPointer@CInteraction@@UEAA_NI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800D5C3C (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetInteractionContext@CInteractionProcessor@@QEBAJW4InputType@@PEAPEAUIInteractionContextWrapper@@@Z @ 0x18018D528 (-GetInteractionContext@CInteractionProcessor@@QEBAJW4InputType@@PEAPEAUIInteractionContextWrappe.c)
 */

char __fastcall CInteractionProcessor::DepartBufferedOutputPointer(__int64 a1, unsigned int a2)
{
  unsigned int v2; // ebx
  char v4; // si
  __int64 v7; // [rsp+48h] [rbp+20h] BYREF

  v2 = *(_DWORD *)(a1 + 788);
  v4 = 0;
  v7 = 0LL;
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v7);
  CInteractionProcessor::GetInteractionContext(a1, v2, &v7);
  if ( v7 )
    v4 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 128LL))(v7, a2);
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v7);
  return v4;
}
