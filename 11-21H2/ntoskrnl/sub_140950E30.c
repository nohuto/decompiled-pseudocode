/*
 * XREFs of sub_140950E30 @ 0x140950E30
 * Callers:
 *     IoReplacePartitionUnit @ 0x140943170 (IoReplacePartitionUnit.c)
 * Callees:
 *     KeIsEmptyAffinityEx @ 0x140292F90 (KeIsEmptyAffinityEx.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_140300030 @ 0x140300030 (sub_140300030.c)
 *     KeCheckProcessorAffinityEx @ 0x140345D30 (KeCheckProcessorAffinityEx.c)
 *     KeQueryActiveProcessorCountEx @ 0x140348830 (KeQueryActiveProcessorCountEx.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14035BE00 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x14035BFE0 (KeSetSystemGroupAffinityThread.c)
 *     sub_1403D99B4 @ 0x1403D99B4 (sub_1403D99B4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140562F78 @ 0x140562F78 (sub_140562F78.c)
 *     KeFindFirstSetLeftAffinityEx @ 0x14056C170 (KeFindFirstSetLeftAffinityEx.c)
 *     MmUnloadSystemImage @ 0x140762490 (MmUnloadSystemImage.c)
 *     sub_140951C58 @ 0x140951C58 (sub_140951C58.c)
 *     sub_140951DE0 @ 0x140951DE0 (sub_140951DE0.c)
 *     sub_14095212C @ 0x14095212C (sub_14095212C.c)
 *     sub_14095239C @ 0x14095239C (sub_14095239C.c)
 *     sub_140952854 @ 0x140952854 (sub_140952854.c)
 *     sub_1409528A8 @ 0x1409528A8 (sub_1409528A8.c)
 *     sub_140952A20 @ 0x140952A20 (sub_140952A20.c)
 *     sub_140952A54 @ 0x140952A54 (sub_140952A54.c)
 *     sub_140952B80 @ 0x140952B80 (sub_140952B80.c)
 *     sub_140952C54 @ 0x140952C54 (sub_140952C54.c)
 *     sub_140953048 @ 0x140953048 (sub_140953048.c)
 *     sub_140953154 @ 0x140953154 (sub_140953154.c)
 *     sub_140953314 @ 0x140953314 (sub_140953314.c)
 *     sub_140A67C14 @ 0x140A67C14 (sub_140A67C14.c)
 *     sub_140A67C74 @ 0x140A67C74 (sub_140A67C74.c)
 *     sub_140A68674 @ 0x140A68674 (sub_140A68674.c)
 *     sub_140A6927C @ 0x140A6927C (sub_140A6927C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

LONG __fastcall sub_140950E30(_QWORD *a1)
{
  ULONG ActiveProcessorCount; // eax
  __int64 v3; // r15
  ULONG_PTR v4; // r10
  __int64 v5; // rcx
  ULONG_PTR v6; // r8
  __int64 v7; // rcx
  __int64 Pool2; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  int v12; // esi
  __int64 v13; // rcx
  _WORD *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rbx
  ULONG_PTR v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rcx
  _WORD *v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rbx
  ULONG_PTR v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rcx
  PDEVICE_OBJECT *v45; // r14
  int v46; // eax
  int v47; // eax
  __int64 v48; // rcx
  int v49; // eax
  int v50; // eax
  int v51; // ecx
  int v52; // eax
  char v53; // r12
  int v54; // eax
  __int64 v55; // rcx
  int v56; // eax
  int v57; // edx
  int v58; // eax
  int v59; // eax
  __int64 v60; // rdx
  unsigned int v61; // eax
  __int64 v62; // rdx
  _QWORD *v63; // rcx
  __int64 v64; // r8
  int v65; // eax
  int v66; // eax
  int FirstSetLeftAffinity; // eax
  unsigned int v68; // ecx
  __int64 v69; // r14
  void *v70; // rcx
  __int64 v71; // r14
  void *v72; // rcx
  void *v73; // rcx
  void *v74; // rcx
  void *v75; // rcx
  ULONG Affinity; // [rsp+38h] [rbp-D0h]
  _GROUP_AFFINITY Affinity_8; // [rsp+40h] [rbp-C8h] BYREF
  _GROUP_AFFINITY PreviousAffinity_8; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v80[7]; // [rsp+60h] [rbp-A8h] BYREF
  int v81; // [rsp+98h] [rbp-70h]
  _DWORD v82[68]; // [rsp+A8h] [rbp-60h] BYREF

  Affinity_8 = 0LL;
  memset(&v82[2], 0, 0x100uLL);
  v81 = 0;
  PreviousAffinity_8 = 0LL;
  memset(v80, 0, sizeof(v80));
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  v3 = ActiveProcessorCount;
  Affinity = ActiveProcessorCount;
  KeWaitForSingleObject(&stru_140C448C0, Executive, 0, 0, 0LL);
  if ( *((int *)a1 + 4) >= 0 )
  {
    v4 = a1[1];
    if ( !v4
      || (v5 = *(_QWORD *)(*(_QWORD *)(v4 + 312) + 40LL)) == 0
      || _bittest((const signed __int32 *)(v5 + 396), 0x11u) )
    {
      if ( v4 )
      {
        sub_1403D99B4(a1[1], (PVOID)*(unsigned __int16 *)(v4 + 2));
        v4 = a1[1];
        v28 = *(_QWORD *)(v4 + 8);
        if ( v28 )
        {
          sub_1403D99B4(v28, (PVOID)(unsigned int)*(__int16 *)(v28 + 2));
          v4 = a1[1];
          v29 = (_WORD *)(*(_QWORD *)(v4 + 8) + 56LL);
          if ( *v29 )
          {
            sub_1403D99B4((ULONG)v29, (PVOID)2);
            sub_1403D99B4(
              *(_QWORD *)(*(_QWORD *)(a1[1] + 8LL) + 64LL),
              (PVOID)*(unsigned __int16 *)(*(_QWORD *)(a1[1] + 8LL) + 56LL));
            v4 = a1[1];
          }
        }
        if ( v4 )
        {
          v30 = *(_QWORD *)(v4 + 312);
          v31 = *(_QWORD *)(v30 + 40);
          if ( v31 )
          {
            v32 = *(_QWORD *)(v30 + 40);
            sub_1403D99B4(v31, (PVOID)0x310);
            if ( *(_WORD *)(v32 + 40) )
            {
              sub_1403D99B4(v32 + 40, (PVOID)2);
              sub_1403D99B4(*(_QWORD *)(v32 + 48), (PVOID)*(unsigned __int16 *)(v32 + 40));
            }
            v33 = a1[1];
            if ( v33 )
              v34 = *(_QWORD *)(*(_QWORD *)(v33 + 312) + 40LL);
            else
              v34 = 0LL;
            if ( *(_WORD *)(v34 + 56) )
            {
              if ( v33 )
                v35 = *(_QWORD *)(*(_QWORD *)(v33 + 312) + 40LL);
              else
                LODWORD(v35) = 0;
              sub_1403D99B4(v35 + 56, (PVOID)2);
              v36 = a1[1];
              if ( v36 )
              {
                v37 = *(_QWORD *)(*(_QWORD *)(v36 + 312) + 40LL);
                v38 = v37;
              }
              else
              {
                v37 = 0LL;
                v38 = 0LL;
              }
              sub_1403D99B4(*(_QWORD *)(v38 + 64), (PVOID)*(unsigned __int16 *)(v37 + 56));
              v33 = a1[1];
            }
            if ( v33 )
              v39 = *(_QWORD *)(*(_QWORD *)(v33 + 312) + 40LL);
            else
              v39 = 0LL;
            v4 = v33;
            if ( *(_QWORD *)(v39 + 16) )
            {
              v40 = v33 ? *(_QWORD *)(*(_QWORD *)(v33 + 312) + 40LL) : 0LL;
              if ( *(_WORD *)(*(_QWORD *)(v40 + 16) + 56LL) )
              {
                if ( v33 )
                  v41 = *(_QWORD *)(*(_QWORD *)(v33 + 312) + 40LL);
                else
                  v41 = 0LL;
                sub_1403D99B4(*(_QWORD *)(v41 + 16) + 56, (PVOID)2);
                v42 = a1[1];
                if ( v42 )
                {
                  v43 = *(_QWORD *)(*(_QWORD *)(v42 + 312) + 40LL);
                  v44 = v43;
                }
                else
                {
                  v43 = 0LL;
                  v44 = 0LL;
                }
                sub_1403D99B4(
                  *(_QWORD *)(*(_QWORD *)(v44 + 16) + 64LL),
                  (PVOID)*(unsigned __int16 *)(*(_QWORD *)(v43 + 16) + 56LL));
                v4 = a1[1];
              }
            }
          }
        }
      }
      KeBugCheckEx(0xCAu, 2uLL, v4, 0LL, 0LL);
    }
    v6 = *a1;
    if ( !*a1
      || (v7 = *(_QWORD *)(*(_QWORD *)(v6 + 312) + 40LL)) == 0
      || _bittest((const signed __int32 *)(v7 + 396), 0x11u) )
    {
      if ( v6 )
      {
        sub_1403D99B4(*a1, (PVOID)*(unsigned __int16 *)(v6 + 2));
        v6 = *a1;
        v13 = *(_QWORD *)(*a1 + 8LL);
        if ( v13 )
        {
          sub_1403D99B4(v13, (PVOID)(unsigned int)*(__int16 *)(v13 + 2));
          v6 = *a1;
          v14 = (_WORD *)(*(_QWORD *)(*a1 + 8LL) + 56LL);
          if ( *v14 )
          {
            sub_1403D99B4((ULONG)v14, (PVOID)2);
            sub_1403D99B4(
              *(_QWORD *)(*(_QWORD *)(*a1 + 8LL) + 64LL),
              (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*a1 + 8LL) + 56LL));
            v6 = *a1;
          }
        }
        if ( v6 )
        {
          v15 = *(_QWORD *)(v6 + 312);
          v16 = *(_QWORD *)(v15 + 40);
          if ( v16 )
          {
            v17 = *(_QWORD *)(v15 + 40);
            sub_1403D99B4(v16, (PVOID)0x310);
            if ( *(_WORD *)(v17 + 40) )
            {
              sub_1403D99B4(v17 + 40, (PVOID)2);
              sub_1403D99B4(*(_QWORD *)(v17 + 48), (PVOID)*(unsigned __int16 *)(v17 + 40));
            }
            v18 = *a1;
            if ( *a1 )
              v19 = *(_QWORD *)(*(_QWORD *)(v18 + 312) + 40LL);
            else
              v19 = 0LL;
            if ( *(_WORD *)(v19 + 56) )
            {
              if ( v18 )
                v20 = *(_QWORD *)(*(_QWORD *)(v18 + 312) + 40LL);
              else
                LODWORD(v20) = 0;
              sub_1403D99B4(v20 + 56, (PVOID)2);
              if ( *a1 )
              {
                v21 = *(_QWORD *)(*(_QWORD *)(*a1 + 312LL) + 40LL);
                v22 = v21;
              }
              else
              {
                v21 = 0LL;
                v22 = 0LL;
              }
              sub_1403D99B4(*(_QWORD *)(v22 + 64), (PVOID)*(unsigned __int16 *)(v21 + 56));
              v18 = *a1;
            }
            if ( v18 )
              v23 = *(_QWORD *)(*(_QWORD *)(v18 + 312) + 40LL);
            else
              v23 = 0LL;
            v6 = v18;
            if ( *(_QWORD *)(v23 + 16) )
            {
              v24 = v18 ? *(_QWORD *)(*(_QWORD *)(v18 + 312) + 40LL) : 0LL;
              if ( *(_WORD *)(*(_QWORD *)(v24 + 16) + 56LL) )
              {
                if ( v18 )
                  v25 = *(_QWORD *)(*(_QWORD *)(v18 + 312) + 40LL);
                else
                  v25 = 0LL;
                sub_1403D99B4(*(_QWORD *)(v25 + 16) + 56, (PVOID)2);
                if ( *a1 )
                {
                  v26 = *(_QWORD *)(*(_QWORD *)(*a1 + 312LL) + 40LL);
                  v27 = v26;
                }
                else
                {
                  v26 = 0LL;
                  v27 = 0LL;
                }
                sub_1403D99B4(
                  *(_QWORD *)(*(_QWORD *)(v27 + 16) + 64LL),
                  (PVOID)*(unsigned __int16 *)(*(_QWORD *)(v26 + 16) + 56LL));
                v6 = *a1;
              }
            }
          }
        }
      }
      KeBugCheckEx(0xCAu, 2uLL, v6, 0LL, 0LL);
    }
    sub_140952B80(*a1, a1[1]);
  }
  Pool2 = ExAllocatePool2(64LL, 33336LL, 1366322768LL);
  v11 = Pool2;
  if ( !Pool2 )
  {
    v12 = -1073741670;
    goto LABEL_157;
  }
  *(_QWORD *)Pool2 = *a1;
  v45 = (PDEVICE_OBJECT *)(Pool2 + 32);
  *(_QWORD *)(Pool2 + 32) = a1[1];
  *(_DWORD *)(Pool2 + 64) = *((_DWORD *)a1 + 4);
  *(_QWORD *)(Pool2 + 160) = Pool2 + 152;
  *(_QWORD *)(Pool2 + 152) = Pool2 + 152;
  qword_140C448A8 = Pool2;
  if ( !KeDynamicPartitioningSupported && *((int *)a1 + 4) >= 0 )
  {
    v46 = *(_DWORD *)(Pool2 + 33272);
    v10 = 170LL;
    v12 = -1073741637;
    if ( !v46 )
      v46 = 170;
    *(_DWORD *)(v11 + 33272) = v46;
    v47 = *(_DWORD *)(v11 + 33276);
    if ( !v47 )
      v47 = 2;
    *(_DWORD *)(v11 + 33276) = v47;
    goto LABEL_88;
  }
  if ( (unsigned __int8)sub_140952854() )
  {
    v10 = qword_140C448A8;
    v12 = -1073741621;
    v49 = *(_DWORD *)(qword_140C448A8 + 33272);
    if ( !v49 )
      v49 = 182;
    v9 = 7LL;
    *(_DWORD *)(qword_140C448A8 + 33272) = v49;
    v50 = *(_DWORD *)(v10 + 33276);
    if ( !v50 )
      v50 = 7;
LABEL_94:
    *(_DWORD *)(v10 + 33276) = v50;
LABEL_88:
    v3 = Affinity;
    goto LABEL_157;
  }
  LOBYTE(v48) = 1;
  sub_140A67C14(v48);
  if ( *((int *)a1 + 4) < 0 )
  {
    sub_140952A20();
    sub_140A68674(v80);
    sub_140A6927C(v80);
    sub_140953314();
    v12 = 0;
    goto LABEL_88;
  }
  v12 = sub_14095239C(*(PDEVICE_OBJECT *)v11, *v45);
  if ( v12 < 0 )
  {
    v9 = qword_140C448A8;
    v51 = *(_DWORD *)(qword_140C448A8 + 33272);
    if ( !v51 )
      v51 = 219;
    *(_DWORD *)(qword_140C448A8 + 33272) = v51;
    v10 = *(unsigned int *)(v9 + 33276);
    if ( !(_DWORD)v10 )
      v10 = 3LL;
    *(_DWORD *)(v9 + 33276) = v10;
    goto LABEL_88;
  }
  v12 = sub_140951DE0(v11, v11 + 32);
  if ( v12 < 0 )
  {
    v9 = 232LL;
LABEL_105:
    v10 = qword_140C448A8;
    v52 = *(_DWORD *)(qword_140C448A8 + 33272);
    if ( !v52 )
      v52 = v9;
    *(_DWORD *)(qword_140C448A8 + 33272) = v52;
    v50 = *(_DWORD *)(v10 + 33276);
    if ( !v50 )
      v50 = 1;
    goto LABEL_94;
  }
  v53 = 0;
  v12 = sub_1409528A8(v11 + 33152, v11 + 33176);
  if ( v12 < 0 )
  {
    v55 = *(_QWORD *)(v11 + 24);
    if ( *(_DWORD *)(v55 + 4) )
    {
      v9 = 258LL;
      goto LABEL_105;
    }
  }
  else
  {
    v54 = sub_140562F78(v11 + 33176, (PDEVICE_OBJECT *)(v11 + 32));
    *(_DWORD *)(v11 + 64) |= v54;
    v53 = v54;
    v55 = *(_QWORD *)(v11 + 24);
  }
  if ( *(_DWORD *)(v55 + 4) )
  {
    v56 = *(_DWORD *)(v11 + 33184);
    if ( (v56 & 1) == 0 || !*(_QWORD *)(v11 + 33216) )
    {
      v57 = 273;
      goto LABEL_133;
    }
    if ( (v56 & 2) != 0 && !*(_QWORD *)(v11 + 33224) )
    {
      v57 = 281;
LABEL_133:
      v3 = Affinity;
LABEL_134:
      v10 = qword_140C448A8;
      v12 = -1073741637;
      v58 = *(_DWORD *)(qword_140C448A8 + 33272);
      if ( !v58 )
        v58 = v57;
      v9 = 9LL;
LABEL_137:
      *(_DWORD *)(v10 + 33272) = v58;
      v59 = *(_DWORD *)(v10 + 33276);
      if ( !v59 )
        v59 = v9;
      *(_DWORD *)(v10 + 33276) = v59;
      goto LABEL_157;
    }
    v12 = sub_140953048(v55, v11 + 152);
    if ( v12 < 0 )
    {
      v9 = 293LL;
      goto LABEL_105;
    }
    if ( (v53 & 8) != 0 )
    {
      *(_DWORD *)(*(_QWORD *)(v11 + 56) + 4LL) = 0;
    }
    else if ( !*(_QWORD *)(v11 + 33256) || (*(_DWORD *)(v11 + 64) & 0x20) != 0 )
    {
      v57 = 317;
      goto LABEL_133;
    }
    v3 = Affinity;
    v12 = sub_140951C58(v11 + 136, v11 + 144, Affinity);
    if ( v12 < 0 )
    {
      v10 = qword_140C448A8;
      v58 = *(_DWORD *)(qword_140C448A8 + 33272);
      if ( !v58 )
        v58 = 332;
      v9 = 10LL;
      goto LABEL_137;
    }
    *(_QWORD *)(v11 + 168) = 0LL;
  }
  else
  {
    v3 = Affinity;
  }
  if ( (*(_DWORD *)(v11 + 64) & 0x20) != 0 && !*(_QWORD *)(v11 + 33264) )
  {
    v57 = 352;
    goto LABEL_134;
  }
  *(_DWORD *)(v11 + 176) = v3;
  v82[0] = 2097153;
  memset(&v82[1], 0, 0x104uLL);
  sub_140300030((__int64)v82, 0x20u, (unsigned __int16 *)dword_140D06E40);
  v60 = *(_QWORD *)(v11 + 16);
  v61 = *(_DWORD *)(v60 + 8);
  if ( v61 )
  {
    v62 = *(_QWORD *)v60 - (_QWORD)&v82[2];
    v63 = &v82[2];
    v64 = v61;
    do
    {
      *v63 &= ~*(_QWORD *)((char *)v63 + v62);
      ++v63;
      --v64;
    }
    while ( v64 );
  }
  if ( (unsigned int)KeIsEmptyAffinityEx(v82) )
  {
    v10 = qword_140C448A8;
    v12 = -1073741621;
    v65 = *(_DWORD *)(qword_140C448A8 + 33272);
    if ( !v65 )
      v65 = 379;
    v9 = 6LL;
    *(_DWORD *)(qword_140C448A8 + 33272) = v65;
    v66 = *(_DWORD *)(v10 + 33276);
    if ( !v66 )
      v66 = 6;
    *(_DWORD *)(v10 + 33276) = v66;
  }
  else
  {
    if ( (unsigned int)KeCheckProcessorAffinityEx((unsigned __int16 *)v82, 0) )
      FirstSetLeftAffinity = 0;
    else
      FirstSetLeftAffinity = KeFindFirstSetLeftAffinityEx((unsigned __int16 *)v82);
    *(_DWORD *)(v11 + 180) = FirstSetLeftAffinity;
    v68 = dword_140D0E5E0[FirstSetLeftAffinity];
    *(_QWORD *)&Affinity_8.Group = (unsigned __int16)(v68 >> 6);
    Affinity_8.Mask = 1LL << (v68 & 0x3F);
    KeSetSystemGroupAffinityThread(&Affinity_8, &PreviousAffinity_8);
    v12 = sub_140A67C74();
    KeRevertToUserGroupAffinityThread(&PreviousAffinity_8);
  }
LABEL_157:
  if ( *((int *)a1 + 4) >= 0 )
  {
    if ( v12 < 0 )
    {
      sub_140952A54(*a1, a1[1], (unsigned int)v12);
    }
    else
    {
      *(_DWORD *)(v11 + 33328) = sub_140A67C14(0LL);
      sub_140952C54();
    }
  }
  if ( v11 )
  {
    v69 = *(_QWORD *)(v11 + 33152);
    if ( v69 )
    {
      if ( *(_QWORD *)(v11 + 33192) )
        sub_14042A5E0(v10, v9);
      MmUnloadSystemImage(v69);
    }
    v70 = *(void **)(v11 + 136);
    if ( v70 && *(_QWORD *)(v11 + 144) )
    {
      if ( (_DWORD)v3 )
      {
        v71 = 0LL;
        do
        {
          sub_14095212C(v71 + *(_QWORD *)(v11 + 136));
          sub_14095212C(v71 + *(_QWORD *)(v11 + 144));
          v71 += 24LL;
          --v3;
        }
        while ( v3 );
        v70 = *(void **)(v11 + 136);
      }
      ExFreePoolWithTag(v70, 0x51706E50u);
      ExFreePoolWithTag(*(PVOID *)(v11 + 144), 0x51706E50u);
    }
    sub_140953154(v11 + 152);
    v72 = *(void **)(v11 + 16);
    if ( v72 )
    {
      ExFreePoolWithTag(v72, 0x51706E50u);
      *(_QWORD *)(v11 + 16) = 0LL;
    }
    v73 = *(void **)(v11 + 24);
    if ( v73 )
    {
      ExFreePoolWithTag(v73, 0x51706E50u);
      *(_QWORD *)(v11 + 24) = 0LL;
    }
    v74 = *(void **)(v11 + 48);
    if ( v74 )
    {
      ExFreePoolWithTag(v74, 0x51706E50u);
      *(_QWORD *)(v11 + 48) = 0LL;
    }
    v75 = *(void **)(v11 + 56);
    if ( v75 )
    {
      ExFreePoolWithTag(v75, 0x51706E50u);
      *(_QWORD *)(v11 + 56) = 0LL;
    }
    ExFreePoolWithTag((PVOID)v11, 0x51706E50u);
  }
  KeSetEvent(&stru_140C448C0, 0, 0);
  *((_DWORD *)a1 + 5) = v12;
  return KeSetEvent((PRKEVENT)a1 + 1, 0, 0);
}
