/*
 * XREFs of ?ndisPublishSleepStudyNicAutoPowerSaverStats@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_KPEBU_GUID@@@Z @ 0x1C011F458
 * Callers:
 *     ?ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E_K@Z @ 0x1C0053870 (-ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E_K@Z.c)
 * Callees:
 *     ?ndisGetTimeInterval@@YA_KPEAT_LARGE_INTEGER@@@Z @ 0x1C0015654 (-ndisGetTimeInterval@@YA_KPEAT_LARGE_INTEGER@@@Z.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     ??$ReadAcquire@EX@mem@@YAEPEDE@Z @ 0x1C0052520 (--$ReadAcquire@EX@mem@@YAEPEDE@Z.c)
 *     McTemplateK0ujqzr2jxx_EtwWriteTransfer @ 0x1C0055CE0 (McTemplateK0ujqzr2jxx_EtwWriteTransfer.c)
 *     ndisPublishSleepStudyNapsCustomData @ 0x1C011EFE4 (ndisPublishSleepStudyNapsCustomData.c)
 *     ndisPublishSleepStudyNapsOidCustomData @ 0x1C011F1F8 (ndisPublishSleepStudyNapsOidCustomData.c)
 *     ndisPublishSleepStudyNicAutoPowerSaverCustomData @ 0x1C011F30C (ndisPublishSleepStudyNicAutoPowerSaverCustomData.c)
 */

void __fastcall ndisPublishSleepStudyNicAutoPowerSaverStats(
        struct _NDIS_MINIPORT_BLOCK *a1,
        __int64 a2,
        const struct _GUID *a3)
{
  union _LARGE_INTEGER *SelectiveSuspend; // rdi
  LONGLONG TimeInterval; // rax
  ULONGLONG v8; // r15
  unsigned int v9; // r12d
  ULONGLONG v10; // r13
  __int64 v11; // rdx
  __int64 v12; // r9
  __int64 v13; // [rsp+20h] [rbp-59h]
  __int64 v14; // [rsp+20h] [rbp-59h]
  int v15; // [rsp+50h] [rbp-29h] BYREF
  _QWORD v16[2]; // [rsp+58h] [rbp-21h] BYREF
  ULONGLONG QuadPart; // [rsp+68h] [rbp-11h]
  LONGLONG v18; // [rsp+70h] [rbp-9h]
  _QWORD v19[2]; // [rsp+78h] [rbp-1h] BYREF
  GUID v20; // [rsp+88h] [rbp+Fh] BYREF

  SelectiveSuspend = (union _LARGE_INTEGER *)a1->SelectiveSuspend;
  if ( SelectiveSuspend )
  {
    v20 = GUID_CS_BLOCKER_GEN;
    TimeInterval = ndisGetTimeInterval(SelectiveSuspend + 91);
    v8 = SelectiveSuspend[86].QuadPart - SelectiveSuspend[90].QuadPart;
    v9 = SelectiveSuspend[80].HighPart - SelectiveSuspend[88].LowPart;
    v10 = SelectiveSuspend[84].QuadPart - SelectiveSuspend[89].QuadPart;
    v18 = TimeInterval;
    QuadPart = SelectiveSuspend[83].QuadPart;
    if ( mem::ReadAcquire<unsigned char,void>() )
    {
      v19[1] = 25LL;
      a3 = &v20;
      v16[1] = 36LL;
      v19[0] = L"Events preventing Nic Dx";
      v16[0] = L"Breakdown of OIDs preventing Nic Dx";
      v20.Data3 = a1->IfIndex;
      v15 = 1;
      v20.Data4[0] = 0x80;
      if ( (Microsoft_Windows_SleepStudyEnableBits & 1) != 0 )
        McTemplateK0ujqzr2jxx_EtwWriteTransfer(
          (__int64)L"Nic Auto Power Saver",
          v11,
          &a1->InterfaceGuid,
          a2,
          v12,
          21,
          (__int64)L"Nic Auto Power Saver",
          (__int64)&v20,
          0,
          a2);
      ndisPublishSleepStudyNapsCustomData(
        (__int64)a1,
        a2,
        (__int64)&v20,
        (__int64)v19,
        v13,
        (__int64)&SelectiveSuspend[92],
        (char *)&v15);
      ndisPublishSleepStudyNapsOidCustomData(
        (__int64)a1,
        a2,
        (__int64)&v20,
        (__int64)v16,
        v14,
        (__int64)&SelectiveSuspend[190],
        &v15);
    }
    ndisPublishSleepStudyNicAutoPowerSaverCustomData((__int64)a1, a2, a3, v18, QuadPart, v8, v9, v10);
  }
}
