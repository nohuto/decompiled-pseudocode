/*
 * XREFs of sub_140707E70 @ 0x140707E70
 * Callers:
 *     sub_1406F914C @ 0x1406F914C (sub_1406F914C.c)
 * Callees:
 *     PsIsCurrentThreadPrefetching @ 0x140232600 (PsIsCurrentThreadPrefetching.c)
 *     sub_14026EA80 @ 0x14026EA80 (sub_14026EA80.c)
 *     sub_14028866C @ 0x14028866C (sub_14028866C.c)
 *     sub_14028CE10 @ 0x14028CE10 (sub_14028CE10.c)
 *     sub_14029BC90 @ 0x14029BC90 (sub_14029BC90.c)
 *     sub_14029E440 @ 0x14029E440 (sub_14029E440.c)
 *     sub_14029E64C @ 0x14029E64C (sub_14029E64C.c)
 *     sub_14029E72C @ 0x14029E72C (sub_14029E72C.c)
 *     sub_14029E74C @ 0x14029E74C (sub_14029E74C.c)
 *     sub_1402E4474 @ 0x1402E4474 (sub_1402E4474.c)
 *     sub_14032A4B0 @ 0x14032A4B0 (sub_14032A4B0.c)
 *     sub_14035EDE4 @ 0x14035EDE4 (sub_14035EDE4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14059E4B0 @ 0x14059E4B0 (sub_14059E4B0.c)
 *     FsRtlGetFileSize @ 0x1406FF640 (FsRtlGetFileSize.c)
 *     sub_140705E1C @ 0x140705E1C (sub_140705E1C.c)
 *     sub_1407063CC @ 0x1407063CC (sub_1407063CC.c)
 *     sub_1407084B0 @ 0x1407084B0 (sub_1407084B0.c)
 *     sub_14070893C @ 0x14070893C (sub_14070893C.c)
 *     sub_140708DA8 @ 0x140708DA8 (sub_140708DA8.c)
 *     sub_14096BE44 @ 0x14096BE44 (sub_14096BE44.c)
 *     sub_14096F788 @ 0x14096F788 (sub_14096F788.c)
 *     sub_140970668 @ 0x140970668 (sub_140970668.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall sub_140707E70(
        PFILE_OBJECT FileObject,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        _QWORD *a5,
        __int64 *a6,
        __int64 a7,
        __int128 *a8)
{
  unsigned int *v9; // r12
  NTSTATUS result; // eax
  unsigned __int64 v14; // rdi
  __int64 v15; // r15
  __int64 v16; // rax
  __int64 v17; // r13
  int v18; // r14d
  struct _FILE_OBJECT *v19; // r14
  unsigned __int64 v20; // r9
  unsigned int *v21; // rdx
  __int64 v22; // rcx
  unsigned __int64 v23; // rax
  __int64 v24; // r14
  __int64 v25; // rdi
  unsigned __int64 v26; // r9
  __int64 v27; // r11
  unsigned int v28; // r9d
  __int128 v29; // xmm0
  int v30; // edx
  unsigned __int64 v31; // r14
  __int64 v32; // r8
  unsigned __int64 v33; // rcx
  unsigned int v34; // r10d
  __int64 v35; // rdx
  PFILE_OBJECT v36; // rdi
  int v37; // eax
  __int64 v38; // r8
  char v39; // r14
  unsigned int v40; // eax
  __int16 v41; // si
  __int64 v42; // rdx
  char v43; // r9
  unsigned __int64 v44; // rax
  int v45; // edx
  __int64 v46; // rdx
  unsigned __int8 v47; // al
  ULONG LowPart; // edx
  PVOID *v49; // rbx
  __int64 v50; // rsi
  __int64 v51; // rcx
  LARGE_INTEGER v52; // rdx
  int v53; // eax
  __int64 v54; // rax
  unsigned __int64 v55; // rcx
  __int64 *v56; // rax
  __int64 v57; // rcx
  unsigned int v58; // edi
  __int64 v59; // rcx
  __int64 v60; // rdx
  __int64 v61; // rax
  bool v62; // zf
  __int128 *v63; // rax
  unsigned __int64 v64; // rdi
  __int64 *v65; // rax
  __int64 v66; // rcx
  unsigned __int64 v67; // rdx
  __int64 DeviceObject; // rcx
  bool v69; // al
  char v70; // [rsp+40h] [rbp-C0h]
  __int64 v72; // [rsp+50h] [rbp-B0h]
  unsigned int v73; // [rsp+58h] [rbp-A8h]
  unsigned int v74; // [rsp+58h] [rbp-A8h]
  LARGE_INTEGER FileSize; // [rsp+70h] [rbp-90h] BYREF
  unsigned int *v77; // [rsp+78h] [rbp-88h] BYREF
  int v78; // [rsp+80h] [rbp-80h] BYREF
  signed __int64 v79; // [rsp+88h] [rbp-78h]
  __int64 v80; // [rsp+90h] [rbp-70h] BYREF
  unsigned int *v81; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v82; // [rsp+A8h] [rbp-58h]
  __int128 v83; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v84; // [rsp+C0h] [rbp-40h]
  __int128 v85; // [rsp+C8h] [rbp-38h] BYREF
  int v86; // [rsp+D8h] [rbp-28h]
  unsigned int *v87; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v88; // [rsp+E8h] [rbp-18h]
  __int128 v89; // [rsp+F0h] [rbp-10h] BYREF
  unsigned __int64 v90; // [rsp+100h] [rbp+0h]
  _QWORD *v91; // [rsp+108h] [rbp+8h]
  __int64 *v92; // [rsp+110h] [rbp+10h]
  __int128 *v93; // [rsp+118h] [rbp+18h] BYREF
  int v94; // [rsp+120h] [rbp+20h]
  int v95; // [rsp+124h] [rbp+24h]

  v91 = a5;
  v9 = 0LL;
  v92 = a6;
  v93 = a8;
  v78 = 0;
  v83 = 0LL;
  FileSize.QuadPart = 0LL;
  v89 = 0LL;
  result = FsRtlGetFileSize(FileObject, &FileSize);
  if ( result >= 0 )
  {
    if ( FileSize.HighPart )
    {
      dword_140C4F3D0 = 34;
      return -1073741792;
    }
    v84 = 0LL;
    v14 = 1LL;
    v79 = 0LL;
    v80 = 0LL;
    v72 = 0LL;
    v77 = 0LL;
    v15 = 0LL;
    v16 = sub_1407084B0(a2, a3, 4096LL, 1LL);
    v17 = v16;
    if ( !v16 )
    {
      dword_140C4F3D0 = 35;
      return -1073741670;
    }
    *(_QWORD *)(v16 + 16) = 0LL;
    v88 = *(_QWORD *)(v16 + 48);
    sub_14028866C(FileObject);
    v18 = sub_14029E64C((__int64)FileObject, &v78);
    if ( v18 == -1073741740 )
    {
      dword_140C4F3D0 = 36;
LABEL_94:
      v49 = 0LL;
      goto LABEL_79;
    }
    v70 = 0;
    if ( v78 )
      a4 |= 0x200000u;
    if ( (a4 & 0x200080) != 0 )
    {
      v70 = 1;
      if ( PsIsCurrentThreadPrefetching() )
      {
        dword_140C4F3D0 = 37;
        v18 = -1073740749;
        goto LABEL_94;
      }
    }
    if ( (a4 & 0x10000) != 0 )
    {
      v52 = FileSize;
      if ( (a4 & 0x80000) != 0 )
        v52.QuadPart = 4096LL;
      v53 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))sub_14096F788)(
              FileObject,
              (LARGE_INTEGER)v52.QuadPart,
              0LL,
              &v77);
      v9 = v77;
      v18 = v53;
      if ( v53 < 0 )
      {
        dword_140C4F3D0 = 38;
        goto LABEL_78;
      }
      v19 = FileObject;
LABEL_14:
      v18 = sub_1407063CC(v19, (ULONG_PTR)v9, v17, (__int64)&v83);
      if ( v18 < 0 )
      {
        dword_140C4F3D0 = 40;
        goto LABEL_78;
      }
      v20 = *((_QWORD *)&v83 + 1);
      if ( *((_QWORD *)&v83 + 1) != v14 << 12 && *((_QWORD *)&v83 + 1) < 0x40uLL )
      {
        v18 = -1073741521;
        dword_140C4F3D0 = 41;
LABEL_78:
        v49 = 0LL;
LABEL_79:
        v50 = a2;
LABEL_80:
        sub_140705E1C((PMDL)v17, 1);
        v51 = v79;
        if ( v79 )
        {
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v50 + 17528), -v79);
          sub_14028CE10(v50, v51);
          v15 = v80;
          v9 = v77;
        }
        if ( v15 )
        {
          sub_14026EA80(*(_QWORD *)(v15 + 96), 0);
          ExFreePoolWithTag(v49[8], 0);
          ExFreePoolWithTag(v49, 0);
          ExFreePoolWithTag((PVOID)v15, 0);
        }
        goto LABEL_55;
      }
LABEL_16:
      if ( (*(_BYTE *)(v17 + 10) & 4) != 0 )
        v21 = *(unsigned int **)(v17 + 32);
      else
        v21 = *(unsigned int **)(v17 + 24);
      v81 = v21;
      if ( *(_WORD *)v21 != 23117 )
      {
        v18 = -1073741521;
        goto LABEL_78;
      }
      v22 = v21[15];
      v73 = v22;
      if ( (int)v22 + 264 < (unsigned int)v22 )
      {
        v18 = -1073741520;
        dword_140C4F3D0 = 42;
        goto LABEL_78;
      }
      v23 = v22 + 264;
      v24 = (unsigned int)v22;
      if ( (unsigned __int64)(v22 + 264) > FileSize.QuadPart )
      {
        v18 = -1073741520;
        dword_140C4F3D0 = 43;
        goto LABEL_78;
      }
      if ( v23 > v14 << 12 )
      {
        v54 = 0x2000LL;
        v55 = (FileSize.QuadPart - ((unsigned int)v22 & 0xFFFFF000) + 4095) & 0xFFFFFFFFFFFFF000uLL;
        v90 = (FileSize.QuadPart - (v24 & 0xFFFFFFFFFFFFF000uLL) + 4095) & 0xFFFFFFFFFFFFF000uLL;
        if ( v55 < 0x2000 )
          v54 = v55;
        v82 = v54;
        v56 = (__int64 *)sub_1407084B0(a2, a3, v54, 1LL);
        v57 = (__int64)v56;
        if ( !v56 )
        {
          v18 = -1073741670;
          dword_140C4F3D0 = 44;
          goto LABEL_78;
        }
        *v56 = v17;
        v58 = v24 & 0xFFFFF000;
        v17 = (__int64)v56;
        v56[2] = ((unsigned int)v24 & 0xFFFFF000) / 4096LL;
        if ( (a4 & 0x80000) != 0 )
        {
          v87 = 0LL;
          v18 = sub_14096F788(FileObject, v90, v9, &v87);
          if ( v18 < 0 )
          {
            dword_140C4F3D0 = 128;
            goto LABEL_78;
          }
          v9 = v87;
          v57 = v17;
          v77 = v87;
        }
        v18 = sub_1407063CC(FileObject, (ULONG_PTR)v9, v57, (__int64)&v83);
        if ( v18 < 0 )
        {
          dword_140C4F3D0 = 45;
          goto LABEL_78;
        }
        v59 = v73 & 0xFFF;
        if ( *((_QWORD *)&v83 + 1) != (unsigned int)v82 && *((_QWORD *)&v83 + 1) < (unsigned __int64)(v59 + 264) )
        {
          v18 = -1073741520;
          dword_140C4F3D0 = 46;
          goto LABEL_78;
        }
        v26 = *((_QWORD *)&v83 + 1) - v59;
        v82 = v59 + *(_QWORD *)(v17 + 24);
        v60 = v58 + *((_QWORD *)&v83 + 1);
        v25 = v82;
        *((_QWORD *)&v83 + 1) = v60;
        v21 = v81;
      }
      else
      {
        if ( v23 > v20 )
        {
          v18 = -1073741520;
          dword_140C4F3D0 = 47;
          goto LABEL_78;
        }
        v25 = (__int64)v21 + (unsigned int)v22;
        v26 = v20 - (unsigned int)v22;
      }
      v18 = sub_140708DA8(a7, v25, v21, v26);
      if ( v18 )
      {
        v49 = 0LL;
        v79 = 0LL;
        if ( v18 < 0 )
          goto LABEL_79;
LABEL_55:
        if ( v9 )
          sub_140970668(v9);
        return v18;
      }
      v27 = a7;
      *(_DWORD *)v93 = v73;
      v28 = *(_DWORD *)(a7 + 16);
      if ( !((v28 >> 12) + ((v28 & 0xFFF) != 0)) )
      {
        v18 = -1073741701;
        dword_140C4F3D0 = 49;
        goto LABEL_78;
      }
      v29 = *(_OWORD *)(v25 + 4);
      v86 = *(_DWORD *)(v25 + 20);
      v30 = (unsigned __int16)v86 + 24;
      v85 = v29;
      if ( v73 + v30 + 40 * WORD1(v29) <= v73 )
      {
        v18 = -1073741701;
        dword_140C4F3D0 = 50;
        goto LABEL_78;
      }
      v31 = v30 + v73;
      v32 = 40LL * WORD1(v29);
      v33 = v32 + v31;
      v82 = v31;
      v34 = 40 * WORD1(v29) + v30 + v73;
      if ( *(unsigned int *)(a7 + 24) >= v32 + v31 )
        v34 = *(_DWORD *)(a7 + 24);
      v74 = v34;
      if ( v34 > v28 )
      {
        v18 = -1073741701;
        dword_140C4F3D0 = 48;
        goto LABEL_78;
      }
      if ( v33 > *((_QWORD *)&v83 + 1) )
      {
        v61 = ((_WORD)v25 + (_WORD)v30) & 0xFFF;
        v62 = v32 + v61 == 0;
        v63 = (__int128 *)(v32 + v61);
        v93 = v63;
        if ( v62 || (v64 = ((unsigned __int64)v63 + 4095) & 0xFFFFFFFFFFFFF000uLL, (unsigned __int64)v63 > v64) )
        {
          v18 = -1073741701;
          dword_140C4F3D0 = 51;
          goto LABEL_78;
        }
        v65 = (__int64 *)sub_1407084B0(a2, a3, ((unsigned __int64)v63 + 4095) & 0xFFFFFFFFFFFFF000uLL, 1LL);
        v66 = (__int64)v65;
        if ( !v65 )
        {
          v18 = -1073741670;
          dword_140C4F3D0 = 52;
          goto LABEL_78;
        }
        *v65 = v17;
        v17 = (__int64)v65;
        v65[2] = v31 >> 12;
        if ( (a4 & 0x80000) != 0 )
        {
          v81 = 0LL;
          v67 = v64;
          v36 = FileObject;
          v18 = sub_14096F788(FileObject, v67, v9, &v81);
          if ( v18 < 0 )
          {
            dword_140C4F3D0 = 129;
            goto LABEL_78;
          }
          v9 = v81;
          v66 = v17;
          v77 = v81;
        }
        else
        {
          v36 = FileObject;
        }
        v18 = sub_1407063CC(v36, (ULONG_PTR)v9, v66, (__int64)&v83);
        if ( v18 < 0 )
        {
          dword_140C4F3D0 = 53;
          goto LABEL_78;
        }
        if ( *((_QWORD *)&v83 + 1) < (unsigned __int64)v93 )
        {
          v18 = -1073741701;
          dword_140C4F3D0 = 54;
          goto LABEL_78;
        }
        v27 = a7;
        v35 = *(_QWORD *)(v17 + 24) + (v82 & 0xFFF);
      }
      else
      {
        LODWORD(v35) = v25 + v30;
        v36 = FileObject;
      }
      if ( *(_DWORD *)(v27 + 12) < 0x1000u )
      {
        if ( (a4 & 0x100000) != 0 )
        {
          v18 = -1073741701;
          sub_14096BE44(v33, v36, *(unsigned int *)(v27 + 64), DWORD1(v85));
          if ( qword_140C1B980 )
            sub_14042A5E0(v36, *(unsigned int *)(a7 + 64));
          dword_140C4F3D0 = 55;
          goto LABEL_78;
        }
        if ( !sub_14029E74C(v85) )
        {
          v18 = -1073741701;
          dword_140C4F3D0 = 56;
          goto LABEL_78;
        }
        a4 |= 0x400000u;
      }
      v37 = sub_14070893C(a3, v35, v27, (unsigned int)&v85, a4, (__int64)&FileSize, (__int64)&v80);
      v15 = v80;
      v18 = v37;
      if ( v37 >= 0 )
      {
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v80 + 56LL) + 64LL) = v74;
        *(_WORD *)(v15 + 60) ^= (*(_WORD *)(v15 + 60) ^ *(_WORD *)a2) & 0x3FF;
        if ( (a4 & 0x200) != 0 )
          *(_BYTE *)(*(_QWORD *)(*(_QWORD *)v15 + 56LL) + 51LL) |= 0x10u;
        v38 = *(_QWORD *)v15;
        v39 = 0;
        v72 = *(_QWORD *)v15;
        if ( !v84 && !*(_QWORD *)v17 && (a4 & 0x410000) == 0 )
        {
          v40 = *(_DWORD *)(a7 + 24);
          if ( v40 < 0x1000 )
          {
            if ( (v40 & 0x1FF) != 0 )
              ++*(_QWORD *)(v38 + 16);
            v39 = 1;
          }
        }
        v41 = HIWORD(v86);
        if ( !v70
          && (sub_14029E72C((__int64)v36->DeviceObject)
           || (v41 & 0x400) != 0 && ((unsigned __int8)*(_DWORD *)(v42 + 52) & (unsigned __int8)v43) != 0
           || (v41 & 0x800) != 0 && (*(_DWORD *)(v42 + 52) & 0x10) != 0) )
        {
          v70 = v43;
        }
        v44 = *(_QWORD *)(v38 + 16);
        v79 = v44;
        if ( v44 )
        {
          v50 = a2;
          if ( !(unsigned int)sub_14032A4B0(a2, v44, 0) )
          {
            v49 = (PVOID *)v72;
            v79 = 0LL;
            v18 = -1073741523;
            dword_140C4F3D0 = 57;
            goto LABEL_80;
          }
          _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 17528), v79);
          v15 = v80;
          v41 = HIWORD(v86);
          v9 = v77;
        }
        v45 = *(_DWORD *)(v15 + 56);
        if ( (a4 & 0x400000) == 0 && (v45 & 0x20000) != 0 && (*(_DWORD *)(a7 + 20) & 0x1000000) == 0 )
          *(_DWORD *)(v15 + 56) = v45 | 0x8000000;
        if ( v84 )
          sub_1402E4474(v15, v84);
        if ( v39 )
          sub_14029BC90(v88, *(unsigned int *)(a7 + 24));
        v46 = a7;
        if ( *(_WORD *)(a7 + 48) == 267 )
          *(_BYTE *)(v72 + 14) |= 0x40u;
        v47 = v70;
        if ( v70 )
        {
          *(_DWORD *)(v15 + 56) |= 0x800u;
          if ( (a4 & 0x200080) != 0 )
            *(_DWORD *)(v15 + 56) |= 0x40000u;
          if ( (xmmword_140D06900[0] & 4) != 0 )
          {
            DeviceObject = (__int64)v36->DeviceObject;
            *(_QWORD *)&v89 = v36->FsContext;
            WORD6(v89) = v41;
            DWORD2(v89) = *(_DWORD *)(DeviceObject + 52);
            v69 = sub_14029E72C(DeviceObject);
            v95 = 0;
            v94 = 16;
            HIWORD(v89) = (a4 >> 21) & 1 | (2 * ((2 * ((a4 >> 7) & 1)) | v69));
            v93 = &v89;
            sub_14035EDE4((__int64)&v93, 1u, 4u, 0x269u, 0x401802u);
            v46 = a7;
          }
          v47 = v70;
        }
        if ( (a4 & 0x10000) == 0 )
          goto LABEL_54;
        v18 = sub_14059E4B0(
                (__int64)v36,
                (__int64 *)v15,
                v46,
                (unsigned __int64)v9,
                (a4 >> 18) & 1,
                (a4 >> 19) & 1,
                v47);
        if ( v18 >= 0 )
        {
          v9 = 0LL;
          if ( (*(_BYTE *)(v15 + 62) & 0xC) == 4 )
          {
            sub_140705E1C((PMDL)v17, 1);
            v17 = 0LL;
          }
LABEL_54:
          v18 = 0;
          *v91 = v72;
          *v92 = v17;
          goto LABEL_55;
        }
        dword_140C4F3D0 = 58;
      }
      v49 = (PVOID *)v72;
      goto LABEL_79;
    }
    v19 = FileObject;
    if ( (unsigned int)sub_14029E440((__int64)FileObject, v88) )
    {
      v20 = 4096LL;
      *((_QWORD *)&v83 + 1) = 4096LL;
      goto LABEL_16;
    }
    if ( !v70 )
    {
      if ( (a4 & 0x20) != 0 )
      {
        LowPart = FileSize.LowPart;
      }
      else
      {
        if ( (a4 & 0x400) == 0 )
          goto LABEL_13;
        LowPart = FileSize.LowPart;
        if ( FileSize.LowPart > 0x20000 )
          goto LABEL_13;
      }
      if ( !FileObject->SectionObjectPointer->DataSectionObject )
      {
        v14 = ((unsigned __int64)LowPart + 4095) >> 12;
        if ( v14 > 1 )
        {
          v84 = sub_1407084B0(a2, a3, v14 << 12, 0LL);
          if ( v84 )
          {
            sub_140705E1C((PMDL)v17, 1);
            v17 = v84;
            *(_QWORD *)(v84 + 16) = 0LL;
          }
          else
          {
            v14 = 1LL;
          }
        }
      }
    }
LABEL_13:
    v20 = *((_QWORD *)&v83 + 1);
    if ( *((_QWORD *)&v83 + 1) )
      goto LABEL_16;
    goto LABEL_14;
  }
  dword_140C4F3D0 = 33;
  if ( result == -1073741638 )
    return -1073741792;
  return result;
}
