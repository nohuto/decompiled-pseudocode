/*
 * XREFs of ?ReclumpRect@CVirtualSurface@DirectComposition@@AEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800FE024
 * Callers:
 *     ?ReclumpRegion@CVirtualSurface@DirectComposition@@QEAAJAEBVCRegion@@@Z @ 0x1800FE198 (-ReclumpRegion@CVirtualSurface@DirectComposition@@QEAAJAEBVCRegion@@@Z.c)
 * Callees:
 *     ?Create@CTileClump@DirectComposition@@SAJPEAVCSurfaceFactory@2@PEAVCVirtualSurface@2@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAV12@@Z @ 0x1800372A4 (-Create@CTileClump@DirectComposition@@SAJPEAVCSurfaceFactory@2@PEAVCVirtualSurface@2@AEBV-$TMilR.c)
 *     ?BeginDrawInternal@CTileClump@DirectComposition@@AEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@AEBU_GUID@@_NPEAPEAXPEAI4PEAUDCOMPOSITION_GUTTERS@@@Z @ 0x180037618 (-BeginDrawInternal@CTileClump@DirectComposition@@AEAAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UN.c)
 *     ?AddNewClump@CVirtualSurface@DirectComposition@@AEAAJPEAVCTileClump@2@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180037D34 (-AddNewClump@CVirtualSurface@DirectComposition@@AEAAJPEAVCTileClump@2@AEBV-$TMilRect@IUMilRectU@.c)
 *     ?EndDraw@CTileClump@DirectComposition@@QEAAXXZ @ 0x1800388BC (-EndDraw@CTileClump@DirectComposition@@QEAAXXZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007E478 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CopySurface@CVirtualSurface@DirectComposition@@QEAAJPEAUID3D11Resource@@HHAEBUtagRECT@@_N@Z @ 0x1800FD9C0 (-CopySurface@CVirtualSurface@DirectComposition@@QEAAJPEAUID3D11Resource@@HHAEBUtagRECT@@_N@Z.c)
 */

__int64 __fastcall DirectComposition::CVirtualSurface::ReclumpRect(
        DirectComposition::CVirtualSurface *this,
        struct tagRECT *a2)
{
  int v4; // eax
  DirectComposition::CBitmapInfoBack **v5; // rdi
  int v6; // ebx
  DirectComposition::CTileClump *v7; // rcx
  DirectComposition::CTileClump *v9; // [rsp+40h] [rbp-20h] BYREF
  struct ID3D11Resource *v10; // [rsp+48h] [rbp-18h] BYREF
  struct tagRECT v11; // [rsp+50h] [rbp-10h] BYREF
  int v12; // [rsp+90h] [rbp+30h] BYREF
  int v13; // [rsp+A0h] [rbp+40h] BYREF

  v9 = 0LL;
  v10 = 0LL;
  v13 = 0;
  v12 = 0;
  v4 = DirectComposition::CTileClump::Create(*((_QWORD *)this + 13), (__int64)this, (__int64)a2, &v9);
  v5 = (DirectComposition::CBitmapInfoBack **)v9;
  v6 = v4;
  if ( v4 >= 0 )
  {
    v6 = DirectComposition::CTileClump::BeginDrawInternal(
           (__int64)v9,
           a2,
           &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,
           1,
           (void **)&v10,
           (unsigned int *)&v13,
           (unsigned int *)&v12,
           0LL);
    if ( v6 >= 0 )
    {
      v11 = *a2;
      v6 = DirectComposition::CVirtualSurface::CopySurface(this, v10, v13, v12, &v11, 1);
    }
  }
  if ( v10 )
    DirectComposition::CTileClump::EndDraw(v5);
  if ( v6 >= 0 )
    v6 = DirectComposition::CVirtualSurface::AddNewClump((__int64)this, (__int64)v5, (const struct MilRectU *)a2);
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v5 + 2, 0xFFFFFFFF) == 1 )
    {
      CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v5 + 1));
      (*(void (__fastcall **)(DirectComposition::CTileClump *))(*(_QWORD *)v9 + 40LL))(v9);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v5 + 2, 0xFFFFFFFF) == 1 )
      {
        v7 = v9;
        --*((_DWORD *)v5 + 2);
        (*(void (__fastcall **)(DirectComposition::CTileClump *, __int64))(*(_QWORD *)v7 + 32LL))(v7, 1LL);
      }
    }
  }
  if ( v10 )
    ((void (__fastcall *)(struct ID3D11Resource *))v10->lpVtbl->Release)(v10);
  return (unsigned int)v6;
}
