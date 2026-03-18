/*
 * XREFs of ?IssueAndFreeSignal@CFlipManager@@AEAAXPEAVCFlipManagerSignal@@_K@Z @ 0x1C007DDE4
 * Callers:
 *     ?ProcessSignal@CFlipManager@@QEAAXPEAVCFlipManagerSignal@@_K@Z @ 0x1C007E758 (-ProcessSignal@CFlipManager@@QEAAXPEAVCFlipManagerSignal@@_K@Z.c)
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?GetNextEntry@PresentHistory@CFlipManager@@QEAAAEAUEntry@12@XZ @ 0x1C007D8EC (-GetNextEntry@PresentHistory@CFlipManager@@QEAAAEAUEntry@12@XZ.c)
 *     ?MarkAsLost@CFlipManager@@AEAAXJW4Operation@PresentHistory@1@_K@Z @ 0x1C007DED8 (-MarkAsLost@CFlipManager@@AEAAXJW4Operation@PresentHistory@1@_K@Z.c)
 *     DxgkImmediateSignalSynchronizationObjectByReference @ 0x1C019AB18 (DxgkImmediateSignalSynchronizationObjectByReference.c)
 */

void __fastcall CFlipManager::IssueAndFreeSignal(CFlipManager *this, struct CFlipManagerSignal *a2, __int64 a3)
{
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rsi
  int v8; // eax
  struct DXGGLOBAL *Global; // rax
  CFlipManager::PresentHistory *v10; // rcx
  struct CFlipManager::PresentHistory::Entry *NextEntry; // rax

  if ( *((_BYTE *)a2 + 56) )
  {
    v6 = *((_QWORD *)a2 + 6);
    if ( v6 > 1 )
    {
      v7 = v6 - 1;
      v8 = DxgkImmediateSignalSynchronizationObjectByReference(*((_QWORD *)this + 38), v6 - 1);
      if ( v8 < 0 )
        CFlipManager::MarkAsLost(this, (unsigned int)v8, 17LL, v7);
      Global = DXGGLOBAL_GetGlobal();
      (*(void (__fastcall **)(_QWORD, unsigned __int64, bool))(*((_QWORD *)Global + 38073) + 176LL))(
        *((unsigned int *)this + 82),
        v7,
        *((_BYTE *)a2 + 56) == 0);
      v6 = *((_QWORD *)a2 + 6);
    }
    *((_QWORD *)this + 32) = v6;
  }
  ++*((_QWORD *)this + 33);
  v10 = (CFlipManager::PresentHistory *)*((_QWORD *)this + 3);
  if ( v10 )
  {
    NextEntry = CFlipManager::PresentHistory::GetNextEntry(v10);
    *(_QWORD *)NextEntry = a3;
    *((_QWORD *)NextEntry + 2) = *((_QWORD *)a2 + 6);
    *((_DWORD *)NextEntry + 10) = (*((_BYTE *)a2 + 56) != 0) + 12;
  }
  (**(void (__fastcall ***)(struct CFlipManagerSignal *, __int64))a2)(a2, 1LL);
}
