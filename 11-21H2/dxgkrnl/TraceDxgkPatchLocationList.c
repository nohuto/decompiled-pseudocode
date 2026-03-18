/*
 * XREFs of TraceDxgkPatchLocationList @ 0x1C00510B8
 * Callers:
 *     ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C0171830 (-Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSH.c)
 *     ?SubmitPresentWithDmaBuffer@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAVDXGHWQUEUE@@PEAVDXGALLOCATION@@2PEAU_DXGKARG_PRESENT@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0172460 (-SubmitPresentWithDmaBuffer@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAVDXGHWQUEUE@@PEAVDXGALLOCAT.c)
 * Callees:
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     McTemplateK0ppqQR2QR2QR2QR2QR2QR2QR2_EtwWriteTransfer @ 0x1C0050F2C (McTemplateK0ppqQR2QR2QR2QR2QR2QR2QR2_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall TraceDxgkPatchLocationList(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  NTSTATUS result; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // ebx
  __int64 v12; // r8
  unsigned __int64 v13; // r9
  unsigned int v14; // r10d
  __int64 v15; // rax
  __int64 v16; // [rsp+28h] [rbp-D8h]
  _BYTE v18[256]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v19[256]; // [rsp+170h] [rbp+70h] BYREF
  _BYTE v20[256]; // [rsp+270h] [rbp+170h] BYREF
  _BYTE v21[256]; // [rsp+370h] [rbp+270h] BYREF
  _DWORD v22[64]; // [rsp+470h] [rbp+370h] BYREF
  _BYTE v23[256]; // [rsp+570h] [rbp+470h] BYREF
  _DWORD v24[64]; // [rsp+670h] [rbp+570h] BYREF

  result = (unsigned int)memset(v22, 0, sizeof(v22));
  v11 = 0;
  do
  {
    v12 = a3 - v11;
    if ( (unsigned int)v12 >= 0x40 )
    {
      v12 = 64LL;
LABEL_6:
      v13 = 0LL;
      v14 = 0;
      do
      {
        v15 = v14 + v11;
        ++v14;
        v9 = 3 * v15;
        v24[v13 / 4] = *(_DWORD *)(a4 + 24 * v15);
        v13 += 4LL;
        v22[v13 / 4 + 63] = *(_DWORD *)(a4 + 24 * v15 + 4) & 0xFFFFFF;
        *(_DWORD *)&v20[v13 + 252] = *(_DWORD *)(a4 + 24 * v15 + 8);
        *(_DWORD *)&v19[v13 + 252] = *(_DWORD *)(a4 + 24 * v15 + 12);
        *(_DWORD *)&v18[v13 + 252] = *(_DWORD *)(a4 + 24 * v15 + 16);
        result = *(_DWORD *)(a4 + 24 * v15 + 20);
        *(_DWORD *)&v18[v13 - 4] = result;
      }
      while ( v14 < (unsigned int)v12 );
      goto LABEL_8;
    }
    if ( (_DWORD)v12 )
      goto LABEL_6;
LABEL_8:
    v11 += v12;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    {
      LODWORD(v16) = v12;
      result = McTemplateK0ppqQR2QR2QR2QR2QR2QR2QR2_EtwWriteTransfer(
                 v10,
                 v9,
                 v12,
                 a1,
                 a2,
                 v16,
                 v24,
                 v23,
                 v22,
                 v21,
                 v20,
                 v19,
                 v18);
    }
  }
  while ( v11 < a3 );
  return result;
}
