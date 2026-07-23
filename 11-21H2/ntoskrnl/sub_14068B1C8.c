/*
 * XREFs of sub_14068B1C8 @ 0x14068B1C8
 * Callers:
 *     sub_14068A7FC @ 0x14068A7FC (sub_14068A7FC.c)
 * Callees:
 *     SeFreePrivileges @ 0x140208AC0 (SeFreePrivileges.c)
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     Allocate @ 0x14024AC60 (Allocate.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     ExIsSoftBoot @ 0x1403B72A0 (ExIsSoftBoot.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14065A7E0 @ 0x14065A7E0 (sub_14065A7E0.c)
 *     sub_140689DC8 @ 0x140689DC8 (sub_140689DC8.c)
 *     sub_1406BF110 @ 0x1406BF110 (sub_1406BF110.c)
 *     sub_1406CA514 @ 0x1406CA514 (sub_1406CA514.c)
 *     sub_1406D3BF0 @ 0x1406D3BF0 (sub_1406D3BF0.c)
 *     sub_14085EDEC @ 0x14085EDEC (sub_14085EDEC.c)
 *     sub_140911A2C @ 0x140911A2C (sub_140911A2C.c)
 *     sub_14091972C @ 0x14091972C (sub_14091972C.c)
 *     sub_140919B78 @ 0x140919B78 (sub_140919B78.c)
 *     sub_14091EE14 @ 0x14091EE14 (sub_14091EE14.c)
 *     sub_140AB4260 @ 0x140AB4260 (sub_140AB4260.c)
 *     sub_140AB42A0 @ 0x140AB42A0 (sub_140AB42A0.c)
 *     sub_140AB4370 @ 0x140AB4370 (sub_140AB4370.c)
 *     sub_140AB46D0 @ 0x140AB46D0 (sub_140AB46D0.c)
 */

__int64 __fastcall sub_14068B1C8(ULONG_PTR BugCheckParameter3, __int128 *a2, int a3)
{
  __int64 v3; // rax
  int v6; // ecx
  __int64 v8; // r13
  int v9; // eax
  int v10; // ebx
  unsigned __int64 v12; // rcx
  __int64 v13; // r9
  __int64 v14; // rdx
  unsigned __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  ULONG_PTR v20; // rsi
  int v21; // ebx
  struct _LOOKASIDE_LIST_EX *v22; // r9
  PVOID v23; // rax
  int v24; // edx
  int v25; // r9d
  int v26; // r10d
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  int v31; // r9d
  int v32; // r10d
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  unsigned int v37; // r15d
  unsigned int v38; // r14d
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  ULONG_PTR v44; // [rsp+28h] [rbp-D8h]
  LARGE_INTEGER v45; // [rsp+40h] [rbp-C0h]
  __int16 v46; // [rsp+48h] [rbp-B8h] BYREF
  __int16 v47; // [rsp+4Ch] [rbp-B4h] BYREF
  __int16 v48; // [rsp+50h] [rbp-B0h] BYREF
  ULONG_PTR v49; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v50; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v51; // [rsp+68h] [rbp-98h] BYREF
  int v52; // [rsp+70h] [rbp-90h] BYREF
  int v53; // [rsp+74h] [rbp-8Ch] BYREF
  int v54; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v55; // [rsp+7Ch] [rbp-84h] BYREF
  unsigned int v56; // [rsp+80h] [rbp-80h] BYREF
  int v57; // [rsp+84h] [rbp-7Ch] BYREF
  __int128 *v58; // [rsp+88h] [rbp-78h]
  __int64 v59; // [rsp+90h] [rbp-70h] BYREF
  __int64 v60; // [rsp+98h] [rbp-68h] BYREF
  __int64 v61; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v62; // [rsp+A8h] [rbp-58h] BYREF
  __int128 v63; // [rsp+B0h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v64; // [rsp+C0h] [rbp-40h] BYREF
  int *v65; // [rsp+E0h] [rbp-20h]
  __int64 v66; // [rsp+E8h] [rbp-18h]
  __int16 *v67; // [rsp+F0h] [rbp-10h]
  __int64 v68; // [rsp+F8h] [rbp-8h]
  __int16 *v69; // [rsp+100h] [rbp+0h]
  __int64 v70; // [rsp+108h] [rbp+8h]
  __int16 *v71; // [rsp+110h] [rbp+10h]
  __int64 v72; // [rsp+118h] [rbp+18h]
  __int64 v73; // [rsp+120h] [rbp+20h]
  __int64 v74; // [rsp+128h] [rbp+28h]
  __int64 v75; // [rsp+130h] [rbp+30h]
  int v76; // [rsp+138h] [rbp+38h]
  int v77; // [rsp+13Ch] [rbp+3Ch]
  __int64 v78; // [rsp+140h] [rbp+40h]
  __int64 v79; // [rsp+148h] [rbp+48h]
  __int64 v80; // [rsp+150h] [rbp+50h]
  int v81; // [rsp+158h] [rbp+58h]
  int v82; // [rsp+15Ch] [rbp+5Ch]
  __int64 v83; // [rsp+160h] [rbp+60h]
  __int64 v84; // [rsp+168h] [rbp+68h]
  __int64 v85; // [rsp+170h] [rbp+70h]
  int v86; // [rsp+178h] [rbp+78h]
  int v87; // [rsp+17Ch] [rbp+7Ch]
  __int64 *v88; // [rsp+180h] [rbp+80h]
  __int64 v89; // [rsp+188h] [rbp+88h]
  struct _EVENT_DATA_DESCRIPTOR v90; // [rsp+190h] [rbp+90h] BYREF
  __int64 *v91; // [rsp+1B0h] [rbp+B0h]
  __int64 v92; // [rsp+1B8h] [rbp+B8h]
  int *v93; // [rsp+1C0h] [rbp+C0h]
  __int64 v94; // [rsp+1C8h] [rbp+C8h]
  int *v95; // [rsp+1D0h] [rbp+D0h]
  __int64 v96; // [rsp+1D8h] [rbp+D8h]
  __int64 *v97; // [rsp+1E0h] [rbp+E0h]
  __int64 v98; // [rsp+1E8h] [rbp+E8h]
  struct _EVENT_DATA_DESCRIPTOR v99; // [rsp+1F0h] [rbp+F0h] BYREF
  int *v100; // [rsp+210h] [rbp+110h]
  __int64 v101; // [rsp+218h] [rbp+118h]
  int *v102; // [rsp+220h] [rbp+120h]
  __int64 v103; // [rsp+228h] [rbp+128h]
  __int64 *v104; // [rsp+230h] [rbp+130h]
  __int64 v105; // [rsp+238h] [rbp+138h]
  struct _EVENT_DATA_DESCRIPTOR v106; // [rsp+240h] [rbp+140h] BYREF
  int *v107; // [rsp+260h] [rbp+160h]
  __int64 v108; // [rsp+268h] [rbp+168h]
  __int64 *v109; // [rsp+270h] [rbp+170h]
  __int64 v110; // [rsp+278h] [rbp+178h]

  v3 = *(_QWORD *)(BugCheckParameter3 + 64);
  v58 = a2;
  LODWORD(v50) = 0;
  v49 = 0LL;
  v6 = *(_DWORD *)(v3 + 144);
  v8 = 0LL;
  v63 = 0LL;
  if ( (v6 & 1) != 0 )
    return 0;
  v9 = *(_DWORD *)(BugCheckParameter3 + 160);
  if ( (v9 & 0x10) == 0 && !*(_QWORD *)(BugCheckParameter3 + 1544) )
    return 0;
  if ( (v9 & 0x8001) != 0 || !*(_DWORD *)(BugCheckParameter3 + 168) )
    return 0;
  if ( !(unsigned __int8)sub_140AB46D0() )
  {
    v10 = -1073741431;
LABEL_29:
    if ( (unsigned int)dword_140C03868 > 5 && sub_1402A2000((__int64)&dword_140C03868, 0x400000000000LL) )
    {
      v57 = v10;
      v107 = &v57;
      v108 = 4LL;
      v109 = &v51;
      v51 = 0x1000000LL;
      v110 = 8LL;
      sub_14020A9C4((__int64)&dword_140C03868, (unsigned __int8 *)byte_140029A28, 0LL, 0LL, 4u, &v106);
    }
    return (unsigned int)v10;
  }
  if ( (a3 & 0x400000) != 0 && ExIsSoftBoot() )
  {
    v12 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 168LL) - 1LL;
    if ( v12 > 1 )
      goto LABEL_12;
  }
  v13 = *(_QWORD *)(BugCheckParameter3 + 64);
  v14 = MEMORY[0xFFFFF78000000014] & 0xFFFFFFFC;
  v45.HighPart = MEMORY[0xFFFFF78000000018];
  v15 = *(_QWORD *)(v13 + 168);
  if ( v15 <= (MEMORY[0xFFFFF78000000014] & 0xFFFFFFFFFFFFFFFCuLL) )
  {
    v12 = 864000000000LL * (unsigned int)dword_140C0C61C;
    if ( (MEMORY[0xFFFFF78000000014] & 0xFFFFFFFFFFFFFFFCuLL) - v15 < v12 )
      goto LABEL_12;
  }
  if ( !a2 )
  {
    v12 = 0LL;
    *((_QWORD *)&v63 + 1) = v13 + 48;
    do
    {
      if ( !*(_WORD *)(v13 + 48 + 2LL * (unsigned __int16)v12) )
        break;
      LOWORD(v12) = v12 + 1;
    }
    while ( (unsigned __int16)v12 < 0x1Fu );
    LOWORD(v12) = 2 * v12;
    LOWORD(v63) = v12;
    v58 = &v63;
  }
  if ( v15 == 2 || v15 != 1 && (*(_DWORD *)(BugCheckParameter3 + 4112) & 0x400) == 0 )
  {
    v45.LowPart = v14 | 2;
    sub_1406BF110(BugCheckParameter3);
    sub_140AB4370();
    ExAcquirePushLockSharedEx(BugCheckParameter3 + 72, 0LL);
    ExAcquirePushLockExclusiveEx(BugCheckParameter3 + 80, 0LL);
    sub_1406CA514(BugCheckParameter3);
    *(LARGE_INTEGER *)(*(_QWORD *)(BugCheckParameter3 + 64) + 168LL) = v45;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter3 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(BugCheckParameter3 + 80);
    sub_1402AFC00(BugCheckParameter3 + 80);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(BugCheckParameter3 + 72), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(BugCheckParameter3 + 72));
    sub_1402AFC00(BugCheckParameter3 + 72);
    sub_140AB4260(v17, v16, v18, v19);
    goto LABEL_12;
  }
  if ( *(_DWORD *)(v13 + 36) == -1 )
  {
LABEL_12:
    v10 = 0;
    goto LABEL_13;
  }
  v45.LowPart = v14 | 1;
  v10 = sub_14091972C(&v49, BugCheckParameter3);
  if ( v10 < 0 )
  {
LABEL_77:
    v20 = v49;
    goto LABEL_78;
  }
  v20 = v49;
  v10 = sub_1406D3BF0(BugCheckParameter3, 6, v44, 0, (__int64)&v50);
  if ( v10 >= 0 )
  {
    v21 = v50;
    *(_DWORD *)(*(_QWORD *)(v20 + 64) + 36LL) = v50;
    sub_1406CA514(v20);
    v10 = sub_14091EE14(BugCheckParameter3, *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 36LL), v20, v21, 66, 0);
    if ( v10 >= 0 )
    {
      v23 = Allocate(PagedPool, 0x1B0uLL, 0x33394D43u, v22);
      v8 = (__int64)v23;
      if ( !v23 )
      {
        v10 = -1073741670;
        goto LABEL_78;
      }
      memset(v23, 0, 0x1B0uLL);
      v10 = sub_140689DC8(v20, 983040, v8);
      if ( v10 >= 0 )
      {
        if ( (*(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 4088LL) & 4) != 0
          || *(_DWORD *)(BugCheckParameter3 + 4764) == *(_DWORD *)(v20 + 4764) )
        {
          *(_QWORD *)(v20 + 56) = 0LL;
          v37 = *(_DWORD *)(v20 + 280);
          v38 = *(_DWORD *)(BugCheckParameter3 + 280);
          sub_140919B78(BugCheckParameter3, v20);
          if ( (unsigned int)dword_140C03868 > 5 && sub_1402A2000((__int64)&dword_140C03868, 0x400000000000LL) )
          {
            v39 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 168LL);
            v91 = &v61;
            v93 = (int *)&v55;
            v95 = (int *)&v56;
            v97 = &v62;
            v61 = v39;
            v92 = 8LL;
            v55 = v38;
            v94 = 4LL;
            v56 = v37;
            v96 = 4LL;
            v62 = 0x1000000LL;
            v98 = 8LL;
            sub_14020A9C4((__int64)&dword_140C03868, (unsigned __int8 *)word_140029AD2, 0LL, 0LL, 6u, &v90);
          }
          sub_140AB4370();
          ExAcquirePushLockSharedEx(BugCheckParameter3 + 72, 0LL);
          ExAcquirePushLockExclusiveEx(BugCheckParameter3 + 80, 0LL);
          sub_1406CA514(BugCheckParameter3);
          *(LARGE_INTEGER *)(*(_QWORD *)(BugCheckParameter3 + 64) + 168LL) = v45;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter3 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(BugCheckParameter3 + 80);
          sub_1402AFC00(BugCheckParameter3 + 80);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)(BugCheckParameter3 + 72), 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)(BugCheckParameter3 + 72));
          sub_1402AFC00(BugCheckParameter3 + 72);
          sub_140AB4260(v41, v40, v42, v43);
          sub_140911A2C(v58, v38, v37);
          if ( v37 < v38 )
          {
            if ( byte_140C0CAD8 )
            {
              qword_140D014F8 = 0LL;
              stru_140D01830 = v45;
              byte_140C0CAD8 = 0;
            }
            qword_140D014F8 += v38 - v37;
            sub_14085EDEC();
          }
          v10 = 0;
        }
        else
        {
          if ( (unsigned int)dword_140C03868 > 5 && sub_1402A2000((__int64)&dword_140C03868, 0x400000000000LL) )
          {
            v53 = v31;
            v100 = &v53;
            v101 = 4LL;
            v102 = &v54;
            v54 = v32;
            v104 = &v60;
            v103 = 4LL;
            v60 = 0x1000000LL;
            v105 = 8LL;
            sub_14020A9C4((__int64)&dword_140C03868, (unsigned __int8 *)word_140029A6A, 0LL, 0LL, 5u, &v99);
          }
          sub_140AB4370();
          ExAcquirePushLockSharedEx(BugCheckParameter3 + 72, 0LL);
          ExAcquirePushLockExclusiveEx(BugCheckParameter3 + 80, 0LL);
          sub_1406CA514(BugCheckParameter3);
          *(LARGE_INTEGER *)(*(_QWORD *)(BugCheckParameter3 + 64) + 168LL) = v45;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter3 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(BugCheckParameter3 + 80);
          sub_1402AFC00(BugCheckParameter3 + 80);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)(BugCheckParameter3 + 72), 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)(BugCheckParameter3 + 72));
          sub_1402AFC00(BugCheckParameter3 + 72);
          sub_140AB4260(v34, v33, v35, v36);
          v10 = -1073741492;
        }
      }
      else
      {
        if ( (unsigned int)dword_140C03868 > 5 && sub_1402A2000((__int64)&dword_140C03868, 0x400000000000LL) )
        {
          v52 = v10;
          v65 = &v52;
          v67 = &v46;
          v24 = *(unsigned __int16 *)(v8 + 8);
          v25 = *(unsigned __int16 *)(v8 + 10);
          v73 = v8 + 8;
          v69 = &v47;
          v75 = v8 + 12;
          v26 = *(unsigned __int8 *)(v8 + 394);
          v76 = 12 * v24;
          v80 = v8 + 108;
          v81 = 12 * v25;
          v85 = v8 + 396;
          v88 = &v59;
          v48 = v26;
          v46 = v24;
          v47 = v25;
          v78 = v8 + 10;
          v83 = v8 + 394;
          v66 = 4LL;
          v68 = 2LL;
          v70 = 2LL;
          v71 = &v48;
          v72 = 2LL;
          v74 = 2LL;
          v77 = 0;
          v79 = 2LL;
          v82 = 0;
          v84 = 2LL;
          v86 = 8 * v26;
          v87 = 0;
          v59 = 0x1000000LL;
          v89 = 8LL;
          sub_14020A9C4((__int64)&dword_140C03868, (unsigned __int8 *)byte_140029B28, 0LL, 0LL, 0xDu, &v64);
        }
        if ( v10 != -1073741492 && v10 != -2147483606 )
          goto LABEL_78;
        sub_140AB4370();
        ExAcquirePushLockSharedEx(BugCheckParameter3 + 72, 0LL);
        ExAcquirePushLockExclusiveEx(BugCheckParameter3 + 80, 0LL);
        sub_1406CA514(BugCheckParameter3);
        *(LARGE_INTEGER *)(*(_QWORD *)(BugCheckParameter3 + 64) + 168LL) = v45;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter3 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(BugCheckParameter3 + 80);
        sub_1402AFC00(BugCheckParameter3 + 80);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(BugCheckParameter3 + 72), 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(BugCheckParameter3 + 72));
        sub_1402AFC00(BugCheckParameter3 + 72);
        sub_140AB4260(v28, v27, v29, v30);
      }
      goto LABEL_77;
    }
  }
LABEL_78:
  if ( v20 )
    sub_14065A7E0(v20);
LABEL_13:
  sub_140AB42A0(v12, v14);
  if ( v8 )
    SeFreePrivileges((PPRIVILEGE_SET)v8);
  if ( v10 < 0 )
    goto LABEL_29;
  return (unsigned int)v10;
}
