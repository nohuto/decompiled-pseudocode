/*
 * XREFs of ?LowPowerEpochNotificationCallback@@YAKPEAXK0@Z @ 0x18000A610
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180001828 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180002430 (__security_check_cookie.c)
 *     ?Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ @ 0x18000A2EC (-Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?TsSessionOnLowPowerEpochStateChanged@@YAXXZ @ 0x1800301EC (-TsSessionOnLowPowerEpochStateChanged@@YAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall LowPowerEpochNotificationCallback(void *a1, __int64 a2, _DWORD *a3)
{
  int v3; // esi
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  int v5; // eax
  _DWORD *v6; // rcx
  int v8; // [rsp+30h] [rbp-68h] BYREF
  int v9; // [rsp+34h] [rbp-64h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+40h] [rbp-58h] BYREF
  int *v11; // [rsp+60h] [rbp-38h]
  int v12; // [rsp+68h] [rbp-30h]
  int v13; // [rsp+6Ch] [rbp-2Ch]
  int *v14; // [rsp+70h] [rbp-28h]
  int v15; // [rsp+78h] [rbp-20h]
  int v16; // [rsp+7Ch] [rbp-1Ch]

  if ( a3[4] == 4
    && *(_QWORD *)a3 == *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1
    && *((_QWORD *)a3 + 1) == *(_QWORD *)GUID_LOW_POWER_EPOCH.Data4 )
  {
    v3 = a3[5];
    if ( (v3 != 0) != g_bLowPowerEpoch )
    {
      v4 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
      g_bLowPowerEpoch = v3 != 0;
      v5 = g_bIsSystemAsleep;
      if ( !v3 )
        v5 = 1;
      g_bIsSystemAsleep = v5;
      v6 = (_DWORD *)*((_QWORD *)AudioSrvPolicyManagerTelemetryProvider::Instance() + 1);
      if ( *v6 > 4u )
      {
        v8 = g_bIsSystemAsleep;
        v9 = g_bLowPowerEpoch;
        v14 = &v8;
        v15 = 4;
        v16 = 0;
        v11 = &v9;
        v12 = 4;
        v13 = 0;
        tlgWriteTransfer_EventWriteTransfer((__int64)v6, (unsigned __int8 *)dword_180050C5F, 0LL, 0LL, 4u, &v10);
      }
      TsSessionOnLowPowerEpochStateChanged();
      if ( v4 )
        LeaveCriticalSection(v4);
    }
  }
  return 0LL;
}
