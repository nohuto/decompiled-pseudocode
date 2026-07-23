/*
 * XREFs of sub_14068A7FC @ 0x14068A7FC
 * Callers:
 *     sub_14065C990 @ 0x14065C990 (sub_14065C990.c)
 *     sub_1407122B0 @ 0x1407122B0 (sub_1407122B0.c)
 *     sub_14090C34C @ 0x14090C34C (sub_14090C34C.c)
 *     sub_14090D4E8 @ 0x14090D4E8 (sub_14090D4E8.c)
 *     sub_14090D9E8 @ 0x14090D9E8 (sub_14090D9E8.c)
 *     sub_140B15F88 @ 0x140B15F88 (sub_140B15F88.c)
 *     sub_140B169F0 @ 0x140B169F0 (sub_140B169F0.c)
 *     sub_140B16B94 @ 0x140B16B94 (sub_140B16B94.c)
 * Callees:
 *     sub_14020A890 @ 0x14020A890 (sub_14020A890.c)
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_14020B1F8 @ 0x14020B1F8 (sub_14020B1F8.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwSetInformationObject @ 0x14041C2E0 (ZwSetInformationObject.c)
 *     sub_14053F520 @ 0x14053F520 (sub_14053F520.c)
 *     sub_14065A7E0 @ 0x14065A7E0 (sub_14065A7E0.c)
 *     sub_140689DC8 @ 0x140689DC8 (sub_140689DC8.c)
 *     sub_14068AF4C @ 0x14068AF4C (sub_14068AF4C.c)
 *     sub_14068B0E0 @ 0x14068B0E0 (sub_14068B0E0.c)
 *     sub_14068B1C8 @ 0x14068B1C8 (sub_14068B1C8.c)
 *     sub_14068B3E0 @ 0x14068B3E0 (sub_14068B3E0.c)
 *     sub_14068B6FC @ 0x14068B6FC (sub_14068B6FC.c)
 *     sub_14068B750 @ 0x14068B750 (sub_14068B750.c)
 *     sub_14068BEAC @ 0x14068BEAC (sub_14068BEAC.c)
 *     sub_14068C0C4 @ 0x14068C0C4 (sub_14068C0C4.c)
 *     sub_14068F7C4 @ 0x14068F7C4 (sub_14068F7C4.c)
 *     sub_1406CA514 @ 0x1406CA514 (sub_1406CA514.c)
 *     ObDuplicateObject @ 0x1407A1F80 (ObDuplicateObject.c)
 *     sub_140910918 @ 0x140910918 (sub_140910918.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 *     sub_140AB4260 @ 0x140AB4260 (sub_140AB4260.c)
 *     sub_140AB42A0 @ 0x140AB42A0 (sub_140AB42A0.c)
 *     sub_140AB4370 @ 0x140AB4370 (sub_140AB4370.c)
 *     sub_140AB4550 @ 0x140AB4550 (sub_140AB4550.c)
 *     sub_140AB4580 @ 0x140AB4580 (sub_140AB4580.c)
 *     sub_140AB46D0 @ 0x140AB46D0 (sub_140AB46D0.c)
 */

__int64 __fastcall sub_14068A7FC(
        ULONG_PTR *a1,
        unsigned int a2,
        int a3,
        unsigned int a4,
        __int64 a5,
        _QWORD *a6,
        __int64 a7,
        int a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  int v12; // r13d
  void *Pool2; // r12
  __int64 v14; // rcx
  __int64 v15; // rax
  signed int v16; // eax
  signed int v17; // ebx
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // ebx
  PVOID v21; // rax
  ULONG_PTR v22; // rdi
  void *v23; // rcx
  void *v24; // rcx
  HANDLE *v25; // r12
  __int16 *v26; // r8
  __int64 v27; // r8
  PVOID (__fastcall *v28)(SIZE_T, char, ULONG); // rax
  unsigned int v29; // eax
  int v30; // edx
  unsigned int v31; // ebx
  signed int v32; // eax
  signed int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rdx
  __int64 v39; // rcx
  _QWORD *v40; // rbx
  ULONG_PTR *v41; // rax
  __int64 v43; // rax
  _QWORD *v44; // rax
  unsigned int v45; // eax
  void *v46; // rcx
  int v47; // r9d
  int v48; // edx
  int v49; // r9d
  int v50; // r10d
  __int64 v51; // rax
  ACCESS_MASK AccessMask[2]; // [rsp+20h] [rbp-E0h]
  unsigned int AccessMaska; // [rsp+20h] [rbp-E0h]
  int v54[2]; // [rsp+28h] [rbp-D8h]
  int v55; // [rsp+30h] [rbp-D0h]
  char v56; // [rsp+70h] [rbp-90h]
  char v57; // [rsp+71h] [rbp-8Fh]
  _WORD v58[2]; // [rsp+74h] [rbp-8Ch] BYREF
  unsigned int v59; // [rsp+78h] [rbp-88h]
  int v60; // [rsp+7Ch] [rbp-84h] BYREF
  __int16 ObjectInformation[2]; // [rsp+80h] [rbp-80h] BYREF
  __int16 v62; // [rsp+84h] [rbp-7Ch] BYREF
  __int16 v63; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v64; // [rsp+8Ch] [rbp-74h] BYREF
  __int16 v65; // [rsp+90h] [rbp-70h] BYREF
  int v66; // [rsp+94h] [rbp-6Ch]
  unsigned int v67; // [rsp+98h] [rbp-68h] BYREF
  __int64 v68; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v69; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v70; // [rsp+B0h] [rbp-50h]
  __int64 v71; // [rsp+B8h] [rbp-48h]
  __int64 v72; // [rsp+C0h] [rbp-40h]
  ULONG_PTR *v73; // [rsp+C8h] [rbp-38h]
  __int128 v74; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v75; // [rsp+E0h] [rbp-20h]
  __int64 (__fastcall *v76)(int, int, int, int, ULONG); // [rsp+F0h] [rbp-10h]
  _OWORD v77[3]; // [rsp+F8h] [rbp-8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v78; // [rsp+130h] [rbp+30h] BYREF
  __int64 *v79; // [rsp+150h] [rbp+50h]
  __int64 v80; // [rsp+158h] [rbp+58h]
  __int16 *v81; // [rsp+160h] [rbp+60h]
  __int64 v82; // [rsp+168h] [rbp+68h]
  unsigned int *v83; // [rsp+170h] [rbp+70h]
  __int64 v84; // [rsp+178h] [rbp+78h]
  int *v85; // [rsp+180h] [rbp+80h]
  __int64 v86; // [rsp+188h] [rbp+88h]
  __int64 v87; // [rsp+190h] [rbp+90h]
  __int64 v88; // [rsp+198h] [rbp+98h]
  __int64 v89; // [rsp+1A0h] [rbp+A0h]
  int v90; // [rsp+1A8h] [rbp+A8h]
  int v91; // [rsp+1ACh] [rbp+ACh]
  __int64 v92; // [rsp+1B0h] [rbp+B0h]
  __int64 v93; // [rsp+1B8h] [rbp+B8h]
  __int64 v94; // [rsp+1C0h] [rbp+C0h]
  int v95; // [rsp+1C8h] [rbp+C8h]
  int v96; // [rsp+1CCh] [rbp+CCh]
  __int64 v97; // [rsp+1D0h] [rbp+D0h]
  __int64 v98; // [rsp+1D8h] [rbp+D8h]
  __int64 v99; // [rsp+1E0h] [rbp+E0h]
  int v100; // [rsp+1E8h] [rbp+E8h]
  int v101; // [rsp+1ECh] [rbp+ECh]
  __int64 *v102; // [rsp+1F0h] [rbp+F0h]
  __int64 v103; // [rsp+1F8h] [rbp+F8h]

  v59 = a2;
  v12 = a3;
  v70 = a7;
  Pool2 = 0LL;
  v72 = a9;
  v71 = a10;
  v68 = a11;
  v73 = a1;
  v64 = a4;
  v69 = a5;
  v76 = 0LL;
  v67 = 0;
  v56 = 0;
  v57 = 0;
  v74 = 0LL;
  v75 = 0LL;
  memset(v77, 0, sizeof(v77));
  if ( a2 > 2 && a2 != 5 )
  {
    v17 = -1073741811;
    v45 = 0;
    goto LABEL_110;
  }
  if ( (a3 & 0xFD617CEC) != 0 )
  {
    AccessMaska = 16;
LABEL_90:
    v17 = -1073741811;
    sub_14020A890(a12, 0, 1, 0xC000000D, AccessMaska);
    return (unsigned int)v17;
  }
  if ( a4 > 2 )
  {
    AccessMaska = 32;
    goto LABEL_90;
  }
  if ( !a5 && a2 == 1 )
  {
    AccessMaska = 48;
    goto LABEL_90;
  }
  if ( a6 )
  {
    if ( (a3 & 1) != 0 && (a3 & 0x8000) == 0 )
    {
      AccessMaska = 64;
      goto LABEL_90;
    }
    if ( !*a6 && (a6[1] || a6[2]) )
    {
      AccessMaska = 80;
      goto LABEL_90;
    }
    v14 = a6[1];
    if ( v14 && !a4 )
    {
      AccessMaska = 96;
      goto LABEL_90;
    }
    v15 = a6[2];
    if ( v15 && a4 != 2 )
    {
      AccessMaska = 112;
      goto LABEL_90;
    }
    if ( a6[3] && (*a6 || v14 || v15) )
    {
      AccessMaska = 128;
      goto LABEL_90;
    }
  }
  v56 = sub_140AB46D0();
  if ( !v56 )
    return (unsigned int)-1073741431;
  v66 = 1;
  if ( a6 )
  {
    if ( *a6 )
    {
      v16 = sub_14068BEAC((HANDLE)*a6);
      v17 = v16;
      if ( v16 < 0 )
      {
        sub_14020A890(a12, 0, 1, v16, 0xA0u);
        goto LABEL_106;
      }
    }
  }
  Pool2 = (void *)ExAllocatePool2(64LL, 32LL, 892947779LL);
  if ( !Pool2 )
  {
    v17 = -1073741801;
    goto LABEL_106;
  }
  v20 = v12 & 0x2000000;
  v60 = v12 & 0x2000000;
  if ( (v12 & 0x2000000) != 0 )
    v21 = sub_14053F520(0x12D8uLL, 0, 0x30314D43u);
  else
    v21 = (PVOID)sub_14068B0E0(0x12D8uLL);
  v22 = (ULONG_PTR)v21;
  if ( v21 )
  {
    sub_14068AF4C(v21, Pool2);
    if ( !a6 )
      goto LABEL_37;
    if ( *a6 )
    {
      v17 = ObDuplicateObject((ULONG_PTR)PsInitialSystemProcess, 0, 512, 2, 0);
      if ( v17 < 0 )
        goto LABEL_116;
      v23 = *(void **)(v22 + 1544);
      ObjectInformation[0] = 256;
      ZwSetInformationObject(v23, ObjectHandleFlagInformation, ObjectInformation, 2u);
    }
    if ( a6[3] )
    {
      v17 = ObDuplicateObject((ULONG_PTR)PsInitialSystemProcess, 0, 512, 2, 0);
      if ( v17 < 0 )
        goto LABEL_116;
      v46 = *(void **)(v22 + 1560);
      v62 = 256;
      ZwSetInformationObject(v46, ObjectHandleFlagInformation, &v62, 2u);
    }
    if ( v64 == 1 )
    {
      if ( !a6[1] )
        goto LABEL_36;
      v25 = (HANDLE *)(v22 + 1552);
      v17 = ObDuplicateObject((ULONG_PTR)PsInitialSystemProcess, 0, 512, 2, 0);
      if ( v17 < 0 )
        goto LABEL_116;
      v58[0] = 256;
      v26 = v58;
    }
    else
    {
      if ( v64 != 2 )
        goto LABEL_36;
      if ( a6[1] )
      {
        v17 = ObDuplicateObject((ULONG_PTR)PsInitialSystemProcess, 0, 512, 2, 0);
        if ( v17 < 0 )
          goto LABEL_116;
        v24 = *(void **)(v22 + 1576);
        v58[0] = 256;
        ZwSetInformationObject(v24, ObjectHandleFlagInformation, v58, 2u);
      }
      if ( !a6[2] )
        goto LABEL_36;
      v25 = (HANDLE *)(v22 + 1584);
      v17 = ObDuplicateObject((ULONG_PTR)PsInitialSystemProcess, 0, 512, 2, 0);
      if ( v17 < 0 )
        goto LABEL_116;
      v63 = 256;
      v26 = &v63;
    }
    ZwSetInformationObject(*v25, ObjectHandleFlagInformation, v26, 2u);
LABEL_36:
    v20 = v60;
LABEL_37:
    if ( (a8 & 0x8000000) != 0 )
      *(_DWORD *)(v22 + 4112) |= 0x80u;
    if ( a8 < 0 )
      *(_DWORD *)(v22 + 4112) |= 0x800u;
    sub_140AB4550(v77);
    v57 = 1;
    v28 = (PVOID (__fastcall *)(SIZE_T, char, ULONG))sub_14068B0E0;
    if ( v20 )
      v28 = sub_14053F520;
    *(_QWORD *)&v74 = v28;
    *((_QWORD *)&v74 + 1) = sub_14079CEF0;
    *((_QWORD *)&v75 + 1) = sub_140713F50;
    v76 = sub_1406D7050;
    v29 = v59;
    *(_QWORD *)(v22 + 56) = a12;
    *(_QWORD *)a12 = v22;
    if ( v29 == 5 || v29 == 2 || !v29 && a6 && *a6 )
    {
      v12 |= 0x20000u;
      v17 = sub_14068B750(sub_14053F520, *a6, v27, v22 + 4792);
      if ( v17 < 0 )
        goto LABEL_116;
      if ( (unsigned __int8)sub_14068B6FC(*(_QWORD *)(v22 + 4792)) || (a8 & 0x2000000) != 0 )
        v12 |= 0x800000u;
      LOBYTE(v30) = v59 == 0;
      v17 = sub_14068B3E0(v22, v30, v12, v64, (__int64)&v74, v66, v55, v70, a8, v72, v71, v68, (__int64)&v67, a12);
      if ( v17 < 0 )
      {
        sub_14020A890(a12, 0, 1, v17, 0xE4u);
        goto LABEL_116;
      }
    }
    else
    {
      v17 = sub_14068F7C4(v22, v69, (__int64)&v74, v66, v70, a8, v72, v71, v68, (__int64)&v67, a12);
      if ( v17 < 0 )
      {
        sub_14020A890(a12, 0, 1, v17, 0xE8u);
        goto LABEL_116;
      }
    }
    if ( (v12 & 0x180000) != 0x80000
      || (a8 & 0x800000) != 0
      || (v43 = *(_QWORD *)(v22 + 64), *(_DWORD *)(v43 + 24) >= 6u) && (*(_DWORD *)(v43 + 144) & 2) != 0 )
    {
      v31 = v59;
      if ( ((v59 - 1) & 0xFFFFFFFA) == 0 && v59 != 6 )
      {
        v32 = sub_140689DC8(v22, a8, a12);
        v17 = v32;
        if ( v32 == -2147483606 )
        {
          if ( (unsigned int)dword_140C03868 > 5 && sub_1402A2000((__int64)&dword_140C03868, 0x400000000000LL) )
          {
            LODWORD(v68) = v47;
            v79 = &v68;
            v81 = &v65;
            v48 = *(unsigned __int16 *)(a12 + 8);
            v49 = *(unsigned __int16 *)(a12 + 10);
            v87 = a12 + 8;
            v83 = &v64;
            v89 = a12 + 12;
            v50 = *(unsigned __int8 *)(a12 + 394);
            v90 = 12 * v48;
            v94 = a12 + 108;
            v95 = 12 * v49;
            v99 = a12 + 396;
            v102 = &v69;
            LOWORD(v60) = v50;
            v65 = v48;
            LOWORD(v64) = v49;
            v92 = a12 + 10;
            v97 = a12 + 394;
            v80 = 4LL;
            v82 = 2LL;
            v84 = 2LL;
            v85 = &v60;
            v86 = 2LL;
            v88 = 2LL;
            v91 = 0;
            v93 = 2LL;
            v96 = 0;
            v98 = 2LL;
            v100 = 8 * v50;
            v101 = 0;
            v69 = 0x1000000LL;
            v103 = 8LL;
            sub_14020A9C4((__int64)&dword_140C03868, (unsigned __int8 *)&byte_1400298CF, 0LL, 0LL, 0xDu, &v78);
          }
        }
        else if ( v32 < 0 )
        {
          sub_14020A890(a12, 0, 1, v32, 0xF0u);
          goto LABEL_116;
        }
        v31 = v59;
      }
      if ( (a8 & 0x800000) != 0 )
      {
        v51 = *(_QWORD *)(v22 + 64);
        if ( *(_DWORD *)(v51 + 24) < 6u || (*(_DWORD *)(v51 + 144) & 2) == 0 )
        {
          sub_1406CA514(v22);
          *(_DWORD *)(*(_QWORD *)(v22 + 64) + 24LL) = 6;
          *(_DWORD *)(*(_QWORD *)(v22 + 64) + 144LL) |= 2u;
        }
      }
      sub_14068B1C8(v22);
      sub_140AB4370();
      ExAcquirePushLockSharedEx(v22 + 72, 0LL);
      ExAcquirePushLockExclusiveEx(v22 + 80, 0LL);
      v33 = 0;
      if ( v31 )
        v33 = sub_14068C0C4(v22);
      else
        *(_BYTE *)(v22 + 195) = 1;
      v17 = v33;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v22 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v22 + 80);
      sub_1402AFC00(v22 + 80);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v22 + 72), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v22 + 72));
      sub_1402AFC00(v22 + 72);
      sub_140AB4260(v35, v34, v36, v37, *(_QWORD *)AccessMask, *(_QWORD *)v54);
      if ( v17 >= 0 )
      {
        v40 = (_QWORD *)(v22 + 1608);
        if ( (a8 & 0x1000000) != 0 )
        {
          *(_QWORD *)(v22 + 1616) = v22 + 1608;
          *v40 = v40;
        }
        else
        {
          ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C49860, 0LL);
          v44 = (_QWORD *)qword_140D3CC98;
          if ( *(__int64 **)qword_140D3CC98 != &qword_140D3CC90 )
            __fastfail(3u);
          *v40 = &qword_140D3CC90;
          *(_QWORD *)(v22 + 1616) = v44;
          *v44 = v40;
          qword_140D3CC98 = v22 + 1608;
          ExReleasePushLockEx((ULONG_PTR)&qword_140C49860, 0LL);
          sub_14020B1F8(v22);
        }
        v41 = v73;
        v17 = 0;
        *(_QWORD *)(v22 + 56) = 0LL;
        *v41 = v22;
        sub_140AB42A0(v39, v38);
        v56 = 0;
        if ( (DWORD2(xmmword_140D06900) & 0x1000000) != 0 )
          sub_140910918(v22, v59, v70, v67);
        goto LABEL_67;
      }
      sub_14020A890(a12, 0, 1, v17, 0x100u);
    }
    else
    {
      v17 = -1073741811;
    }
LABEL_116:
    sub_14065A7E0(v22);
    if ( !v57 )
      goto LABEL_68;
LABEL_67:
    sub_140AB4580(v77);
    goto LABEL_68;
  }
  v17 = -1073741670;
  v45 = 176;
LABEL_110:
  sub_14020A890(a12, 0, 1, v17, v45);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
LABEL_68:
  if ( v56 )
LABEL_106:
    sub_140AB42A0(v19, v18);
  return (unsigned int)v17;
}
