/*
 * XREFs of ?_DiscardStoredSnapshotByIndex@CTransitionVisualController@@IEAAJH@Z @ 0x1800EE7E0
 * Callers:
 *     ?DiscardStoredSnapshot@CTransitionVisualController@@QEAAJPEAUHWND__@@@Z @ 0x1800EC7A8 (-DiscardStoredSnapshot@CTransitionVisualController@@QEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?_RemoveSnapshotFromVisualTreeIfExists@CTransitionVisualController@@IEAAXPEAVCTransitionWindowSnapshot@@@Z @ 0x1800EF05C (-_RemoveSnapshotFromVisualTreeIfExists@CTransitionVisualController@@IEAAXPEAVCTransitionWindowSn.c)
 */

__int64 __fastcall CTransitionVisualController::_DiscardStoredSnapshotByIndex(
        CTransitionVisualController *this,
        unsigned int a2)
{
  unsigned int v3; // ebx
  struct CTransitionWindowSnapshot *v4; // rsi
  unsigned int v5; // edx
  __int64 v6; // r8
  __int64 v7; // rax

  v3 = a2;
  v4 = *(struct CTransitionWindowSnapshot **)(*((_QWORD *)this + 7) + 16LL * a2 + 8);
  CTransitionVisualController::_RemoveSnapshotFromVisualTreeIfExists(this, v4);
  v5 = *((_DWORD *)this + 20);
  if ( v3 < v5 )
  {
    v6 = *((_QWORD *)this + 7);
    while ( v3 < v5 - 1 )
    {
      v7 = v3++;
      *(_OWORD *)(v6 + 16 * v7) = *(_OWORD *)(v6 + 16LL * v3);
      v5 = *((_DWORD *)this + 20);
    }
    *((_DWORD *)this + 20) = v5 - 1;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x194u);
  }
  if ( v4 )
    CBaseObject::Release(v4);
  return 0LL;
}
