/*
 * XREFs of ?RmpActivatorUnsubscribeFromNotifications@@YAJPEAU_RM_ACTIVATOR@@_K@Z @ 0x18003C0B0
 * Callers:
 *     ?RmSrvHostNotificationUnsubscribe@@YAJPEAU_RM_ACTIVATOR@@_K@Z @ 0x18003BF6C (-RmSrvHostNotificationUnsubscribe@@YAJPEAU_RM_ACTIVATOR@@_K@Z.c)
 * Callees:
 *     ?RmpHostSubscriptionCompareForRtlTree@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x18003B6BC (-RmpHostSubscriptionCompareForRtlTree@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?RmpHostSubscriptionCleanup@@YAXPEAU_RM_HOST_SUBSCRIPTION@@K@Z @ 0x18003C168 (-RmpHostSubscriptionCleanup@@YAXPEAU_RM_HOST_SUBSCRIPTION@@K@Z.c)
 */

__int64 __fastcall RmpActivatorUnsubscribeFromNotifications(struct _RM_ACTIVATOR *a1, __int64 a2)
{
  char v2; // si
  unsigned __int64 v3; // rcx
  int v4; // esi
  unsigned int v5; // edi
  unsigned __int64 v6; // rbx
  int v8; // eax
  unsigned __int64 v9; // rax
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = a2;
  v2 = *((_BYTE *)a1 + 48);
  v3 = (unsigned __int64)a1 + 40;
  v4 = v2 & 1;
  v5 = 0;
  v6 = *(_QWORD *)v3;
  if ( (*(_BYTE *)(v3 + 8) & 1) != 0 )
  {
    if ( !v6 )
      return (unsigned int)-1073741275;
    v6 ^= v3;
  }
  if ( v6 )
  {
    do
    {
      v8 = RmpHostSubscriptionCompareForRtlTree(&v10, (struct _RTL_BALANCED_NODE *)v6);
      if ( v8 >= 0 )
      {
        if ( v8 <= 0 )
          break;
        v9 = *(_QWORD *)(v6 + 8);
      }
      else
      {
        v9 = *(_QWORD *)v6;
      }
      if ( v4 && v9 )
        v6 ^= v9;
      else
        v6 = v9;
    }
    while ( v6 );
    if ( v6 )
    {
      RmpHostSubscriptionCleanup((struct _RM_HOST_SUBSCRIPTION *)(v6 - 24), 0);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)(v6 - 24));
      return v5;
    }
  }
  return (unsigned int)-1073741275;
}
