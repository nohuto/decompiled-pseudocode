/*
 * XREFs of ndisPublishSleepStudyNapsCustomData @ 0x1C012AC98
 * Callers:
 *     ?ndisPublishSleepStudyNicAutoPowerSaverStats@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_KPEBU_GUID@@@Z @ 0x1C012B10C (-ndisPublishSleepStudyNicAutoPowerSaverStats@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_KPEBU_GUID@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 *     ndisSleepStudyGetNameFromReasonCode @ 0x1C005A3F0 (ndisSleepStudyGetNameFromReasonCode.c)
 *     McTemplateK0ujqzr2jxx_EtwWriteTransfer @ 0x1C005B134 (McTemplateK0ujqzr2jxx_EtwWriteTransfer.c)
 *     ?ndisPublishSleepStudyCustomData@@YAX_KPEBU_GUID@@PEB_W0@Z @ 0x1C012A990 (-ndisPublishSleepStudyCustomData@@YAX_KPEBU_GUID@@PEB_W0@Z.c)
 */

unsigned int *__fastcall ndisPublishSleepStudyNapsCustomData(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char *a7)
{
  unsigned __int16 v7; // ax
  ULONGLONG v8; // r15
  __int64 v9; // r11
  int v11; // r13d
  unsigned int v12; // r14d
  unsigned int *result; // rax
  __int64 v14; // r8
  unsigned int *v15; // rbx
  __int64 v16; // r12
  char v17; // al
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v22; // [rsp+58h] [rbp-59h]
  __int128 v24; // [rsp+70h] [rbp-41h] BYREF
  struct _GUID v25; // [rsp+80h] [rbp-31h] BYREF
  struct _GUID v26; // [rsp+90h] [rbp-21h] BYREF

  v7 = *(_WORD *)(a1 + 4056);
  v8 = 0LL;
  v9 = a3;
  v25 = GUID_CS_BLOCKER_GEN;
  v25.Data3 = v7;
  v11 = 1;
  v26 = GUID_CS_BLOCKER_GEN;
  v26.Data3 = v7;
  v12 = 1;
  result = (unsigned int *)(a6 + 4);
  v14 = a1;
  v22 = a4;
  do
  {
    v15 = result;
    v16 = 49LL;
    do
    {
      if ( *v15 )
      {
        if ( v12 == 1 )
        {
          v8 += *(_QWORD *)(v15 + 1);
        }
        else
        {
          v24 = 0LL;
          if ( v11 )
          {
            v17 = *a7;
            ++*(_DWORD *)a7;
            v26.Data4[0] = v17 | 0x80;
            if ( (Microsoft_Windows_SleepStudyEnableBits & 1) != 0 )
              McTemplateK0ujqzr2jxx_EtwWriteTransfer(
                a1,
                a2,
                (const GUID *)(v14 + 4008),
                a2,
                v9,
                *(_DWORD *)(a4 + 8),
                *(_QWORD *)a4,
                (__int64)&v26,
                0,
                a2);
            ndisPublishSleepStudyCustomData(a2, &v26, L"Total Time (ms)", v8);
            v11 = 0;
          }
          ndisSleepStudyGetNameFromReasonCode(*v15, &v24);
          LOBYTE(v20) = *a7;
          ++*(_DWORD *)a7;
          LOBYTE(v20) = v20 | 0x80;
          v25.Data4[0] = v20;
          if ( (Microsoft_Windows_SleepStudyEnableBits & 1) != 0 )
            McTemplateK0ujqzr2jxx_EtwWriteTransfer(
              v18,
              v20,
              (const GUID *)(v19 + 4008),
              a2,
              (__int64)&v26,
              SDWORD2(v24),
              v24,
              (__int64)&v25,
              0,
              a2);
          ndisPublishSleepStudyCustomData(a2, &v25, L"Reason", *v15);
          ndisPublishSleepStudyCustomData(a2, &v25, L"WakeCount", *((unsigned __int16 *)v15 - 2));
          ndisPublishSleepStudyCustomData(a2, &v25, L"BusyCount", *((unsigned __int16 *)v15 - 1));
          ndisPublishSleepStudyCustomData(a2, &v25, L"Total Time (ms)", *(_QWORD *)(v15 + 1));
          v14 = a1;
          a4 = v22;
          v9 = a3;
        }
      }
      v15 += 4;
      --v16;
    }
    while ( v16 );
    result = (unsigned int *)(a6 + 4);
    ++v12;
  }
  while ( v12 <= 2 );
  return result;
}
