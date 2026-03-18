/*
 * XREFs of WmipClearIrpObjectList @ 0x14036A22C
 * Callers:
 *     WmipReceiveNotifications @ 0x14036158C (WmipReceiveNotifications.c)
 *     WmipCompleteGuidIrpWithError @ 0x14036A118 (WmipCompleteGuidIrpWithError.c)
 *     WmipNotificationIrpCancel @ 0x14036A1C0 (WmipNotificationIrpCancel.c)
 *     WmipWriteWnodeToObject @ 0x1405FBBB4 (WmipWriteWnodeToObject.c)
 * Callees:
 *     <none>
 */

void __fastcall WmipClearIrpObjectList(__int64 a1)
{
  _QWORD *v1; // rdx
  _QWORD *v2; // rcx
  _QWORD *v3; // r8
  _QWORD *v4; // rax
  _QWORD *v5; // r9
  _QWORD *v6; // rax

  v1 = (_QWORD *)(a1 + 120);
  v2 = *(_QWORD **)(a1 + 120);
  while ( v2 != v1 )
  {
    v3 = (_QWORD *)*v2;
    v4 = v2;
    v5 = v2;
    v2 = v3;
    *(v4 - 1) = 0LL;
    if ( (_QWORD *)v3[1] != v4 || (v6 = (_QWORD *)v4[1], (_QWORD *)*v6 != v5) )
      __fastfail(3u);
    *v6 = v3;
    v3[1] = v6;
  }
}
