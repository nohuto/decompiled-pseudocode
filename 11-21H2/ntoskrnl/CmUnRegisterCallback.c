/*
 * XREFs of CmUnRegisterCallback @ 0x14090FD60
 * Callers:
 *     sub_140606060 @ 0x140606060 (sub_140606060.c)
 *     sub_1407F8780 @ 0x1407F8780 (sub_1407F8780.c)
 *     sub_1409E62D0 @ 0x1409E62D0 (sub_1409E62D0.c)
 * Callees:
 *     ObReferenceObjectSafe @ 0x1402240B0 (ObReferenceObjectSafe.c)
 *     sub_14022EA30 @ 0x14022EA30 (sub_14022EA30.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_140347770 @ 0x140347770 (sub_140347770.c)
 *     ExBlockOnAddressPushLock @ 0x140369460 (ExBlockOnAddressPushLock.c)
 *     ExpInterlockedFlushSList @ 0x140429900 (ExpInterlockedFlushSList.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1406930B0 @ 0x1406930B0 (sub_1406930B0.c)
 *     sub_1406930D4 @ 0x1406930D4 (sub_1406930D4.c)
 *     sub_1406930F8 @ 0x1406930F8 (sub_1406930F8.c)
 *     sub_140693288 @ 0x140693288 (sub_140693288.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     sub_140AB4218 @ 0x140AB4218 (sub_140AB4218.c)
 */

NTSTATUS __stdcall CmUnRegisterCallback(LARGE_INTEGER Cookie)
{
  NTSTATUS v2; // esi
  __int64 v3; // rax
  char *v4; // rdi
  int v5; // eax
  _QWORD *v6; // rcx
  void **v7; // rax
  _QWORD *v9; // rcx
  void **v10; // rax
  char v11; // r14
  _QWORD *v12; // r12
  _QWORD *v13; // rax
  _QWORD *v14; // rbx
  _QWORD *v15; // r13
  _QWORD *v16; // r15
  __int64 v17; // rdx
  _QWORD *v18; // rcx
  __int64 v19; // rcx
  _QWORD *v20; // rax
  _QWORD *v21; // rax
  __int64 v22; // rax
  _QWORD *v23; // rbx
  PSLIST_ENTRY v24; // rbx
  PSLIST_ENTRY v25; // rcx
  void *v26; // rcx
  __int64 v27; // rcx
  PVOID *v28; // rbx
  __int128 v29; // [rsp+30h] [rbp-98h] BYREF
  _QWORD *v30; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v31[4]; // [rsp+48h] [rbp-80h] BYREF
  __int128 v32; // [rsp+68h] [rbp-60h] BYREF
  __int128 v33; // [rsp+78h] [rbp-50h]
  __int64 v34; // [rsp+88h] [rbp-40h]
  __int64 v35; // [rsp+E0h] [rbp+18h] BYREF
  int v36; // [rsp+E8h] [rbp+20h]

  v32 = 0LL;
  v2 = -1073741811;
  v36 = -1073741811;
  v33 = 0LL;
  v34 = 0LL;
  v29 = 0LL;
  sub_140347770((__int64)&v32);
  v31[0] = 0LL;
  sub_140693288();
  do
  {
    do
    {
      v3 = sub_140AB4218(&qword_140C497F0, v31, 0LL);
      v4 = (char *)v3;
      v31[1] = v3;
      if ( !v3 )
        goto LABEL_12;
    }
    while ( *(_QWORD *)(v3 + 24) != Cookie.QuadPart );
    v5 = *(_DWORD *)(v3 + 16);
    LODWORD(v35) = v5;
    if ( !v5 )
    {
      v9 = *(_QWORD **)v4;
      v10 = (void **)*((_QWORD *)v4 + 1);
      if ( *(char **)(*(_QWORD *)v4 + 8LL) == v4 && *v10 == v4 )
      {
        *v10 = v9;
        v9[1] = v10;
        sub_1406930D4();
        v2 = 0;
        v36 = 0;
        goto LABEL_18;
      }
LABEL_45:
      __fastfail(3u);
    }
  }
  while ( v5 < 0 );
  _InterlockedOr((volatile signed __int32 *)v4 + 4, 0x80000000);
  sub_1406930D4();
  while ( 1 )
  {
    LODWORD(v35) = *((_DWORD *)v4 + 4);
    if ( (_DWORD)v35 == 0x80000000 )
      break;
    ExBlockOnAddressPushLock((__int64)&qword_140C49800, (_QWORD *)v4 + 2, &v35, 4uLL, 0LL);
  }
  sub_140693288();
  v6 = *(_QWORD **)v4;
  v7 = (void **)*((_QWORD *)v4 + 1);
  if ( *(char **)(*(_QWORD *)v4 + 8LL) != v4 || *v7 != v4 )
    goto LABEL_45;
  *v7 = v6;
  v6[1] = v7;
  sub_1406930D4();
  v2 = 0;
  v36 = 0;
LABEL_12:
  if ( v2 < 0 )
  {
    sub_1406930D4();
    goto LABEL_14;
  }
LABEL_18:
  *((_QWORD *)&v29 + 1) = &v29;
  *(_QWORD *)&v29 = &v29;
  v11 = 0;
  sub_1406930F8();
  v12 = v4 + 64;
  v13 = (_QWORD *)*((_QWORD *)v4 + 8);
  v14 = v13;
  v31[3] = v4 + 64;
  while ( 1 )
  {
    v30 = v13;
    if ( v14 == v12 )
      break;
    v15 = (_QWORD *)*v13;
    v16 = v13 - 2;
    if ( ObReferenceObjectSafe(v13[4]) )
    {
      v17 = v16[2];
      v18 = (_QWORD *)v16[3];
      if ( *(_QWORD **)(v17 + 8) != v16 + 2 )
        goto LABEL_45;
      if ( (_QWORD *)*v18 != v16 + 2 )
        goto LABEL_45;
      *v18 = v17;
      *(_QWORD *)(v17 + 8) = v18;
      v19 = *v16;
      v20 = (_QWORD *)v16[1];
      if ( *(_QWORD **)(*v16 + 8LL) != v16 )
        goto LABEL_45;
      if ( (_QWORD *)*v20 != v16 )
        goto LABEL_45;
      *v20 = v19;
      *(_QWORD *)(v19 + 8) = v20;
      v21 = (_QWORD *)*((_QWORD *)&v29 + 1);
      if ( **((__int128 ***)&v29 + 1) != &v29 )
        goto LABEL_45;
      *v14 = &v29;
      v14[1] = v21;
      *v21 = v14;
      *((_QWORD *)&v29 + 1) = v14;
    }
    else
    {
      v11 = 1;
    }
    v13 = v15;
    v14 = v15;
  }
  sub_1406930B0();
  while ( 1 )
  {
    v22 = v29;
    if ( (__int128 *)v29 == &v29 )
      break;
    v27 = *(_QWORD *)v29;
    if ( *(__int128 **)(v29 + 8) != &v29 || *(_QWORD *)(v27 + 8) != (_QWORD)v29 )
      goto LABEL_45;
    *(_QWORD *)&v29 = *(_QWORD *)v29;
    *(_QWORD *)(v27 + 8) = &v29;
    v28 = (PVOID *)(v22 - 16);
    v31[2] = v22 - 16;
    v33 = *(_OWORD *)(v22 - 16 + 48);
    sub_14042A5E0(*((_QWORD *)v4 + 4), 40LL);
    ObfDereferenceObject(v28[6]);
    ExFreePoolWithTag(v28, 0x63634D43u);
  }
  while ( v11 )
  {
    sub_1406930F8();
    v30 = (_QWORD *)*((_QWORD *)v4 + 8);
    v23 = v30;
    sub_1406930B0();
    if ( v23 == v12 )
      v11 = 0;
    else
      ExBlockOnAddressPushLock((__int64)&qword_140C49800, (_QWORD *)v4 + 8, &v30, 8uLL, 0LL);
  }
  if ( _InterlockedExchangeAdd(&dword_140C54CA8, 0xFFFFFFFF) == 1 )
  {
    v24 = ExpInterlockedFlushSList(&stru_140CE23D0);
    while ( v24 )
    {
      v25 = v24;
      v24 = v24->Next;
      ExFreePoolWithTag(v25, 0);
    }
  }
  v26 = (void *)*((_QWORD *)v4 + 7);
  if ( v26 )
    ExFreePoolWithTag(v26, 0);
  ExFreePoolWithTag(v4, 0);
LABEL_14:
  sub_14022EA30((__int64 *)&v32);
  return v2;
}
