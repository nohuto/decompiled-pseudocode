/*
 * XREFs of CmPostCallbackNotification @ 0x1407C04B4
 * Callers:
 *     CmpDoQueryKeyName @ 0x140346910 (CmpDoQueryKeyName.c)
 *     CmUnloadKey @ 0x14069E454 (CmUnloadKey.c)
 *     NtSetInformationKey @ 0x1407C0160 (NtSetInformationKey.c)
 *     NtRenameKey @ 0x14090EF60 (NtRenameKey.c)
 *     NtRestoreKey @ 0x14090F750 (NtRestoreKey.c)
 *     NtSaveMergedKeys @ 0x14090F9B0 (NtSaveMergedKeys.c)
 * Callees:
 *     CmpIsRegistryLockAcquired @ 0x1402ACD00 (CmpIsRegistryLockAcquired.c)
 *     CmpCallCallBacksEx @ 0x140735760 (CmpCallCallBacksEx.c)
 */

__int64 __fastcall CmPostCallbackNotification(unsigned int a1, __int64 a2, unsigned int a3, __int64 a4, _QWORD *a5)
{
  _QWORD v10[3]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v11; // [rsp+58h] [rbp-30h]
  __int128 v12; // [rsp+60h] [rbp-28h]
  __int64 v13; // [rsp+70h] [rbp-18h]

  if ( CmpCallBackCount && !CmpIsRegistryLockAcquired() && (_QWORD *)*a5 != a5 )
  {
    v13 = 0LL;
    v10[0] = a2;
    v10[1] = a3;
    v11 = a3;
    v12 = 0LL;
    v10[2] = a4;
    CmpCallCallBacksEx(a1, (__int64)v10, 0LL, 0, a1, a2, (__int64)a5);
    return (unsigned int)v11;
  }
  return a3;
}
