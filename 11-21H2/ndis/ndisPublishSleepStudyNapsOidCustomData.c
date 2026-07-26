/*
 * XREFs of ndisPublishSleepStudyNapsOidCustomData @ 0x1C011F1F8
 * Callers:
 *     ?ndisPublishSleepStudyNicAutoPowerSaverStats@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_KPEBU_GUID@@@Z @ 0x1C011F458 (-ndisPublishSleepStudyNicAutoPowerSaverStats@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_KPEBU_GUID@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     McTemplateK0ujqzr2jxx_EtwWriteTransfer @ 0x1C0055CE0 (McTemplateK0ujqzr2jxx_EtwWriteTransfer.c)
 *     ?ndisPublishSleepStudyCustomData@@YAX_KPEBU_GUID@@PEB_W0@Z @ 0x1C011ECDC (-ndisPublishSleepStudyCustomData@@YAX_KPEBU_GUID@@PEB_W0@Z.c)
 */

void __fastcall ndisPublishSleepStudyNapsOidCustomData(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        _BYTE *a7)
{
  unsigned __int16 v7; // ax
  unsigned __int16 *v9; // rbx
  __int64 v10; // rdi
  unsigned int v11; // eax
  struct _GUID v12; // [rsp+50h] [rbp-38h] BYREF

  v7 = *(_WORD *)(a1 + 4056);
  v12 = GUID_CS_BLOCKER_GEN;
  v12.Data3 = v7;
  LOBYTE(v7) = *a7;
  ++*(_DWORD *)a7;
  v12.Data4[0] = v7 | 0x80;
  if ( (Microsoft_Windows_SleepStudyEnableBits & 1) != 0 )
    McTemplateK0ujqzr2jxx_EtwWriteTransfer(
      a1,
      a2,
      (const GUID *)(a1 + 4008),
      a2,
      a3,
      *(_DWORD *)(a4 + 8),
      *(_QWORD *)a4,
      (__int64)&v12,
      0,
      a2);
  v9 = (unsigned __int16 *)(a6 + 2);
  v10 = 8LL;
  do
  {
    v11 = *(_DWORD *)(v9 + 3);
    if ( v11 )
    {
      ndisPublishSleepStudyCustomData(a2, &v12, L"OID", v11);
      ndisPublishSleepStudyCustomData(a2, &v12, L"WakeCount", *(v9 - 1));
      ndisPublishSleepStudyCustomData(a2, &v12, L"BusyCount", *v9);
    }
    v9 += 6;
    --v10;
  }
  while ( v10 );
}
