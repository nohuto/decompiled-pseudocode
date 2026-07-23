/*
 * XREFs of KeQueryPerformanceCounter @ 0x1403027F0
 * Callers:
 *     sub_140207A84 @ 0x140207A84 (sub_140207A84.c)
 *     sub_140207CCC @ 0x140207CCC (sub_140207CCC.c)
 *     sub_140208434 @ 0x140208434 (sub_140208434.c)
 *     KeQueryUnbiasedInterruptTimePrecise @ 0x140209000 (KeQueryUnbiasedInterruptTimePrecise.c)
 *     sub_140209B54 @ 0x140209B54 (sub_140209B54.c)
 *     sub_14020F07C @ 0x14020F07C (sub_14020F07C.c)
 *     sub_1402126A4 @ 0x1402126A4 (sub_1402126A4.c)
 *     sub_140214244 @ 0x140214244 (sub_140214244.c)
 *     sub_140223A20 @ 0x140223A20 (sub_140223A20.c)
 *     sub_14022560C @ 0x14022560C (sub_14022560C.c)
 *     CcCopyWriteEx @ 0x140226550 (CcCopyWriteEx.c)
 *     sub_14022DA40 @ 0x14022DA40 (sub_14022DA40.c)
 *     sub_14022DB00 @ 0x14022DB00 (sub_14022DB00.c)
 *     sub_14022F6A4 @ 0x14022F6A4 (sub_14022F6A4.c)
 *     sub_14022F99C @ 0x14022F99C (sub_14022F99C.c)
 *     sub_14023B798 @ 0x14023B798 (sub_14023B798.c)
 *     sub_1402452D4 @ 0x1402452D4 (sub_1402452D4.c)
 *     sub_140259DD0 @ 0x140259DD0 (sub_140259DD0.c)
 *     sub_140260EFC @ 0x140260EFC (sub_140260EFC.c)
 *     sub_1402612BC @ 0x1402612BC (sub_1402612BC.c)
 *     RtlGetMultiTimePrecise @ 0x1402622C0 (RtlGetMultiTimePrecise.c)
 *     sub_140262DBC @ 0x140262DBC (sub_140262DBC.c)
 *     sub_140265428 @ 0x140265428 (sub_140265428.c)
 *     sub_140267B58 @ 0x140267B58 (sub_140267B58.c)
 *     sub_14027B3C0 @ 0x14027B3C0 (sub_14027B3C0.c)
 *     sub_140283030 @ 0x140283030 (sub_140283030.c)
 *     sub_14028F324 @ 0x14028F324 (sub_14028F324.c)
 *     sub_140293600 @ 0x140293600 (sub_140293600.c)
 *     sub_14029AF90 @ 0x14029AF90 (sub_14029AF90.c)
 *     sub_1402A7C20 @ 0x1402A7C20 (sub_1402A7C20.c)
 *     sub_1402A9790 @ 0x1402A9790 (sub_1402A9790.c)
 *     sub_1402ABBF0 @ 0x1402ABBF0 (sub_1402ABBF0.c)
 *     sub_1402BD970 @ 0x1402BD970 (sub_1402BD970.c)
 *     sub_1402C41D0 @ 0x1402C41D0 (sub_1402C41D0.c)
 *     sub_1402D6094 @ 0x1402D6094 (sub_1402D6094.c)
 *     sub_1402DA0F0 @ 0x1402DA0F0 (sub_1402DA0F0.c)
 *     sub_1402DA4C0 @ 0x1402DA4C0 (sub_1402DA4C0.c)
 *     sub_1402E1D0C @ 0x1402E1D0C (sub_1402E1D0C.c)
 *     KeQuerySystemTimePrecise @ 0x1402F08A0 (KeQuerySystemTimePrecise.c)
 *     CcAsyncCopyRead @ 0x1402F5790 (CcAsyncCopyRead.c)
 *     sub_140302560 @ 0x140302560 (sub_140302560.c)
 *     sub_140302930 @ 0x140302930 (sub_140302930.c)
 *     KeQueryInterruptTimePrecise @ 0x140303490 (KeQueryInterruptTimePrecise.c)
 *     KeClockInterruptNotify @ 0x140305780 (KeClockInterruptNotify.c)
 *     sub_1403086B0 @ 0x1403086B0 (sub_1403086B0.c)
 *     sub_140329470 @ 0x140329470 (sub_140329470.c)
 *     CcCopyReadEx @ 0x14032A8C0 (CcCopyReadEx.c)
 *     sub_14038B7AC @ 0x14038B7AC (sub_14038B7AC.c)
 *     sub_14038B8A0 @ 0x14038B8A0 (sub_14038B8A0.c)
 *     sub_1403919F0 @ 0x1403919F0 (sub_1403919F0.c)
 *     sub_140393AA0 @ 0x140393AA0 (sub_140393AA0.c)
 *     sub_140394C30 @ 0x140394C30 (sub_140394C30.c)
 *     sub_140395300 @ 0x140395300 (sub_140395300.c)
 *     sub_140398C28 @ 0x140398C28 (sub_140398C28.c)
 *     sub_140399340 @ 0x140399340 (sub_140399340.c)
 *     sub_1403A1620 @ 0x1403A1620 (sub_1403A1620.c)
 *     sub_1403A493C @ 0x1403A493C (sub_1403A493C.c)
 *     sub_1403A68B0 @ 0x1403A68B0 (sub_1403A68B0.c)
 *     sub_1403A7BD8 @ 0x1403A7BD8 (sub_1403A7BD8.c)
 *     sub_1403B4A10 @ 0x1403B4A10 (sub_1403B4A10.c)
 *     sub_1403B4AB0 @ 0x1403B4AB0 (sub_1403B4AB0.c)
 *     sub_1403B4C90 @ 0x1403B4C90 (sub_1403B4C90.c)
 *     sub_1403BA9B4 @ 0x1403BA9B4 (sub_1403BA9B4.c)
 *     sub_1403BB0A0 @ 0x1403BB0A0 (sub_1403BB0A0.c)
 *     sub_1403BC1C4 @ 0x1403BC1C4 (sub_1403BC1C4.c)
 *     sub_1403BC2A0 @ 0x1403BC2A0 (sub_1403BC2A0.c)
 *     sub_1403CA510 @ 0x1403CA510 (sub_1403CA510.c)
 *     sub_1403CE4FC @ 0x1403CE4FC (sub_1403CE4FC.c)
 *     __report_rangecheckfailure_0 @ 0x1403CF338 (__report_rangecheckfailure_0.c)
 *     sub_1403D1DE4 @ 0x1403D1DE4 (sub_1403D1DE4.c)
 *     sub_1403D2888 @ 0x1403D2888 (sub_1403D2888.c)
 *     sub_1403D3960 @ 0x1403D3960 (sub_1403D3960.c)
 *     sub_1403D452C @ 0x1403D452C (sub_1403D452C.c)
 *     sub_1403D6F40 @ 0x1403D6F40 (sub_1403D6F40.c)
 *     sub_1403D94C0 @ 0x1403D94C0 (sub_1403D94C0.c)
 *     sub_1403D9880 @ 0x1403D9880 (sub_1403D9880.c)
 *     sub_1403D9D88 @ 0x1403D9D88 (sub_1403D9D88.c)
 *     HalWheaUpdateCmciPolicy @ 0x1403DA050 (HalWheaUpdateCmciPolicy.c)
 *     sub_1403DB6F0 @ 0x1403DB6F0 (sub_1403DB6F0.c)
 *     sub_140502E6C @ 0x140502E6C (sub_140502E6C.c)
 *     sub_140502F20 @ 0x140502F20 (sub_140502F20.c)
 *     sub_140509620 @ 0x140509620 (sub_140509620.c)
 *     sub_14050B2E4 @ 0x14050B2E4 (sub_14050B2E4.c)
 *     sub_14050BAC8 @ 0x14050BAC8 (sub_14050BAC8.c)
 *     sub_14050DBB0 @ 0x14050DBB0 (sub_14050DBB0.c)
 *     sub_14050F9E0 @ 0x14050F9E0 (sub_14050F9E0.c)
 *     sub_14051FE4C @ 0x14051FE4C (sub_14051FE4C.c)
 *     sub_140520920 @ 0x140520920 (sub_140520920.c)
 *     sub_14052B218 @ 0x14052B218 (sub_14052B218.c)
 *     sub_14052C290 @ 0x14052C290 (sub_14052C290.c)
 *     sub_1405369A0 @ 0x1405369A0 (sub_1405369A0.c)
 *     sub_14055A628 @ 0x14055A628 (sub_14055A628.c)
 *     sub_140573670 @ 0x140573670 (sub_140573670.c)
 *     PoInitiateProcessorWake @ 0x1405C6DD0 (PoInitiateProcessorWake.c)
 *     sub_1405C8360 @ 0x1405C8360 (sub_1405C8360.c)
 *     sub_1405C850C @ 0x1405C850C (sub_1405C850C.c)
 *     sub_1405C85B0 @ 0x1405C85B0 (sub_1405C85B0.c)
 *     sub_1405C8ECC @ 0x1405C8ECC (sub_1405C8ECC.c)
 *     sub_1405CE584 @ 0x1405CE584 (sub_1405CE584.c)
 *     sub_1405D6AC0 @ 0x1405D6AC0 (sub_1405D6AC0.c)
 *     sub_1405D7930 @ 0x1405D7930 (sub_1405D7930.c)
 *     sub_1405D7A4C @ 0x1405D7A4C (sub_1405D7A4C.c)
 *     sub_1405F8610 @ 0x1405F8610 (sub_1405F8610.c)
 *     sub_1405F8978 @ 0x1405F8978 (sub_1405F8978.c)
 *     sub_1405FA660 @ 0x1405FA660 (sub_1405FA660.c)
 *     sub_1405FAE14 @ 0x1405FAE14 (sub_1405FAE14.c)
 *     sub_1405FAF84 @ 0x1405FAF84 (sub_1405FAF84.c)
 *     sub_140602EB8 @ 0x140602EB8 (sub_140602EB8.c)
 *     sub_14062EDA8 @ 0x14062EDA8 (sub_14062EDA8.c)
 *     WmiGetClock @ 0x140630E90 (WmiGetClock.c)
 *     sub_140634D24 @ 0x140634D24 (sub_140634D24.c)
 *     sub_14064E7FC @ 0x14064E7FC (sub_14064E7FC.c)
 *     sub_14064E9C0 @ 0x14064E9C0 (sub_14064E9C0.c)
 *     sub_14065327C @ 0x14065327C (sub_14065327C.c)
 *     sub_14065355C @ 0x14065355C (sub_14065355C.c)
 *     sub_140653654 @ 0x140653654 (sub_140653654.c)
 *     RtlCapabilityCheck @ 0x140660AF0 (RtlCapabilityCheck.c)
 *     sub_140662030 @ 0x140662030 (sub_140662030.c)
 *     sub_1406B4140 @ 0x1406B4140 (sub_1406B4140.c)
 *     sub_1406DC5A4 @ 0x1406DC5A4 (sub_1406DC5A4.c)
 *     sub_1406F120C @ 0x1406F120C (sub_1406F120C.c)
 *     sub_140702420 @ 0x140702420 (sub_140702420.c)
 *     NtQueryInformationProcess @ 0x14073DA00 (NtQueryInformationProcess.c)
 *     sub_14074F950 @ 0x14074F950 (sub_14074F950.c)
 *     sub_1407FEC6C @ 0x1407FEC6C (sub_1407FEC6C.c)
 *     sub_1407FF888 @ 0x1407FF888 (sub_1407FF888.c)
 *     sub_1407FFD64 @ 0x1407FFD64 (sub_1407FFD64.c)
 *     sub_1407FFDDC @ 0x1407FFDDC (sub_1407FFDDC.c)
 *     sub_140848C18 @ 0x140848C18 (sub_140848C18.c)
 *     sub_14084C160 @ 0x14084C160 (sub_14084C160.c)
 *     sub_140851114 @ 0x140851114 (sub_140851114.c)
 *     sub_140911EA8 @ 0x140911EA8 (sub_140911EA8.c)
 *     sub_14093A0B8 @ 0x14093A0B8 (sub_14093A0B8.c)
 *     sub_140A48630 @ 0x140A48630 (sub_140A48630.c)
 *     sub_140A48CA4 @ 0x140A48CA4 (sub_140A48CA4.c)
 *     sub_140A48D7C @ 0x140A48D7C (sub_140A48D7C.c)
 *     BroadcastFunction @ 0x140A48E70 (BroadcastFunction.c)
 *     sub_140A494E8 @ 0x140A494E8 (sub_140A494E8.c)
 *     sub_140A4A768 @ 0x140A4A768 (sub_140A4A768.c)
 *     sub_140A4AF0C @ 0x140A4AF0C (sub_140A4AF0C.c)
 *     sub_140A4B5A0 @ 0x140A4B5A0 (sub_140A4B5A0.c)
 *     sub_140A4CD9C @ 0x140A4CD9C (sub_140A4CD9C.c)
 *     sub_140A4D310 @ 0x140A4D310 (sub_140A4D310.c)
 *     sub_140A4D92C @ 0x140A4D92C (sub_140A4D92C.c)
 *     sub_140A529EC @ 0x140A529EC (sub_140A529EC.c)
 *     sub_140A5AAF0 @ 0x140A5AAF0 (sub_140A5AAF0.c)
 *     sub_140A62700 @ 0x140A62700 (sub_140A62700.c)
 *     sub_140A67430 @ 0x140A67430 (sub_140A67430.c)
 *     sub_140A67C14 @ 0x140A67C14 (sub_140A67C14.c)
 *     sub_140A6B59C @ 0x140A6B59C (sub_140A6B59C.c)
 *     sub_140A6FB80 @ 0x140A6FB80 (sub_140A6FB80.c)
 *     sub_140A70470 @ 0x140A70470 (sub_140A70470.c)
 *     sub_140A9A1DC @ 0x140A9A1DC (sub_140A9A1DC.c)
 *     sub_140AF2E9C @ 0x140AF2E9C (sub_140AF2E9C.c)
 *     sub_140AF47DC @ 0x140AF47DC (sub_140AF47DC.c)
 *     sub_140AFB264 @ 0x140AFB264 (sub_140AFB264.c)
 *     sub_140AFBDF4 @ 0x140AFBDF4 (sub_140AFBDF4.c)
 *     sub_140B026CC @ 0x140B026CC (sub_140B026CC.c)
 *     sub_140B0433C @ 0x140B0433C (sub_140B0433C.c)
 *     sub_140B07C00 @ 0x140B07C00 (sub_140B07C00.c)
 *     sub_140B088E4 @ 0x140B088E4 (sub_140B088E4.c)
 *     sub_140B08B40 @ 0x140B08B40 (sub_140B08B40.c)
 *     sub_140B24E48 @ 0x140B24E48 (sub_140B24E48.c)
 *     sub_140B27884 @ 0x140B27884 (sub_140B27884.c)
 *     sub_140B27B30 @ 0x140B27B30 (sub_140B27B30.c)
 * Callees:
 *     sub_140303720 @ 0x140303720 (sub_140303720.c)
 *     sub_1403A572C @ 0x1403A572C (sub_1403A572C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

LARGE_INTEGER __stdcall KeQueryPerformanceCounter(PLARGE_INTEGER PerformanceFrequency)
{
  __int64 v1; // rdx
  ULONG_PTR v3; // rsi
  LONGLONG v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // r15
  signed __int64 v9; // rdx
  LARGE_INTEGER result; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // r15
  signed __int64 v16; // rdx
  __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rdx
  unsigned __int64 v20; // r11
  signed __int64 v21; // rax
  int v22; // r10d
  unsigned __int64 v23; // rcx
  __int64 v24; // r9
  __int64 v25; // r8
  unsigned __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rdx
  unsigned __int64 v31; // r11
  signed __int64 v32; // rax
  int v33; // r10d
  unsigned __int64 v34; // rcx
  __int64 v35; // r9
  __int64 v36; // r8
  unsigned __int64 v37; // r8
  __int64 v38; // rdx
  __int64 v39; // r8
  LONGLONG v40; // r8
  signed __int32 v41[14]; // [rsp+0h] [rbp-38h] BYREF

  v3 = qword_140C4E390;
  if ( *(_DWORD *)(qword_140C4E390 + 228) == 5 )
  {
    v4 = 10000000LL;
    if ( Address )
    {
      if ( (*(_DWORD *)(qword_140C4E390 + 224) & 0x10000) != 0 )
        v11 = *(_QWORD *)(qword_140C4E390 + 72)
            + (unsigned int)(*(_DWORD *)(qword_140C4E390 + 80) * HIDWORD(KeGetPcr()[1].LockArray));
      else
        v11 = *(_QWORD *)(qword_140C4E390 + 72);
      result.QuadPart = MEMORY[0xFFFFF780000003B8]
                      + (((unsigned __int64)sub_14042A5E0(v11, v1)
                        * (unsigned __int128)*((unsigned __int64 *)Address + 1)) >> 64);
    }
    else
    {
      if ( *(_DWORD *)(qword_140C4E390 + 220) == 64 )
      {
        v12 = sub_140303720(qword_140C4E390);
        v14 = sub_14042A5E0(v12, v13);
        v15 = *(_QWORD *)(v3 + 208);
        v16 = v14;
      }
      else
      {
        do
        {
          v15 = *(_QWORD *)(v3 + 208);
          do
          {
            v17 = *(_QWORD *)(v3 + 200);
            v18 = sub_140303720(v3);
            v20 = sub_14042A5E0(v18, v19);
            _InterlockedOr(v41, 0);
            v21 = *(_QWORD *)(v3 + 200);
          }
          while ( v17 != v21 );
        }
        while ( v15 != *(_QWORD *)(v3 + 208) );
        v22 = *(_DWORD *)(v3 + 220);
        v23 = v17 ^ v20;
        if ( _bittest64((const __int64 *)&v23, (unsigned __int8)(v22 - 1)) )
        {
          v24 = 1LL;
          if ( v22 == 64 )
            v25 = -1LL;
          else
            v25 = (1LL << v22) - 1;
          if ( v22 != 64 )
            v24 = 1LL << v22;
          v26 = v17 & v25;
          v16 = v20 | v17 ^ v26;
          if ( v20 < v26 )
            v16 += v24;
          _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 200), v16, v21);
        }
        else
        {
          if ( v22 == 64 )
            v27 = -1LL;
          else
            v27 = (1LL << v22) - 1;
          v16 = v20 | v17 & ~v27;
        }
      }
      result.QuadPart = sub_1403A572C(v15 + v16, *(_QWORD *)(v3 + 192), 10000000LL);
    }
  }
  else
  {
    v4 = *(_QWORD *)(qword_140C4E390 + 192);
    if ( *(_DWORD *)(qword_140C4E390 + 220) == 64 )
    {
      v5 = sub_140303720(qword_140C4E390);
      v7 = sub_14042A5E0(v5, v6);
      v8 = *(_QWORD *)(v3 + 208);
      v9 = v7;
    }
    else
    {
      do
      {
        v8 = *(_QWORD *)(v3 + 208);
        do
        {
          v28 = *(_QWORD *)(v3 + 200);
          v29 = sub_140303720(v3);
          v31 = sub_14042A5E0(v29, v30);
          _InterlockedOr(v41, 0);
          v32 = *(_QWORD *)(v3 + 200);
        }
        while ( v28 != v32 );
      }
      while ( v8 != *(_QWORD *)(v3 + 208) );
      v33 = *(_DWORD *)(v3 + 220);
      v34 = v28 ^ v31;
      if ( _bittest64((const __int64 *)&v34, (unsigned __int8)(v33 - 1)) )
      {
        v35 = 1LL;
        if ( v33 == 64 )
          v36 = -1LL;
        else
          v36 = (1LL << v33) - 1;
        if ( v33 != 64 )
          v35 = 1LL << v33;
        v37 = v28 & v36;
        v9 = v31 | v28 ^ v37;
        if ( v31 < v37 )
          v9 += v35;
        _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 200), v9, v32);
      }
      else
      {
        if ( v33 == 64 )
          v38 = -1LL;
        else
          v38 = (1LL << v33) - 1;
        v9 = v31 | v28 & ~v38;
      }
    }
    result.QuadPart = v8 + v9;
  }
  if ( v3 == qword_140C4E388 || !qword_140C4E388 )
  {
    if ( PerformanceFrequency )
      PerformanceFrequency->QuadPart = v4;
  }
  else
  {
    v39 = *(_QWORD *)(qword_140C4E388 + 192);
    if ( *(_DWORD *)(qword_140C4E388 + 228) == 5 )
      v39 = 10000000LL;
    result.QuadPart = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))sub_1403A572C)(
                        (LARGE_INTEGER)result.QuadPart,
                        v4,
                        v39);
    if ( PerformanceFrequency )
      PerformanceFrequency->QuadPart = v40;
  }
  return result;
}
