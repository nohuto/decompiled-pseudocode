/*
 * XREFs of ?RmpGameModeReleaseUnusedGlobalResources@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x18000F95C
 * Callers:
 *     ?RmpGameModePolicyWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18000F490 (-RmpGameModePolicyWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180053500 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall RmpGameModeReleaseUnusedGlobalResources(struct _RM_GAME_MODE_CONTEXT *a1)
{
  unsigned int v1; // r14d
  struct _RM_GAME_MODE_CONTEXT *v2; // rax
  char *v4; // rsi
  __int64 v5; // rbp
  bool v6; // bl
  int v7; // edx
  int v8; // ebx
  bool v9; // zf

  v1 = *((_DWORD *)a1 + 32);
  v2 = (struct _RM_GAME_MODE_CONTEXT *)*((_QWORD *)a1 + 11);
  *((_DWORD *)a1 + 20) = 0;
  v4 = (char *)v2 - 88;
  if ( v2 == (struct _RM_GAME_MODE_CONTEXT *)((char *)a1 + 88) )
    v4 = 0LL;
  v9 = !_BitScanForward((unsigned int *)&v5, v1);
  v6 = !v9;
  RtlReleaseSRWLockExclusive((char *)a1 + 72);
  if ( v6 )
  {
    do
    {
      v7 = 1 << v5;
      v8 = ~(1 << v5);
      v1 &= v8;
      if ( BYTE1(off_1800B40C0[5 * v5 + 4]) )
      {
        v9 = (v7 & *((_DWORD *)a1 + 33)) == 0;
      }
      else
      {
        if ( !v4 )
          goto LABEL_10;
        v9 = (v7 & *((_DWORD *)v4 + 41)) == 0;
      }
      if ( v9 )
      {
LABEL_10:
        off_1800B40C0[5 * v5 + 3](a1, 0LL);
        *((_DWORD *)a1 + 32) &= v8;
      }
      v9 = !_BitScanForward((unsigned int *)&v5, v1);
    }
    while ( !v9 );
  }
  RtlAcquireSRWLockExclusive((char *)a1 + 72);
  *((_DWORD *)a1 + 20) = GetCurrentThreadId();
}
