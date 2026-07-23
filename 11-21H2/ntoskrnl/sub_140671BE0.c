/*
 * XREFs of sub_140671BE0 @ 0x140671BE0
 * Callers:
 *     sub_14070F0D8 @ 0x14070F0D8 (sub_14070F0D8.c)
 * Callees:
 *     sub_140203EE0 @ 0x140203EE0 (sub_140203EE0.c)
 *     sub_140205A98 @ 0x140205A98 (sub_140205A98.c)
 *     sub_140205B1C @ 0x140205B1C (sub_140205B1C.c)
 *     sub_140205CA8 @ 0x140205CA8 (sub_140205CA8.c)
 *     sub_140205D38 @ 0x140205D38 (sub_140205D38.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402F89B0 @ 0x1402F89B0 (sub_1402F89B0.c)
 *     sub_1403478A0 @ 0x1403478A0 (sub_1403478A0.c)
 *     sub_140347A20 @ 0x140347A20 (sub_140347A20.c)
 *     sub_140376ED4 @ 0x140376ED4 (sub_140376ED4.c)
 *     sub_140377258 @ 0x140377258 (sub_140377258.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140659D50 @ 0x140659D50 (sub_140659D50.c)
 *     sub_140672120 @ 0x140672120 (sub_140672120.c)
 *     sub_140672524 @ 0x140672524 (sub_140672524.c)
 *     sub_1406965F4 @ 0x1406965F4 (sub_1406965F4.c)
 *     sub_1406AB17C @ 0x1406AB17C (sub_1406AB17C.c)
 *     SeCreateAccessState @ 0x14071F140 (SeCreateAccessState.c)
 *     sub_140729C30 @ 0x140729C30 (sub_140729C30.c)
 *     sub_1407B3B60 @ 0x1407B3B60 (sub_1407B3B60.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 *     sub_1407CDED0 @ 0x1407CDED0 (sub_1407CDED0.c)
 *     sub_1407F74C4 @ 0x1407F74C4 (sub_1407F74C4.c)
 *     sub_1409CC540 @ 0x1409CC540 (sub_1409CC540.c)
 */

__int64 __fastcall sub_140671BE0(
        __int64 a1,
        __int64 a2,
        PVOID *a3,
        char a4,
        int a5,
        __int64 a6,
        unsigned int a7,
        __int64 a8,
        unsigned int a9,
        __int64 a10,
        char *a11)
{
  bool v15; // r12
  __int64 v16; // r12
  int v17; // ebx
  int v18; // ecx
  PVOID v19; // r10
  char v20; // di
  PVOID *v21; // rcx
  char *v22; // rcx
  __int64 v24; // rcx
  unsigned int v25; // eax
  unsigned int v26; // edi
  __int64 v27; // rax
  void *v28; // rbx
  PVOID v29; // rcx
  int v30; // eax
  char v31; // [rsp+40h] [rbp-C0h] BYREF
  char v32; // [rsp+41h] [rbp-BFh]
  bool v33[6]; // [rsp+42h] [rbp-BEh] BYREF
  PVOID Object; // [rsp+48h] [rbp-B8h] BYREF
  bool v35; // [rsp+50h] [rbp-B0h] BYREF
  char v36; // [rsp+51h] [rbp-AFh] BYREF
  _WORD v37[3]; // [rsp+52h] [rbp-AEh] BYREF
  int v38; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v39; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v40; // [rsp+68h] [rbp-98h]
  __int64 v41; // [rsp+70h] [rbp-90h]
  PVOID *v42; // [rsp+78h] [rbp-88h]
  char *v43; // [rsp+80h] [rbp-80h]
  __int128 v44; // [rsp+88h] [rbp-78h] BYREF
  __int128 v45; // [rsp+98h] [rbp-68h]
  __int128 v46; // [rsp+A8h] [rbp-58h]
  __int128 v47; // [rsp+B8h] [rbp-48h] BYREF
  PVOID v48; // [rsp+C8h] [rbp-38h]
  __int64 v49; // [rsp+D0h] [rbp-30h]
  struct _ACCESS_STATE AccessState; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v51[28]; // [rsp+180h] [rbp+80h] BYREF

  Object = 0LL;
  v41 = a8;
  v42 = a3;
  HIDWORD(v47) = 0;
  v40 = a2;
  *(_QWORD *)&v46 = 0LL;
  DWORD2(v46) = 0;
  v43 = a11;
  v44 = 0LL;
  v45 = 0LL;
  memset(&AccessState, 0, sizeof(AccessState));
  memset(v51, 0, sizeof(v51));
  *a3 = 0LL;
  *(_WORD *)a11 = 0;
  a11[2] = 0;
  v35 = 0;
  *(_WORD *)v33 = 0;
  v31 = 0;
  v36 = 0;
  LOBYTE(v37[0]) = 0;
  v32 = 0;
  v39 = 0LL;
  sub_140205D38(a2, &v33[1], &v35, v33);
  v15 = v33[1];
  if ( *(_WORD *)v33 )
  {
    v26 = -1073740643;
    if ( (*(_DWORD *)a6 & 2) != 0 )
    {
      *(_DWORD *)&v37[1] = 0;
      v38 = 0;
      v33[0] = 0;
      v27 = sub_1407B3B60(KeGetCurrentThread(), 1953654867LL, &v37[1], v33, &v38, 0LL);
      v28 = (void *)v27;
      if ( (v38 >= 2 || *(_DWORD *)&v37[1] != 2) && (v26 = sub_140376ED4(v27) ? 0xC000049D : 0, *(_DWORD *)&v37[1] == 1) )
      {
        sub_1402F89B0(
          (signed __int64 *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1208LL),
          (unsigned __int64)v28,
          0x74726853u);
      }
      else if ( v28 )
      {
        ObfDereferenceObjectWithTag(v28, 0x74726853u);
      }
      v15 = v33[1];
    }
    v17 = 0;
    if ( *(_DWORD *)(a6 + 8) != 1 )
      v17 = v26;
    if ( ((*(_DWORD *)(a1 + 2172) & 1) == 0 || *(_QWORD *)(a1 + 2240)) && v17 < 0 && (!v35 || !*(_DWORD *)(a6 + 12)) )
    {
      sub_1407F74C4(
        (unsigned int)v15 + 1,
        *(_QWORD *)(a6 + 16),
        (*(_QWORD *)(a6 + 24) + 96LL) & -(__int64)(*(_QWORD *)(a6 + 24) != 0LL),
        (*(_QWORD *)(a6 + 24) + 112LL) & -(__int64)(*(_QWORD *)(a6 + 24) != 0LL));
      if ( v15 )
        goto LABEL_54;
    }
  }
  v16 = v40;
  *((_QWORD *)&v44 + 1) = 0LL;
  DWORD2(v45) = 0;
  *(_QWORD *)&v45 = 0LL;
  LODWORD(v44) = 48;
  v46 = 0LL;
  v17 = sub_1407CDED0(v40, (unsigned int)&v44, 0, 1, 0, 0, 1, (__int64)&Object);
  if ( v17 < 0 )
  {
LABEL_54:
    v29 = 0LL;
    Object = 0LL;
    v20 = 0;
    goto LABEL_61;
  }
  v18 = (int)Object;
  if ( (*((_DWORD *)Object + 50) & 0x4000) != 0 )
  {
    v25 = *((_DWORD *)Object + 30);
    if ( v25 != a5 )
    {
      sub_1406AB17C(v25, *((_QWORD *)Object + 135));
      *((_QWORD *)Object + 135) = 0LL;
      sub_140672524((_DWORD)Object, a5, 0, 0, 0LL);
      *((_DWORD *)Object + 30) = a5;
      v30 = sub_1406965F4(Object, *((_QWORD *)Object + 98));
      v17 = v30;
      if ( v30 < 0 )
        goto LABEL_60;
      v18 = (int)Object;
    }
  }
  sub_140672524(v18, a5, 0, 0, 0LL);
  *((_DWORD *)Object + 30) = a5;
  *((_DWORD *)Object + 50) &= ~0x200000u;
  if ( (*(_DWORD *)a6 & 1) != 0 )
  {
    *((_DWORD *)Object + 50) |= 0x80000u;
    if ( (*(_DWORD *)a6 & 4) != 0 )
      *((_DWORD *)Object + 50) |= 0x100000u;
  }
  v17 = sub_140205CA8((__int64)Object, 0, 0LL, 0, 0LL);
  if ( v17 < 0 )
    goto LABEL_60;
  v17 = sub_140203EE0((PERESOURCE *)Object, a1, *(_DWORD *)(a6 + 4), &v36, v37);
  if ( v17 < 0 )
    goto LABEL_60;
  v17 = sub_140205B1C((_DWORD *)(v16 & -(__int64)((a4 & 2) != 0)), (__int64)Object, a1, &v39);
  if ( v17 < 0 )
    goto LABEL_60;
  v17 = sub_140205A98((__int64)Object, a1, &v31);
  if ( v17 < 0 )
    goto LABEL_60;
  if ( (dword_140D01448 & 3) == 3 )
  {
    v17 = sub_140672120(Object);
    if ( v17 < 0 )
      goto LABEL_60;
  }
  v19 = Object;
  if ( (*((_DWORD *)Object + 50) & 0x4000) != 0 && (a7 & 1) != 0 )
  {
    v17 = sub_140377258((__int64)Object, a7);
    if ( v17 < 0 )
      goto LABEL_60;
    v19 = Object;
  }
  if ( v41 )
  {
    sub_1409CC540(v41, a9, v19);
    v19 = Object;
  }
  if ( !a10 )
    goto LABEL_15;
  v17 = sub_140205CA8((__int64)v19, *(_BYTE *)(a10 + 32), (__int128 *)a10, *(_DWORD *)(a10 + 16), *(_QWORD *)(a10 + 24));
  if ( v17 < 0 )
  {
LABEL_60:
    v20 = v32;
    v29 = Object;
    goto LABEL_61;
  }
  v19 = Object;
LABEL_15:
  if ( (a4 & 2) == 0 || v39 )
    v31 = 1;
  if ( v31 )
  {
    *(_QWORD *)&v47 = 0LL;
    DWORD2(v47) = 0;
    v24 = *((_QWORD *)KeGetCurrentThread() + 23);
    v48 = v19;
    v49 = *(_QWORD *)(v24 + 1088);
    sub_140347A20(&v47, &AccessState, v51, 0, 0LL);
  }
  else
  {
    SeCreateAccessState(&AccessState, v51, 0LL, 0LL);
  }
  v20 = 1;
  v17 = sub_140729C30(Object, &AccessState, 0, 0LL, 0LL);
  if ( v17 >= 0 )
  {
    sub_140659D50(Object);
    v21 = v42;
    *((_BYTE *)Object + 204) = a4 & 1;
    *v21 = Object;
    v22 = v43;
    *v43 = v31;
    v22[1] = v36;
    v22[2] = v37[0];
LABEL_21:
    sub_1403478A0((__int64)&AccessState);
    if ( !v31 )
      SeReleaseSubjectContext(&AccessState.SubjectSecurityContext);
    return (unsigned int)v17;
  }
  v29 = 0LL;
  Object = 0LL;
LABEL_61:
  if ( v29 )
    ObfDereferenceObject(v29);
  if ( v20 )
    goto LABEL_21;
  return (unsigned int)v17;
}
