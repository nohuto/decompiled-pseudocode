/*
 * XREFs of ?RmpGameModeFindProcessPairing@@YAPEAU_RM_GAME_MODE_PROCESS_PAIRING@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@KW4_RM_GAME_MODE_PAIRED_PROCESS@@@Z @ 0x18008887C
 * Callers:
 *     ?RmpGameModeRegisterPairedProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUEST@@1@Z @ 0x180089074 (-RmpGameModeRegisterPairedProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RESOURCE_.c)
 * Callees:
 *     ?RmpGameModeComparePairingByAuxiliaryId@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x18008859C (-RmpGameModeComparePairingByAuxiliaryId@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 */

unsigned __int64 __fastcall RmpGameModeFindProcessPairing(__int64 a1, unsigned int a2)
{
  char v2; // di
  __int64 v3; // rcx
  int v4; // edi
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rsi
  int v7; // eax
  unsigned __int64 v8; // rax

  v2 = *(_BYTE *)(a1 + 80);
  v3 = a1 + 72;
  v4 = v2 & 1;
  v5 = *(_QWORD *)v3;
  if ( (*(_BYTE *)(v3 + 8) & 1) != 0 )
  {
    if ( !v5 )
      return 0LL;
    v5 ^= v3;
  }
  if ( v5 )
  {
    v6 = a2;
    do
    {
      v7 = RmpGameModeComparePairingByAuxiliaryId((void *)v6, (struct _RTL_BALANCED_NODE *)v5);
      if ( v7 >= 0 )
      {
        if ( v7 <= 0 )
          return v5;
        v8 = *(_QWORD *)(v5 + 8);
      }
      else
      {
        v8 = *(_QWORD *)v5;
      }
      if ( v4 && v8 )
        v5 ^= v8;
      else
        v5 = v8;
    }
    while ( v5 );
  }
  return v5;
}
