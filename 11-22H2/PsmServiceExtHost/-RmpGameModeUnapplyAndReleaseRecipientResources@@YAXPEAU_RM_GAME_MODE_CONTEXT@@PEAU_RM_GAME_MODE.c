/*
 * XREFs of ?RmpGameModeUnapplyAndReleaseRecipientResources@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18008A1DC
 * Callers:
 *     ?RmpGameModePolicyWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18000F490 (-RmpGameModePolicyWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180053740 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall RmpGameModeUnapplyAndReleaseRecipientResources(
        struct _RM_GAME_MODE_CONTEXT *a1,
        struct _RM_GAME_MODE_RECIPIENT_PROCESS *a2)
{
  void (__fastcall **v3)(struct _RM_GAME_MODE_CONTEXT *, struct _RM_GAME_MODE_RECIPIENT_PROCESS *); // rsi
  unsigned int i; // edi

  v3 = &off_1800B40E8;
  for ( i = 0; i < 5; ++i )
  {
    if ( ((1 << i) & *((_DWORD *)a2 + 41)) != 0 )
      (*(v3 - 1))(a1, a2);
    if ( ((1 << i) & *((_DWORD *)a2 + 40)) != 0 )
      (*v3)(a1, a2);
    v3 += 5;
  }
  *((_DWORD *)a2 + 40) = 0;
  *((_DWORD *)a2 + 41) = 0;
}
