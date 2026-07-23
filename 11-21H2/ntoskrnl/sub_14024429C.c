/*
 * XREFs of sub_14024429C @ 0x14024429C
 * Callers:
 *     SeAccessCheckWithHint @ 0x1402F9CF0 (SeAccessCheckWithHint.c)
 *     sub_1402FBEC0 @ 0x1402FBEC0 (sub_1402FBEC0.c)
 *     sub_140383ABC @ 0x140383ABC (sub_140383ABC.c)
 *     sub_140722B40 @ 0x140722B40 (sub_140722B40.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1405F462C @ 0x1405F462C (sub_1405F462C.c)
 *     sub_1405F47B0 @ 0x1405F47B0 (sub_1405F47B0.c)
 *     sub_1407B3B60 @ 0x1407B3B60 (sub_1407B3B60.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void __fastcall sub_14024429C(char *Object, __int64 a2, __int64 a3, ULONGLONG a4, __int64 a5, char a6, char a7)
{
  char v7; // bl
  char v9; // cl
  const wchar_t *v10; // rax
  __int64 v11; // rax
  __int64 v12; // r13
  unsigned __int16 *v13; // rcx
  __int64 v14; // r8
  int v15; // eax
  const WCHAR *v16; // rdx
  unsigned __int16 *v17; // r8
  const WCHAR *v18; // rdx
  unsigned __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rax
  int v22; // ecx
  const WCHAR *v23; // rdx
  __int64 v24; // rax
  int *v25; // rax
  unsigned int v26; // ebx
  _DWORD *Pool2; // rax
  __int64 *v28; // r9
  _DWORD *v29; // rdi
  int *v30; // rax
  unsigned int v31; // edi
  int **v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rdx
  ULONGLONG v35; // rcx
  int v36; // eax
  unsigned int v37; // eax
  ULONG v38; // r15d
  __int64 v39; // r10
  __int64 v40; // rax
  void *v41; // rax
  _DWORD *v42; // r12
  unsigned int v43; // ecx
  unsigned int v44; // r13d
  __int64 v45; // rbx
  unsigned __int8 *v46; // rdx
  __int64 v47; // rax
  unsigned int v48; // edi
  __int64 v49; // rax
  __int64 v50; // rax
  ULONGLONG v51; // r8
  unsigned int v52; // edx
  __int64 v53; // rcx
  int v54; // eax
  __int64 v55; // rax
  unsigned int v56; // edx
  __int64 v57; // rcx
  unsigned int v58; // edx
  __int16 v59; // r9
  __int64 v60; // rax
  unsigned __int8 *v61; // r8
  __int64 v62; // rcx
  unsigned int v63; // edx
  int v64; // eax
  __int64 v65; // rax
  unsigned __int8 *v66; // r8
  __int64 v67; // rcx
  unsigned int v68; // edx
  int v69; // eax
  __int64 v70; // rax
  ULONGLONG v71; // rdi
  unsigned int v72; // ebx
  __int64 v73; // r15
  int v74; // eax
  PVOID v75; // r12
  __int64 v76; // rax
  __int64 v77; // rcx
  __int64 v78; // rax
  __int64 v79; // rax
  unsigned int v80; // ecx
  __int64 v81; // rax
  ULONGLONG v82; // rdi
  unsigned int v83; // ebx
  __int64 v84; // r14
  int v85; // eax
  PVOID v86; // rdi
  __int64 v87; // rax
  __int64 v88; // rcx
  __int64 v89; // rax
  char v90; // [rsp+48h] [rbp-C0h] BYREF
  char v91; // [rsp+49h] [rbp-BFh]
  char v92[2]; // [rsp+4Ah] [rbp-BEh] BYREF
  _WORD v93[2]; // [rsp+4Ch] [rbp-BCh] BYREF
  __int16 v94[2]; // [rsp+50h] [rbp-B8h] BYREF
  int v95; // [rsp+54h] [rbp-B4h] BYREF
  int v96; // [rsp+58h] [rbp-B0h] BYREF
  int v97; // [rsp+5Ch] [rbp-ACh] BYREF
  unsigned int v98; // [rsp+60h] [rbp-A8h] BYREF
  int v99; // [rsp+64h] [rbp-A4h] BYREF
  int v100; // [rsp+68h] [rbp-A0h] BYREF
  int v101; // [rsp+6Ch] [rbp-9Ch] BYREF
  __int64 v102; // [rsp+70h] [rbp-98h] BYREF
  PVOID v103; // [rsp+78h] [rbp-90h] BYREF
  PVOID v104; // [rsp+80h] [rbp-88h]
  int v105; // [rsp+88h] [rbp-80h] BYREF
  unsigned int v106; // [rsp+8Ch] [rbp-7Ch]
  PVOID v107; // [rsp+90h] [rbp-78h] BYREF
  __int64 v108; // [rsp+98h] [rbp-70h]
  ULONGLONG v109; // [rsp+A0h] [rbp-68h]
  PVOID P; // [rsp+A8h] [rbp-60h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+B8h] [rbp-50h] BYREF
  const WCHAR *v112; // [rsp+C8h] [rbp-40h]
  int v113; // [rsp+D0h] [rbp-38h]
  int v114; // [rsp+D4h] [rbp-34h]
  const WCHAR *v115; // [rsp+D8h] [rbp-30h]
  int v116; // [rsp+E0h] [rbp-28h]
  int v117; // [rsp+E4h] [rbp-24h]
  const WCHAR *v118; // [rsp+E8h] [rbp-20h]
  int v119; // [rsp+F0h] [rbp-18h]
  int v120; // [rsp+F4h] [rbp-14h]
  const WCHAR *v121; // [rsp+F8h] [rbp-10h]
  __int64 v122; // [rsp+100h] [rbp-8h]
  char *v123; // [rsp+108h] [rbp+0h]
  __int64 v124; // [rsp+110h] [rbp+8h]
  int *v125; // [rsp+118h] [rbp+10h]
  __int64 v126; // [rsp+120h] [rbp+18h]
  int *v127; // [rsp+128h] [rbp+20h]
  __int64 v128; // [rsp+130h] [rbp+28h]
  char *v129; // [rsp+138h] [rbp+30h]
  __int64 v130; // [rsp+140h] [rbp+38h]
  int *v131; // [rsp+148h] [rbp+40h]
  __int64 v132; // [rsp+150h] [rbp+48h]
  int *v133; // [rsp+158h] [rbp+50h]
  __int64 v134; // [rsp+160h] [rbp+58h]
  _DWORD *v135; // [rsp+168h] [rbp+60h] BYREF
  unsigned int v136; // [rsp+170h] [rbp+68h]
  int v137; // [rsp+174h] [rbp+6Ch]
  char v138; // [rsp+178h] [rbp+70h] BYREF

  v7 = a7;
  v9 = 0;
  v109 = a4;
  v91 = 0;
  v104 = 0LL;
  v98 = 0;
  LOBYTE(v94[0]) = 0;
  v107 = 0LL;
  LOWORD(v95) = 0;
  v102 = 0LL;
  v103 = 0LL;
  LOWORD(v96) = 0;
  v92[0] = 0;
  v100 = 0;
  v101 = 1;
  v99 = 0;
  v97 = 0;
  v90 = 0;
  v93[0] = 0;
  if ( KeGetCurrentIrql() >= 2u || !qword_140C16478 )
    return;
  if ( Object )
  {
    v99 = *((_DWORD *)Object + 48);
    v100 = *((_DWORD *)Object + 49);
  }
  else
  {
    Object = (char *)sub_1407B3B60(KeGetCurrentThread(), 1732535635LL, &v99, v94, &v100, 0LL);
    if ( !Object )
      return;
    v9 = 1;
    v91 = 1;
  }
  if ( (*((_DWORD *)Object + 50) & 0x400000) == 0 )
  {
    if ( v9 )
      ObfDereferenceObjectWithTag(Object, 0x67446553u);
    return;
  }
  UserData.Reserved = 0;
  v10 = L"Normal";
  if ( v7 )
    v10 = L"Permissive";
  UserData.Ptr = (ULONGLONG)v10;
  UserData.Size = v7 != 0 ? 22 : 14;
  v11 = sub_1405F47B0(v92);
  v108 = v11;
  v12 = v11;
  if ( v11 && (v13 = *(unsigned __int16 **)(v11 + 16)) != 0LL )
  {
    v14 = *v13;
    v15 = v14 + 2;
    if ( v14 + 2 >= (unsigned __int64)v13[1] )
      v15 = v13[1];
    v16 = (const WCHAR *)*((_QWORD *)v13 + 1);
  }
  else
  {
    v15 = 2;
    v16 = &word_1404370A0;
  }
  v112 = v16;
  v113 = v15;
  v114 = 0;
  if ( v12 && (v17 = *(unsigned __int16 **)(v12 + 24)) != 0LL )
  {
    if ( *(_QWORD *)(v12 + 32) && (v18 = *(const WCHAR **)(v12 + 48)) != 0LL )
    {
      LODWORD(v19) = *(unsigned __int16 *)(v12 + 42);
    }
    else
    {
      v20 = *v17;
      v19 = v17[1];
      if ( v20 + 2 < v19 )
        LODWORD(v19) = v20 + 2;
      v18 = (const WCHAR *)*((_QWORD *)v17 + 1);
    }
  }
  else
  {
    LODWORD(v19) = 2;
    v18 = &word_1404370A0;
  }
  v117 = 0;
  v115 = v18;
  v116 = v19;
  v21 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 68) + 1472LL);
  if ( v21 )
  {
    v22 = *(unsigned __int16 *)(v21 + 2);
    v23 = *(const WCHAR **)(v21 + 8);
  }
  else
  {
    v22 = 2;
    v23 = &word_1404370A0;
  }
  v118 = v23;
  v119 = v22;
  v123 = &a6;
  v125 = &v99;
  v127 = &v100;
  v129 = Object + 120;
  v120 = 0;
  v121 = &word_1404370A0;
  v122 = 2LL;
  v124 = 4LL;
  v126 = 4LL;
  v128 = 4LL;
  v130 = 4LL;
  v24 = *((_QWORD *)Object + 135);
  if ( v24 )
    v25 = (int *)(v24 + 40);
  else
    v25 = &v97;
  v131 = v25;
  v132 = 4LL;
  v105 = 1;
  v26 = 4 * *(unsigned __int8 *)(**((_QWORD **)Object + 19) + 1LL) + 12;
  Pool2 = (_DWORD *)ExAllocatePool2(256LL, v26, 1767073107LL, &word_1404370A0);
  P = Pool2;
  v29 = Pool2;
  if ( Pool2 )
  {
    *Pool2 = *(_DWORD *)(*((_QWORD *)Object + 19) + 8LL);
    memmove(
      Pool2 + 1,
      **((const void ***)Object + 19),
      4LL * *(unsigned __int8 *)(**((_QWORD **)Object + 19) + 1LL) + 8);
    v135 = v29;
    v30 = &v105;
    v31 = 13;
    v136 = v26;
    v32 = (int **)&v138;
    v137 = 0;
  }
  else
  {
    v30 = &v97;
    v31 = 12;
    v32 = &v135;
  }
  v134 = 4LL;
  v133 = v30;
  v33 = *((_QWORD *)Object + 98);
  v32[1] = (int *)4;
  if ( v33 )
  {
    *v32 = &v101;
    v34 = 2LL * v31;
    v35 = *((_QWORD *)Object + 98);
    ++v31;
    v36 = *(unsigned __int8 *)(v35 + 1);
    *(&UserData.Ptr + v34) = v35;
    *(&UserData.Reserved + 2 * v34) = 0;
    *(&UserData.Size + 2 * v34) = 4 * v36 + 8;
  }
  else
  {
    *v32 = &v97;
  }
  if ( *((_DWORD *)Object + 200) )
  {
    v37 = *((_DWORD *)Object + 200);
    v38 = 0;
    if ( v37 )
    {
      v28 = (__int64 *)*((_QWORD *)Object + 99);
      v39 = v37;
      do
      {
        v40 = *v28;
        v28 += 2;
        v38 += 4 * *(unsigned __int8 *)(v40 + 1) + 12;
        --v39;
      }
      while ( v39 );
    }
    v41 = (void *)ExAllocatePool2(256LL, v38, 1767073107LL, v28);
    v104 = v41;
    v42 = v41;
    if ( v41 )
    {
      v43 = *((_DWORD *)Object + 200);
      v106 = 0;
      v98 = v43;
      if ( v43 )
      {
        v44 = v106;
        do
        {
          v45 = 2LL * v44;
          *v42 = *(_DWORD *)(*((_QWORD *)Object + 99) + 16LL * v44 + 8);
          v46 = *(unsigned __int8 **)(*((_QWORD *)Object + 99) + 16LL * v44);
          memmove(v42 + 1, v46, 4LL * v46[1] + 8);
          ++v44;
          v43 = v98;
          v42 += *(unsigned __int8 *)(*(_QWORD *)(*((_QWORD *)Object + 99) + 8 * v45) + 1LL) + 3;
        }
        while ( v44 < v98 );
        v12 = v108;
        v42 = v104;
      }
      else
      {
        v42 = v41;
      }
    }
    else
    {
      v43 = v98;
    }
    v47 = 2LL * v31;
    v48 = v31 + 1;
    *(&UserData.Reserved + 2 * v47) = 0;
    *(&UserData.Ptr + v47) = (ULONGLONG)&v98;
    *(&UserData.Size + 2 * v47) = 4;
    if ( v43 )
    {
      v49 = 2LL * v48;
      *(&UserData.Ptr + v49) = (ULONGLONG)v42;
      *(&UserData.Reserved + 2 * v49) = 0;
      ++v48;
      *(&UserData.Size + 2 * v49) = v38;
    }
  }
  else
  {
    v50 = 2LL * v31;
    v48 = v31 + 1;
    *(&UserData.Ptr + v50) = (ULONGLONG)&v97;
    *((_QWORD *)&UserData.Size + v50) = 4LL;
  }
  v51 = v109;
  v52 = v48 + 1;
  *((_QWORD *)&UserData.Size + 2 * v48) = 4LL;
  if ( v51 )
  {
    *(&UserData.Ptr + 2 * v48) = (ULONGLONG)&v101;
    v53 = 2LL * v52;
    v52 = v48 + 2;
    v54 = 4 * *(unsigned __int8 *)(v51 + 1) + 8;
    *(&UserData.Ptr + v53) = v51;
    *(&UserData.Size + 2 * v53) = v54;
    *(&UserData.Reserved + 2 * v53) = 0;
  }
  else
  {
    *(&UserData.Ptr + 2 * v48) = (ULONGLONG)&v97;
  }
  v55 = v52;
  v56 = v52 + 1;
  v55 *= 2LL;
  v57 = 2LL * v56;
  v58 = v56 + 1;
  *(&UserData.Ptr + v55) = a5;
  *((_QWORD *)&UserData.Size + v55) = 1LL;
  v59 = *(_WORD *)(a5 + 2);
  *(&UserData.Ptr + v57) = a5 + 2;
  *((_QWORD *)&UserData.Size + v57) = 2LL;
  if ( v59 >= 0 )
  {
    v61 = *(unsigned __int8 **)(a5 + 8);
LABEL_61:
    if ( v61 )
      goto LABEL_63;
    goto LABEL_62;
  }
  v60 = *(unsigned int *)(a5 + 4);
  if ( (_DWORD)v60 )
  {
    v61 = (unsigned __int8 *)(a5 + v60);
    goto LABEL_61;
  }
LABEL_62:
  v61 = (unsigned __int8 *)qword_140D3CAF8;
LABEL_63:
  v62 = v58;
  v63 = v58 + 1;
  v62 *= 2LL;
  v64 = 4 * v61[1] + 8;
  *(&UserData.Ptr + v62) = (ULONGLONG)v61;
  *(&UserData.Size + 2 * v62) = v64;
  *(&UserData.Reserved + 2 * v62) = 0;
  if ( v59 >= 0 )
  {
    v66 = *(unsigned __int8 **)(a5 + 8);
LABEL_67:
    if ( v66 )
      goto LABEL_69;
    goto LABEL_68;
  }
  v65 = *(unsigned int *)(a5 + 4);
  if ( (_DWORD)v65 )
  {
    v66 = (unsigned __int8 *)(a5 + v65);
    goto LABEL_67;
  }
LABEL_68:
  v66 = (unsigned __int8 *)qword_140D3CAF8;
LABEL_69:
  v67 = 2LL * v63;
  v68 = v63 + 1;
  v69 = 4 * v66[1] + 8;
  *(&UserData.Ptr + v67) = (ULONGLONG)v66;
  *(&UserData.Size + 2 * v67) = v69;
  *(&UserData.Reserved + 2 * v67) = 0;
  if ( (v59 & 4) == 0 )
  {
LABEL_73:
    v71 = 0LL;
    goto LABEL_75;
  }
  if ( v59 < 0 )
  {
    v70 = *(unsigned int *)(a5 + 16);
    if ( (_DWORD)v70 )
    {
      v71 = a5 + v70;
      goto LABEL_75;
    }
    goto LABEL_73;
  }
  v71 = *(_QWORD *)(a5 + 32);
LABEL_75:
  v72 = v68 + 1;
  v73 = 2LL * v68;
  if ( v71 )
  {
    v74 = sub_1405F462C(v71, &v107, &v102, &v95);
    *((_QWORD *)&UserData.Size + v73) = 1LL;
    v75 = v107;
    if ( v74 < 0 )
    {
      *(&UserData.Ptr + v73) = (ULONGLONG)&v90;
      v78 = 2LL * v72;
      *(&UserData.Ptr + v78) = (ULONGLONG)v93;
      *((_QWORD *)&UserData.Size + v78) = 2LL;
    }
    else
    {
      *(&UserData.Ptr + v73) = v71;
      v76 = v72++;
      v76 *= 2LL;
      *(&UserData.Ptr + v76) = (ULONGLONG)&v95;
      *((_QWORD *)&UserData.Size + v76) = 2LL;
      LODWORD(v76) = v102;
      v77 = 2LL * v72;
      *(&UserData.Ptr + v77) = (ULONGLONG)v75;
      *(&UserData.Size + 2 * v77) = v76;
      *(&UserData.Reserved + 2 * v77) = 0;
    }
    v59 = *(_WORD *)(a5 + 2);
  }
  else
  {
    v75 = v107;
    *(&UserData.Ptr + 2 * v68) = (ULONGLONG)&v90;
    *((_QWORD *)&UserData.Size + 2 * v68) = 1LL;
    v79 = 2LL * v72;
    *(&UserData.Ptr + v79) = (ULONGLONG)v93;
    *((_QWORD *)&UserData.Size + v79) = 2LL;
  }
  v80 = v72 + 1;
  if ( (v59 & 0x10) == 0 )
  {
LABEL_85:
    v82 = 0LL;
    goto LABEL_87;
  }
  if ( v59 < 0 )
  {
    v81 = *(unsigned int *)(a5 + 12);
    if ( (_DWORD)v81 )
    {
      v82 = a5 + v81;
      goto LABEL_87;
    }
    goto LABEL_85;
  }
  v82 = *(_QWORD *)(a5 + 24);
LABEL_87:
  v83 = v72 + 2;
  v84 = 2LL * v80;
  if ( !v82 )
  {
    *((_QWORD *)&UserData.Size + 2 * v80) = 1LL;
    goto LABEL_91;
  }
  v85 = sub_1405F462C(v82, &v103, (char *)&v102 + 4, &v96);
  *((_QWORD *)&UserData.Size + v84) = 1LL;
  if ( v85 < 0 )
  {
LABEL_91:
    v86 = v103;
    *(&UserData.Ptr + v84) = (ULONGLONG)&v90;
    v89 = 2LL * v83;
    *((_QWORD *)&UserData.Size + v89) = 2LL;
    *(&UserData.Ptr + v89) = (ULONGLONG)v93;
    goto LABEL_92;
  }
  *(&UserData.Ptr + v84) = v82;
  v86 = v103;
  v87 = v83++;
  v87 *= 2LL;
  *(&UserData.Ptr + v87) = (ULONGLONG)&v96;
  *((_QWORD *)&UserData.Size + v87) = 2LL;
  LODWORD(v87) = HIDWORD(v102);
  v88 = 2LL * v83;
  *(&UserData.Ptr + v88) = (ULONGLONG)v86;
  *(&UserData.Size + 2 * v88) = v87;
  *(&UserData.Reserved + 2 * v88) = 0;
LABEL_92:
  EtwWriteEx(qword_140C16478, &stru_140038DB0, 0LL, 0, 0LL, 0LL, v83 + 1, &UserData);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v104 )
    ExFreePoolWithTag(v104, 0);
  if ( v75 )
    ExFreePoolWithTag(v75, 0);
  if ( v86 )
    ExFreePoolWithTag(v86, 0);
  if ( v91 )
    ObfDereferenceObjectWithTag(Object, 0x67446553u);
  if ( v92[0] )
  {
    ExFreePoolWithTag(*(PVOID *)(*(_QWORD *)(v12 + 16) + 8LL), 0);
    ExFreePoolWithTag(*(PVOID *)(v12 + 16), 0);
    ExFreePoolWithTag(*(PVOID *)(*(_QWORD *)(v12 + 24) + 8LL), 0);
    ExFreePoolWithTag(*(PVOID *)(v12 + 24), 0);
    ExFreePoolWithTag((PVOID)v12, 0);
  }
}
