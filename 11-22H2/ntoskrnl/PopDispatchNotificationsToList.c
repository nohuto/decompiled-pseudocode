/*
 * XREFs of PopDispatchNotificationsToList @ 0x1407EC5C8
 * Callers:
 *     PopDispatchNotifications @ 0x1407EC580 (PopDispatchNotifications.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140230720 (ExAcquireFastMutex.c)
 *     ExReleaseFastMutex @ 0x140230860 (ExReleaseFastMutex.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x14041E260 (ZwUpdateWnfStateData.c)
 *     PopFreeRegistration @ 0x140682A04 (PopFreeRegistration.c)
 *     PopMarshalSettingValues @ 0x1407EC7B4 (PopMarshalSettingValues.c)
 */

struct _KTHREAD *__fastcall PopDispatchNotificationsToList(WNF_STATE_NAME **a1)
{
  WNF_STATE_NAME *v2; // rdi
  WNF_STATE_NAME *v3; // rsi
  int v4; // eax
  struct _KTHREAD *result; // rax
  int v6; // ebx
  ULONG v7; // r8d
  NTSTATUS updated; // ebx
  unsigned int v9; // eax
  WNF_STATE_NAME **v10; // rax
  ULONG v11; // [rsp+40h] [rbp-58h] BYREF
  WNF_STATE_NAME StateName; // [rsp+48h] [rbp-50h] BYREF
  _BYTE Buffer[40]; // [rsp+50h] [rbp-48h] BYREF

  v11 = 0;
  StateName = 0LL;
  ExAcquireFastMutex(&PopSettingLock);
  v2 = *a1;
  while ( v2 != (WNF_STATE_NAME *)a1 )
  {
    v3 = v2;
    while ( 1 )
    {
      v4 = v2[6].Data[1];
      if ( (v4 & 1) == 0 || (v4 & 2) != 0 )
        break;
      StateName = v2[7];
      v2[6].Data[1] = v2[6].Data[1] & 0xFFFFFFFC | 2;
      v6 = PopMarshalSettingValues(v2, Buffer, 36LL, &v11);
      ExReleaseFastMutex(&PopSettingLock);
      v7 = v11;
      if ( v6 < 0 )
        v7 = 0;
      v11 = v7;
      updated = ZwUpdateWnfStateData(&StateName, Buffer, v7, 0LL, 0LL, 0, 0);
      if ( KeGetCurrentThread()->WaitBlock[3].SpareLong )
        goto LABEL_19;
      ExAcquireFastMutex(&PopSettingLock);
      v9 = v2[6].Data[1] & 0xFFFFFFFD;
      v2[6].Data[1] = v9;
      if ( updated < 0 )
      {
        v4 = v9 | 1;
        v2[6].Data[1] = v4;
        break;
      }
    }
    v2 = (WNF_STATE_NAME *)*v2;
    if ( (v4 & 2) == 0 && (v4 & 4) != 0 )
    {
      if ( (WNF_STATE_NAME *)v2[1] != v3 || (v10 = (WNF_STATE_NAME **)v3[1], *v10 != v3) )
        __fastfail(3u);
      *v10 = v2;
      v2[1] = (WNF_STATE_NAME)v10;
      PopFreeRegistration(v3);
    }
  }
  ExReleaseFastMutex(&PopSettingLock);
  result = KeGetCurrentThread();
  if ( result->WaitBlock[3].SpareLong )
LABEL_19:
    __fastfail(0x20u);
  return result;
}
