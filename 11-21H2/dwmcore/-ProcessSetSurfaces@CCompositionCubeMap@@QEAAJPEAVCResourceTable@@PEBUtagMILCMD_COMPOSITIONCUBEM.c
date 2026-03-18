/*
 * XREFs of ?ProcessSetSurfaces@CCompositionCubeMap@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONCUBEMAP_SETSURFACES@@PEBXI@Z @ 0x18020C214
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180046EF0 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800B2E40 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x1800BDA3C (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800D7C40 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VCCompositionSurfaceBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18020C044 (-InternalRelease@-$ComPtr@VCCompositionSurfaceBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CCompositionCubeMap::ProcessSetSurfaces(
        CCompositionCubeMap *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPOSITIONCUBEMAP_SETSURFACES *a3,
        _DWORD *a4,
        unsigned int a5)
{
  CResourceTable *v7; // r8
  unsigned int v9; // eax
  unsigned int v10; // esi
  __int64 v11; // rcx
  struct CResource *v12; // r12
  __int64 v13; // r14
  __int64 v14; // rsi
  unsigned int v15; // edx
  struct CResource *ResourceWithoutType; // rax
  struct CResource *v17; // rbp
  __int64 v18; // rcx
  int v19; // eax
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rsi
  __int64 v23; // r14
  struct CResource *v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rcx
  CResource *v27; // rax
  unsigned int v28; // ecx
  __int128 v30; // [rsp+30h] [rbp-48h]
  CResource *v31; // [rsp+80h] [rbp+8h] BYREF
  struct CResourceTable *v32; // [rsp+88h] [rbp+10h]
  CResource *v33; // [rsp+90h] [rbp+18h] BYREF

  v32 = a2;
  v7 = a2;
  v9 = *((_DWORD *)a3 + 2);
  if ( v9 > *((_DWORD *)this + 28) )
  {
    v10 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0LL, -2003303421, 0xA2u);
    return v10;
  }
  v11 = 0LL;
  a5 = 0;
  if ( !v9 )
  {
LABEL_18:
    *((_DWORD *)this + 30) = -1;
    v28 = 0;
    if ( *((_DWORD *)a3 + 2) )
    {
      while ( !*(_QWORD *)(32LL * v28 + *((_QWORD *)this + 11) + 8) )
      {
        if ( ++v28 >= *((_DWORD *)a3 + 2) )
          goto LABEL_23;
      }
      *((_DWORD *)this + 30) = v28;
    }
LABEL_23:
    *((_BYTE *)this + 152) = 1;
    return 0;
  }
  while ( 1 )
  {
    v12 = 0LL;
    v13 = (unsigned int)v11;
    v30 = 0uLL;
    v14 = 5 * v11;
    v15 = a4[5 * v11];
    v31 = 0LL;
    ResourceWithoutType = CResourceTable::GetResourceWithoutType(v7, v15);
    v17 = ResourceWithoutType;
    if ( !ResourceWithoutType )
      goto LABEL_11;
    if ( !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 56LL))(
            ResourceWithoutType,
            40LL) )
      break;
    v19 = a4[v14 + 1];
    if ( v19 < 0 )
      break;
    v18 = (unsigned int)a4[v14 + 2];
    if ( (int)v18 < 0 || a4[v14 + 3] <= v19 || a4[v14 + 4] <= (int)v18 )
      break;
    CMILRefCountImpl::AddReference((struct CResource *)((char *)v17 + 8));
    v33 = 0LL;
    v12 = v17;
    v31 = v17;
    Microsoft::WRL::ComPtr<CCompositionSurfaceBitmap>::InternalRelease(&v33);
    v30 = *(_OWORD *)&a4[v14 + 1];
    v20 = CResource::RegisterNotifier(this, v17);
    v10 = v20;
    if ( v20 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0LL, v20, 0xC9u);
      goto LABEL_17;
    }
LABEL_11:
    v22 = *((_QWORD *)this + 11);
    v23 = 32 * v13;
    v24 = *(struct CResource **)(v22 + v23);
    if ( v24 )
    {
      CResource::UnRegisterNotifierInternal(this, v24);
      *(_QWORD *)(v22 + v23) = 0LL;
    }
    v25 = *((_QWORD *)this + 11);
    v31 = 0LL;
    *(_QWORD *)(v23 + v25) = v17;
    v26 = *((_QWORD *)this + 11);
    v27 = *(CResource **)(v26 + v23 + 8);
    *(_QWORD *)(v26 + v23 + 8) = v12;
    v33 = v27;
    Microsoft::WRL::ComPtr<CCompositionSurfaceBitmap>::InternalRelease(&v33);
    *(_OWORD *)(*((_QWORD *)this + 11) + v23 + 16) = v30;
    Microsoft::WRL::ComPtr<CCompositionSurfaceBitmap>::InternalRelease(&v31);
    v11 = a5 + 1;
    a5 = v11;
    if ( (unsigned int)v11 >= *((_DWORD *)a3 + 2) )
      goto LABEL_18;
    v7 = v32;
  }
  v10 = -2003303421;
  MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0LL, -2003303421, 0xC6u);
LABEL_17:
  Microsoft::WRL::ComPtr<CCompositionSurfaceBitmap>::InternalRelease(&v31);
  return v10;
}
