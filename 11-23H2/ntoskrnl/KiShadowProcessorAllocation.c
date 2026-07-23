/*
 * XREFs of KiShadowProcessorAllocation @ 0x140A893F4
 * Callers:
 *     KiEnableKvaShadowing @ 0x140A89238 (KiEnableKvaShadowing.c)
 *     KeWriteProtectProcessorState @ 0x140A91730 (KeWriteProtectProcessorState.c)
 * Callees:
 *     KiShadowKernelSectionByAddress @ 0x140411084 (KiShadowKernelSectionByAddress.c)
 *     KiUnshadowKernelSectionByAddress @ 0x1404110E0 (KiUnshadowKernelSectionByAddress.c)
 *     MmCreateShadowMapping @ 0x14081DE80 (MmCreateShadowMapping.c)
 *     MmDeleteShadowMapping @ 0x140A3CA80 (MmDeleteShadowMapping.c)
 */

__int64 __fastcall KiShadowProcessorAllocation(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned int ShadowMapping; // edi
  char v7; // bl
  char v8; // bp
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rcx
  char v11; // bl
  unsigned int v12; // ebp
  __int64 v13; // rcx
  unsigned int v14; // ebp
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  unsigned int v18; // [rsp+6Ch] [rbp+24h]

  v18 = 0;
  if ( !KiKvaShadow )
    goto LABEL_23;
  ShadowMapping = MmCreateShadowMapping(a2, 20480LL);
  if ( !ShadowMapping )
  {
LABEL_24:
    v7 = 0;
    goto LABEL_25;
  }
  v7 = 1;
  ShadowMapping = MmCreateShadowMapping(a1 + 40576, 4096LL);
  if ( !ShadowMapping )
    goto LABEL_25;
  v7 = 3;
  if ( !*(_DWORD *)(a1 + 36) )
  {
    ShadowMapping = KiShadowKernelSectionByAddress();
    if ( !ShadowMapping )
      goto LABEL_25;
    v7 = 7;
  }
  v8 = v7;
  if ( !(_BYTE)KiKernelCetEnabled )
  {
LABEL_22:
    v18 = 0;
LABEL_23:
    ShadowMapping = 1;
    goto LABEL_24;
  }
  if ( a3 )
    v9 = *(_QWORD *)(a3 + 136);
  else
    v9 = (*(_QWORD *)(a1 + 37920) & 0xFFFFFFFFFFFFF000uLL) + 0x2000;
  ShadowMapping = MmCreateShadowMapping(v9 - 0x2000, 4096LL);
  if ( ShadowMapping )
  {
    v7 |= 8u;
    v10 = a3 ? *(_QWORD *)(a3 + 224) : *(_QWORD *)(a1 + 37936);
    ShadowMapping = MmCreateShadowMapping(v10, 4096LL);
    if ( ShadowMapping )
    {
      v11 = v8;
      v12 = 1;
      v7 = v11 | 0x18;
      while ( 1 )
      {
        v13 = a3
            ? *(_QWORD *)(a3 + 8LL * v12 + 184)
            : (*(_QWORD *)(*(_QWORD *)(a1 + 37936) + 8LL * v12) & 0xFFFFFFFFFFFFF000uLL) + 0x2000;
        ShadowMapping = MmCreateShadowMapping(v13 - 0x2000, 4096LL);
        if ( !ShadowMapping )
          break;
        v18 = v12++;
        if ( v12 > 4 )
          goto LABEL_22;
      }
    }
  }
LABEL_25:
  if ( (_BYTE)KiKernelCetEnabled )
  {
    v14 = 1;
    if ( v18 )
    {
      if ( a3 )
      {
        do
          MmDeleteShadowMapping(*(_QWORD *)(a3 + 8LL * v14++ + 184) - 0x2000LL, 0x1000uLL);
        while ( v14 <= v18 );
      }
      else if ( v18 )
      {
        do
          MmDeleteShadowMapping(*(_QWORD *)(*(_QWORD *)(a1 + 37936) + 8LL * v14++) & 0xFFFFFFFFFFFFF000uLL, 0x1000uLL);
        while ( v14 <= v18 );
      }
    }
    if ( (v7 & 0x10) != 0 )
    {
      if ( a3 )
        v15 = *(_QWORD *)(a3 + 224);
      else
        v15 = *(_QWORD *)(a1 + 37936);
      MmDeleteShadowMapping(v15, 0x1000uLL);
    }
    if ( (v7 & 8) != 0 )
    {
      if ( a3 )
        v16 = *(_QWORD *)(a3 + 136);
      else
        v16 = (*(_QWORD *)(a1 + 37920) & 0xFFFFFFFFFFFFF000uLL) + 0x2000;
      MmDeleteShadowMapping(v16 - 0x2000, 0x1000uLL);
    }
  }
  if ( (v7 & 4) != 0 )
    KiUnshadowKernelSectionByAddress();
  if ( (v7 & 2) != 0 )
    MmDeleteShadowMapping(a1 + 40576, 0x1000uLL);
  if ( (v7 & 1) != 0 )
    MmDeleteShadowMapping(a2, 0x5000uLL);
  return ShadowMapping;
}
