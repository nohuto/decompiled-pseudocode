/*
 * XREFs of CmPostCallbackNotificationEx @ 0x140691E30
 * Callers:
 *     CmLoadDifferencingKey @ 0x14069108C (CmLoadDifferencingKey.c)
 *     CmPostCallbackNotification @ 0x140691DD4 (CmPostCallbackNotification.c)
 *     CmUnloadKey @ 0x140698DD8 (CmUnloadKey.c)
 *     NtSetValueKey @ 0x1406D2A30 (NtSetValueKey.c)
 *     CmpSecurityMethod @ 0x1406D5900 (CmpSecurityMethod.c)
 *     NtQueryMultipleValueKey @ 0x14070DF70 (NtQueryMultipleValueKey.c)
 *     NtDeleteValueKey @ 0x14070EC50 (NtDeleteValueKey.c)
 *     NtDeleteKey @ 0x14070FEC0 (NtDeleteKey.c)
 *     NtFlushKey @ 0x1407AC6B0 (NtFlushKey.c)
 *     NtRenameKey @ 0x140A0E260 (NtRenameKey.c)
 *     NtReplaceKey @ 0x140A0E760 (NtReplaceKey.c)
 *     NtRestoreKey @ 0x140A0EAC0 (NtRestoreKey.c)
 *     NtSaveKeyEx @ 0x140A0EE80 (NtSaveKeyEx.c)
 *     NtSaveMergedKeys @ 0x140A0F110 (NtSaveMergedKeys.c)
 * Callees:
 *     CmpIsRegistryLockAcquired @ 0x14022FC60 (CmpIsRegistryLockAcquired.c)
 *     CmpCallCallBacksEx @ 0x1406E8620 (CmpCallCallBacksEx.c)
 */

__int64 __fastcall CmPostCallbackNotificationEx(
        int a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6)
{
  _QWORD v11[2]; // [rsp+48h] [rbp-9h] BYREF
  _QWORD v12[3]; // [rsp+58h] [rbp+7h] BYREF
  __int64 v13; // [rsp+70h] [rbp+1Fh]
  __int128 v14; // [rsp+78h] [rbp+27h]
  __int64 v15; // [rsp+88h] [rbp+37h]

  if ( !CmpCallBackCount || CmpIsRegistryLockAcquired() || (_QWORD *)*a6 == a6 )
    return a3;
  v15 = 0LL;
  v11[0] = v12;
  v11[1] = a5;
  v12[0] = a2;
  v12[1] = a3;
  v13 = a3;
  v12[2] = a4;
  v14 = 0LL;
  CmpCallCallBacksEx(a1, (unsigned int)v12, (unsigned __int64)v11 & -(__int64)(a5 != 0), 0, a1, a2, (__int64)a6);
  return (unsigned int)v13;
}
