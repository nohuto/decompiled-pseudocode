/*
 * XREFs of ?RmpGameModeInsertProcessPairing@@YAXPEAU_RM_GAME_MODE_PROCESS_PAIRING@@@Z @ 0x180088D3C
 * Callers:
 *     ?RmpGameModeRegisterPairedProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUEST@@1@Z @ 0x1800893D4 (-RmpGameModeRegisterPairedProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RESOURCE_.c)
 * Callees:
 *     ?RmpGameModeComparePairingByAuxiliaryId@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1800888FC (-RmpGameModeComparePairingByAuxiliaryId@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?RmpGameModeComparePairingByPrimaryId@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x18008891C (-RmpGameModeComparePairingByPrimaryId@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 */

void __fastcall RmpGameModeInsertProcessPairing(struct _RM_GAME_MODE_PROCESS_PAIRING *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r13
  char v4; // bl
  __int64 v5; // r15
  void *v7; // r12
  unsigned __int64 v8; // rdi
  int v9; // ebp
  unsigned __int64 v10; // rax
  __int64 v11; // r8
  void *v12; // r12
  unsigned __int64 v13; // rdi
  int v14; // ebp
  unsigned __int64 v15; // rax

  v3 = *((_QWORD *)a1 + 6);
  v4 = 0;
  v5 = *((_QWORD *)a1 + 7);
  v7 = (void *)*(unsigned int *)(v5 + 108);
  v8 = *(_QWORD *)(v3 + 72);
  if ( (*(_BYTE *)(v3 + 80) & 1) != 0 && v8 )
    v8 ^= v3 + 72;
  LOBYTE(a3) = 0;
  v9 = *(_BYTE *)(v3 + 80) & 1;
  if ( v8 )
  {
    while ( 1 )
    {
      if ( (int)RmpGameModeComparePairingByAuxiliaryId(v7, (struct _RTL_BALANCED_NODE *)v8) < 0 )
      {
        v10 = *(_QWORD *)v8;
        if ( v9 )
        {
          if ( !v10 )
            goto LABEL_16;
          v10 ^= v8;
        }
        if ( !v10 )
        {
LABEL_16:
          LOBYTE(a3) = 0;
          break;
        }
      }
      else
      {
        v10 = *(_QWORD *)(v8 + 8);
        if ( v9 )
        {
          if ( !v10 )
            goto LABEL_10;
          v10 ^= v8;
        }
        if ( !v10 )
        {
LABEL_10:
          LOBYTE(a3) = 1;
          break;
        }
      }
      v8 = v10;
    }
  }
  RtlRbInsertNodeEx(v3 + 72, v8, a3, a1);
  v12 = (void *)*(unsigned int *)(v3 + 108);
  v13 = *(_QWORD *)(v5 + 72);
  if ( (*(_BYTE *)(v5 + 80) & 1) != 0 && v13 )
    v13 ^= v5 + 72;
  v14 = *(_BYTE *)(v5 + 80) & 1;
  if ( v13 )
  {
    while ( 1 )
    {
      if ( (int)RmpGameModeComparePairingByPrimaryId(v12, (struct _RTL_BALANCED_NODE *)v13) < 0 )
      {
        v15 = *(_QWORD *)v13;
        if ( v14 )
        {
          if ( !v15 )
            break;
          v15 ^= v13;
        }
        if ( !v15 )
          break;
      }
      else
      {
        v15 = *(_QWORD *)(v13 + 8);
        if ( v14 )
        {
          if ( !v15 )
            goto LABEL_26;
          v15 ^= v13;
        }
        if ( !v15 )
        {
LABEL_26:
          v4 = 1;
          break;
        }
      }
      v13 = v15;
    }
  }
  LOBYTE(v11) = v4;
  RtlRbInsertNodeEx(v5 + 72, v13, v11, (char *)a1 + 24);
}
