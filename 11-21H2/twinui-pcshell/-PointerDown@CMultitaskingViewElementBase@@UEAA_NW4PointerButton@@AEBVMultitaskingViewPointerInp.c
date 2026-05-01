/*
 * XREFs of ?PointerDown@CMultitaskingViewElementBase@@UEAA_NW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1804BA540
 * Callers:
 *     ?PointerDown@CMultitaskingViewFrameElement@@UEAA_NW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1804C2BC0 (-PointerDown@CMultitaskingViewFrameElement@@UEAA_NW4PointerButton@@AEBVMultitaskingViewPointerIn.c)
 *     ?PointerDown@CMultitaskingViewButtonElement@@UEAA_NW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1804C7BE0 (-PointerDown@CMultitaskingViewButtonElement@@UEAA_NW4PointerButton@@AEBVMultitaskingViewPointerI.c)
 * Callees:
 *     ??4?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800727D8 (--4-$ComPtr@UISnappedWindow@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_MapArgumentsToChild@CMultitaskingViewElementBase@@IEAA?AVMultitaskingViewPointerInputArgs@@AEBV2@@Z @ 0x1804BB6B0 (-_MapArgumentsToChild@CMultitaskingViewElementBase@@IEAA-AVMultitaskingViewPointerInputArgs@@AEB.c)
 *     ?_PointerMove@CMultitaskingViewElementBase@@IEAAXAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1804BB728 (-_PointerMove@CMultitaskingViewElementBase@@IEAAXAEBVMultitaskingViewPointerInputArgs@@@Z.c)
 */

char __fastcall CMultitaskingViewElementBase::PointerDown(__int64 a1, unsigned int a2, __int64 a3)
{
  char v6; // cl
  __int64 v7; // rdi
  __int64 (__fastcall *v8)(__int64, _QWORD, __int64); // rbx
  __int64 v9; // rax
  _BYTE v11[40]; // [rsp+20h] [rbp-28h] BYREF

  CMultitaskingViewElementBase::_PointerMove(
    (CMultitaskingViewElementBase *)a1,
    (const struct MultitaskingViewPointerInputArgs *)a3);
  v6 = 0;
  if ( !*(_DWORD *)(a1 + 100) )
  {
    *(_DWORD *)(a1 + 100) = a2;
    *(_OWORD *)(a1 + 104) = *(_OWORD *)a3;
    *(_DWORD *)(a1 + 120) = *(_DWORD *)(a3 + 16);
    if ( *(_QWORD *)(a1 + 136) )
    {
      Microsoft::WRL::ComPtr<ISnappedWindow>::operator=((__int64 *)(a1 + 128), (__int64 *)(a1 + 136));
      v7 = *(_QWORD *)(a1 + 128);
      v8 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v7 + 192LL);
      v9 = CMultitaskingViewElementBase::_MapArgumentsToChild(a1, v11, a3);
      return v8(v7, a2, v9);
    }
  }
  return v6;
}
