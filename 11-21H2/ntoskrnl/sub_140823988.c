/*
 * XREFs of sub_140823988 @ 0x140823988
 * Callers:
 *     sub_1408236BC @ 0x1408236BC (sub_1408236BC.c)
 *     PoFxRegisterCoreDevice @ 0x140823860 (PoFxRegisterCoreDevice.c)
 * Callees:
 *     IoInitializeRemoveLockEx @ 0x14025A9C0 (IoInitializeRemoveLockEx.c)
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     IoAllocateIrp @ 0x1402AAB20 (IoAllocateIrp.c)
 *     sub_1403B9DF8 @ 0x1403B9DF8 (sub_1403B9DF8.c)
 *     sub_1403B9F08 @ 0x1403B9F08 (sub_1403B9F08.c)
 *     sub_1403BA01C @ 0x1403BA01C (sub_1403BA01C.c)
 *     sub_1403BA340 @ 0x1403BA340 (sub_1403BA340.c)
 *     sub_1403BA410 @ 0x1403BA410 (sub_1403BA410.c)
 *     sub_1403BA6E0 @ 0x1403BA6E0 (sub_1403BA6E0.c)
 *     sub_1405CAE6C @ 0x1405CAE6C (sub_1405CAE6C.c)
 *     sub_1405CD938 @ 0x1405CD938 (sub_1405CD938.c)
 *     sub_14098E364 @ 0x14098E364 (sub_14098E364.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140823988(
        ULONG_PTR a1,
        const UNICODE_STRING *a2,
        __int128 *a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        char a7,
        __int64 a8,
        _QWORD *a9)
{
  unsigned int v9; // r14d
  __int64 *v12; // rsi
  int v13; // ebx
  unsigned int v14; // r10d
  unsigned int v15; // edi
  unsigned int i; // r9d
  __int64 v17; // rdx
  unsigned int v18; // eax
  unsigned int v19; // ecx
  unsigned int v20; // eax
  int v21; // ecx
  unsigned int v22; // r8d
  __int64 v23; // r11
  __int64 v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rsi
  __int64 v28; // rax
  __int64 v29; // r12
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // r8
  char *v33; // rdi
  int v35; // eax
  __int64 Pool2; // r15
  _QWORD *v37; // rax
  _DWORD *v38; // r12
  __int128 v39; // xmm0
  _QWORD *v40; // r9
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  unsigned int v45; // r10d
  __int64 v46; // r13
  _OWORD *v47; // r8
  char *v48; // rax
  __int64 v49; // rbx
  char *v50; // rcx
  _DWORD *v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r11
  __int128 v55; // xmm0
  __int64 v56; // rdx
  int v57; // eax
  int v58; // eax
  _DWORD *v59; // r9
  unsigned int v60; // r8d
  __int64 v61; // rcx
  unsigned int *v62; // r9
  __int64 v63; // rcx
  char *v64; // r10
  __int64 v65; // rcx
  __int128 v66; // xmm0
  unsigned int v67; // ecx
  unsigned __int64 v68; // r8
  __int64 v69; // r9
  __int64 v70; // rax
  _QWORD *v71; // rcx
  _QWORD *v72; // rcx
  unsigned int v73; // ebx
  _QWORD *v74; // r12
  __int64 v75; // rsi
  unsigned int v76; // r9d
  __int64 v77; // r10
  _QWORD *v78; // r14
  __int64 v79; // r8
  __int64 v80; // rcx
  PIRP Irp; // rax
  __int64 v82; // rdx
  __int64 v83; // r8
  __int64 v84; // rdi
  _DWORD *v85; // rbx
  int v86; // [rsp+38h] [rbp-C9h]
  PVOID v87; // [rsp+40h] [rbp-C1h] BYREF
  __int64 v88; // [rsp+48h] [rbp-B9h]
  unsigned int *v89; // [rsp+50h] [rbp-B1h]
  __int64 v90; // [rsp+58h] [rbp-A9h]
  char *v91; // [rsp+60h] [rbp-A1h]
  __int64 v92; // [rsp+68h] [rbp-99h]
  volatile signed __int32 *v93; // [rsp+70h] [rbp-91h] BYREF
  _QWORD *v94; // [rsp+78h] [rbp-89h]
  _QWORD *v95; // [rsp+80h] [rbp-81h]
  _QWORD *v96; // [rsp+88h] [rbp-79h]
  PVOID P; // [rsp+90h] [rbp-71h]
  __int64 v98; // [rsp+98h] [rbp-69h]
  __int64 v99; // [rsp+A0h] [rbp-61h]
  __int64 v100; // [rsp+A8h] [rbp-59h]
  signed __int32 v101; // [rsp+B0h] [rbp-51h]
  int v102; // [rsp+B4h] [rbp-4Dh]
  __int64 v103; // [rsp+B8h] [rbp-49h]
  _DWORD *v104; // [rsp+C0h] [rbp-41h]
  __int64 v105; // [rsp+C8h] [rbp-39h]
  unsigned __int64 v106; // [rsp+D0h] [rbp-31h]
  __int64 v107; // [rsp+D8h] [rbp-29h]
  _QWORD *v108; // [rsp+E0h] [rbp-21h]
  __int64 v109; // [rsp+E8h] [rbp-19h]
  char *v110; // [rsp+F0h] [rbp-11h]
  __int64 v111; // [rsp+F8h] [rbp-9h]

  v9 = a5;
  v93 = 0LL;
  v87 = 0LL;
  v12 = 0LL;
  if ( !a5 || (a8 & 0x18) == 0x18 )
    return (unsigned int)-1073741811;
  v111 = a5;
  P = (PVOID)ExAllocatePool2(256LL, 12LL * a5, 1297630800LL);
  if ( !P )
    return (unsigned int)-1073741670;
  v86 = 0;
  v14 = 0;
  v15 = 0;
  for ( i = 0; i < a5; ++i )
  {
    v17 = a4 + 56LL * i;
    v18 = *(_DWORD *)(v17 + 28);
    if ( !v18
      || v18 > 1 && (!*(_QWORD *)a3 || !*((_QWORD *)a3 + 1) || !*((_QWORD *)a3 + 2) || *(_DWORD *)(v17 + 24) >= v18) )
    {
      goto LABEL_27;
    }
    v19 = v18 + v14;
    if ( v18 + v14 < v14 )
      goto LABEL_27;
    v20 = *(_DWORD *)(v17 + 40);
    v14 = v19;
    if ( v20 )
    {
      if ( v20 < a5 )
      {
        v21 = v20 + v15;
        if ( v20 + v15 >= v15 )
        {
          v15 += v20;
          v86 = v21;
          v22 = 0;
          while ( 1 )
          {
            v23 = *(unsigned int *)(*(_QWORD *)(v17 + 48) + 4LL * v22);
            if ( (unsigned int)v23 >= a5 )
              break;
            ++v22;
            ++*((_DWORD *)P + 3 * v23 + 2);
            if ( v22 >= *(_DWORD *)(v17 + 40) )
              goto LABEL_20;
          }
        }
      }
LABEL_27:
      v13 = -1073741811;
      goto LABEL_31;
    }
LABEL_20:
    ;
  }
  v88 = 0LL;
  v100 = 8LL * a5;
  v24 = 480LL * a5;
  v90 = v24;
  v89 = 0LL;
  v25 = 24LL * v14;
  v26 = v25 + v24;
  v27 = v25 + v24 + 288;
  if ( a7 <= 0 )
  {
    v27 = v25 + v24;
    v26 = 0LL;
  }
  v109 = v26;
  if ( v15 )
  {
    v88 = v27;
    v28 = 8LL * v15;
    v89 = (unsigned int *)(v28 + v27);
    v27 += v28 + v28;
  }
  v102 = a5 * dword_140C0C7EC;
  v103 = v27 + 24LL * a5 * dword_140C0C7EC;
  v99 = (int)(8 * a5) + 16LL;
  v98 = v99 + 40LL * a5;
  v29 = v25 + v98;
  v105 = v25 + v98;
  v30 = sub_1403BA6E0(a2, (__int64 **)&v93);
  if ( v30 >= 0 )
  {
    v87 = (PVOID)v93;
    _InterlockedOr(v93 + 58, 1u);
    v33 = (char *)v87;
    goto LABEL_36;
  }
  if ( v30 == -1073741738 )
  {
    v13 = -1073741661;
  }
  else
  {
    v35 = sub_1403BA410((__int64)a2, v31, v32, 0, (__int64 *)&v87);
    v33 = (char *)v87;
    v13 = v35;
    if ( v87 )
    {
      v24 = v90;
LABEL_36:
      IoInitializeRemoveLockEx((PIO_REMOVE_LOCK)(v33 + 240), 0x4D584650u, 0, 0, 0x20u);
      Pool2 = ExAllocatePool2(64LL, v103, 1297630800LL);
      if ( Pool2 && (v37 = (_QWORD *)ExAllocatePool2(64LL, v29, 1297630800LL), v108 = v37, (v38 = v37) != 0LL) )
      {
        v39 = *a3;
        v40 = v33 + 832;
        v41 = a3[1];
        *((_DWORD *)v33 + 207) = a5;
        *((_QWORD *)v33 + 104) = Pool2;
        *((_OWORD *)v33 + 7) = v39;
        v96 = v33 + 832;
        v42 = a3[2];
        *((_OWORD *)v33 + 8) = v41;
        v43 = a3[3];
        *((_OWORD *)v33 + 9) = v42;
        v44 = a3[4];
        *((_OWORD *)v33 + 10) = v43;
        *((_OWORD *)v33 + 11) = v44;
        *((_QWORD *)v33 + 24) = a6;
        *((_QWORD *)v33 + 75) = 0LL;
        v33 = (char *)v87;
        v45 = 0;
        v101 = _InterlockedCompareExchange(&dword_140C23CB0, 0, 0);
        v46 = Pool2 + v100;
        v47 = (_OWORD *)(Pool2 + v100);
        v100 += Pool2;
        *((_DWORD *)v87 + 154) = v101;
        *((_DWORD *)v33 + 153) = 5;
        *((_QWORD *)v33 + 159) = v33 + 1264;
        *((_QWORD *)v33 + 158) = v33 + 1264;
        *v37 = a8;
        v94 = (_QWORD *)(v24 + Pool2);
        v48 = (char *)v37 + v99;
        v38[2] = a5;
        v110 = v48;
        v91 = v48;
        LODWORD(v92) = 0;
        v95 = (_QWORD *)((char *)v38 + v98);
        v49 = v46 + 48;
        v50 = (char *)v89 + Pool2;
        if ( !v86 )
          v50 = 0LL;
        v98 = (__int64)v50;
        v51 = (_DWORD *)(Pool2 + v88);
        if ( !v86 )
          v51 = 0LL;
        v106 = v103 - 472;
        v52 = a4 + 32;
        v104 = v51;
        v53 = 0LL;
        v89 = (unsigned int *)((char *)P + 8);
        v88 = 0LL;
        v90 = a4 + 32;
        v54 = -48 - Pool2;
        v107 = -48 - Pool2;
        v99 = -16LL - (_QWORD)v38;
        while ( 1 )
        {
          *(_QWORD *)(v53 + *v40) = v47;
          if ( v54 + v49 > v106 )
            goto LABEL_73;
          v55 = *(_OWORD *)(v52 - 32);
          *(_DWORD *)(v49 - 32) = v45;
          *(_QWORD *)(v49 + 32) = v33;
          *v47 = v55;
          *(_QWORD *)(v49 - 8) = sub_1403B6010;
          *(_QWORD *)v49 = v47;
          *(_QWORD *)(v49 - 24) = 0LL;
          KeInitializeEvent((PRKEVENT)(v49 + 56), NotificationEvent, 1u);
          v56 = v90;
          *(_QWORD *)(v49 + 80) = 0LL;
          *(_DWORD *)(v49 + 108) = *(_DWORD *)(v56 - 4);
          *(_QWORD *)(v49 + 112) = v94;
          v57 = *(_DWORD *)(v56 - 8);
          *(_DWORD *)(v49 + 164) = -1;
          *(_DWORD *)(v49 + 120) = v57;
          *(_DWORD *)(v49 + 168) = v101;
          *(_QWORD *)(v49 + 416) = v49 + 408;
          *(_QWORD *)(v49 + 408) = v49 + 408;
          *(_QWORD *)(v49 + 400) = v49 + 392;
          *(_QWORD *)(v49 + 392) = v49 + 392;
          *(_QWORD *)(v49 + 152) = 0LL;
          v58 = *(_DWORD *)(v56 + 8);
          if ( v58 )
          {
            v59 = v104;
            v60 = 0;
            *(_QWORD *)(v49 + 128) = v104;
            *(_DWORD *)(v49 + 124) = v58;
            do
            {
              v61 = v60++;
              *v59 = *(_DWORD *)(*(_QWORD *)(v56 + 16) + 4 * v61);
              v59 += 2;
            }
            while ( v60 < *(_DWORD *)(v49 + 124) );
            v104 = v59;
          }
          v62 = v89;
          if ( *v89 )
          {
            v63 = v98;
            *(_QWORD *)(v49 + 144) = v98;
            v98 = v63 + 8LL * *v62;
          }
          v64 = v91;
          v65 = v99 + 16;
          *(_QWORD *)((char *)v38 + v88 + 16) = v91;
          if ( (unsigned __int64)&v64[v65] > v105 - 40 )
            goto LABEL_73;
          v66 = *(_OWORD *)(v56 - 32);
          v67 = 0;
          LODWORD(v91) = 0;
          *(_OWORD *)v64 = v66;
          *((_QWORD *)v64 + 2) = *(_QWORD *)(v56 - 16);
          *((_DWORD *)v64 + 7) = *(_DWORD *)(v56 - 4);
          *((_QWORD *)v64 + 4) = v95;
          *((_DWORD *)v64 + 6) = *(_DWORD *)(v56 - 8);
          if ( *(_DWORD *)(v49 + 108) )
          {
            v68 = v103 - 24;
            v90 = v103 - 24;
            while ( (unsigned __int64)v94 - Pool2 <= v68 )
            {
              v69 = *(_QWORD *)v56;
              v70 = v67;
              v71 = v94;
              *((_DWORD *)v94 + 4) = *(_DWORD *)(*(_QWORD *)v56 + 24 * v70 + 16);
              *v71 = *(_QWORD *)(v69 + 24 * v70);
              v71[1] = *(_QWORD *)(v69 + 24 * v70 + 8);
              v94 = v71 + 3;
              if ( (unsigned __int64)v95 + v99 + 16 > v105 - 24 )
                break;
              v72 = v95;
              *((_DWORD *)v95 + 4) = *(_DWORD *)(v69 + 24 * v70 + 16);
              *v72 = *(_QWORD *)(v69 + 24 * v70);
              v68 = v90;
              v72[1] = *(_QWORD *)(v69 + 24 * v70 + 8);
              v95 = v72 + 3;
              v67 = (_DWORD)v91 + 1;
              LODWORD(v91) = v67;
              if ( v67 >= *(_DWORD *)(v49 + 108) )
              {
                v62 = v89;
                goto LABEL_59;
              }
            }
            goto LABEL_73;
          }
LABEL_59:
          v91 = v64 + 40;
          v47 = (_OWORD *)(v100 + 472);
          v53 = v88 + 8;
          v45 = v92 + 1;
          v100 += 472LL;
          v52 = v56 + 56;
          LODWORD(v92) = v45;
          v88 += 8LL;
          v49 += 472LL;
          v90 = v52;
          v89 = v62 + 3;
          if ( v45 >= a5 )
            break;
          v40 = v96;
          v54 = v107;
        }
        *((_DWORD *)v33 + 210) = v102;
        *((_QWORD *)v33 + 106) = v27 + Pool2;
        if ( !v86 || (v13 = sub_14098E364(P, v33, a5), v13 >= 0) )
        {
          v73 = 0;
          v74 = v96;
          v75 = 0LL;
          do
          {
            v76 = 0;
            v77 = *(_QWORD *)(v75 + *v74);
            if ( *(_DWORD *)(v77 + 172) )
            {
              v78 = v96;
              do
              {
                v79 = *(_QWORD *)(*v78 + 8LL * *(unsigned int *)(*(_QWORD *)(v77 + 176) + 8LL * v76));
                v80 = *(unsigned int *)(v79 + 188);
                *(_DWORD *)(*(_QWORD *)(v79 + 192) + 8 * v80) = v73;
                *(_DWORD *)(*(_QWORD *)(v79 + 192) + 8 * v80 + 4) = v76++;
                ++*(_DWORD *)(v79 + 188);
              }
              while ( v76 < *(_DWORD *)(v77 + 172) );
              v9 = a5;
              v74 = v96;
            }
            sub_1403BA340((ULONG_PTR)v33, v77, 0, 1);
            ++v73;
            v75 += 8LL;
          }
          while ( v73 < v9 );
          v38 = v108;
          if ( a7 > 0 )
          {
            *((_QWORD *)v33 + 3) = Pool2 + v109;
            Irp = IoAllocateIrp(a7 + 2, 0);
            *((_QWORD *)v33 + 2) = Irp;
            if ( !Irp )
            {
LABEL_73:
              v13 = -1073741670;
              goto LABEL_86;
            }
          }
          if ( !(unsigned __int8)sub_1403BA01C(a1, (int)a2, (__int64)v33, (int)v38) )
            sub_1405CAE6C(0x601uLL, (ULONG_PTR)v33, (ULONG_PTR)v38, 0LL);
          sub_1403B9F08((__int64)v33, v82, v83);
          if ( (*(_QWORD *)v38 & 0x10) == 0 && ((*(_QWORD *)v38 & 8) != 0 || dword_140D014A8) )
          {
            _InterlockedOr((volatile signed __int32 *)v33 + 206, 0x80u);
            v33 = (char *)v87;
          }
          if ( v9 )
          {
            v84 = v111;
            v85 = v110 + 28;
            do
            {
              if ( (*(_BYTE *)(v85 - 3) & 2) != 0 )
                *(_DWORD *)(v46 + 92) |= 2u;
              *(_DWORD *)(v46 + 156) = *v85;
              sub_1403B9DF8(v46);
              v46 += 472LL;
              v85 += 10;
              --v84;
            }
            while ( v84 );
            v33 = (char *)v87;
          }
          Pool2 = 0LL;
          v13 = 0;
          *a9 = v33;
          v33 = 0LL;
        }
LABEL_86:
        ExFreePoolWithTag(v38, 0x4D584650u);
      }
      else
      {
        v13 = -1073741670;
      }
      v12 = (__int64 *)v93;
      if ( v33 && !v93 )
        ExFreePoolWithTag(v33, 0x4D584650u);
      if ( Pool2 )
        ExFreePoolWithTag((PVOID)Pool2, 0x4D584650u);
      goto LABEL_31;
    }
  }
  v12 = (__int64 *)v93;
LABEL_31:
  ExFreePoolWithTag(P, 0x4D584650u);
  if ( v12 )
    sub_1405CD938((__int64)v12);
  return (unsigned int)v13;
}
