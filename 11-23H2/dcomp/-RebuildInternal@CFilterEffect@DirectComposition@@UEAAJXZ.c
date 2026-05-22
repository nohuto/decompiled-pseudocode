/*
 * XREFs of ?RebuildInternal@CFilterEffect@DirectComposition@@UEAAJXZ @ 0x1800F81B0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetReferenceProperty@CResourceProxy@DirectComposition@@QEAAJIPEAUIUnknown@@@Z @ 0x180023E78 (-SetReferenceProperty@CResourceProxy@DirectComposition@@QEAAJIPEAUIUnknown@@@Z.c)
 *     ?SetBufferProperty@CResourceProxy@DirectComposition@@QEAAJIPEBX_K@Z @ 0x180032AEC (-SetBufferProperty@CResourceProxy@DirectComposition@@QEAAJIPEBX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetSurfaceProperties@CFilterEffect@DirectComposition@@IEAAJPEAVCBitmapInfoFront@2@PEAPEAUIUnknown@@PEAUtagRECT@@@Z @ 0x1800F7FAC (-GetSurfaceProperties@CFilterEffect@DirectComposition@@IEAAJPEAVCBitmapInfoFront@2@PEAPEAUIUnkno.c)
 */

__int64 __fastcall DirectComposition::CFilterEffect::RebuildInternal(DirectComposition::CFilterEffect *this)
{
  int v1; // ebx
  int v2; // ebp
  __int64 i; // rsi
  DirectComposition::CFilterEffect *v5; // rcx
  __int64 v6; // rax
  struct IUnknown *v7; // r8
  struct DirectComposition::CBitmapInfoFront *v8; // rdx
  int SurfaceProperties; // eax
  struct tagRECT v11; // [rsp+20h] [rbp-28h] BYREF
  struct IUnknown *v12; // [rsp+50h] [rbp+8h] BYREF

  v1 = (int)v12;
  v2 = 0;
  for ( i = 0LL;
        (unsigned int)i < (*(unsigned int (__fastcall **)(char *))(*((_QWORD *)this - 4) + 40LL))((char *)this - 32);
        i = (unsigned int)(i + 1) )
  {
    v6 = *((_QWORD *)this + 5);
    v7 = 0LL;
    v12 = 0LL;
    v11 = 0LL;
    v8 = *(struct DirectComposition::CBitmapInfoFront **)(v6 + 8 * i);
    if ( v8 )
    {
      SurfaceProperties = DirectComposition::CFilterEffect::GetSurfaceProperties(v5, v8, &v12, &v11);
      v7 = v12;
      v2 = SurfaceProperties;
    }
    v1 ^= (i ^ v1) & 0x3FFFFFFF;
    if ( v2 >= 0 )
    {
      v1 = v1 & 0x3FFFFFFF | 0x40000000;
      v2 = DirectComposition::CResourceProxy::SetReferenceProperty(
             (DirectComposition::CResourceProxy *)(*((_QWORD *)this + 4) + 8LL),
             v1,
             v7);
      if ( v2 >= 0 )
      {
        v1 |= 0xC0000000;
        v2 = DirectComposition::CResourceProxy::SetBufferProperty(
               (DirectComposition::CResourceProxy *)(*((_QWORD *)this + 4) + 8LL),
               v1,
               &v11,
               0x10uLL);
      }
    }
  }
  *((_BYTE *)this + 16) &= ~1u;
  return (unsigned int)v2;
}
