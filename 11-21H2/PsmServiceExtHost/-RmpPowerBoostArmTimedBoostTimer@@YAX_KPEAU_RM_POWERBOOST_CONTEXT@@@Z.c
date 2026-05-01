/*
 * XREFs of ?RmpPowerBoostArmTimedBoostTimer@@YAX_KPEAU_RM_POWERBOOST_CONTEXT@@@Z @ 0x180004C2C
 * Callers:
 *     ?RmpPowerBoostTimedBoostCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180004740 (-RmpPowerBoostTimedBoostCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 *     ?RmpPowerBoostStartTimedBoost@@YAJPEAU_RM_SERVICE_GLOBALS@@K@Z @ 0x180004A34 (-RmpPowerBoostStartTimedBoost@@YAJPEAU_RM_SERVICE_GLOBALS@@K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RmpPowerBoostArmTimedBoostTimer(unsigned __int64 a1, struct _RM_POWERBOOST_CONTEXT *a2)
{
  int v2; // r8d
  __int64 v3; // rax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_DWORD *)a2 + 16);
  if ( a1 >= *((_QWORD *)a2 + 6) )
  {
    *((_DWORD *)a2 + 16) = v2 & 0xFFFFFFF7;
  }
  else
  {
    v3 = (unsigned int)(*((_DWORD *)a2 + 12) - a1);
    *((_DWORD *)a2 + 16) = v2 | 8;
    v4 = -10000 * v3;
    TpSetTimer(*((_QWORD *)a2 + 7), &v4, 0LL, 0LL);
  }
}
