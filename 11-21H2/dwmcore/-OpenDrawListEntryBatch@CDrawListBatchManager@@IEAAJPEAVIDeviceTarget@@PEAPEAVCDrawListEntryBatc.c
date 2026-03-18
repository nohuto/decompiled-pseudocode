/*
 * XREFs of ?OpenDrawListEntryBatch@CDrawListBatchManager@@IEAAJPEAVIDeviceTarget@@PEAPEAVCDrawListEntryBatch@@@Z @ 0x1801EBF58
 * Callers:
 *     ?EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x180278640 (-EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080A44 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800B2E40 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800CB358 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ @ 0x1800D193C (-InternalRelease@-$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ.c)
 *     ??0CDrawListEntryBatch@@AEAA@PEAVCD3DDevice@@PEAVCSharedDirect3DResources@0@@Z @ 0x1800F8F40 (--0CDrawListEntryBatch@@AEAA@PEAVCD3DDevice@@PEAVCSharedDirect3DResources@0@@Z.c)
 *     ?Open@CDrawListEntryBatch@@QEAAXPEAVIDeviceTarget@@I@Z @ 0x1801F1204 (-Open@CDrawListEntryBatch@@QEAAXPEAVIDeviceTarget@@I@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CDrawListBatchManager::OpenDrawListEntryBatch(
        CDrawListBatchManager *this,
        struct IDeviceTarget *a2,
        struct CDrawListEntryBatch **a3)
{
  unsigned int v6; // ebx
  struct CDrawListEntryBatch::CSharedDirect3DResources *v7; // rbx
  CDrawListEntryBatch *v8; // rax
  __int64 v9; // rcx
  CDrawListEntryBatch *v10; // rax
  CDrawListEntryBatch *v11; // rbp
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned int v14; // edx
  int v15; // esi
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rdx
  unsigned int v19; // eax
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rcx
  void *retaddr; // [rsp+48h] [rbp+0h]
  CDrawListEntryBatch *v25; // [rsp+50h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 18) || *((_QWORD *)this + 16) )
    ModuleFailFastForHRESULT(2147549183LL, retaddr);
  v6 = *((_DWORD *)this + 266);
  if ( (v6 & 0x80000000) != 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0LL, v6, 0x10Du);
    return v6;
  }
  if ( !*((_DWORD *)this + 26) )
  {
    v7 = (struct CDrawListEntryBatch::CSharedDirect3DResources *)*((_QWORD *)this + 15);
    v8 = (CDrawListEntryBatch *)DefaultHeap::Alloc(0x98uLL);
    if ( !v8
      || (v10 = CDrawListEntryBatch::CDrawListEntryBatch(v8, (CDrawListBatchManager *)((char *)this - 24), v7),
          (v11 = v10) == 0LL) )
    {
      v6 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0LL, -2147024882, 0x53u);
      MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0LL, -2147024882, 0x114u);
      return v6;
    }
    CMILRefCountImpl::AddReference((CDrawListEntryBatch *)((char *)v10 + 16));
    v13 = *((unsigned int *)this + 26);
    v25 = v11;
    v14 = v13 + 1;
    if ( (int)v13 + 1 < (unsigned int)v13 )
    {
      v6 = -2147024362;
      v15 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0LL, -2147024362, 0xB5u);
LABEL_18:
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0LL, v15, 0x116u);
      CMILRefCountBaseT<IMILRefCount>::InternalRelease((volatile signed __int32 *)v11 + 2);
      return v6;
    }
    if ( v14 > *((_DWORD *)this + 25) )
    {
      v20 = DynArrayImpl<0>::AddMultipleAndSet((unsigned __int64)this + 80, 8u, 1, &v25);
      v15 = v20;
      v6 = v20;
      if ( v20 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0LL, v20, 0xC0u);
        goto LABEL_18;
      }
    }
    else
    {
      v6 = 0;
      *(_QWORD *)(*((_QWORD *)this + 10) + 8 * v13) = v11;
      *((_DWORD *)this + 26) = v14;
    }
  }
  v17 = *((_QWORD *)this + 16);
  *((_QWORD *)this + 16) = 0LL;
  if ( v17 )
    CMILRefCountBaseT<IMILRefCount>::InternalRelease((volatile signed __int32 *)(v17 + 8));
  v18 = (unsigned int)(*((_DWORD *)this + 26) - 1);
  *((_QWORD *)this + 16) = *(_QWORD *)(*((_QWORD *)this + 10) + 8 * v18);
  v19 = *((_DWORD *)this + 28);
  *((_DWORD *)this + 26) = v18;
  if ( v19 >= (unsigned int)v18 )
    v19 = v18;
  *((_DWORD *)this + 28) = v19;
  ++*((_DWORD *)this + 38);
  CDrawListEntryBatch::Open(*((CDrawListEntryBatch **)this + 16), a2, *((_DWORD *)this + 6));
  *a3 = (struct CDrawListEntryBatch *)*((_QWORD *)this + 16);
  return v6;
}
