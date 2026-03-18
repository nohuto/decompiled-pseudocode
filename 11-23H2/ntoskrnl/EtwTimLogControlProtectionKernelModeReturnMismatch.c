/*
 * XREFs of EtwTimLogControlProtectionKernelModeReturnMismatch @ 0x1405FFDDC
 * Callers:
 *     KiLogControlProtectionKernelModeReturnMismatch @ 0x14057BDE0 (KiLogControlProtectionKernelModeReturnMismatch.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140212E64 (_tlgKeywordOn.c)
 *     EtwWriteEx @ 0x1402581E0 (EtwWriteEx.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402F6B24 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     RtlPcToFileName @ 0x1403AA390 (RtlPcToFileName.c)
 *     RtlPcToFileHeader @ 0x1403C4040 (RtlPcToFileHeader.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     Feature_4082324794__private_IsEnabledDeviceUsage @ 0x140411F80 (Feature_4082324794__private_IsEnabledDeviceUsage.c)
 *     memset @ 0x140435A00 (memset.c)
 */

char __fastcall EtwTimLogControlProtectionKernelModeReturnMismatch(int a1, __int64 a2)
{
  int v2; // eax
  void *v3; // rsp
  unsigned __int16 Length; // di
  wchar_t *Buffer; // r13
  __int16 v6; // si
  int v7; // r15d
  __int16 v8; // ax
  int v9; // ecx
  void *v10; // rsp
  unsigned __int16 v11; // bx
  unsigned __int64 v12; // rax
  int IsEnabledDeviceUsage; // eax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax
  int v16; // eax
  unsigned __int64 v17; // rcx
  __int64 v18; // r9
  _DWORD v20[16]; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int64 v21[8]; // [rsp+60h] [rbp+0h] BYREF
  unsigned __int64 v22; // [rsp+A0h] [rbp+40h] BYREF
  unsigned __int64 v23; // [rsp+A8h] [rbp+48h] BYREF
  UNICODE_STRING v24; // [rsp+B0h] [rbp+50h] BYREF
  UNICODE_STRING v25; // [rsp+C0h] [rbp+60h] BYREF
  unsigned __int64 v26; // [rsp+D0h] [rbp+70h] BYREF
  unsigned __int64 v27; // [rsp+D8h] [rbp+78h] BYREF
  unsigned __int64 v28; // [rsp+E0h] [rbp+80h] BYREF
  unsigned __int64 v29; // [rsp+E8h] [rbp+88h] BYREF
  __int64 v30; // [rsp+F0h] [rbp+90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+100h] [rbp+A0h] BYREF
  wchar_t *v32; // [rsp+110h] [rbp+B0h]
  int v33; // [rsp+118h] [rbp+B8h]
  int v34; // [rsp+11Ch] [rbp+BCh]
  char *v35; // [rsp+120h] [rbp+C0h]
  __int64 v36; // [rsp+128h] [rbp+C8h]
  wchar_t *v37; // [rsp+130h] [rbp+D0h]
  int v38; // [rsp+138h] [rbp+D8h]
  int v39; // [rsp+13Ch] [rbp+DCh]
  unsigned __int64 *v40; // [rsp+140h] [rbp+E0h]
  __int64 v41; // [rsp+148h] [rbp+E8h]
  unsigned __int64 *v42; // [rsp+150h] [rbp+F0h]
  __int64 v43; // [rsp+158h] [rbp+F8h]
  unsigned __int64 *v44; // [rsp+160h] [rbp+100h]
  __int64 v45; // [rsp+168h] [rbp+108h]
  char *v46; // [rsp+170h] [rbp+110h]
  __int64 v47; // [rsp+178h] [rbp+118h]
  unsigned __int64 *v48; // [rsp+180h] [rbp+120h]
  __int64 v49; // [rsp+188h] [rbp+128h]
  unsigned __int64 *v50; // [rsp+190h] [rbp+130h]
  __int64 v51; // [rsp+198h] [rbp+138h]
  unsigned __int64 *v52; // [rsp+1A0h] [rbp+140h]
  __int64 v53; // [rsp+1A8h] [rbp+148h]
  unsigned __int64 *v54; // [rsp+1B0h] [rbp+150h]
  __int64 v55; // [rsp+1B8h] [rbp+158h]
  char *v56; // [rsp+1C0h] [rbp+160h]
  __int64 v57; // [rsp+1C8h] [rbp+168h]
  struct _EVENT_DATA_DESCRIPTOR v58; // [rsp+1D0h] [rbp+170h] BYREF
  char *v59; // [rsp+1F0h] [rbp+190h]
  __int64 v60; // [rsp+1F8h] [rbp+198h]
  _DWORD *v61; // [rsp+200h] [rbp+1A0h]
  __int64 v62; // [rsp+208h] [rbp+1A8h]
  wchar_t *v63; // [rsp+210h] [rbp+1B0h]
  _DWORD v64[2]; // [rsp+218h] [rbp+1B8h] BYREF
  _DWORD *v65; // [rsp+220h] [rbp+1C0h]
  __int64 v66; // [rsp+228h] [rbp+1C8h]
  __int64 v67; // [rsp+230h] [rbp+1D0h]
  _DWORD v68[2]; // [rsp+238h] [rbp+1D8h] BYREF
  unsigned __int64 *v69; // [rsp+240h] [rbp+1E0h]
  __int64 v70; // [rsp+248h] [rbp+1E8h]
  unsigned __int64 *v71; // [rsp+250h] [rbp+1F0h]
  __int64 v72; // [rsp+258h] [rbp+1F8h]
  unsigned __int64 *v73; // [rsp+260h] [rbp+200h]
  __int64 v74; // [rsp+268h] [rbp+208h]
  unsigned __int64 *v75; // [rsp+270h] [rbp+210h]
  __int64 v76; // [rsp+278h] [rbp+218h]
  unsigned __int64 *v77; // [rsp+280h] [rbp+220h]
  __int64 v78; // [rsp+288h] [rbp+228h]
  unsigned __int64 *v79; // [rsp+290h] [rbp+230h]
  __int64 v80; // [rsp+298h] [rbp+238h]
  __int64 *v81; // [rsp+2A0h] [rbp+240h]
  __int64 v82; // [rsp+2A8h] [rbp+248h]

  v21[1] = *(_QWORD *)a2;
  v21[2] = *(_QWORD *)(a2 + 8);
  HIDWORD(v21[4]) = *(_DWORD *)(a2 + 16);
  HIDWORD(v21[5]) = *(_DWORD *)(a2 + 20);
  LODWORD(v21[6]) = *(_DWORD *)(a2 + 24);
  v2 = *(_DWORD *)(a2 + 28);
  LODWORD(v21[4]) = v2;
  v21[3] = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  if ( a1 == 1 )
  {
    v3 = alloca(64LL);
    memset(v21, 0, sizeof(v21));
    v24.MaximumLength = 64;
    v24.Buffer = (wchar_t *)v21;
    Length = 0;
    if ( (int)RtlPcToFileName(v21[1], &v24) >= 0 )
      Length = v24.Length;
    Buffer = v24.Buffer;
    v6 = 6;
    *(_QWORD *)&UserData.Size = 2LL;
    UserData.Ptr = (ULONGLONG)v21;
    v7 = 12;
    if ( Length )
    {
      v32 = v24.Buffer;
      v8 = Length >> 1;
      v9 = Length;
    }
    else
    {
      v32 = L"(null)";
      v8 = 6;
      v9 = 12;
    }
    LOWORD(v21[0]) = v8;
    v33 = v9;
    v34 = 0;
    v10 = alloca(64LL);
    memset(v20, 0, sizeof(v20));
    v25.Buffer = (wchar_t *)v20;
    v25.MaximumLength = 64;
    v11 = 0;
    if ( (int)RtlPcToFileName(v21[2], &v25) >= 0 )
      v11 = v25.Length;
    v35 = (char *)v21 + 4;
    v36 = 2LL;
    if ( v11 )
    {
      v37 = v25.Buffer;
      v6 = v11 >> 1;
      v7 = v11;
    }
    else
    {
      v37 = L"(null)";
    }
    WORD2(v21[0]) = v6;
    v38 = v7;
    v39 = 0;
    v40 = &v21[5];
    v41 = 4LL;
    RtlPcToFileHeader(v21[1], &v21[3]);
    if ( v21[3] )
      v12 = v21[1] - v21[3];
    else
      v12 = 0LL;
    v22 = v12;
    IsEnabledDeviceUsage = Feature_4082324794__private_IsEnabledDeviceUsage();
    v14 = v21[1];
    v43 = 8LL;
    v45 = 8LL;
    v42 = &v21[1];
    if ( IsEnabledDeviceUsage )
      v14 = 0LL;
    v21[1] = v14;
    v44 = &v22;
    v46 = (char *)&v21[5] + 4;
    v47 = 4LL;
    RtlPcToFileHeader(v21[2], &v21[3]);
    if ( v21[3] )
      v15 = v21[2] - v21[3];
    else
      v15 = 0LL;
    v23 = v15;
    v16 = Feature_4082324794__private_IsEnabledDeviceUsage();
    v17 = v21[2];
    v49 = 8LL;
    v51 = 8LL;
    v48 = &v21[2];
    if ( v16 )
      v17 = 0LL;
    v21[2] = v17;
    v50 = &v23;
    v53 = 4LL;
    v52 = &v21[6];
    v54 = &v21[4];
    v56 = (char *)&v21[4] + 4;
    v55 = 4LL;
    v57 = 4LL;
    LOBYTE(v2) = EtwWriteEx(
                   EtwSecurityMitigationsRegHandle,
                   &MITIGATION_AUDIT_CONTROL_PROTECTION_KERNEL_MODE_RETURN_MISMATCH,
                   0LL,
                   0,
                   0LL,
                   0LL,
                   0xDu,
                   &UserData);
    if ( !Length )
    {
      Length = 0;
      Buffer = (wchar_t *)&word_14001F044;
    }
    if ( !v11 )
      v11 = 0;
    if ( (unsigned int)dword_140C04320 > 5 )
    {
      LOBYTE(v2) = tlgKeywordOn((__int64)&dword_140C04320, 0x400000000000LL);
      if ( (_BYTE)v2 )
      {
        v67 = v18;
        v59 = (char *)&v21[6] + 4;
        HIDWORD(v21[6]) = 1;
        v61 = v64;
        v64[0] = Length;
        v60 = 4LL;
        v65 = v68;
        v68[0] = v11;
        v26 = v21[1];
        v69 = &v26;
        v27 = v22;
        v71 = &v27;
        v28 = v21[2];
        v73 = &v28;
        v29 = v23;
        v75 = &v29;
        LODWORD(v21[7]) = v21[4];
        v77 = &v21[7];
        LODWORD(v21[3]) = HIDWORD(v21[4]);
        v79 = &v21[3];
        v81 = &v30;
        v62 = 2LL;
        v63 = Buffer;
        v64[1] = 0;
        v66 = 2LL;
        v68[1] = 0;
        v70 = 8LL;
        v72 = 8LL;
        v74 = 8LL;
        v76 = 8LL;
        v78 = 4LL;
        v80 = 4LL;
        v30 = 0x1000000LL;
        v82 = 8LL;
        LOBYTE(v2) = tlgWriteTransfer_EtwWriteTransfer(
                       (__int64)&dword_140C04320,
                       (unsigned __int8 *)&byte_140035A37,
                       0LL,
                       0LL,
                       0xEu,
                       &v58);
      }
    }
  }
  return v2;
}
