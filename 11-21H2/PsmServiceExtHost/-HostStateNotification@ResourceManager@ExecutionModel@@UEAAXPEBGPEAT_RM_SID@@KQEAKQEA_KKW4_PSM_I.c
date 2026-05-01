/*
 * XREFs of ?HostStateNotification@ResourceManager@ExecutionModel@@UEAAXPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x180002B50
 * Callers:
 *     <none>
 * Callees:
 *     ?OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_PSM_HOST_INFO@@@Z @ 0x180002D00 (-OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_PSM_HOST_INFO@@@Z.c)
 *     ?HampHostCompleteQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000453C (-HampHostCompleteQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostFindByHostId@@YAJPEAU_RM_SERVICE_GLOBALS@@_KW4_HOST_GROUP@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180004650 (-RmpActivityHostFindByHostId@@YAJPEAU_RM_SERVICE_GLOBALS@@_KW4_HOST_GROUP@@PEAPEAU_RM_ACTIVITY_H.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180010950 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800109D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x1800248A0 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003A34C (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003A9F4 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     memcpy_0 @ 0x180050222 (memcpy_0.c)
 *     memset_0 @ 0x18005023A (memset_0.c)
 */

void __fastcall ExecutionModel::ResourceManager::HostStateNotification(
        __int64 a1,
        wchar_t *a2,
        void *a3,
        int a4,
        int *a5,
        _QWORD *a6,
        unsigned int a7,
        unsigned int a8)
{
  __int64 v11; // r12
  __int64 v12; // rdi
  int v13; // ebx
  ULONG v14; // eax
  __int64 v15; // r8
  int v16; // eax
  char *v17; // rdi
  unsigned int v18; // edx
  PVOID P; // [rsp+28h] [rbp-D8h] BYREF
  PSID Sid; // [rsp+30h] [rbp-D0h]
  wchar_t *Source; // [rsp+38h] [rbp-C8h]
  wchar_t Destination[232]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v24[68]; // [rsp+210h] [rbp+110h] BYREF
  int v25; // [rsp+254h] [rbp+154h]
  int v26; // [rsp+258h] [rbp+158h]
  __int64 v27; // [rsp+260h] [rbp+160h]

  Sid = a3;
  Source = a2;
  if ( a8 <= 1 && a7 )
  {
    v11 = a7;
    do
    {
      if ( a8 )
      {
        P = 0LL;
        RmpAcquireGlobalLock();
        LOBYTE(v15) = 3;
        v16 = RmpActivityHostFindByHostId(*(_QWORD *)(a1 + 120), *a6, v15, &P);
        v17 = (char *)P;
        if ( v16 >= 0 )
        {
          HampHostAcquireLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)((char *)P + 64), 0);
          HampHostCompleteQuiesce((struct _RM_HAM_ACTIVITY_HOST *)(v17 + 64));
          HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)(v17 + 64), v18);
        }
        RmpReleaseGlobalLock();
        if ( v17 )
          RmpObjectRelease(v17);
      }
      else
      {
        v12 = *a6;
        v13 = *a5;
        memset_0(Destination, 0, 0x228uLL);
        wcscpy_s(Destination, 0xE8uLL, Source);
        memset_0(v24, 0, sizeof(v24));
        v14 = RtlLengthSid(Sid);
        memcpy_0(v24, Sid, v14);
        v25 = a4;
        v26 = v13;
        v27 = v12;
        ExecutionModel::ResourceManager::OnApplicationTerminated(
          (ExecutionModel::ResourceManager *)(a1 - 8),
          (struct _RM_PSM_HOST_INFO *)Destination);
      }
      ++a6;
      ++a5;
      --v11;
    }
    while ( v11 );
  }
}
