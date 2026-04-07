/*
 * XREFs of ?_FindProjectionVisualByAdapter@CProjectionBorderManager@@AEAAHAEBU_LUID@@I@Z @ 0x1800CF300
 * Callers:
 *     ?UpdateOutputDuplication@CProjectionBorderManager@@UEAAJPEBU_D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_@@@Z @ 0x1800CE320 (-UpdateOutputDuplication@CProjectionBorderManager@@UEAAJPEBU_D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CProjectionBorderManager::_FindProjectionVisualByAdapter(
        CProjectionBorderManager *this,
        const struct _LUID *a2,
        int a3)
{
  unsigned int v3; // ebx
  unsigned int v4; // r10d
  unsigned int v5; // r9d
  __int64 v6; // r11
  __int64 v7; // rcx

  v3 = *((_DWORD *)this + 106);
  v4 = -1;
  v5 = 0;
  if ( v3 )
  {
    v6 = *((_QWORD *)this + 50);
    while ( 1 )
    {
      v7 = 56LL * v5;
      if ( *(_DWORD *)(v7 + v6 + 24) == a2->LowPart
        && *(_DWORD *)(v7 + v6 + 28) == a2->HighPart
        && *(_DWORD *)(v7 + v6 + 32) == a3 )
      {
        break;
      }
      if ( ++v5 >= v3 )
        return v4;
    }
    return v5;
  }
  return v4;
}
