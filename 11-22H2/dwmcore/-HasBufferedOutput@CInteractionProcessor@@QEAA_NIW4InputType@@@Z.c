/*
 * XREFs of ?HasBufferedOutput@CInteractionProcessor@@QEAA_NIW4InputType@@@Z @ 0x1801AEC34
 * Callers:
 *     ?HasBufferedOutput@CInteractionRoot@@UEAA_NIW4InputType@@@Z @ 0x1801A4770 (-HasBufferedOutput@CInteractionRoot@@UEAA_NIW4InputType@@@Z.c)
 *     ?HasBufferedOutput@CInteraction@@UEAA_NIW4InputType@@@Z @ 0x18020C190 (-HasBufferedOutput@CInteraction@@UEAA_NIW4InputType@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800EC624 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetInteractionContext@CInteractionProcessor@@QEBAJW4InputType@@PEAPEAUIInteractionContextWrapper@@@Z @ 0x1801AEA94 (-GetInteractionContext@CInteractionProcessor@@QEBAJW4InputType@@PEAPEAUIInteractionContextWrappe.c)
 */

char __fastcall CInteractionProcessor::HasBufferedOutput(CInteractionProcessor *a1, unsigned int a2, int a3)
{
  int v3; // ebx
  char v6; // bl
  __int64 v8; // [rsp+48h] [rbp+20h] BYREF

  v3 = a3;
  if ( !a3 )
    v3 = *((_DWORD *)a1 + 197);
  v8 = 0LL;
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v8);
  CInteractionProcessor::GetInteractionContext(a1, v3, &v8);
  if ( v8 )
    v6 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 120LL))(v8, a2);
  else
    v6 = 0;
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v8);
  return v6;
}
