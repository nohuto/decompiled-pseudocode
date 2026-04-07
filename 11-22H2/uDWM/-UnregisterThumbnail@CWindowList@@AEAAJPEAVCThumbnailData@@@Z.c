/*
 * XREFs of ?UnregisterThumbnail@CWindowList@@AEAAJPEAVCThumbnailData@@@Z @ 0x180002A18
 * Callers:
 *     ?UnregisterThumbnail@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_UNREGISTERTHUMBNAIL@@@Z @ 0x18000293C (-UnregisterThumbnail@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_UNREGISTERTHUMBNAIL@@@Z.c)
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180031A20 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?Remove@?$DynArray@PEAVCThumbnailData@@$0A@@@QEAAHAEBQEAVCThumbnailData@@@Z @ 0x180002B50 (-Remove@-$DynArray@PEAVCThumbnailData@@$0A@@@QEAAHAEBQEAVCThumbnailData@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x180050730 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?OnThumbnailRemoved@CTopLevelWindow@@QEAAJPEAVCVisual@@@Z @ 0x18006DAF6 (-OnThumbnailRemoved@CTopLevelWindow@@QEAAJPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CWindowList::UnregisterThumbnail(CWindowList *this, struct CVisual **a2)
{
  unsigned int v2; // edi
  struct CVisual *v5; // rcx
  struct CVisual *v6; // rdx
  struct CVisual *v7; // rdx
  CBaseObject *v8; // rcx
  CBaseObject *v9; // rcx
  struct CVisual *v10; // rcx
  struct CVisual *v11; // rax
  CBaseObject *v12; // rcx
  CBaseObject *v14; // rcx
  CTopLevelWindow *v15; // rcx
  struct CVisual *v16; // rdx
  int v17; // eax
  struct CThumbnailData *v18; // [rsp+48h] [rbp+10h] BYREF

  v18 = (struct CThumbnailData *)a2;
  v2 = 0;
  if ( *((_BYTE *)a2 + 34) )
  {
    v5 = a2[13];
    if ( v5 )
    {
      v6 = a2[14];
      if ( v6 )
      {
        VisualCollection::Remove((struct CVisual *)((char *)v5 + 32), v6);
        v14 = a2[14];
        if ( v14 )
        {
          CBaseObject::Release(v14);
          a2[14] = 0LL;
        }
      }
      v7 = a2[11];
      if ( v7 )
        VisualCollection::Remove((struct CVisual *)((char *)a2[13] + 32), v7);
      v8 = a2[12];
      if ( v8 )
      {
        CBaseObject::Release(v8);
        a2[12] = 0LL;
      }
      v9 = a2[13];
      if ( v9 )
      {
        CBaseObject::Release(v9);
        a2[13] = 0LL;
      }
    }
  }
  else
  {
    v15 = (CTopLevelWindow *)*((_QWORD *)a2[2] + 55);
    if ( v15 )
    {
      v16 = a2[11];
      if ( v16 )
      {
        v17 = CTopLevelWindow::OnThumbnailRemoved(v15, v16);
        v2 = v17;
        if ( v17 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x19CAu, 0LL);
          return v2;
        }
      }
    }
  }
  DynArray<CThumbnailData *,0>::Remove((char *)a2[2] + 536, &v18);
  v10 = a2[3];
  if ( v10 )
    DynArray<CThumbnailData *,0>::Remove((char *)v10 + 568, &v18);
  v11 = a2[11];
  if ( v11 )
    *((_QWORD *)v11 + 47) = 0LL;
  v12 = a2[11];
  if ( v12 )
  {
    CBaseObject::Release(v12);
    a2[11] = 0LL;
  }
  (*(void (__fastcall **)(struct CVisual **, __int64))*a2)(a2, 1LL);
  DynArray<CThumbnailData *,0>::Remove((char *)this + 384, &v18);
  return v2;
}
