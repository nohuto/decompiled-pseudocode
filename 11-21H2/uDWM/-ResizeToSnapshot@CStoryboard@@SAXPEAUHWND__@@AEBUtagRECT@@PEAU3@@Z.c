/*
 * XREFs of ?ResizeToSnapshot@CStoryboard@@SAXPEAUHWND__@@AEBUtagRECT@@PEAU3@@Z @ 0x1800D874C
 * Callers:
 *     ?_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800DCD90 (-_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStorybo.c)
 *     ?_WindowEnumCallback@CInplaceResize@@UEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800DECA0 (-_WindowEnumCallback@CInplaceResize@@UEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@.c)
 * Callees:
 *     ?_GetSnapshotIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z @ 0x180013CE0 (-_GetSnapshotIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z.c)
 */

void __fastcall CStoryboard::ResizeToSnapshot(HWND a1, const struct tagRECT *a2, struct tagRECT *a3)
{
  CDesktopManager *v3; // rax
  __int64 v5; // rbx
  int SnapshotIndex; // eax
  int v7; // r9d
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rdx
  unsigned __int64 v11; // xmm0_8

  v3 = CDesktopManager::s_pDesktopManagerInstance;
  *a3 = *a2;
  v5 = *((_QWORD *)v3 + 23);
  SnapshotIndex = CTransitionVisualController::_GetSnapshotIndex((CTransitionVisualController *)v5, a1);
  v7 = 0;
  if ( SnapshotIndex >= 0 && SnapshotIndex < *(_DWORD *)(v5 + 80) )
  {
    _mm_lfence();
    v8 = *(_QWORD *)(*(_QWORD *)(v5 + 56) + 16LL * (unsigned int)SnapshotIndex + 8);
    v9 = 0;
    v10 = *(_QWORD *)(v8 + 328);
    v11 = _mm_srli_si128(*(__m128i *)(v8 + 328), 8).m128i_u64[0];
    if ( (int)v11 - (int)v10 >= 0 )
      v9 = v11 - v10;
    a3->right = a3->left + v9;
    if ( HIDWORD(v11) - HIDWORD(v10) >= 0 )
      v7 = HIDWORD(v11) - HIDWORD(v10);
    a3->bottom = a3->top + v7;
  }
}
