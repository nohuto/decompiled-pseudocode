/*
 * XREFs of HamRpcSrvFindOrCreateHostId @ 0x180027FF0
 * Callers:
 *     <none>
 * Callees:
 *     CempLockTrackerClearForThread @ 0x18000E240 (CempLockTrackerClearForThread.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x1800288A0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?HampHostIdStoreCheckAndSanitizeKey@@YAKPEAU_HAM_HOSTID_STORE_KEY@@@Z @ 0x180028AA0 (-HampHostIdStoreCheckAndSanitizeKey@@YAKPEAU_HAM_HOSTID_STORE_KEY@@@Z.c)
 *     ?HampHostIdStoreFindOrCreateIdForKey@@YAJPEAU_HAM_HOSTID_STORE@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K@Z @ 0x180028B20 (-HampHostIdStoreFindOrCreateIdForKey@@YAJPEAU_HAM_HOSTID_STORE@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 */

__int64 __fastcall HamRpcSrvFindOrCreateHostId(__int64 a1, unsigned __int16 *a2, unsigned __int64 *a3)
{
  struct _RM_SERVICE_GLOBALS *v3; // r15
  int v6; // r12d
  __int64 v7; // rbx
  unsigned __int64 v8; // rsi
  int v9; // eax
  unsigned int v10; // r15d
  const unsigned __int16 *v11; // rdx
  int v12; // eax
  __int64 v13; // rax
  bool v14; // zf
  int v15; // ecx
  unsigned __int64 v17; // [rsp+30h] [rbp-D0h] BYREF
  int v18; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v19; // [rsp+40h] [rbp-C0h] BYREF
  char v20[144]; // [rsp+50h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+E0h] [rbp-20h] BYREF
  unsigned __int64 *v22; // [rsp+100h] [rbp+0h]
  __int64 v23; // [rsp+108h] [rbp+8h]
  unsigned __int16 *v24; // [rsp+110h] [rbp+10h]
  int v25; // [rsp+118h] [rbp+18h]
  int v26; // [rsp+11Ch] [rbp+1Ch]
  const unsigned __int16 *v27; // [rsp+120h] [rbp+20h]
  int v28; // [rsp+128h] [rbp+28h]
  int v29; // [rsp+12Ch] [rbp+2Ch]
  unsigned __int64 *v30; // [rsp+130h] [rbp+30h]
  __int64 v31; // [rsp+138h] [rbp+38h]
  unsigned __int16 *v32; // [rsp+140h] [rbp+40h]
  int v33; // [rsp+148h] [rbp+48h]
  int v34; // [rsp+14Ch] [rbp+4Ch]
  int *v35; // [rsp+150h] [rbp+50h]
  __int64 v36; // [rsp+158h] [rbp+58h]
  struct _EVENT_DATA_DESCRIPTOR v37; // [rsp+160h] [rbp+60h] BYREF

  v3 = RmSvcGlobals;
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v20);
  v6 = 2;
  if ( (unsigned int)dword_1800DB218 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800DB218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer((int)&dword_1800DB218, (int)&dword_1800C1898, 0, 0, 2u, &v37);
  v7 = -1LL;
  v8 = -1LL;
  v17 = -1LL;
  if ( HampHostIdStoreCheckAndSanitizeKey((struct _HAM_HOSTID_STORE_KEY *)a2) )
  {
    v9 = HampHostIdStoreFindOrCreateIdForKey(
           (struct _RM_SERVICE_GLOBALS *)((char *)v3 + 3048),
           (struct _HAM_HOSTID_STORE_KEY *)a2,
           &v17);
    v8 = v17;
    v10 = v9;
    if ( v9 >= 0 )
    {
      *a3 = v17;
      v10 = 0;
    }
  }
  else
  {
    v10 = -1073741585;
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
  if ( (unsigned int)dword_1800DB218 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800DB218, 8LL) )
  {
    v18 = *((_DWORD *)a2 + 133);
    v11 = a2 + 268;
    v19 = v8;
    v35 = &v18;
    LODWORD(v17) = v10;
    v36 = 4LL;
    v12 = *((unsigned __int8 *)a2 + 465);
    v32 = a2 + 232;
    v34 = 0;
    v31 = 8LL;
    v33 = 4 * v12 + 8;
    v30 = &v19;
    if ( a2 == (unsigned __int16 *)-536LL )
    {
      v11 = &word_1800B66C4;
      v15 = 2;
    }
    else
    {
      v13 = -1LL;
      do
        v14 = v11[++v13] == 0;
      while ( !v14 );
      v15 = 2 * v13 + 2;
    }
    v27 = v11;
    v28 = v15;
    v29 = 0;
    if ( a2 )
    {
      do
        v14 = a2[++v7] == 0;
      while ( !v14 );
      v6 = 2 * v7 + 2;
    }
    else
    {
      a2 = (unsigned __int16 *)&word_1800B66C4;
    }
    v24 = a2;
    v22 = &v17;
    v25 = v6;
    v26 = 0;
    v23 = 4LL;
    tlgWriteTransfer_EventWriteTransfer((int)&dword_1800DB218, (int)&dword_1800C06B1, 0, 0, 8u, &v21);
  }
  return v10;
}
