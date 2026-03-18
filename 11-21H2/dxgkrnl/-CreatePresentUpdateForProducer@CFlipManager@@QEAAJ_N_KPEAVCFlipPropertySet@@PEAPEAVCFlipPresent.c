/*
 * XREFs of ?CreatePresentUpdateForProducer@CFlipManager@@QEAAJ_N_KPEAVCFlipPropertySet@@PEAPEAVCFlipPresentUpdate@@PEAPEAUFlipManagerTokenIFlipInfo@@@Z @ 0x1C007D264
 * Callers:
 *     ?CreatePresentUpdateForProducer@FlipManagerObject@@QEAAJ_N_KPEAVCFlipPropertySet@@PEAPEAVCFlipPresentUpdate@@PEAPEAUFlipManagerTokenIFlipInfo@@@Z @ 0x1C007B978 (-CreatePresentUpdateForProducer@FlipManagerObject@@QEAAJ_N_KPEAVCFlipPropertySet@@PEAPEAVCFlipPr.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ??2?$DXGQUOTAALLOCATOR@$0BAA@$0HFHAEDEG@@@SAPEAX_K@Z @ 0x1C007C12C (--2-$DXGQUOTAALLOCATOR@$0BAA@$0HFHAEDEG@@@SAPEAX_K@Z.c)
 *     ?GetNextEntry@PresentHistory@CFlipManager@@QEAAAEAUEntry@12@XZ @ 0x1C007D8EC (-GetNextEntry@PresentHistory@CFlipManager@@QEAAAEAUEntry@12@XZ.c)
 *     ?MarkAsLost@CFlipManager@@AEAAXJW4Operation@PresentHistory@1@_K@Z @ 0x1C007DED8 (-MarkAsLost@CFlipManager@@AEAAXJW4Operation@PresentHistory@1@_K@Z.c)
 *     ?PrepareIFlipInfo@CEndpointResourceStateManager@@QEAAJPEAVCFlipPropertySet@@IPEAVCFlipPresentUpdate@@PEAPEAUFlipManagerTokenIFlipInfo@@@Z @ 0x1C007FC74 (-PrepareIFlipInfo@CEndpointResourceStateManager@@QEAAJPEAVCFlipPropertySet@@IPEAVCFlipPresentUpd.c)
 *     ?PrepareIncrementalUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpdate@@PEAUFlipManagerObject@@@Z @ 0x1C007FE94 (-PrepareIncrementalUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpd.c)
 *     ?SetFlipPropertySet@CFlipPresentUpdate@@QEAAXPEAVCFlipPropertySet@@@Z @ 0x1C0081910 (-SetFlipPropertySet@CFlipPresentUpdate@@QEAAXPEAVCFlipPropertySet@@@Z.c)
 */

__int64 __fastcall CFlipManager::CreatePresentUpdateForProducer(
        CFlipManager *this,
        __int64 a2,
        __int64 a3,
        struct CFlipPropertySet *a4,
        struct CFlipPresentUpdate **a5,
        struct FlipManagerTokenIFlipInfo **a6)
{
  _QWORD *v6; // rbx
  struct CFlipPropertySet *v7; // r14
  char v9; // r15
  int v11; // esi
  __int64 v12; // rax
  __int64 v13; // rcx
  struct CFlipPresentUpdate *v14; // rdx
  _QWORD *v15; // rax
  CEndpointResourceStateManager *v16; // rbp
  CFlipManager::PresentHistory *v17; // rcx
  struct CFlipManager::PresentHistory::Entry *NextEntry; // rax

  v6 = 0LL;
  v7 = a4;
  v9 = a2;
  v11 = -1073741823;
  if ( *((_QWORD *)this + 6) == 1LL )
  {
    a4 = (struct CFlipPropertySet *)*((_QWORD *)this + 29);
    if ( (unsigned __int64)a4 > 0xFFFFFFFF )
      CFlipManager::MarkAsLost(this, 3221225473LL, 21LL, a4);
  }
  if ( *((_BYTE *)this + 32) )
    goto LABEL_8;
  v12 = DXGQUOTAALLOCATOR<256,1970291526>::operator new((__int64)this, a2, a3, (__int64)a4);
  v6 = (_QWORD *)v12;
  if ( !v12 )
  {
    v11 = -1073741801;
    v6 = 0LL;
LABEL_8:
    v16 = (CFlipManager *)((char *)this + 56);
    goto LABEL_9;
  }
  v13 = *((_QWORD *)this + 29);
  *(_QWORD *)(v12 + 8) = 0LL;
  v14 = (struct CFlipPresentUpdate *)v12;
  v15 = (_QWORD *)(v12 + 24);
  v15[1] = v15;
  *v15 = v15;
  *((_DWORD *)v6 + 10) = 0;
  v6[6] = 0LL;
  v6[7] = 0LL;
  v6[10] = a3;
  v16 = (CFlipManager *)((char *)this + 56);
  *v6 = &CFlipPresentUpdate::`vftable'{for `CFlipTokenOperation'};
  v6[8] = v13;
  v6[2] = &CFlipPresentUpdate::`vftable'{for `CFlipQueuedObject'};
  *((_BYTE *)v6 + 72) = v9;
  v11 = CEndpointResourceStateManager::PrepareIncrementalUpdateForStateManager(
          (CFlipManager *)((char *)this + 56),
          v14,
          (CFlipManager *)((char *)this - 32));
LABEL_9:
  if ( v11 < 0
    || *((_QWORD *)this + 6) == 1LL
    && (v11 = CEndpointResourceStateManager::PrepareIFlipInfo(
                v16,
                v7,
                *((_DWORD *)this + 82),
                (struct CFlipPresentUpdate *)v6,
                a6),
        v11 < 0) )
  {
    if ( v6 )
      (*(void (__fastcall **)(_QWORD *, __int64))(*v6 + 24LL))(v6, 1LL);
  }
  else
  {
    CFlipPresentUpdate::SetFlipPropertySet((CFlipPresentUpdate *)v6, v7);
    v17 = (CFlipManager::PresentHistory *)*((_QWORD *)this + 3);
    if ( v17 )
    {
      NextEntry = CFlipManager::PresentHistory::GetNextEntry(v17);
      *((_DWORD *)NextEntry + 10) = 0;
      *((_QWORD *)NextEntry + 2) = v6[8];
    }
    *a5 = (struct CFlipPresentUpdate *)v6;
  }
  return (unsigned int)v11;
}
