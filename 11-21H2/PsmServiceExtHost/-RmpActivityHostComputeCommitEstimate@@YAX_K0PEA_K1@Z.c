/*
 * XREFs of ?RmpActivityHostComputeCommitEstimate@@YAX_K0PEA_K1@Z @ 0x18001CB40
 * Callers:
 *     ?RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18001BE00 (-RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180029970 (-RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RmpActivityHostComputeCommitEstimate(
        unsigned __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4)
{
  unsigned __int64 v4; // r11
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx

  v4 = a1 >> 3;
  if ( a2 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    v4 = a2 >> 4;
  if ( v4 <= 0x1400000 )
    v4 = 20971520LL;
  v6 = v4 + a1 - 1;
  if ( v4 == 20971520 )
    v7 = v6 / 0x1400000;
  else
    v7 = v6 / v4;
  v8 = -1LL;
  if ( is_mul_ok(v7, v4) )
    v8 = v7 * v4;
  if ( a2 - 1 <= 0xFFFFFFFFFFFFFFFDuLL && v8 > a2 )
  {
    v12 = (v4 + a2 - 1) / v4;
    v8 = v12 * v4;
    if ( !is_mul_ok(v12, v4) )
    {
      v8 = -1LL;
LABEL_21:
      v9 = -1LL;
      goto LABEL_12;
    }
  }
  if ( v8 == -1LL )
    goto LABEL_21;
  v9 = v8 + v4;
  if ( v8 + v4 < v8 )
    goto LABEL_21;
LABEL_12:
  if ( a2 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    if ( v8 >= a2 )
      v8 = a2;
    if ( a2 < v9 )
      v9 = a2;
  }
  v10 = 2 * v4;
  if ( 2 * v4 >= v8 )
    v10 = v8;
  v11 = v8 - v10;
  if ( a4 )
    *a4 = v9;
  if ( a3 )
    *a3 = v11;
}
