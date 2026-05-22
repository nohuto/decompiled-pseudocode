/*
 * XREFs of ?GetD3D11Texture2DAndContentOrigin@CTileClump@DirectComposition@@QEAAJPEAPEAUID3D11Texture2D@@PEAI1@Z @ 0x18000580C
 * Callers:
 *     ?CopyRegionToSurface@CTileClump@DirectComposition@@QEAAJPEAUID3D11Resource@@HHAEBVCRegion@@_N@Z @ 0x1800055D0 (-CopyRegionToSurface@CTileClump@DirectComposition@@QEAAJPEAUID3D11Resource@@HHAEBVCRegion@@_N@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CTileClump::GetD3D11Texture2DAndContentOrigin(
        DirectComposition::CTileClump *this,
        struct ID3D11Texture2D **a2,
        unsigned int *a3,
        unsigned int *a4)
{
  __int64 v5; // r10
  int v6; // ecx
  __int64 v7; // rax
  int v8; // ebx
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v5 = *(_QWORD *)(*((_QWORD *)this + 9) + 16LL);
  v6 = *(_DWORD *)(v5 + 76) + ((*(_DWORD *)(v5 + 88) >> 2) & 1);
  *a3 = *(_DWORD *)(v5 + 72) + (*(_DWORD *)(v5 + 88) & 1);
  v7 = *(_QWORD *)(v5 + 64);
  *a4 = v6;
  v8 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v7 + 16))(
         *(_QWORD *)(v7 + 16),
         &GUID_dc8e63f3_d12b_4952_b47b_5e45026a862d,
         &v10);
  if ( v8 >= 0 )
  {
    v8 = (**(__int64 (__fastcall ***)(__int64, GUID *, struct ID3D11Texture2D **))v10)(
           v10,
           &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,
           a2);
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return (unsigned int)v8;
}
