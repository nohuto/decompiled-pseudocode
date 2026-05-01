/*
 * XREFs of ?HampAppExitLicenseWorker@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180039DA0
 * Callers:
 *     ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800121C0 (-RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?HampAppCheckQueueLicenseUpgradeForHost@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180013510 (-HampAppCheckQueueLicenseUpgradeForHost@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppCheckDowngradeLicense@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180013A00 (-HampAppCheckDowngradeLicense@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 */

void __fastcall HampAppExitLicenseWorker(struct _HAM_APPLICATION *a1)
{
  const unsigned __int16 *v2; // rdx
  char v3; // al
  __int64 v4; // rax
  int v6; // ecx
  char v7; // [rsp+30h] [rbp-78h] BYREF
  unsigned int v8; // [rsp+34h] [rbp-74h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-58h] BYREF
  void *v11; // [rsp+60h] [rbp-48h]
  int v12; // [rsp+68h] [rbp-40h]
  int v13; // [rsp+6Ch] [rbp-3Ch]
  const unsigned __int16 *v14; // [rsp+70h] [rbp-38h]
  int v15; // [rsp+78h] [rbp-30h]
  int v16; // [rsp+7Ch] [rbp-2Ch]
  char *v17; // [rsp+80h] [rbp-28h]
  __int64 v18; // [rsp+88h] [rbp-20h]

  if ( (unsigned int)dword_1800DC218 > 5 )
  {
    v2 = (const unsigned __int16 *)((char *)a1 + 96);
    v3 = (*((_DWORD *)a1 + 154) >> 23) & 3;
    v18 = 1LL;
    v7 = v3;
    v17 = &v7;
    if ( a1 == (struct _HAM_APPLICATION *)-96LL )
    {
      v2 = &word_1800B7A9C;
      v6 = 2;
    }
    else
    {
      v4 = -1LL;
      while ( v2[++v4] != 0 )
        ;
      v6 = 2 * v4 + 2;
    }
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = (ULONGLONG)off_1800DC220;
    v15 = v6;
    v14 = v2;
    v16 = 0;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 0LL;
    UserData.Size = *(unsigned __int16 *)off_1800DC220;
    v11 = &unk_1800C14C8;
    UserData.Reserved = 2;
    v12 = 50;
    v13 = 1;
    v8 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800DC238, &EventDescriptor, 0LL, 0LL, 4u, &UserData);
  }
  *((_DWORD *)a1 + 154) &= ~0x100000u;
  RtlWakeAddressAll((char *)a1 + 616);
}
