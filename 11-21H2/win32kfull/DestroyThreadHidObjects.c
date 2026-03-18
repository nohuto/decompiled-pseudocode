/*
 * XREFs of DestroyThreadHidObjects @ 0x1C01028F0
 * Callers:
 *     <none>
 * Callees:
 *     UpdateRawMouseMode @ 0x1C00ABF48 (UpdateRawMouseMode.c)
 *     PtiMouseFromQ @ 0x1C00ABFA8 (PtiMouseFromQ.c)
 *     ?SearchProcessHidRequest@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESSINFO@@GGPEAK@Z @ 0x1C00AEDCC (-SearchProcessHidRequest@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESSINFO@@GGPEAK@Z.c)
 *     ??0?$ObjectLockRecursive@UtagObjLock@@@?$DomainExclusiveRecursive@$$V@?$DomainSharedRecursive@$$V@@QEAA@AEAUtagObjLock@@@Z @ 0x1C00B0DBC (--0-$ObjectLockRecursive@UtagObjLock@@@-$DomainExclusiveRecursive@$$V@-$DomainSharedRecursive@$$.c)
 *     FreeHidProcessRequest @ 0x1C0102B44 (FreeHidProcessRequest.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ?HasRawKeyboardPerThreadRegistration@@YAHPEBUtagPROCESSINFO@@@Z @ 0x1C01D0A74 (-HasRawKeyboardPerThreadRegistration@@YAHPEBUtagPROCESSINFO@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall DestroyThreadHidObjects(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 result; // rax
  char v6; // dl
  struct tagPROCESS_HID_REQUEST *v7; // rsi
  struct tagPROCESS_HID_REQUEST *v8; // rsi
  struct tagPROCESS_HID_REQUEST *v9; // rsi
  struct tagPROCESS_HID_REQUEST *v10; // rcx
  struct tagPROCESS_HID_REQUEST *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // rax
  const struct tagPROCESSINFO *v17; // rcx
  struct tagPROCESSINFO *v18; // rcx
  struct tagPROCESS_HID_REQUEST *v19; // rcx
  unsigned int v20; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v21[16]; // [rsp+28h] [rbp-50h] BYREF
  tagObjLock *v22; // [rsp+38h] [rbp-40h]
  char v23; // [rsp+48h] [rbp-30h]

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 424) + 832LL);
  v3 = *(_QWORD *)(v2 + 72);
  if ( v3 )
  {
    if ( *(_QWORD *)(v3 + 16) == a1 )
    {
      HMAssignmentUnlock(v2 + 72);
      *(_DWORD *)(v2 + 100) &= 0xFFFFFFCF;
      if ( (*(_DWORD *)(v2 + 100) & 0x40) != 0 )
      {
        DomainSharedRecursive<>::DomainExclusiveRecursive<>::ObjectLockRecursive<tagObjLock>::ObjectLockRecursive<tagObjLock>(
          (__int64)v21,
          gHidCountersLock);
        --gHidCounters[0];
        if ( v23 && v22 )
          tagObjLock::UnLockExclusive(v22);
        *(_DWORD *)(v2 + 100) &= ~0x40u;
      }
    }
  }
  v4 = *(_QWORD *)(v2 + 64);
  if ( v4 && *(_QWORD *)(v4 + 16) == a1 )
  {
    HMAssignmentUnlock(v2 + 64);
    *(_DWORD *)(v2 + 100) &= 0xFFFFFFFC;
    if ( (*(_DWORD *)(v2 + 100) & 4) != 0 )
    {
      DomainSharedRecursive<>::DomainExclusiveRecursive<>::ObjectLockRecursive<tagObjLock>::ObjectLockRecursive<tagObjLock>(
        (__int64)v21,
        gHidCountersLock);
      --gHidCounters[1];
      if ( v23 )
      {
        if ( v22 )
          tagObjLock::UnLockExclusive(v22);
        v23 = 0;
      }
      *(_DWORD *)(v2 + 100) &= ~4u;
    }
    v15 = gpqForeground;
    if ( gpqForeground )
      v16 = PtiMouseFromQ(gpqForeground);
    else
      v16 = 0LL;
    if ( v16 == a1 )
      UpdateRawMouseMode(v15, v12, v13, v14);
  }
  *(_QWORD *)(v2 + 88) = 0LL;
  *(_DWORD *)(v2 + 96) = 0;
  result = *(unsigned int *)(a1 + 1256);
  if ( (result & 0x200000) != 0 )
  {
    v17 = *(const struct tagPROCESSINFO **)(a1 + 424);
    *(_DWORD *)(a1 + 1256) = result & 0xFFDFFFFF;
    result = HasRawKeyboardPerThreadRegistration(v17);
    if ( !(_DWORD)result )
    {
      v20 = 0;
      result = (__int64)SearchProcessHidRequest(v18, 1, 6, &v20);
      if ( result )
      {
        result = FreeHidProcessRequest((struct tagPROCESS_HID_REQUEST *)result);
        *(_DWORD *)(v2 + 100) &= 0xFFFFFFCF;
      }
    }
  }
  v6 = 0;
  v7 = *(struct tagPROCESS_HID_REQUEST **)(v2 + 16);
  while ( v7 != (struct tagPROCESS_HID_REQUEST *)(v2 + 16) )
  {
    v10 = v7;
    v7 = *(struct tagPROCESS_HID_REQUEST **)v7;
    result = *((_QWORD *)v10 + 4);
    if ( result && *(_QWORD *)(result + 16) == a1 )
    {
      result = FreeHidProcessRequest(v10);
      v6 = 1;
    }
  }
  v8 = *(struct tagPROCESS_HID_REQUEST **)(v2 + 32);
  while ( v8 != (struct tagPROCESS_HID_REQUEST *)(v2 + 32) )
  {
    v11 = v8;
    v8 = *(struct tagPROCESS_HID_REQUEST **)v8;
    result = *((_QWORD *)v11 + 4);
    if ( result && *(_QWORD *)(result + 16) == a1 )
    {
      result = FreeHidProcessRequest(v11);
      v6 = 1;
    }
  }
  v9 = *(struct tagPROCESS_HID_REQUEST **)(v2 + 48);
  while ( v9 != (struct tagPROCESS_HID_REQUEST *)(v2 + 48) )
  {
    v19 = v9;
    v9 = *(struct tagPROCESS_HID_REQUEST **)v9;
    result = *((_QWORD *)v19 + 4);
    if ( result && *(_QWORD *)(result + 16) == a1 )
    {
      result = FreeHidProcessRequest(v19);
      v6 = 1;
    }
  }
  if ( v6 )
  {
    result = *(_QWORD *)(a1 + 424);
    *(_DWORD *)(result + 820) |= 0x8000000u;
  }
  return result;
}
