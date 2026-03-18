/*
 * XREFs of ?ClearDirectFlip@COverlayContext@@AEAAXXZ @ 0x1800C6990
 * Callers:
 *     ?ApplyConfiguration@COverlayContext@@QEAAJAEBVCDirtyRegion@@PEAV?$vector@PEBVCVisual@@V?$allocator@PEBVCVisual@@@std@@@std@@PEA_N2@Z @ 0x1800BC2AC (-ApplyConfiguration@COverlayContext@@QEAAJAEBVCDirtyRegion@@PEAV-$vector@PEBVCVisual@@V-$allocat.c)
 *     ?Present@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@IAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@I_N@Z @ 0x1800BD210 (-Present@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@IAEBV-$vector@UtagRECT@@V-$allocator@UtagR.c)
 *     ?Reset@COverlayContext@@QEAAXXZ @ 0x1800C68E4 (-Reset@COverlayContext@@QEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0xq_EventWriteTransfer @ 0x180111E98 (McTemplateU0xq_EventWriteTransfer.c)
 *     ??_GCDirectFlipInfo@@QEAAPEAXI@Z @ 0x1801B7D30 (--_GCDirectFlipInfo@@QEAAPEAXI@Z.c)
 */

void __fastcall COverlayContext::ClearDirectFlip(COverlayContext *this)
{
  __int64 v2; // rcx
  unsigned int v3; // edx
  __int64 v4; // rax
  __int64 v5; // rcx
  _BYTE v6[40]; // [rsp+20h] [rbp-28h] BYREF

  v2 = *((_QWORD *)this + 1396);
  if ( v2 )
  {
    v3 = 1;
    if ( *(_DWORD *)(v2 + 52) == 1
      || ((*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(v2 + 16) + 400LL))(
            *(_QWORD *)(v2 + 16),
            1LL,
            0LL),
          (v2 = *((_QWORD *)this + 1396)) != 0) )
    {
      CDirectFlipInfo::`scalar deleting destructor'((CDirectFlipInfo *)v2, v3);
    }
    *((_QWORD *)this + 1396) = 0LL;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x400) != 0 )
    {
      v4 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)this + 96LL))(*(_QWORD *)this, v6);
      McTemplateU0xq_EventWriteTransfer(v5, &EVTDESC_ETWGUID_DIRECTFLIP_TRANSITIONEVENT, *(unsigned int *)(v4 + 8), 0LL);
    }
  }
}
