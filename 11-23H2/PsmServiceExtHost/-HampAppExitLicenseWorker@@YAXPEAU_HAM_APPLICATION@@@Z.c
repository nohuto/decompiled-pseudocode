/*
 * XREFs of ?HampAppExitLicenseWorker@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x18000E280
 * Callers:
 *     ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18001E5A0 (-RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?HampAppCheckQueueLicenseUpgradeForHost@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001FAE0 (-HampAppCheckQueueLicenseUpgradeForHost@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppCheckDowngradeLicense@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180020130 (-HampAppCheckDowngradeLicense@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 */

void __fastcall HampAppExitLicenseWorker(struct _HAM_APPLICATION *a1)
{
  _DWORD *v1; // rbx
  const unsigned __int16 *v2; // rcx
  __int64 v3; // rax
  int v5; // edx
  char v6; // [rsp+30h] [rbp-78h] BYREF
  unsigned int v7; // [rsp+34h] [rbp-74h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-58h] BYREF
  void *v10; // [rsp+60h] [rbp-48h]
  int v11; // [rsp+68h] [rbp-40h]
  int v12; // [rsp+6Ch] [rbp-3Ch]
  const unsigned __int16 *v13; // [rsp+70h] [rbp-38h]
  int v14; // [rsp+78h] [rbp-30h]
  int v15; // [rsp+7Ch] [rbp-2Ch]
  char *v16; // [rsp+80h] [rbp-28h]
  __int64 v17; // [rsp+88h] [rbp-20h]

  if ( (unsigned int)dword_1800DB218 <= 5 )
  {
    v1 = (_DWORD *)((char *)a1 + 616);
  }
  else
  {
    v1 = (_DWORD *)((char *)a1 + 616);
    v17 = 1LL;
    v6 = (*((_DWORD *)a1 + 154) >> 23) & 3;
    v16 = &v6;
    v2 = (const unsigned __int16 *)((char *)a1 + 96);
    if ( v2 )
    {
      v3 = -1LL;
      while ( v2[++v3] != 0 )
        ;
      v5 = 2 * v3 + 2;
    }
    else
    {
      v2 = &word_1800B66B4;
      v5 = 2;
    }
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = (ULONGLONG)off_1800DB220;
    v13 = v2;
    v14 = v5;
    v15 = 0;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 0LL;
    UserData.Size = *(unsigned __int16 *)off_1800DB220;
    v10 = &unk_1800C28AD;
    UserData.Reserved = 2;
    v11 = 50;
    v12 = 1;
    v7 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800DB238, &EventDescriptor, 0LL, 0LL, 4u, &UserData);
  }
  *v1 &= ~0x100000u;
  RtlWakeAddressAll(v1);
}
