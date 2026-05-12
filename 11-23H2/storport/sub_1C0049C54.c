/*
 * XREFs of sub_1C0049C54 @ 0x1C0049C54
 * Callers:
 *     StorPortNotification @ 0x1C000EAB0 (StorPortNotification.c)
 * Callees:
 *     sub_1C00081BC @ 0x1C00081BC (sub_1C00081BC.c)
 *     sub_1C0010EE0 @ 0x1C0010EE0 (sub_1C0010EE0.c)
 *     sub_1C0019E4C @ 0x1C0019E4C (sub_1C0019E4C.c)
 *     sub_1C001AA4C @ 0x1C001AA4C (sub_1C001AA4C.c)
 *     sub_1C001AAA8 @ 0x1C001AAA8 (sub_1C001AAA8.c)
 *     sub_1C001ABEC @ 0x1C001ABEC (sub_1C001ABEC.c)
 *     sub_1C001D420 @ 0x1C001D420 (sub_1C001D420.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     sub_1C0035FBC @ 0x1C0035FBC (sub_1C0035FBC.c)
 *     sub_1C004467C @ 0x1C004467C (sub_1C004467C.c)
 *     sub_1C0050684 @ 0x1C0050684 (sub_1C0050684.c)
 *     sub_1C00507E4 @ 0x1C00507E4 (sub_1C00507E4.c)
 *     sub_1C0050860 @ 0x1C0050860 (sub_1C0050860.c)
 */

__int64 __fastcall sub_1C0049C54(
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
  __int64 v10; // rcx
  __int64 v12; // rdi
  __int64 v13; // r11
  int *v14; // r13
  unsigned __int8 v15; // r12
  __int64 v16; // rax
  char v17; // r8
  int v18; // r10d
  __int16 v19; // r15
  char v20; // al
  char v21; // r11
  bool v22; // cl
  char v23; // r8
  __int64 v24; // r10
  __int64 v25; // rax
  __int16 v26; // cx
  int v27; // edx
  char v28; // al
  const char *v29; // rax
  char v30; // al
  __int64 v31; // rdx
  int *v32; // r9
  int *Src; // r8
  int *v34; // r12
  int v35; // edx
  int *v36; // rcx
  int v37; // r8d
  unsigned int v38; // edx
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // r15
  const wchar_t *v42; // rcx
  const char *v43; // r8
  const char *v44; // rdx
  const char *v45; // rax
  const wchar_t *v46; // rcx
  const char *v47; // r8
  const char *v48; // rdx
  const char *v49; // rax
  const wchar_t *v50; // rcx
  const char *v51; // r8
  const char *v52; // rdx
  const char *v53; // rax
  int *v54; // rdx
  unsigned int v55; // r9d
  __int64 v56; // r8
  __int64 v57; // r9
  struct _DEVICE_OBJECT *v58; // rcx
  PEVENT_DATA_DESCRIPTOR v60; // [rsp+28h] [rbp-128h]
  size_t Size; // [rsp+40h] [rbp-110h]
  unsigned __int8 v62; // [rsp+D0h] [rbp-80h] BYREF
  unsigned __int8 v63; // [rsp+D1h] [rbp-7Fh]
  char v64; // [rsp+D2h] [rbp-7Eh]
  unsigned __int8 v65; // [rsp+D3h] [rbp-7Dh] BYREF
  unsigned __int8 v66; // [rsp+D4h] [rbp-7Ch] BYREF
  unsigned int v67; // [rsp+D8h] [rbp-78h] BYREF
  unsigned __int16 v68; // [rsp+DCh] [rbp-74h]
  int v69; // [rsp+E0h] [rbp-70h] BYREF
  unsigned int v70; // [rsp+E4h] [rbp-6Ch]
  const char *v71; // [rsp+E8h] [rbp-68h]
  wchar_t *v72; // [rsp+F0h] [rbp-60h]
  __int64 v73; // [rsp+F8h] [rbp-58h]
  void *v74; // [rsp+100h] [rbp-50h]
  void *v75; // [rsp+108h] [rbp-48h]
  __int64 v76; // [rsp+110h] [rbp-40h]
  int v77[2]; // [rsp+118h] [rbp-38h]
  int v78[4]; // [rsp+120h] [rbp-30h] BYREF
  __int128 v79; // [rsp+130h] [rbp-20h] BYREF
  int v80[4]; // [rsp+140h] [rbp-10h] BYREF
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
  unsigned __int8 *v91; // [rsp+1D0h] [rbp+80h]
  __int64 v92; // [rsp+1D8h] [rbp+88h]
  unsigned __int8 *v93; // [rsp+1E0h] [rbp+90h]
  __int64 v94; // [rsp+1E8h] [rbp+98h]
  unsigned __int8 *v95; // [rsp+1F0h] [rbp+A0h]
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

  v72 = a5;
  v75 = a7;
  v10 = *(_QWORD *)(a1 + 16);
  v74 = a9;
  v12 = 0LL;
  v67 = -1;
  v76 = a2;
  v83 = 0;
  v68 = a4;
  v69 = a3;
  v70 = 0;
  *(_OWORD *)v78 = 0LL;
  v65 = 0;
  *(_OWORD *)v80 = 0LL;
  v64 = 0;
  v79 = 0LL;
  v71 = 0LL;
  *(_OWORD *)v81 = 0LL;
  v82 = 0LL;
  sub_1C0010EE0(v10, (__int64)v78);
  v14 = (int *)&dword_1C0082784;
  v79 = *(_OWORD *)(a1 + 5000);
  if ( v13 )
  {
    if ( *(_WORD *)v13 != 1 || *(_DWORD *)(v13 + 4) < 4u )
    {
      v15 = v67;
      v70 = -1056964601;
      v62 = BYTE2(v67);
      v63 = BYTE1(v67);
      goto LABEL_57;
    }
    v15 = *(_BYTE *)(v13 + 8);
    BYTE1(v67) = *(_BYTE *)(v13 + 9);
    v63 = BYTE1(v67);
    BYTE2(v67) = *(_BYTE *)(v13 + 10);
    LOBYTE(v67) = v15;
    v66 = v15;
    v62 = BYTE2(v67);
    v16 = sub_1C00081BC(a1, v67);
    v12 = v16;
    if ( !v16 )
    {
      v70 = -1056964601;
      goto LABEL_57;
    }
    *(_OWORD *)v80 = *(_OWORD *)(v16 + 2024);
    v17 = *(_BYTE *)(v16 + 450);
    v18 = *(_DWORD *)(v16 + 972);
    v73 = *(_QWORD *)(v16 + 8);
    v19 = (2 * (v17 & 1)) | 4;
    if ( !v18 )
      v19 = 2 * (v17 & 1);
    v20 = *(_BYTE *)(v16 + 451);
    if ( (v20 & 8) == 0 )
    {
      v65 = 1;
      *(_BYTE *)(v12 + 451) = v20 | 8;
    }
    v21 = v69;
    v22 = 0;
    if ( (v69 & 3) == 1 )
      v22 = !(v17 & 1);
    if ( v22 && !v18 && (v17 & 0x20) == 0 )
    {
      v64 = 1;
      *(_BYTE *)(v12 + 450) = v17 | 0x20;
    }
    v23 = v65;
    v24 = v12;
  }
  else
  {
    v25 = sub_1C0035FBC(a1);
    v26 = *(char *)(a1 + 104);
    v12 = v25;
    v27 = *(_DWORD *)(a1 + 92);
    v73 = *(_QWORD *)(a1 + 8);
    v19 = (((v26 >> 15) & 2) + 1) | 4;
    if ( !v27 )
      v19 = ((v26 >> 15) & 2) + 1;
    v28 = *(_BYTE *)(a1 + 110);
    if ( (v28 & 1) != 0 )
    {
      v23 = 0;
    }
    else
    {
      v23 = 1;
      *(_BYTE *)(a1 + 110) = v28 | 1;
    }
    LODWORD(v29) = a3;
    if ( (a3 & 3) == 1 && (v26 & 0x80u) == 0 && !v27 )
    {
      v30 = *(_BYTE *)(a1 + 109);
      if ( (v30 & 8) == 0 )
      {
        v64 = 1;
        *(_BYTE *)(a1 + 109) = v30 | 8;
      }
    }
    v24 = v12;
    v15 = v67;
    v21 = v69;
    v62 = BYTE2(v67);
    v63 = BYTE1(v67);
    v66 = v67;
    if ( !v12 )
      goto LABEL_35;
  }
  v29 = *(const char **)(v12 + 152);
  if ( v29 )
  {
    v29 += 90;
LABEL_34:
    v71 = v29;
    goto LABEL_35;
  }
  v31 = *(_QWORD *)(v12 + 144);
  if ( v31 )
  {
    LODWORD(v29) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 24) + 568LL) + 184LL);
    if ( ((unsigned __int8)v29 & 0x40) != 0 )
    {
      v29 = (const char *)(v31 + 41);
      goto LABEL_34;
    }
  }
LABEL_35:
  if ( (v19 & 6) == 0 || (v21 & 2) != 0 )
    LOBYTE(v29) = 0;
  else
    LODWORD(v29) = byte_1C0093CD0 == 0;
  v67 = (unsigned int)v29;
  if ( (v23 || (_BYTE)v29) && !_InterlockedCompareExchange(&dword_1C0093CD4, 1, 0) )
  {
    if ( v12 )
    {
      v32 = (int *)(v12 + 169);
      Src = (int *)(v12 + 160);
    }
    else
    {
      v32 = (int *)&dword_1C0082784;
      Src = (int *)&dword_1C0082784;
    }
    if ( v76 )
    {
      v34 = (int *)(v12 + 3344);
      v35 = *(_DWORD *)(v12 + 3344);
    }
    else
    {
      v35 = *(_DWORD *)(a1 + 4212);
      v34 = (int *)(v24 + 3344);
    }
    v36 = (int *)&v79;
    if ( v76 )
      v36 = v80;
    LODWORD(Size) = a6;
    *(_QWORD *)v77 = v36;
    sub_1C0050684((int)v36, v35, (int)v78, (int)v32, v68, v19, Src, v32, Size, v75);
    v38 = v67;
    if ( (_BYTE)v67 )
    {
      if ( !v76 )
        v34 = (int *)(a1 + 4212);
      LODWORD(v60) = a8;
      sub_1C00507E4(v77[0], *v34, v37, v68, v19, (size_t)v60, v74, (__int64)v81);
      v38 = v67;
    }
    v39 = a1;
    if ( v76 )
      v39 = v12;
    sub_1C0050860(v73, v38, v37, (unsigned __int64)v81 & -(__int64)((_BYTE)v38 != 0), v39);
    _InterlockedExchange(&dword_1C0093CD4, 0);
    v15 = v66;
  }
LABEL_57:
  sub_1C0019E4C(a1, 44, a1, retaddr, (__int64)v72, v62 | (unsigned __int64)((v63 | (v15 << 8)) << 8), 0LL);
  v41 = *(_QWORD *)&v78[2];
  if ( byte_1C0093BE8 )
  {
    if ( (v69 & 1) != 0 )
    {
      if ( (byte_1C0093A05 & 0x10) != 0 )
      {
        v42 = (const wchar_t *)&unk_1C0082788;
        if ( *(_QWORD *)(a1 + 5016) )
          v42 = *(const wchar_t **)(a1 + 5016);
        if ( v12 )
        {
          v43 = (const char *)(v12 + 186);
          v44 = (const char *)(v12 + 169);
          v45 = (const char *)(v12 + 160);
        }
        else
        {
          v43 = (const char *)&dword_1C0082784;
          v44 = (const char *)&dword_1C0082784;
          v45 = (const char *)&dword_1C0082784;
        }
        sub_1C004467C(
          (__int64)v42,
          &stru_1C00896B0,
          (__int64)v43,
          *(_DWORD *)(a1 + 352),
          *(_DWORD *)(a1 + 816),
          *(_DWORD *)(a1 + 824),
          *(_DWORD *)(a1 + 828),
          *(_DWORD *)(a1 + 56),
          v15,
          v63,
          v62,
          (__int64)v80,
          (__int64)&v79,
          *(const wchar_t **)&v78[2],
          v45,
          v44,
          v43,
          v42,
          v71,
          v68,
          v72,
          a6,
          (__int64)v75,
          a8,
          (__int64)v74,
          v69);
      }
    }
    else if ( (v69 & 2) != 0 )
    {
      if ( (byte_1C0093A05 & 0x10) != 0 )
      {
        v46 = (const wchar_t *)&unk_1C0082788;
        if ( *(_QWORD *)(a1 + 5016) )
          v46 = *(const wchar_t **)(a1 + 5016);
        if ( v12 )
        {
          v47 = (const char *)(v12 + 186);
          v48 = (const char *)(v12 + 169);
          v49 = (const char *)(v12 + 160);
        }
        else
        {
          v47 = (const char *)&dword_1C0082784;
          v48 = (const char *)&dword_1C0082784;
          v49 = (const char *)&dword_1C0082784;
        }
        sub_1C004467C(
          (__int64)v46,
          &stru_1C0088B40,
          (__int64)v47,
          *(_DWORD *)(a1 + 352),
          *(_DWORD *)(a1 + 816),
          *(_DWORD *)(a1 + 824),
          *(_DWORD *)(a1 + 828),
          *(_DWORD *)(a1 + 56),
          v15,
          v63,
          v62,
          (__int64)v80,
          (__int64)&v79,
          *(const wchar_t **)&v78[2],
          v49,
          v48,
          v47,
          v46,
          v71,
          v68,
          v72,
          a6,
          (__int64)v75,
          a8,
          (__int64)v74,
          v69);
      }
    }
    else if ( (byte_1C0093A05 & 0x10) != 0 )
    {
      v50 = (const wchar_t *)&unk_1C0082788;
      if ( *(_QWORD *)(a1 + 5016) )
        v50 = *(const wchar_t **)(a1 + 5016);
      if ( v12 )
      {
        v51 = (const char *)(v12 + 186);
        v52 = (const char *)(v12 + 169);
        v53 = (const char *)(v12 + 160);
      }
      else
      {
        v51 = (const char *)&dword_1C0082784;
        v52 = (const char *)&dword_1C0082784;
        v53 = (const char *)&dword_1C0082784;
      }
      sub_1C004467C(
        (__int64)v50,
        &stru_1C0088E08,
        (__int64)v51,
        *(_DWORD *)(a1 + 352),
        *(_DWORD *)(a1 + 816),
        *(_DWORD *)(a1 + 824),
        *(_DWORD *)(a1 + 828),
        *(_DWORD *)(a1 + 56),
        v15,
        v63,
        v62,
        (__int64)v80,
        (__int64)&v79,
        *(const wchar_t **)&v78[2],
        v53,
        v52,
        v51,
        v50,
        v71,
        v68,
        v72,
        a6,
        (__int64)v75,
        a8,
        (__int64)v74,
        v69);
    }
  }
  if ( (unsigned int)dword_1C00930C8 > 5 && sub_1C001ABEC(v40, 0x400000000000LL) )
  {
    v86 = 16LL;
    v85 = &v79;
    v87 = v80;
    v54 = (int *)(v12 + 160);
    v69 = *(_DWORD *)(a1 + 56);
    v89 = &v69;
    v91 = &v66;
    v65 = v63;
    v93 = &v65;
    v95 = &v62;
    v97 = v100;
    v100[0] = LOWORD(v78[0]);
    v88 = 16LL;
    v90 = 4LL;
    v66 = v15;
    v92 = 1LL;
    v94 = 1LL;
    v96 = 1LL;
    v98 = 2LL;
    v99 = v41;
    v100[1] = 0;
    if ( !v12 )
      v54 = (int *)&dword_1C0082784;
    sub_1C001AAA8((__int64)v101, v54);
    if ( v12 )
      v14 = (int *)(v12 + 169);
    sub_1C001AAA8((__int64)v102, v14);
    v103 = &v67;
    v67 = v55;
    v104 = 4LL;
    sub_1C001AA4C((__int64)v105, v72);
    sub_1C001D420((__int64)&v84, (unsigned __int8 *)dword_1C0084BB5, v56, v57, 0xEu, &v84);
  }
  if ( v64 )
  {
    if ( v76 )
      v58 = *(struct _DEVICE_OBJECT **)(v12 + 8);
    else
      v58 = *(struct _DEVICE_OBJECT **)(a1 + 8);
    IoInvalidateDeviceState(v58);
  }
  return v70;
}
