/*
 * XREFs of ?ValidateActivationAndBroadcastChanged@CImmersiveMode@@UEAAXW4ZBID@@@Z @ 0x18017D060
 * Callers:
 *     <none>
 * Callees:
 *     ?_ScheduleListenerNotification@CImmersiveMode@@AEAAXXZ @ 0x180044388 (-_ScheduleListenerNotification@CImmersiveMode@@AEAAXXZ.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18014E10C (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ??_GZBAND_NOTIFICATION_DATA@@QEAAPEAXI@Z @ 0x1803A7D34 (--_GZBAND_NOTIFICATION_DATA@@QEAAPEAXI@Z.c)
 */

void __fastcall CImmersiveMode::ValidateActivationAndBroadcastChanged(__int64 a1, int a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  int v5; // eax
  unsigned int v6; // edx
  _DWORD *v7; // rcx
  int v8; // r14d
  ZBAND_NOTIFICATION_DATA *v9; // rcx
  int v10; // eax

  v4 = (struct _RTL_CRITICAL_SECTION *)((a1 + 96) & -(__int64)(a1 != 88));
  v5 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v4, 1);
  v7 = *(_DWORD **)(a1 + 264);
  v8 = v5;
  if ( v7 )
  {
    if ( *v7 != a2 && *v7 )
    {
      v10 = 0;
      if ( a2 != *(_DWORD *)(a1 + 160) )
        v10 = a2;
      *v7 = v10;
    }
    v9 = *(ZBAND_NOTIFICATION_DATA **)(a1 + 264);
    if ( *(_DWORD *)v9 )
      *(_DWORD *)(a1 + 160) = *(_DWORD *)v9;
    if ( *(_DWORD *)v9 && *((_QWORD *)v9 + 1) )
    {
      CImmersiveMode::_ScheduleListenerNotification((CImmersiveMode *)(a1 - 88));
    }
    else
    {
      if ( v9 )
        ZBAND_NOTIFICATION_DATA::`scalar deleting destructor'(v9, v6);
      *(_QWORD *)(a1 + 264) = 0LL;
    }
  }
  if ( v8 >= 0 )
    LeaveCriticalSection(v4);
}
