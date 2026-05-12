/*
 * XREFs of StorpMarkDeviceFailed @ 0x1C0046668
 * Callers:
 *     StorPortNotification @ 0x1C0010160 (StorPortNotification.c)
 * Callees:
 *     RaidAdapterFindUnit @ 0x1C000FFFC (RaidAdapterFindUnit.c)
 *     _tlgKeywordOn @ 0x1C001354C (_tlgKeywordOn.c)
 *     DbgLogRequest @ 0x1C0014C50 (DbgLogRequest.c)
 *     _tlgCreate1Sz_wchar_t @ 0x1C0019338 (_tlgCreate1Sz_wchar_t.c)
 *     RaidDriverGetName @ 0x1C0019BC4 (RaidDriverGetName.c)
 *     _tlgCreate1Sz_char @ 0x1C0019CF8 (_tlgCreate1Sz_char.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002017C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0022BF0 (__security_check_cookie.c)
 *     RaidAdapterGetFirstUnit @ 0x1C0034C40 (RaidAdapterGetFirstUnit.c)
 *     McTemplateK0qqqqquuujjzssszshzhbr18hbr20q_EtwWriteTransfer @ 0x1C0041618 (McTemplateK0qqqqquuujjzssszshzhbr18hbr20q_EtwWriteTransfer.c)
 *     StorpPopulateErrorData @ 0x1C004C5C8 (StorpPopulateErrorData.c)
 *     StorpPopulateLogData @ 0x1C004C728 (StorpPopulateLogData.c)
 *     StorpWheaReportError @ 0x1C004C79C (StorpWheaReportError.c)
 */

__int64 __fastcall StorpMarkDeviceFailed(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned __int16 a4,
        wchar_t *a5,
        unsigned __int16 a6,
        void *a7,
        unsigned __int16 a8,
        void *a9)
{
  __int64 v9; // r13
  __int64 v11; // rcx
  __int64 v12; // rdi
  int *v13; // r12
  __int64 Unit; // rax
  char v15; // r8
  int v16; // r10d
  __int16 v17; // r15
  char v18; // al
  char v19; // r11
  bool v20; // cl
  char v21; // r8
  __int64 v22; // r10
  unsigned __int8 v23; // al
  __int64 FirstUnit; // rax
  char v25; // cl
  int v26; // edx
  char v27; // al
  char v28; // al
  __int64 v29; // rax
  const char *v30; // rax
  __int64 v31; // rdx
  bool v32; // r13
  int *v33; // r9
  int *Src; // r8
  int v35; // edx
  int *v36; // rcx
  int v37; // edx
  int v38; // r8d
  int v39; // edx
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // r15
  const wchar_t *v43; // rcx
  const char *v44; // r8
  const char *v45; // rdx
  const char *v46; // rax
  const wchar_t *v47; // rcx
  const char *v48; // r8
  const char *v49; // rdx
  const char *v50; // rax
  const wchar_t *v51; // rcx
  const char *v52; // r8
  const char *v53; // rdx
  const char *v54; // rax
  int *v55; // rdx
  unsigned int v56; // r9d
  __int64 v57; // r8
  __int64 v58; // r9
  struct _DEVICE_OBJECT *v59; // rcx
  PEVENT_DATA_DESCRIPTOR v61; // [rsp+28h] [rbp-128h]
  size_t Size; // [rsp+40h] [rbp-110h]
  char v63; // [rsp+D0h] [rbp-80h]
  __int16 v64; // [rsp+D1h] [rbp-7Fh] BYREF
  char v65; // [rsp+D3h] [rbp-7Dh]
  char v66; // [rsp+D4h] [rbp-7Ch] BYREF
  int v67; // [rsp+D8h] [rbp-78h] BYREF
  unsigned __int16 v68; // [rsp+DCh] [rbp-74h]
  int v69; // [rsp+E0h] [rbp-70h] BYREF
  unsigned int v70; // [rsp+E4h] [rbp-6Ch]
  __int64 v71; // [rsp+E8h] [rbp-68h]
  const char *v72; // [rsp+F0h] [rbp-60h]
  wchar_t *v73; // [rsp+F8h] [rbp-58h]
  __int64 v74; // [rsp+100h] [rbp-50h]
  void *v75; // [rsp+108h] [rbp-48h]
  void *v76; // [rsp+110h] [rbp-40h]
  int v77[2]; // [rsp+118h] [rbp-38h]
  int v78[4]; // [rsp+120h] [rbp-30h] BYREF
  int v79[4]; // [rsp+130h] [rbp-20h] BYREF
  __int128 v80; // [rsp+140h] [rbp-10h] BYREF
  __int64 v81[2]; // [rsp+150h] [rbp+0h] BYREF
  __int128 v82; // [rsp+160h] [rbp+10h]
  int v83; // [rsp+170h] [rbp+20h]
  struct _EVENT_DATA_DESCRIPTOR v84; // [rsp+180h] [rbp+30h] BYREF
  __int128 *v85; // [rsp+1A0h] [rbp+50h]
  __int64 v86; // [rsp+1A8h] [rbp+58h]
  int *v87; // [rsp+1B0h] [rbp+60h]
  __int64 v88; // [rsp+1B8h] [rbp+68h]
  int *v89; // [rsp+1C0h] [rbp+70h]
  __int64 v90; // [rsp+1C8h] [rbp+78h]
  char *v91; // [rsp+1D0h] [rbp+80h]
  __int64 v92; // [rsp+1D8h] [rbp+88h]
  __int16 *v93; // [rsp+1E0h] [rbp+90h]
  __int64 v94; // [rsp+1E8h] [rbp+98h]
  char *v95; // [rsp+1F0h] [rbp+A0h]
  __int64 v96; // [rsp+1F8h] [rbp+A8h]
  _DWORD *v97; // [rsp+200h] [rbp+B0h]
  __int64 v98; // [rsp+208h] [rbp+B8h]
  __int64 v99; // [rsp+210h] [rbp+C0h]
  _DWORD v100[2]; // [rsp+218h] [rbp+C8h] BYREF
  char v101[16]; // [rsp+220h] [rbp+D0h] BYREF
  char v102[16]; // [rsp+230h] [rbp+E0h] BYREF
  unsigned int *v103; // [rsp+240h] [rbp+F0h]
  __int64 v104; // [rsp+248h] [rbp+F8h]
  char v105[16]; // [rsp+250h] [rbp+100h] BYREF
  __int64 retaddr; // [rsp+2A8h] [rbp+158h]

  v73 = a5;
  v9 = a2;
  v76 = a7;
  v11 = *(_QWORD *)(a1 + 16);
  v12 = 0LL;
  v75 = a9;
  v67 = RaidNullAddress;
  v71 = a2;
  v83 = 0;
  v68 = a4;
  v69 = a3;
  v70 = 0;
  *(_OWORD *)v78 = 0LL;
  v65 = 0;
  *(_OWORD *)v79 = 0LL;
  v72 = 0LL;
  *(_OWORD *)v81 = 0LL;
  v82 = 0LL;
  RaidDriverGetName(v11, (__int64)v78);
  v13 = (int *)&dword_1C006A660;
  v80 = *(_OWORD *)(a1 + 4936);
  if ( !v9 )
  {
    FirstUnit = RaidAdapterGetFirstUnit(a1);
    v25 = *(_BYTE *)(a1 + 104);
    v12 = FirstUnit;
    v26 = *(_DWORD *)(a1 + 92);
    v22 = *(_QWORD *)(a1 + 8);
    v74 = v22;
    v17 = (((v25 >> 15) & 2) + 1) | 4;
    if ( !v26 )
      v17 = ((v25 >> 15) & 2) + 1;
    v27 = *(_BYTE *)(a1 + 110);
    if ( (v27 & 1) != 0 )
    {
      v19 = 0;
    }
    else
    {
      v19 = 1;
      *(_BYTE *)(a1 + 110) = v27 | 1;
    }
    v21 = v69;
    if ( (v69 & 3) == 1 && v25 >= 0 && !v26 )
    {
      v28 = *(_BYTE *)(a1 + 109);
      if ( (v28 & 8) == 0 )
      {
        v65 = 1;
        *(_BYTE *)(a1 + 109) = v28 | 8;
      }
    }
    v64 = *(_WORD *)((char *)&v67 + 1);
    v63 = v67;
    if ( !v12 )
      goto LABEL_36;
LABEL_30:
    v29 = *(_QWORD *)(v12 + 152);
    if ( v29 )
    {
      v30 = (const char *)(v29 + 90);
    }
    else
    {
      v31 = *(_QWORD *)(v12 + 144);
      if ( !v31 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 24) + 568LL) + 184LL) & 0x40) == 0 )
        goto LABEL_36;
      v30 = (const char *)(v31 + 41);
    }
    v72 = v30;
LABEL_36:
    v32 = (v17 & 6) != 0 && (v21 & 2) == 0 && ReportAllWheaErrorsAsNonFatal == 0;
    if ( (v19 || v32) && !_InterlockedCompareExchange(&WheaPendingError, 1, 0) )
    {
      if ( v12 )
      {
        v33 = (int *)(v12 + 169);
        Src = (int *)(v12 + 160);
      }
      else
      {
        v33 = (int *)&dword_1C006A660;
        Src = (int *)&dword_1C006A660;
        v74 = v22;
      }
      if ( v71 )
        v35 = *(_DWORD *)(v12 + 3296);
      else
        v35 = *(_DWORD *)(a1 + 4148);
      v36 = (int *)&v80;
      if ( v71 )
        v36 = v79;
      LODWORD(Size) = a6;
      *(_QWORD *)v77 = v36;
      StorpPopulateErrorData((int)v36, v35, (int)v78, (int)v33, v68, v17, Src, v33, Size, v76);
      if ( v32 )
      {
        if ( v71 )
          v39 = *(_DWORD *)(v12 + 3296);
        else
          v39 = *(_DWORD *)(a1 + 4148);
        LODWORD(v61) = a8;
        StorpPopulateLogData(v77[0], v39, v38, v68, v17, (size_t)v61, v75, (__int64)v81);
      }
      v40 = a1;
      LOBYTE(v37) = v32;
      if ( v71 )
        v40 = v12;
      StorpWheaReportError(v74, v37, v38, (unsigned __int64)v81 & -(__int64)v32, v40);
      _InterlockedExchange(&WheaPendingError, 0);
    }
    v9 = v71;
    goto LABEL_60;
  }
  if ( *(_WORD *)v9 != 1 || *(_DWORD *)(v9 + 4) < 4u )
  {
    v70 = -1056964601;
    v64 = *(_WORD *)((char *)&v67 + 1);
    v23 = v67;
    v63 = v67;
    goto LABEL_61;
  }
  LOBYTE(v67) = *(_BYTE *)(v9 + 8);
  v63 = v67;
  BYTE1(v67) = *(_BYTE *)(v9 + 9);
  LOBYTE(v64) = BYTE1(v67);
  BYTE2(v67) = *(_BYTE *)(v9 + 10);
  HIBYTE(v64) = BYTE2(v67);
  Unit = RaidAdapterFindUnit(a1, v67);
  v12 = Unit;
  if ( Unit )
  {
    *(_OWORD *)v79 = *(_OWORD *)(Unit + 1976);
    v15 = *(_BYTE *)(Unit + 450);
    v16 = *(_DWORD *)(Unit + 916);
    v74 = *(_QWORD *)(Unit + 8);
    v17 = (2 * (v15 & 1)) | 4;
    if ( !v16 )
      v17 = 2 * (v15 & 1);
    v18 = *(_BYTE *)(Unit + 451);
    if ( (v18 & 8) != 0 )
    {
      v19 = 0;
    }
    else
    {
      v19 = 1;
      *(_BYTE *)(v12 + 451) = v18 | 8;
    }
    v20 = 0;
    if ( (v69 & 3) == 1 )
      v20 = !(v15 & 1);
    if ( v20 && !v16 && (v15 & 0x20) == 0 )
    {
      v65 = 1;
      *(_BYTE *)(v12 + 450) = v15 | 0x20;
    }
    v21 = v69;
    v22 = v74;
    goto LABEL_30;
  }
  v70 = -1056964601;
LABEL_60:
  v23 = v63;
LABEL_61:
  DbgLogRequest(
    a1,
    44,
    a1,
    retaddr,
    (__int64)v73,
    HIBYTE(v64) | (unsigned __int64)(((unsigned __int8)v64 | (v23 << 8)) << 8),
    0LL);
  v42 = *(_QWORD *)&v78[2];
  if ( StorEtwLoggingEnabled )
  {
    if ( (v69 & 1) != 0 )
    {
      if ( (byte_1C00799E5 & 8) != 0 )
      {
        v43 = (const wchar_t *)&unk_1C006A690;
        if ( *(_QWORD *)(a1 + 4952) )
          v43 = *(const wchar_t **)(a1 + 4952);
        if ( v12 )
        {
          v44 = (const char *)(v12 + 186);
          v45 = (const char *)(v12 + 169);
          v46 = (const char *)(v12 + 160);
        }
        else
        {
          v44 = (const char *)&dword_1C006A660;
          v45 = (const char *)&dword_1C006A660;
          v46 = (const char *)&dword_1C006A660;
        }
        McTemplateK0qqqqquuujjzssszshzhbr18hbr20q_EtwWriteTransfer(
          (__int64)v43,
          &EventMarkAndRemoveFailedDevice,
          (__int64)v44,
          *(_DWORD *)(a1 + 352),
          *(_DWORD *)(a1 + 808),
          *(_DWORD *)(a1 + 816),
          *(_DWORD *)(a1 + 820),
          *(_DWORD *)(a1 + 56),
          v63,
          v64,
          SHIBYTE(v64),
          (__int64)v79,
          (__int64)&v80,
          *(const wchar_t **)&v78[2],
          v46,
          v45,
          v44,
          v43,
          v72,
          v68,
          v73,
          a6,
          (__int64)v76,
          a8,
          (__int64)v75,
          v69);
      }
    }
    else if ( (v69 & 2) != 0 )
    {
      if ( (byte_1C00799E5 & 8) != 0 )
      {
        v47 = (const wchar_t *)&unk_1C006A690;
        if ( *(_QWORD *)(a1 + 4952) )
          v47 = *(const wchar_t **)(a1 + 4952);
        if ( v12 )
        {
          v48 = (const char *)(v12 + 186);
          v49 = (const char *)(v12 + 169);
          v50 = (const char *)(v12 + 160);
        }
        else
        {
          v48 = (const char *)&dword_1C006A660;
          v49 = (const char *)&dword_1C006A660;
          v50 = (const char *)&dword_1C006A660;
        }
        McTemplateK0qqqqquuujjzssszshzhbr18hbr20q_EtwWriteTransfer(
          (__int64)v47,
          &EventMarkDevicePotentiallyFailed,
          (__int64)v48,
          *(_DWORD *)(a1 + 352),
          *(_DWORD *)(a1 + 808),
          *(_DWORD *)(a1 + 816),
          *(_DWORD *)(a1 + 820),
          *(_DWORD *)(a1 + 56),
          v63,
          v64,
          SHIBYTE(v64),
          (__int64)v79,
          (__int64)&v80,
          *(const wchar_t **)&v78[2],
          v50,
          v49,
          v48,
          v47,
          v72,
          v68,
          v73,
          a6,
          (__int64)v76,
          a8,
          (__int64)v75,
          v69);
      }
    }
    else if ( (byte_1C00799E5 & 8) != 0 )
    {
      v51 = (const wchar_t *)&unk_1C006A690;
      if ( *(_QWORD *)(a1 + 4952) )
        v51 = *(const wchar_t **)(a1 + 4952);
      if ( v12 )
      {
        v52 = (const char *)(v12 + 186);
        v53 = (const char *)(v12 + 169);
        v54 = (const char *)(v12 + 160);
      }
      else
      {
        v52 = (const char *)&dword_1C006A660;
        v53 = (const char *)&dword_1C006A660;
        v54 = (const char *)&dword_1C006A660;
      }
      McTemplateK0qqqqquuujjzssszshzhbr18hbr20q_EtwWriteTransfer(
        (__int64)v51,
        &EventMarkDeviceFailed,
        (__int64)v52,
        *(_DWORD *)(a1 + 352),
        *(_DWORD *)(a1 + 808),
        *(_DWORD *)(a1 + 816),
        *(_DWORD *)(a1 + 820),
        *(_DWORD *)(a1 + 56),
        v63,
        v64,
        SHIBYTE(v64),
        (__int64)v79,
        (__int64)&v80,
        *(const wchar_t **)&v78[2],
        v54,
        v53,
        v52,
        v51,
        v72,
        v68,
        v73,
        a6,
        (__int64)v76,
        a8,
        (__int64)v75,
        v69);
    }
  }
  if ( (unsigned int)dword_1C0079058 > 5 && tlgKeywordOn(v41, 0x400000000000LL) )
  {
    v86 = 16LL;
    v85 = &v80;
    v87 = v79;
    v55 = (int *)(v12 + 160);
    v69 = *(_DWORD *)(a1 + 56);
    v89 = &v69;
    v66 = v63;
    v91 = &v66;
    v93 = &v64;
    v95 = (char *)&v64 + 1;
    v97 = v100;
    v100[0] = LOWORD(v78[0]);
    v88 = 16LL;
    v90 = 4LL;
    v92 = 1LL;
    v94 = 1LL;
    v96 = 1LL;
    v98 = 2LL;
    v99 = v42;
    v100[1] = 0;
    if ( !v12 )
      v55 = (int *)&dword_1C006A660;
    tlgCreate1Sz_char((__int64)v101, v55);
    if ( v12 )
      v13 = (int *)(v12 + 169);
    tlgCreate1Sz_char((__int64)v102, v13);
    v103 = (unsigned int *)&v67;
    v67 = v56;
    v104 = 4LL;
    tlgCreate1Sz_wchar_t((__int64)v105, v73);
    tlgWriteTransfer_EtwWriteTransfer((__int64)&v84, (unsigned __int8 *)dword_1C006C985, v57, v58, 0xEu, &v84);
  }
  if ( v65 )
  {
    if ( v9 )
      v59 = *(struct _DEVICE_OBJECT **)(v12 + 8);
    else
      v59 = *(struct _DEVICE_OBJECT **)(a1 + 8);
    IoInvalidateDeviceState(v59);
  }
  return v70;
}
