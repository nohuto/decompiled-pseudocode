/*
 * XREFs of ?HampClientRundownTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18004E350
 * Callers:
 *     <none>
 * Callees:
 *     CemRcObjectDereference @ 0x18000BFF0 (CemRcObjectDereference.c)
 *     CempLockTrackerClearForThread @ 0x18000E240 (CempLockTrackerClearForThread.c)
 *     ?HampClientReleaseLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x1800173FC (-HampClientReleaseLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampClientAcquireLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180017438 (-HampClientAcquireLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180027D5C (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x1800288A0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 */

void __fastcall HampClientRundownTimerCallback(
        struct _TP_CALLBACK_INSTANCE *a1,
        struct _HAM_CLIENT_CONTEXT *a2,
        struct _TP_TIMER *a3)
{
  __int64 v4; // rsi
  int v5; // edi
  __int64 v6; // rdx
  int v7; // eax
  int v8; // edx
  __int64 v9; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v10; // [rsp+40h] [rbp-C8h] BYREF
  _BYTE v11[144]; // [rsp+48h] [rbp-C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+D8h] [rbp-30h] BYREF
  __int64 *v13; // [rsp+F8h] [rbp-10h]
  int v14; // [rsp+100h] [rbp-8h]
  int v15; // [rsp+104h] [rbp-4h]
  __int64 *v16; // [rsp+108h] [rbp+0h]
  int v17; // [rsp+110h] [rbp+8h]
  int v18; // [rsp+114h] [rbp+Ch]

  if ( (unsigned int)dword_1800DB218 > 4 && tlgKeywordOn((__int64)&dword_1800DB218, 64LL) )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (int)&dword_1800DB218,
      (int)&unk_1800C2C0D);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v11);
  v4 = *((_QWORD *)a2 + 19);
  v5 = 0;
  HampClientAcquireLockExclusive(a2);
  v7 = *((_DWORD *)a2 + 36);
  if ( (v7 & 2) != 0 )
  {
    v5 = 1;
    *((_DWORD *)a2 + 36) = v7 & 0xFFFFFFFD;
  }
  HampClientReleaseLockExclusive(a2, v6);
  if ( v5 )
    CemRcObjectDereference(a2);
  CempLockTrackerClearForThread(HampLockTrackerId);
  if ( (unsigned int)dword_1800DB218 > 4 && tlgKeywordOn((__int64)&dword_1800DB218, 8LL) )
  {
    v18 = 0;
    v15 = 0;
    v16 = &v10;
    v17 = v8;
    v13 = &v9;
    v10 = v4;
    LOBYTE(v9) = v5;
    v14 = 1;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DB218,
      (unsigned __int8 *)dword_1800C2C38,
      0LL,
      0LL,
      4u,
      &v12);
  }
}
