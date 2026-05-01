/*
 * XREFs of ?HampPdcStart@@YAJPEAU_HAM_PDC_CONTEXT@@@Z @ 0x1800497F4
 * Callers:
 *     ?HampManagerStart@@YAJPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x1800495F8 (-HampManagerStart@@YAJPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 * Callees:
 *     ?HampSystemNotificationClientRegister@@YAJW4PDCCLIENTID@@PEAU_PDC_NOTIFICATIONCLIENT_REGISTRATION@@PEAXPEAPEAX@Z @ 0x1800498A0 (-HampSystemNotificationClientRegister@@YAJW4PDCCLIENTID@@PEAU_PDC_NOTIFICATIONCLIENT_REGISTRATIO.c)
 *     ?HampSlsStart@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@@Z @ 0x1800498F4 (-HampSlsStart@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@@Z.c)
 */

__int64 __fastcall HampPdcStart(struct _HAM_PDC_CONTEXT *a1)
{
  __int64 result; // rax
  __int64 v3; // [rsp+20h] [rbp-40h] BYREF
  __int64 (__fastcall *v4)(struct _HAM_PDC_CONTEXT *, unsigned int); // [rsp+28h] [rbp-38h]
  __int64 v5; // [rsp+30h] [rbp-30h]
  __int64 (__fastcall *v6)(struct _HAM_PDC_CONTEXT *, unsigned int); // [rsp+38h] [rbp-28h]
  _QWORD v7[4]; // [rsp+40h] [rbp-20h] BYREF

  HampSlsStart((struct _HAM_PDC_CONTEXT *)((char *)a1 + 32));
  v3 = 1LL;
  v5 = 0LL;
  v6 = HampPdcPlmControlCallback;
  v4 = HampPdcPlmPhaseNotificationCallback;
  result = ((__int64 (__fastcall *)(__int64, __int64 *, struct _HAM_PDC_CONTEXT *, char *))HampSystemNotificationClientRegister)(
             1LL,
             &v3,
             a1,
             (char *)a1 + 8);
  if ( (int)result >= 0 )
  {
    v7[0] = 1LL;
    v7[3] = HampPdcDamControlCallback;
    v7[2] = 0LL;
    v7[1] = HampPdcDamPhaseNotificationCallback;
    result = HampSystemNotificationClientRegister(100LL, v7, a1, (char *)a1 + 16, v3, v4, v5, v6);
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
