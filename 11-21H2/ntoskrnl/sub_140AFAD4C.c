/*
 * XREFs of sub_140AFAD4C @ 0x140AFAD4C
 * Callers:
 *     sub_140B0433C @ 0x140B0433C (sub_140B0433C.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_14022DB00 @ 0x14022DB00 (sub_14022DB00.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     HviIsHypervisorVendorMicrosoft @ 0x1403BF790 (HviIsHypervisorVendorMicrosoft.c)
 *     HviGetHypervisorFeatures @ 0x1403BF8B0 (HviGetHypervisorFeatures.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     HviGetHardwareFeatures @ 0x140647B00 (HviGetHardwareFeatures.c)
 *     RtlGetVersion @ 0x1406C2630 (RtlGetVersion.c)
 */

char sub_140AFAD4C()
{
  NTSTATUS Version; // eax
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r9
  __int64 v4; // r10
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  REGHANDLE v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rbx
  char v11; // r9
  REGHANDLE v12; // rsi
  __int64 v13; // rax
  ULONGLONG v14; // rax
  int v16; // [rsp+48h] [rbp-C0h] BYREF
  int v17; // [rsp+4Ch] [rbp-BCh] BYREF
  unsigned int v18; // [rsp+50h] [rbp-B8h] BYREF
  int v19; // [rsp+54h] [rbp-B4h] BYREF
  int v20; // [rsp+58h] [rbp-B0h] BYREF
  int v21; // [rsp+5Ch] [rbp-ACh] BYREF
  int v22; // [rsp+60h] [rbp-A8h] BYREF
  int v23; // [rsp+64h] [rbp-A4h] BYREF
  int v24; // [rsp+68h] [rbp-A0h] BYREF
  int v25; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v26; // [rsp+70h] [rbp-98h] BYREF
  int v27; // [rsp+74h] [rbp-94h] BYREF
  LARGE_INTEGER v28; // [rsp+78h] [rbp-90h] BYREF
  __int64 v29; // [rsp+80h] [rbp-88h] BYREF
  __int128 v30; // [rsp+88h] [rbp-80h] BYREF
  __int128 v31; // [rsp+98h] [rbp-70h] BYREF
  int VersionInformation; // [rsp+A8h] [rbp-60h] BYREF
  _DWORD VersionInformation_4[71]; // [rsp+ACh] [rbp-5Ch] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+1C8h] [rbp+C0h] BYREF
  __int64 *v35; // [rsp+1D8h] [rbp+D0h]
  __int64 v36; // [rsp+1E0h] [rbp+D8h]
  _DWORD *v37; // [rsp+1E8h] [rbp+E0h]
  __int64 v38; // [rsp+1F0h] [rbp+E8h]
  int *v39; // [rsp+1F8h] [rbp+F0h]
  __int64 v40; // [rsp+200h] [rbp+F8h]
  _DWORD *v41; // [rsp+208h] [rbp+100h]
  __int64 v42; // [rsp+210h] [rbp+108h]
  int *v43; // [rsp+218h] [rbp+110h]
  __int64 v44; // [rsp+220h] [rbp+118h]
  LARGE_INTEGER *v45; // [rsp+228h] [rbp+120h]
  __int64 v46; // [rsp+230h] [rbp+128h]
  struct _EVENT_DATA_DESCRIPTOR v47; // [rsp+238h] [rbp+130h] BYREF
  int *v48; // [rsp+258h] [rbp+150h]
  __int64 v49; // [rsp+260h] [rbp+158h]
  int *v50; // [rsp+268h] [rbp+160h]
  __int64 v51; // [rsp+270h] [rbp+168h]
  int *v52; // [rsp+278h] [rbp+170h]
  __int64 v53; // [rsp+280h] [rbp+178h]
  int *v54; // [rsp+288h] [rbp+180h]
  __int64 v55; // [rsp+290h] [rbp+188h]
  int *v56; // [rsp+298h] [rbp+190h]
  __int64 v57; // [rsp+2A0h] [rbp+198h]
  int *v58; // [rsp+2A8h] [rbp+1A0h]
  __int64 v59; // [rsp+2B0h] [rbp+1A8h]
  int *v60; // [rsp+2B8h] [rbp+1B0h]
  __int64 v61; // [rsp+2C0h] [rbp+1B8h]
  __int128 *v62; // [rsp+2C8h] [rbp+1C0h]
  __int64 v63; // [rsp+2D0h] [rbp+1C8h]
  unsigned int *v64; // [rsp+2D8h] [rbp+1D0h]
  __int64 v65; // [rsp+2E0h] [rbp+1D8h]
  int *v66; // [rsp+2E8h] [rbp+1E0h]
  __int64 v67; // [rsp+2F0h] [rbp+1E8h]
  struct _EVENT_DATA_DESCRIPTOR v68; // [rsp+2F8h] [rbp+1F0h] BYREF
  unsigned int *v69; // [rsp+318h] [rbp+210h]
  __int64 v70; // [rsp+320h] [rbp+218h]
  int *v71; // [rsp+328h] [rbp+220h]
  __int64 v72; // [rsp+330h] [rbp+228h]

  memset(VersionInformation_4, 0, 0x118uLL);
  v19 = dword_140C0C680;
  v20 = InitSafeBootMode;
  v31 = 0LL;
  VersionInformation = 284;
  Version = RtlGetVersion((PRTL_OSVERSIONINFOW)&VersionInformation);
  if ( Version >= 0 )
  {
    v28 = stru_140D06BB8;
    v2 = *(_QWORD *)(qword_140D068D0 + 240);
    if ( (unsigned int)dword_140C043E0 > 5 && sub_1402A2000((__int64)&dword_140C043E0, 0x800000000000LL) )
    {
      v21 = VersionInformation_4[0];
      *(_QWORD *)&v30 = v3;
      v48 = &v21;
      LOBYTE(v16) = v4 != 0;
      v22 = VersionInformation_4[1];
      v49 = 4LL;
      v50 = &v22;
      v23 = VersionInformation_4[2];
      v52 = &v23;
      v54 = &v24;
      v25 = v19;
      v56 = &v25;
      LOWORD(v17) = VersionInformation_4[68];
      v58 = &v17;
      v26 = v20;
      v60 = &v26;
      v62 = &v30;
      v18 = dword_140C54D08;
      v64 = &v18;
      v66 = &v16;
      v51 = 4LL;
      v53 = 4LL;
      v24 = 1;
      v55 = 4LL;
      v57 = 4LL;
      v59 = 2LL;
      v61 = 4LL;
      v63 = 8LL;
      v65 = 4LL;
      v67 = 1LL;
      sub_14020A9C4((__int64)&dword_140C043E0, (unsigned __int8 *)byte_140034933, 0LL, 0LL, 0xCu, &v47);
    }
    LOBYTE(Version) = HviIsHypervisorVendorMicrosoft(v2, v1);
    if ( (_BYTE)Version )
    {
      HviGetHardwareFeatures((__int64)&v31, v5, v6, v7);
      v30 = 0LL;
      LOBYTE(Version) = HviGetHypervisorFeatures(&v30);
      if ( (unsigned int)dword_140C043E0 > 5 )
      {
        LOBYTE(Version) = sub_1402A2000((__int64)&dword_140C043E0, 0x400000000000LL);
        if ( (_BYTE)Version )
        {
          LOBYTE(v16) = v11;
          v18 = ((unsigned int)v31 >> 10) & 0xF;
          v70 = 4LL;
          v69 = &v18;
          v72 = 1LL;
          v71 = &v16;
          LOBYTE(Version) = sub_14020A9C4(
                              (__int64)&dword_140C043E0,
                              (unsigned __int8 *)&word_1400348FE,
                              0LL,
                              0LL,
                              4u,
                              &v68);
        }
      }
    }
    if ( qword_140C16478 )
    {
      *(_QWORD *)&UserData.Size = 4LL;
      UserData.Ptr = (ULONGLONG)VersionInformation_4;
      v36 = 4LL;
      v35 = (__int64 *)&VersionInformation_4[1];
      v38 = 4LL;
      v37 = &VersionInformation_4[2];
      v40 = 4LL;
      v39 = &v19;
      v41 = &VersionInformation_4[68];
      v43 = &v20;
      v45 = &v28;
      v42 = 2LL;
      v44 = 4LL;
      v46 = 8LL;
      EtwWriteEx(qword_140C16478, &stru_140011AD0, 0LL, 0, 0LL, 0LL, 7u, &UserData);
      v8 = qword_140C16478;
      LOBYTE(Version) = EtwEventEnabled(qword_140C16478, &stru_140011AC0);
      if ( (_BYTE)Version )
      {
        *(_QWORD *)&UserData.Size = 264LL;
        UserData.Ptr = (ULONGLONG)&qword_140D68760;
        LOBYTE(Version) = EtwWriteEx(v8, &stru_140011AC0, 0LL, 0, 0LL, 0LL, 1u, &UserData);
      }
      v9 = qword_140D068D0;
      v10 = *(_QWORD *)(qword_140D068D0 + 240);
      if ( (*(_DWORD *)(v10 + 132) & 0x100) != 0 || *(_QWORD *)(v10 + 224) )
      {
        v12 = qword_140C16478;
        LOBYTE(Version) = EtwEventEnabled(qword_140C16478, &stru_140037C48);
        if ( (_BYTE)Version )
        {
          *(_QWORD *)&UserData.Size = 8LL;
          UserData.Ptr = v10 + 224;
          v13 = *(_QWORD *)(v9 + 240) + 3520LL;
          v36 = 64LL;
          v35 = (__int64 *)v13;
          LOBYTE(Version) = EtwWriteEx(v12, &stru_140037C48, 0LL, 0, 0LL, 0LL, 2u, &UserData);
        }
      }
      if ( (qword_140C15C78 & 4) != 0 )
      {
        v27 = (*(_DWORD *)(*(_QWORD *)(qword_140D068D0 + 240) + 2648LL) >> 14) & 1;
        v29 = sub_14022DB00();
        v14 = *(_QWORD *)(qword_140D068D0 + 240) + 2944LL;
        *(_QWORD *)&UserData.Size = 8LL;
        UserData.Ptr = v14;
        v35 = &v29;
        v36 = 8LL;
        v37 = (_DWORD *)(*(_QWORD *)(qword_140D068D0 + 240) + 2936LL);
        v39 = &v27;
        v38 = 4LL;
        v40 = 4LL;
        LOBYTE(Version) = EtwWriteEx(qword_140C16478, &stru_1400391D8, 0LL, 0, 0LL, 0LL, 4u, &UserData);
      }
    }
  }
  return Version;
}
