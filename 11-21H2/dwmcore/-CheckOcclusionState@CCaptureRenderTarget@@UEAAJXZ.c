/*
 * XREFs of ?CheckOcclusionState@CCaptureRenderTarget@@UEAAJXZ @ 0x1801C4198
 * Callers:
 *     ?CheckOcclusionState@CCaptureRenderTarget@@$4PPPPPPPM@A@EAAJXZ @ 0x1801059D0 (-CheckOcclusionState@CCaptureRenderTarget@@$4PPPPPPPM@A@EAAJXZ.c)
 *     ?CheckOcclusionState@CCaptureRenderTarget@@$4PPPPPPPM@FA@EAAJXZ @ 0x1801059F0 (-CheckOcclusionState@CCaptureRenderTarget@@$4PPPPPPPM@FA@EAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?EnsureResources@CCaptureRenderTarget@@IEAAJPEAVCD3DDevice@@@Z @ 0x1801C47C4 (-EnsureResources@CCaptureRenderTarget@@IEAAJPEAVCD3DDevice@@@Z.c)
 *     ?GetD3DDeviceNoRef@CDeviceManager@CCaptureRenderTarget@@QEAAPEAVCD3DDevice@@AEBU_LUID@@PEAUIFlipProducer@@@Z @ 0x1801C4B90 (-GetD3DDeviceNoRef@CDeviceManager@CCaptureRenderTarget@@QEAAPEAVCD3DDevice@@AEBU_LUID@@PEAUIFlip.c)
 *     ?GetNextBufferIndexAvailable@CCaptureRenderTarget@@IEAAHXZ @ 0x1801C4C78 (-GetNextBufferIndexAvailable@CCaptureRenderTarget@@IEAAHXZ.c)
 */

__int64 __fastcall CCaptureRenderTarget::CheckOcclusionState(struct CD3DDevice **this)
{
  unsigned int v2; // edi
  struct CD3DDevice *D3DDeviceNoRef; // rax
  __int64 v4; // rcx
  struct CD3DDevice *v5; // rsi
  char v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = 142213121;
  v7 = 0;
  D3DDeviceNoRef = CCaptureRenderTarget::CDeviceManager::GetD3DDeviceNoRef(
                     this - 29,
                     (const struct _LUID *)this - 28,
                     *(this - 18));
  v4 = (__int64)*(this - 18);
  v5 = D3DDeviceNoRef;
  if ( v4
    && (*(int (__fastcall **)(__int64, char *))(*(_QWORD *)v4 + 24LL))(v4, &v7) >= 0
    && v7
    && v5
    && *(this - 251)
    && ((*(this - 11) - *(this - 12)) & 0xFFFFFFFFFFFFFFF8uLL) != 0
    && *(this - 18)
    && *((_BYTE *)this - 208)
    && (int)CCaptureRenderTarget::EnsureResources((CCaptureRenderTarget *)(this - 263), v5) >= 0
    && (int)CCaptureRenderTarget::GetNextBufferIndexAvailable((CCaptureRenderTarget *)(this - 263)) >= 0 )
  {
    return 0;
  }
  return v2;
}
