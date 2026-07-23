/*
 * XREFs of sub_140B026CC @ 0x140B026CC
 * Callers:
 *     sub_140AFBDF4 @ 0x140AFBDF4 (sub_140AFBDF4.c)
 *     sub_140AFE7A0 @ 0x140AFE7A0 (sub_140AFE7A0.c)
 *     sub_140B020A4 @ 0x140B020A4 (sub_140B020A4.c)
 * Callees:
 *     sub_140224C00 @ 0x140224C00 (sub_140224C00.c)
 *     sub_140224C34 @ 0x140224C34 (sub_140224C34.c)
 *     sub_140224E90 @ 0x140224E90 (sub_140224E90.c)
 *     ExInitializeNPagedLookasideList @ 0x140250C10 (ExInitializeNPagedLookasideList.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     ExInitializeResourceLite @ 0x14030F740 (ExInitializeResourceLite.c)
 *     sub_14036972C @ 0x14036972C (sub_14036972C.c)
 *     sub_1403B80CC @ 0x1403B80CC (sub_1403B80CC.c)
 *     HviIsAnyHypervisorPresent @ 0x1403C03A0 (HviIsAnyHypervisorPresent.c)
 *     sub_1403C0B80 @ 0x1403C0B80 (sub_1403C0B80.c)
 *     sub_1403C0EE4 @ 0x1403C0EE4 (sub_1403C0EE4.c)
 *     sub_1403C0FF4 @ 0x1403C0FF4 (sub_1403C0FF4.c)
 *     sub_1403D6AC8 @ 0x1403D6AC8 (sub_1403D6AC8.c)
 *     HalGetInterruptTargetInformation @ 0x1403D8950 (HalGetInterruptTargetInformation.c)
 *     sub_1403D99B4 @ 0x1403D99B4 (sub_1403D99B4.c)
 *     sub_1403DCA14 @ 0x1403DCA14 (sub_1403DCA14.c)
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1405D0D30 @ 0x1405D0D30 (sub_1405D0D30.c)
 *     EtwRegister @ 0x1406D2350 (EtwRegister.c)
 *     sub_14080D028 @ 0x14080D028 (sub_14080D028.c)
 *     sub_140810E2C @ 0x140810E2C (sub_140810E2C.c)
 *     sub_1408193F4 @ 0x1408193F4 (sub_1408193F4.c)
 *     sub_14081C69C @ 0x14081C69C (sub_14081C69C.c)
 *     sub_14081CEF8 @ 0x14081CEF8 (sub_14081CEF8.c)
 *     sub_140822D70 @ 0x140822D70 (sub_140822D70.c)
 *     sub_140829740 @ 0x140829740 (sub_140829740.c)
 *     sub_14082975C @ 0x14082975C (sub_14082975C.c)
 *     EmpProviderRegister @ 0x14082D070 (EmpProviderRegister.c)
 *     sub_140849690 @ 0x140849690 (sub_140849690.c)
 *     sub_140849B04 @ 0x140849B04 (sub_140849B04.c)
 *     sub_140855C88 @ 0x140855C88 (sub_140855C88.c)
 *     sub_1408565CC @ 0x1408565CC (sub_1408565CC.c)
 *     KeRegisterProcessorChangeCallback @ 0x140858460 (KeRegisterProcessorChangeCallback.c)
 *     sub_1408604BC @ 0x1408604BC (sub_1408604BC.c)
 *     sub_1408620D0 @ 0x1408620D0 (sub_1408620D0.c)
 *     sub_1408626B8 @ 0x1408626B8 (sub_1408626B8.c)
 *     sub_1408633F0 @ 0x1408633F0 (sub_1408633F0.c)
 *     sub_140863B40 @ 0x140863B40 (sub_140863B40.c)
 *     sub_140863F58 @ 0x140863F58 (sub_140863F58.c)
 *     sub_1408641EC @ 0x1408641EC (sub_1408641EC.c)
 *     sub_140864810 @ 0x140864810 (sub_140864810.c)
 *     sub_140864980 @ 0x140864980 (sub_140864980.c)
 *     sub_140864DD4 @ 0x140864DD4 (sub_140864DD4.c)
 *     sub_140864E10 @ 0x140864E10 (sub_140864E10.c)
 *     sub_140864E4C @ 0x140864E4C (sub_140864E4C.c)
 *     sub_140864E88 @ 0x140864E88 (sub_140864E88.c)
 *     sub_140864EC4 @ 0x140864EC4 (sub_140864EC4.c)
 *     sub_140864F00 @ 0x140864F00 (sub_140864F00.c)
 *     sub_140864F3C @ 0x140864F3C (sub_140864F3C.c)
 *     sub_140865194 @ 0x140865194 (sub_140865194.c)
 *     sub_140993114 @ 0x140993114 (sub_140993114.c)
 *     sub_140A47CF8 @ 0x140A47CF8 (sub_140A47CF8.c)
 *     EmClientQueryRuleState @ 0x140A47D40 (EmClientQueryRuleState.c)
 *     sub_140A48330 @ 0x140A48330 (sub_140A48330.c)
 *     sub_140AF33B0 @ 0x140AF33B0 (sub_140AF33B0.c)
 *     sub_140AF86C4 @ 0x140AF86C4 (sub_140AF86C4.c)
 *     HalReportResourceUsage @ 0x140AFC970 (HalReportResourceUsage.c)
 *     sub_140B01A8C @ 0x140B01A8C (sub_140B01A8C.c)
 *     sub_140B02344 @ 0x140B02344 (sub_140B02344.c)
 *     sub_140B02408 @ 0x140B02408 (sub_140B02408.c)
 *     sub_140B02560 @ 0x140B02560 (sub_140B02560.c)
 *     sub_140B03360 @ 0x140B03360 (sub_140B03360.c)
 *     sub_140B03434 @ 0x140B03434 (sub_140B03434.c)
 *     sub_140B0348C @ 0x140B0348C (sub_140B0348C.c)
 *     sub_140B034C0 @ 0x140B034C0 (sub_140B034C0.c)
 *     sub_140B03688 @ 0x140B03688 (sub_140B03688.c)
 *     sub_140B151EC @ 0x140B151EC (sub_140B151EC.c)
 *     sub_140B15390 @ 0x140B15390 (sub_140B15390.c)
 *     sub_140B1BC34 @ 0x140B1BC34 (sub_140B1BC34.c)
 *     sub_140B246C0 @ 0x140B246C0 (sub_140B246C0.c)
 *     sub_140B247B0 @ 0x140B247B0 (sub_140B247B0.c)
 *     sub_140B248EC @ 0x140B248EC (sub_140B248EC.c)
 *     sub_140B25110 @ 0x140B25110 (sub_140B25110.c)
 *     sub_140B25464 @ 0x140B25464 (sub_140B25464.c)
 *     sub_140B25B70 @ 0x140B25B70 (sub_140B25B70.c)
 *     sub_140B27E7C @ 0x140B27E7C (sub_140B27E7C.c)
 *     sub_140B28250 @ 0x140B28250 (sub_140B28250.c)
 *     sub_140B28664 @ 0x140B28664 (sub_140B28664.c)
 *     sub_140B29B34 @ 0x140B29B34 (sub_140B29B34.c)
 *     sub_140B2B9FC @ 0x140B2B9FC (sub_140B2B9FC.c)
 *     sub_140B2C0C0 @ 0x140B2C0C0 (sub_140B2C0C0.c)
 *     sub_140B2C334 @ 0x140B2C334 (sub_140B2C334.c)
 *     sub_140B2CD08 @ 0x140B2CD08 (sub_140B2CD08.c)
 *     sub_140B2D120 @ 0x140B2D120 (sub_140B2D120.c)
 *     sub_140B2D588 @ 0x140B2D588 (sub_140B2D588.c)
 *     sub_140B2DB68 @ 0x140B2DB68 (sub_140B2DB68.c)
 *     sub_140B2E208 @ 0x140B2E208 (sub_140B2E208.c)
 *     sub_140B2EA50 @ 0x140B2EA50 (sub_140B2EA50.c)
 *     sub_140B2F0F0 @ 0x140B2F0F0 (sub_140B2F0F0.c)
 *     sub_140B2F90C @ 0x140B2F90C (sub_140B2F90C.c)
 *     sub_140B2FD20 @ 0x140B2FD20 (sub_140B2FD20.c)
 *     sub_140B2FDC0 @ 0x140B2FDC0 (sub_140B2FDC0.c)
 *     sub_140B2FF24 @ 0x140B2FF24 (sub_140B2FF24.c)
 *     sub_140B301A8 @ 0x140B301A8 (sub_140B301A8.c)
 *     sub_140B302E4 @ 0x140B302E4 (sub_140B302E4.c)
 *     sub_140B30800 @ 0x140B30800 (sub_140B30800.c)
 *     sub_140B30A10 @ 0x140B30A10 (sub_140B30A10.c)
 *     sub_140B30B14 @ 0x140B30B14 (sub_140B30B14.c)
 *     sub_140B30E08 @ 0x140B30E08 (sub_140B30E08.c)
 *     sub_140B30FEC @ 0x140B30FEC (sub_140B30FEC.c)
 *     sub_140B310D4 @ 0x140B310D4 (sub_140B310D4.c)
 *     sub_140B3116C @ 0x140B3116C (sub_140B3116C.c)
 *     sub_140B3129C @ 0x140B3129C (sub_140B3129C.c)
 *     sub_140B53104 @ 0x140B53104 (sub_140B53104.c)
 *     sub_140B53164 @ 0x140B53164 (sub_140B53164.c)
 *     sub_140B531EC @ 0x140B531EC (sub_140B531EC.c)
 */

bool __fastcall sub_140B026CC(int a1, __int64 a2)
{
  int v3; // eax
  __int64 v5; // r8
  __int64 v6; // r8
  __int64 v7; // r8
  __int64 v8; // r8
  unsigned int v9; // ecx
  __int64 v10; // rcx
  __int64 v11; // rdx
  unsigned __int8 v12; // di
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // edx
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // eax
  int v19; // ecx
  __int128 v20; // [rsp+40h] [rbp-20h] BYREF
  __int64 v21; // [rsp+50h] [rbp-10h]
  int v22; // [rsp+A0h] [rbp+40h] BYREF
  int Buffer; // [rsp+B0h] [rbp+50h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+B8h] [rbp+58h] BYREF

  dword_140C22F80 = a1;
  PerformanceFrequency.QuadPart = 0LL;
  v21 = 0LL;
  v20 = 0LL;
  if ( a1 )
  {
    if ( a1 != 1 )
    {
      if ( a1 == 2 )
      {
        sub_140AF86C4();
        HalReportResourceUsage(1);
        sub_140B01A8C();
        v3 = EtwRegister(&stru_140013550, (PETWENABLECALLBACK)sub_140864680, 0LL, &qword_140C1F580);
        if ( v3 < 0 )
          return v3 >= 0;
        byte_140C5AE30 = 1;
        KeRegisterProcessorChangeCallback((PPROCESSOR_CALLBACK_FUNCTION)sub_1409893F0, 0LL, 0);
        sub_140224E90((struct _KTHREAD **)&qword_140C22FE0);
        sub_140849B04(1, v11);
        sub_140224C00(&qword_140C22FE0);
        if ( dword_140D05158 != -1 )
          dword_140D06AB8 = dword_140D05158 != 0;
        sub_14082975C();
        sub_140849690(0);
        sub_140224E90(&qword_140C23EE0);
        sub_140224C34();
        sub_140224C00((__int64 *)&qword_140C23EE0);
        sub_140B3116C();
        sub_140864810(0);
        sub_140B301A8();
        goto LABEL_5;
      }
      if ( a1 != 3 )
      {
LABEL_5:
        v3 = 0;
        return v3 >= 0;
      }
      v3 = sub_140B1BC34();
      if ( v3 < 0 )
        return v3 >= 0;
      sub_140B03360(3LL);
      sub_140B02344(3);
      sub_140B2FF24();
      sub_140B30800();
      v12 = 1;
      if ( dword_140D05230 )
      {
        if ( dword_140D05230 != 1 )
        {
          v18 = 0;
          v19 = 0;
LABEL_64:
          dword_140D050B4 = v19;
          sub_140993114(v18 == 2, v12);
          goto LABEL_38;
        }
        v12 = 0;
        if ( (int)HalGetInterruptTargetInformation(2, 0, (__int64)&v20) >= 0 )
        {
          dword_140D0526C = HIDWORD(v21);
          dword_140D050B4 = !sub_140865194();
LABEL_38:
          sub_1403B80CC();
          sub_140B2C0C0(a2);
          if ( (unsigned __int8)sub_14042A5E0(v14, v13)
            || (unsigned int)(xmmword_140C24540 - 1) <= 1 && DWORD1(xmmword_140C24540) )
          {
            sub_1405D0D30(SDWORD1(xmmword_140C24540));
          }
          sub_140855C88();
          sub_140A48330();
          sub_1408620D0(0LL);
          if ( byte_140C4E508 )
            sub_140810E2C(16, 15, 0LL, 0LL);
          if ( byte_140C23414 )
            sub_140810E2C(17, 7, 0LL, 0LL);
          v15 = 0;
          if ( (*(_BYTE *)(*(_QWORD *)(a2 + 240) + 2648LL) & 8) != 0 )
          {
            byte_140C23738 = 1;
            v15 = 4;
          }
          if ( (dword_140D0688C & 2) == 0 && byte_140D06888 )
          {
            LOBYTE(v15) = 31;
          }
          else if ( !v15 )
          {
            goto LABEL_49;
          }
          sub_140810E2C(21, v15, 0LL, 0LL);
LABEL_49:
          sub_140B03688(3LL);
          sub_14081C69C();
          if ( (dword_140C22278 & 1) != 0 )
          {
            byte_140C2341E = 1;
            *(_QWORD *)&xmmword_140C23420 = 0x19000000064LL;
            *((_QWORD *)&xmmword_140C23420 + 1) = 0xFFFF0000000ALL;
            LODWORD(qword_140C23440) = 4;
            dword_140C23448 = 2;
          }
          if ( (dword_140C22278 & 2) != 0 )
          {
            LODWORD(xmmword_140C23400) = 16843009;
            WORD2(xmmword_140C23400) = 257;
            BYTE6(xmmword_140C23400) = 1;
            unk_140C23411 = 257;
          }
          sub_1408193F4();
          sub_140AF33B0();
          sub_140B03434(3LL);
          sub_1403C0FF4();
          Buffer = 1;
          sub_14080D028(1u);
          ZwUpdateWnfStateData(&stru_1400133C0, &Buffer, 4u, 0LL, 0LL, 0, 0);
          sub_140B02560(3);
          sub_140A47CF8();
          sub_140822D70();
          sub_140B30A10();
          sub_140B302E4();
          sub_1408641EC();
          v16 = *(_QWORD *)(a2 + 240);
          dword_140C2373C = *(_DWORD *)(v16 + 272);
          byte_140C23739 = (*(_DWORD *)(v16 + 132) & 0x10000000) != 0;
          sub_140864980();
          sub_1408565CC();
          if ( (*(_DWORD *)(*(_QWORD *)(a2 + 240) + 2648LL) & 0x8000LL) != 0 )
            byte_140C2373A = 1;
          sub_140A48330();
          sub_140B15390();
          sub_140A47CF8();
          sub_140B0348C(3LL);
          ExInitializeResourceLite(&stru_140C207A0);
          if ( byte_140C5AC3C )
          {
            if ( (int)sub_140B53104() < 0 || (int)sub_140B53164() < 0 || (int)sub_140B531EC() < 0 )
              goto LABEL_57;
            dword_140C20808 |= 2u;
          }
          dword_140C20808 |= 1u;
LABEL_57:
          sub_140864F3C();
          sub_140863F58();
          sub_140864F00();
          sub_140864EC4();
          sub_140864E88();
          sub_140864E4C();
          sub_140864E10();
          sub_140864DD4();
          sub_1408604BC();
          byte_140C1F618 = (*(_DWORD *)(a2 + 264) & 2) != 0;
          sub_1408633F0();
          if ( byte_140C5AC3C )
          {
            v22 = 1;
            EmClientQueryRuleState(qword_14003C1A8, &v22);
            if ( v22 == 2 )
              byte_140D048DC = 1;
          }
          sub_1403C0B80(v17);
          if ( byte_140C5AC3C )
          {
            if ( dword_140C0C814 != -1 )
              byte_140D048AC = dword_140C0C814 != 0;
            v22 = 1;
            EmClientQueryRuleState(qword_14003C198, &v22);
            if ( v22 == 2 )
            {
              byte_140D048AD = 1;
            }
            else
            {
              byte_140D048AD = 0;
              if ( dword_140C0C818 != -1 )
                byte_140D048AD = dword_140C0C818 != 0;
            }
          }
          sub_140B310D4();
          sub_14036972C(1u);
          sub_140B3129C();
          sub_140B30FEC();
          sub_140B30E08();
          goto LABEL_5;
        }
      }
      v18 = 2;
      v19 = 2;
      goto LABEL_64;
    }
    if ( HviIsAnyHypervisorPresent() )
    {
      dword_140D052E0 = 0;
      dword_140CE2048 = 0;
    }
    qword_140C222C8 = 0LL;
    qword_140C222C0 = 0LL;
    dword_140C2230C = 0;
    sub_140863B40(0);
    if ( (unsigned int)dword_140D06D10 < 4 )
      dword_140C2344C = dword_140D06D10;
    qword_140C235F0 = 0LL;
    qword_140C235F8 = 0LL;
    qword_140C235E8 = 0LL;
    qword_140C235E0 = 0LL;
    sub_140B03360(1LL);
    sub_140B2B9FC();
    sub_140B2CD08();
    qword_140C20788 = 0LL;
    sub_140B03434(1LL);
    sub_140B25464();
    v3 = sub_140B27E7C();
    if ( v3 >= 0 )
    {
      v3 = sub_140B248EC();
      if ( v3 >= 0 )
      {
        v3 = sub_140B02408(1);
        if ( v3 >= 0 )
        {
          v3 = sub_140B2D588();
          if ( v3 >= 0 )
          {
            sub_1403D6AC8();
            sub_140B2FDC0();
            sub_1403DCA14();
            sub_140B034C0(1LL);
            v3 = sub_140B2E208();
            if ( v3 >= 0 )
            {
              sub_140B2F0F0();
              sub_140B29B34();
              v3 = EmpProviderRegister(
                     0LL,
                     (__int64)&off_140009960,
                     1u,
                     (__int64)&off_140009930,
                     2u,
                     (__int64 *)&PerformanceFrequency);
              if ( v3 >= 0 )
              {
                v22 = 1;
                byte_140C1F588 = 0;
                EmClientQueryRuleState(qword_140013560, &v22);
                if ( v22 == 2 )
                  byte_140C1F588 = 1;
                goto LABEL_5;
              }
            }
          }
        }
      }
    }
  }
  else
  {
    KeQueryPerformanceCounter(&PerformanceFrequency);
    qword_140D069F8 = PerformanceFrequency.QuadPart;
    sub_1403C0EE4(PerformanceFrequency.QuadPart, &dword_140D06D24, &dword_140D06D1C);
    sub_1403C0EE4(0x989680uLL, &dword_140D06D28, &dword_140D06D20);
    qword_140C22F88 = 0LL;
    sub_140B02344(0);
    v3 = sub_140B02408(0);
    if ( v3 >= 0 )
    {
      stru_140C21D40.Header.WaitListHead.Blink = &stru_140C21D40.Header.WaitListHead;
      stru_140C21D40.Header.WaitListHead.Flink = &stru_140C21D40.Header.WaitListHead;
      qword_140C22FB8 = (__int64)&qword_140C22FB0;
      qword_140C22FB0 = (__int64)&qword_140C22FB0;
      qword_140C1FF58 = 0LL;
      qword_140C22FA8 = (__int64)&qword_140C22FA0;
      qword_140C22FA0 = (__int64)&qword_140C22FA0;
      qword_140C1FF50 = 0LL;
      qword_140C1FC38 = 0LL;
      qword_140C1FC30 = 0LL;
      qword_140C23918 = 0LL;
      qword_140C23910 = 0LL;
      LOWORD(stru_140C21D40.Header.Lock) = 0;
      stru_140C21D40.Header.Size = 6;
      stru_140C21D40.Header.SignalState = 0;
      qword_140C1FB98 = 0LL;
      qword_140C22F90 = 0LL;
      ExInitializeNPagedLookasideList(&stru_140CF72C0, 0LL, 0LL, 0x200u, 0x120uLL, 0x72496F50u, 0);
      FileHandle = 0LL;
      byte_140C1BC28 = (qword_140C15C78 & 4) != 0;
      byte_140C1BC29 = 0;
      byte_140C1BC40 = 0;
      qword_140C1BC38 = 0LL;
      byte_140C245F0 = 0;
      qword_140C24608 = 0LL;
      qword_140C24600 = 0LL;
      sub_140829740((__int64)&unk_140C24660, (__int64)sub_1407EC230, 0LL);
      sub_140829740((__int64)&unk_140C246A0, (__int64)sub_1407EC280, v5);
      sub_140829740((__int64)&unk_140C24620, (__int64)sub_140810990, v6);
      qword_140C22048 = 0LL;
      qword_140C22050 = (__int64)&xmmword_140010DE8;
      sub_140829740((__int64)&unk_140C20B80, (__int64)sub_1407ED710, v7);
      sub_140829740((__int64)&unk_140C23FC0, (__int64)sub_140989A30, v8);
      qword_140C20B78 = 0LL;
      qword_140C24578 = (__int64)&qword_140C24570;
      qword_140C24570 = &qword_140C24570;
      qword_140C20B70 = 0LL;
      qword_140C24588 = 0LL;
      qword_140C24580 = 0LL;
      byte_140C23FA8 = 0;
      sub_140B2FD20();
      v3 = sub_140B2D120();
      if ( v3 >= 0 )
      {
        qword_140C23000 = 0LL;
        qword_140C22FF8 = (__int64)&qword_140C22FF0;
        qword_140C22FF0 = (__int64)&qword_140C22FF0;
        qword_140C22FD8 = (__int64)&qword_140C22FD0;
        qword_140C22FD0 = (__int64)&qword_140C22FD0;
        qword_140C23048 = (__int64)&qword_140C23040;
        qword_140C23040 = (__int64)&qword_140C23040;
        stru_140C20740.Header.WaitListHead.Blink = &stru_140C20740.Header.WaitListHead;
        stru_140C20740.Header.WaitListHead.Flink = &stru_140C20740.Header.WaitListHead;
        qword_140C23038 = (__int64)&qword_140C23030;
        qword_140C23030 = (__int64)&qword_140C23030;
        stru_140C24000.Event.Header.WaitListHead.Blink = &stru_140C24000.Event.Header.WaitListHead;
        stru_140C24000.Event.Header.WaitListHead.Flink = &stru_140C24000.Event.Header.WaitListHead;
        qword_140C23FF8 = (__int64)&qword_140C23FF0;
        qword_140C23FF0 = (__int64)&qword_140C23FF0;
        qword_140C23018 = 0LL;
        qword_140C23010 = 0LL;
        qword_140C23008 = 0LL;
        qword_140C22FC0 = 0LL;
        qword_140C542C8 = 0LL;
        word_140C22FE8 = 1;
        byte_140C22FEA = 6;
        dword_140C22FEC = 1;
        qword_140C23020 = 0LL;
        LOWORD(stru_140C20740.Header.Lock) = 1;
        stru_140C20740.Header.Size = 6;
        stru_140C20740.Header.SignalState = 1;
        stru_140C24000.Count = 1;
        stru_140C24000.Owner = 0LL;
        stru_140C24000.Contention = 0;
        LOWORD(stru_140C24000.Event.Header.Lock) = 1;
        stru_140C24000.Event.Header.Size = 6;
        stru_140C24000.Event.Header.SignalState = 0;
        sub_140B30B14();
        v9 = dword_140C09830;
        qword_140C23058 = (__int64)&qword_140C23050;
        qword_140C23050 = (__int64)&qword_140C23050;
        qword_140C23068 = 0LL;
        if ( dword_140C09830 )
        {
          if ( dword_140C09830 == -1 )
          {
            v9 = 30;
            dword_140C09830 = 30;
          }
          else if ( (unsigned int)dword_140C09830 > 0x12C )
          {
            v9 = 300;
            dword_140C09830 = 300;
          }
          dword_140C23F00 = (v9 + 59) / v9;
          dword_140C23F04 = (v9 + 179) / v9;
        }
        qword_140C23060 = 0LL;
        stru_140C23080.WorkerRoutine = (PWORKER_THREAD_ROUTINE)sub_140250220;
        stru_140C23080.List.Flink = 0LL;
        stru_140C23080.Parameter = (PVOID)0x80000000LL;
        dword_140C23108 = -1;
        ExInitializeResourceLite(&stru_140C230A0);
        qword_140C23198 = 0LL;
        stru_140C23160.Event.Header.WaitListHead.Blink = &stru_140C23160.Event.Header.WaitListHead;
        stru_140C23160.Event.Header.WaitListHead.Flink = &stru_140C23160.Event.Header.WaitListHead;
        stru_140C23160.Count = 1;
        stru_140C23820.Header.WaitListHead.Blink = &stru_140C23820.Header.WaitListHead;
        stru_140C23820.Header.WaitListHead.Flink = &stru_140C23820.Header.WaitListHead;
        qword_140C231A8 = (__int64)&qword_140C231A0;
        qword_140C231A0 = (__int64)&qword_140C231A0;
        qword_140C23128 = (__int64)&qword_140C23120;
        qword_140C23120 = (__int64)&qword_140C23120;
        qword_140C23118 = (__int64)&qword_140C23110;
        qword_140C23110 = (__int64)&qword_140C23110;
        stru_140C23160.Owner = 0LL;
        stru_140C23160.Contention = 0;
        LOWORD(stru_140C23160.Event.Header.Lock) = 1;
        stru_140C23160.Event.Header.Size = 6;
        stru_140C23160.Event.Header.SignalState = 0;
        LOWORD(stru_140C23820.Header.Lock) = 0;
        stru_140C23820.Header.Size = 6;
        stru_140C23820.Header.SignalState = 0;
        qword_140C23148 = (__int64)&qword_140C23140;
        qword_140C23140 = &qword_140C23140;
        sub_1403D99B4((ULONG)&qword_140C23140, (PVOID)0x10);
        qword_140C23138 = (__int64)&qword_140C23130;
        qword_140C23130 = (__int64)&qword_140C23130;
        sub_14081CEF8();
        qword_140C231B8 = dword_140C231E4;
        sub_1408626B8(dword_140C231E4);
        *(_QWORD *)((char *)&xmmword_140C231C0 + 4) = 5LL;
        LODWORD(xmmword_140C231C0) = 2;
        HIDWORD(xmmword_140C231C0) = -1;
        qword_140C231D0 = 0xFFFFFFFF00000000uLL;
        dword_140C231B0 = 1;
        dword_140C5AE10 = 0;
        dword_140C542C0 = -1;
        dword_140C542C4 = 2;
        sub_140B151EC();
        sub_140B25110();
        sub_140B247B0();
        sub_140B2F90C();
        sub_140B25B70();
        sub_14082975C();
        sub_140B03688(0LL);
        sub_140B2EA50();
        sub_1403C0FF4();
        qword_140C222D8 = 0LL;
        qword_140C222D0 = 0LL;
        sub_140B2C334();
        sub_140B246C0();
        qword_140C225E8 = 0LL;
        qword_140C225F8 = (__int64)&qword_140C225F0;
        qword_140C225F0 = (__int64)&qword_140C225F0;
        qword_140C233A8 = (__int64)sub_140A6BDD0;
        qword_140C225E0 = 0LL;
        dword_140C233A0 = 4;
        byte_140C233A4 = 0;
        dword_140C23768 = 0;
        qword_140C23758 = (__int64)&qword_140C23750;
        qword_140C23750 = (__int64)&qword_140C23750;
        stru_140C23780.Header.WaitListHead.Blink = &stru_140C23780.Header.WaitListHead;
        stru_140C23780.Header.WaitListHead.Flink = &stru_140C23780.Header.WaitListHead;
        qword_140C237A8 = (__int64)&qword_140C237A0;
        qword_140C237A0 = &qword_140C237A0;
        stru_140C1FA00.Header.WaitListHead.Blink = &stru_140C1FA00.Header.WaitListHead;
        stru_140C1FA00.Header.WaitListHead.Flink = &stru_140C1FA00.Header.WaitListHead;
        qword_140C1FA58 = (__int64)sub_1405D87D0;
        qword_140D00B90 = (__int64)&qword_140D00B88;
        qword_140D00B88 = (__int64)&qword_140D00B88;
        stru_140C23660.Header.WaitListHead.Blink = &stru_140C23660.Header.WaitListHead;
        stru_140C23660.Header.WaitListHead.Flink = &stru_140C23660.Header.WaitListHead;
        *(_QWORD *)&stru_140C1FA00.Header.Lock = 8LL;
        qword_140D00B80 = 8LL;
        qword_140C23EF8 = (__int64)&qword_140C23EF0;
        qword_140C23EF0 = (__int64)&qword_140C23EF0;
        qword_140C23740 = 0LL;
        qword_140C23760 = 0LL;
        LOWORD(stru_140C23780.Header.Lock) = 0;
        stru_140C23780.Header.Size = 6;
        stru_140C23780.Header.SignalState = 1;
        dword_140C2376C = 0;
        stru_140C1FA00.DueTime.QuadPart = 0LL;
        stru_140C1FA00.Period = 0;
        LOWORD(stru_140C1FA00.Processor) = 0;
        dword_140C1FA40 = 275;
        qword_140C1FA60 = 0LL;
        qword_140C1FA78 = 0LL;
        qword_140C1FA50 = 0LL;
        dword_140C23640 = 0;
        qword_140D00B98 = 0LL;
        dword_140D00BBC = 0;
        word_140D00BB8 = 0;
        LOWORD(stru_140C23660.Header.Lock) = 1;
        stru_140C23660.Header.Size = 6;
        stru_140C23660.Header.SignalState = 0;
        word_140C23EE8 = 1;
        byte_140C23EEA = 6;
        dword_140C23EEC = 1;
        sub_140B28250();
        dword_140C232EC = 0;
        qword_140C232F0 = 100LL;
        *(_QWORD *)&dword_140C232F8 = 100LL;
        dword_140C23300 = 100;
        sub_140B02560(0);
        sub_140B034C0(0LL);
        qword_140C1F628 = 0LL;
        qword_140C1F620 = 0LL;
        sub_140B28664();
        v10 = *(_QWORD *)(a2 + 240);
        LOBYTE(xmmword_140C5AD00) = *(_BYTE *)(v10 + 3440);
        if ( *(_BYTE *)(v10 + 3440) )
        {
          *((_QWORD *)&xmmword_140C5AD00 + 1) = *(_QWORD *)(v10 + 3448);
          xmmword_140C5AD10 = *(_OWORD *)(v10 + 3456);
          xmmword_140C5AD20 = *(_OWORD *)(v10 + 3472);
        }
        v3 = sub_140B2DB68();
        if ( v3 >= 0 )
        {
          sub_140B0348C(0LL);
          sub_140B03360(0LL);
          goto LABEL_5;
        }
      }
    }
  }
  return v3 >= 0;
}
