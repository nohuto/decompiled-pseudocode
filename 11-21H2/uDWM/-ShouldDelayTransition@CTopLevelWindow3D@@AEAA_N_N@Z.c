/*
 * XREFs of ?ShouldDelayTransition@CTopLevelWindow3D@@AEAA_N_N@Z @ 0x180035C80
 * Callers:
 *     ?ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z @ 0x180035B2C (-ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z.c)
 *     ?OnOffsetUpdated@CTopLevelWindow3D@@QEAAJ_N@Z @ 0x180036234 (-OnOffsetUpdated@CTopLevelWindow3D@@QEAAJ_N@Z.c)
 *     ?BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z @ 0x180038038 (-BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z.c)
 * Callees:
 *     ?_GetSnapshotIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z @ 0x180013CE0 (-_GetSnapshotIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z.c)
 *     McTemplateU0pq_EtwEventWriteTransfer @ 0x1800E6D10 (McTemplateU0pq_EtwEventWriteTransfer.c)
 */

bool __fastcall CTopLevelWindow3D::ShouldDelayTransition(CTopLevelWindow3D *this, unsigned __int8 a2)
{
  __int64 v2; // rdi
  bool v3; // bl
  unsigned int v4; // esi
  __int64 v5; // rcx
  __int64 v7; // rdx
  int v8; // r9d
  int v9; // eax
  int v10; // eax
  CTransitionVisualController *v11; // rbx
  int SnapshotIndex; // eax

  v2 = *((_QWORD *)this + 42);
  v3 = 0;
  v4 = a2;
  v5 = v2;
  if ( (*(_BYTE *)(v2 + 668) & 1) != 0 )
    return v3;
  if ( !a2 )
  {
    if ( (*(_DWORD *)(v2 + 672) & 0xFFF) == 0xFFF )
      return 0;
    v11 = (CTransitionVisualController *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23);
    SnapshotIndex = CTransitionVisualController::_GetSnapshotIndex(v11, *(HWND *)(v2 + 40));
    if ( SnapshotIndex < 0 || SnapshotIndex >= *((_DWORD *)v11 + 20) )
      return 0;
    v3 = 1;
    goto LABEL_14;
  }
  v7 = 0x100000LL;
  do
  {
    v8 = v7;
    if ( !v5 )
      break;
    v9 = *(_DWORD *)(v5 + 672);
    v5 = *(_QWORD *)(v5 + 600);
    v10 = v7 & v9;
    LODWORD(v7) = v7 | 0x10000000;
    v3 = v10 == v8;
  }
  while ( v10 != v8 );
  if ( v3 )
  {
LABEL_14:
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0pq_EtwEventWriteTransfer(v5, v7, *(_QWORD *)(v2 + 40), v4);
  }
  return v3;
}
