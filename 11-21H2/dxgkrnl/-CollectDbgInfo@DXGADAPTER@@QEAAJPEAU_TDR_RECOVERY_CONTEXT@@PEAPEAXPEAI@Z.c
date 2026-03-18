/*
 * XREFs of ?CollectDbgInfo@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@PEAPEAXPEAI@Z @ 0x1C02B9BE8
 * Callers:
 *     ?DxgkCollectCoreDbgInfo@@YAJPEAU_TDR_RECOVERY_CONTEXT@@PEAXI@Z @ 0x1C02CED4C (-DxgkCollectCoreDbgInfo@@YAJPEAU_TDR_RECOVERY_CONTEXT@@PEAXI@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00131F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?CollectDbgInfo@ADAPTER_DISPLAY@@QEAAJPEAUDXGADAPTERDBGINFO@@@Z @ 0x1C02BF4A8 (-CollectDbgInfo@ADAPTER_DISPLAY@@QEAAJPEAUDXGADAPTERDBGINFO@@@Z.c)
 */

__int64 __fastcall DXGADAPTER::CollectDbgInfo(
        PERESOURCE *this,
        struct _TDR_RECOVERY_CONTEXT *a2,
        void **a3,
        unsigned int *a4)
{
  char *v8; // rdx
  _OWORD *v9; // rcx
  __int64 v10; // r8
  _OWORD *v11; // rax
  __int128 v12; // xmm1
  ADAPTER_DISPLAY *v13; // rcx
  PERESOURCE v14; // rax

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this) )
  {
    WdLogSingleEntry1(1LL, 9993LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceExclusiveOwner()", 9993LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *a4 < 0x438 )
    return 2147483653LL;
  v8 = (char *)*a3;
  v9 = this + 261;
  v10 = 4LL;
  *(_DWORD *)v8 = 1885430849;
  v11 = v8 + 8;
  do
  {
    *v11 = *v9;
    v11[1] = v9[1];
    v11[2] = v9[2];
    v11[3] = v9[3];
    v11[4] = v9[4];
    v11[5] = v9[5];
    v11[6] = v9[6];
    v11 += 8;
    v12 = v9[7];
    v9 += 8;
    *(v11 - 1) = v12;
    --v10;
  }
  while ( v10 );
  *v11 = *v9;
  v11[1] = v9[1];
  v11[2] = v9[2];
  v11[3] = v9[3];
  v11[4] = v9[4];
  v13 = (ADAPTER_DISPLAY *)this[349];
  if ( v13 )
    ADAPTER_DISPLAY::CollectDbgInfo(v13, (struct DXGADAPTERDBGINFO *)v8);
  v14 = this[350];
  if ( v14 )
  {
    *(_OWORD *)(v8 + 792) = *(_OWORD *)&v14[6].Address;
    *(LIST_ENTRY *)(v8 + 808) = v14[7].SystemResourcesList;
  }
  *a3 = (char *)*a3 + 1080;
  *a4 -= 1080;
  return 0LL;
}
