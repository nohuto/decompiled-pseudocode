/*
 * XREFs of ?IsGpuVirtualAddressingSupported@DXGADAPTER@@QEBAEXZ @ 0x1C0004CF8
 * Callers:
 *     ?Initialize@DXGDEVICE@@QEAAJEE@Z @ 0x1C018DD14 (-Initialize@DXGDEVICE@@QEAAJEE@Z.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C01B625C (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 *     ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x1C0211D70 (-Initialize@ADAPTER_RENDER@@QEAAJXZ.c)
 * Callees:
 *     ?IsGpuVaIoMmuSupported@DXGADAPTER@@QEBAEXZ @ 0x1C00135D0 (-IsGpuVaIoMmuSupported@DXGADAPTER@@QEBAEXZ.c)
 */

char __fastcall DXGADAPTER::IsGpuVirtualAddressingSupported(DXGADAPTER *this)
{
  char v1; // cl
  unsigned __int8 IsGpuVaIoMmuSupported; // al

  if ( (*((_DWORD *)this + 571) & 0x40) != 0 )
    return 1;
  IsGpuVaIoMmuSupported = DXGADAPTER::IsGpuVaIoMmuSupported(this);
  v1 = 0;
  if ( IsGpuVaIoMmuSupported )
    return 1;
  return v1;
}
