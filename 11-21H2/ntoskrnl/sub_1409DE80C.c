/*
 * XREFs of sub_1409DE80C @ 0x1409DE80C
 * Callers:
 *     sub_14075D0B0 @ 0x14075D0B0 (sub_14075D0B0.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1402F91C0 (KeReleaseMutex.c)
 *     sub_14075D9BC @ 0x14075D9BC (sub_14075D9BC.c)
 *     sub_14075DA88 @ 0x14075DA88 (sub_14075DA88.c)
 *     sub_14075DBD8 @ 0x14075DBD8 (sub_14075DBD8.c)
 *     sub_1407838E0 @ 0x1407838E0 (sub_1407838E0.c)
 *     sub_140784160 @ 0x140784160 (sub_140784160.c)
 *     sub_14080E3CC @ 0x14080E3CC (sub_14080E3CC.c)
 *     sub_14080EEFC @ 0x14080EEFC (sub_14080EEFC.c)
 *     sub_1409DE468 @ 0x1409DE468 (sub_1409DE468.c)
 *     sub_1409DE4C4 @ 0x1409DE4C4 (sub_1409DE4C4.c)
 *     sub_1409DEB60 @ 0x1409DEB60 (sub_1409DEB60.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1409DE80C(__int64 a1, __int64 a2, int a3)
{
  ULONG_PTR v3; // rdi
  unsigned int v4; // esi
  unsigned int v7; // ebx
  unsigned int v8; // r13d
  unsigned int v9; // r12d
  _OWORD **v10; // r14
  int v11; // r12d
  __int64 v12; // rbx
  _QWORD *v13; // rax
  _QWORD *v14; // r14
  const void **p_P; // rax
  int *v16; // r9
  __int64 v17; // rdx
  unsigned int *v18; // r8
  int v19; // eax
  unsigned int v20; // edi
  _QWORD *v21; // r8
  __int64 v22; // rcx
  ULONG_PTR v23; // rbx
  __int64 v24; // rdx
  _QWORD *v25; // rcx
  _OWORD **v26; // rsi
  __int64 *v27; // rbx
  __int64 v28; // rdi
  __int64 v29; // rcx
  _OWORD **v30; // rsi
  _QWORD *v31; // rbx
  __int64 v32; // rdi
  _QWORD *v33; // r8
  __int64 v34; // rcx
  unsigned int v35; // [rsp+30h] [rbp-30h] BYREF
  int v36; // [rsp+34h] [rbp-2Ch] BYREF
  int v37; // [rsp+38h] [rbp-28h] BYREF
  int v38; // [rsp+3Ch] [rbp-24h] BYREF
  __int64 v39; // [rsp+40h] [rbp-20h] BYREF
  PVOID P; // [rsp+48h] [rbp-18h] BYREF
  PVOID v41; // [rsp+50h] [rbp-10h] BYREF
  _OWORD **v42; // [rsp+58h] [rbp-8h] BYREF
  unsigned int v43; // [rsp+A0h] [rbp+40h] BYREF
  int v44; // [rsp+B0h] [rbp+50h]
  unsigned int v45; // [rsp+B8h] [rbp+58h] BYREF

  v44 = a3;
  v3 = *(_QWORD *)(a1 + 32);
  v4 = 0;
  v39 = 0LL;
  if ( !v3 )
    return 3221225524LL;
  sub_140784160(v3);
  v7 = 0;
  v45 = 0;
  v43 = 0;
  v35 = 0;
  v37 = 0;
  v38 = 0;
  v8 = 0;
  v36 = 0;
  v9 = 0;
  P = 0LL;
  v41 = 0LL;
  v10 = 0LL;
  v42 = 0LL;
  KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  if ( !*(_DWORD *)(a2 + 16) )
    goto LABEL_16;
  v11 = v44;
  do
  {
    v12 = 32LL * v4 + a2 + 24;
    if ( (*(_DWORD *)(v12 + 16) & 0x10000) != 0 )
    {
      v13 = sub_1409DE468(v3, (_QWORD *)v12);
      v14 = v13;
      if ( !v13 )
        goto LABEL_14;
      sub_1407838E0((__int64 *)&off_140C037A0, (ULONG_PTR)v13);
      p_P = (const void **)&v42;
      v39 = (__int64)v14;
      v16 = &v36;
      v17 = (__int64)v14;
      v18 = &v43;
    }
    else
    {
      v19 = sub_1409DEB60(v3, v12, a2, v11, (__int64)&v39);
      if ( v19 == 1 )
      {
        p_P = (const void **)&v41;
        v16 = &v37;
        v18 = &v45;
      }
      else
      {
        if ( v19 != 2 )
          goto LABEL_14;
        p_P = (const void **)&P;
        v16 = &v38;
        v18 = &v35;
      }
      v17 = v39;
    }
    sub_14075D9BC(v12, v17, v18, v16, p_P);
LABEL_14:
    ++v4;
  }
  while ( v4 < *(_DWORD *)(a2 + 16) );
  v10 = v42;
  v8 = v45;
  v9 = v35;
  v7 = v43;
LABEL_16:
  KeReleaseMutex(&Object, 0);
  sub_1407838E0((__int64 *)&off_140C037E0, v3);
  if ( v7 )
  {
    v20 = 0;
    do
    {
      v21 = v10[2 * v20];
      v22 = *v21 - 0x11D1D56605901221LL;
      if ( *v21 == 0x11D1D56605901221LL )
        v22 = v21[1] - 0x102906C9A000F0B2LL;
      if ( !v22 )
      {
        sub_1409DE4C4((__int64)v10[2 * v20 + 1], qword_140A37FB0);
        v21 = v10[2 * v20];
      }
      v23 = (ULONG_PTR)v10[2 * v20 + 1];
      sub_14080EEFC(v21, v23);
      KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
      if ( *(_QWORD *)v23 )
        sub_14080E3CC((__int64 *)v23);
      if ( (*(_DWORD *)(v23 + 16) & 8) == 0 )
        sub_1407838E0((__int64 *)&off_140C037C0, *(_QWORD *)(v23 + 56));
      *(_QWORD *)(v23 + 56) = 0LL;
      v24 = *(_QWORD *)(v23 + 40);
      if ( *(_QWORD *)(v24 + 8) != v23 + 40 || (v25 = *(_QWORD **)(v23 + 48), *v25 != v23 + 40) )
        __fastfail(3u);
      *v25 = v24;
      *(_QWORD *)(v24 + 8) = v25;
      sub_1407838E0((__int64 *)&off_140C037A0, v23);
      KeReleaseMutex(&Object, 0);
      ++v20;
    }
    while ( v20 < v43 );
    sub_14075DBD8(2, v43, v10);
    ExFreePoolWithTag(v10, 0);
  }
  if ( v9 )
  {
    v26 = (_OWORD **)P;
    v27 = (__int64 *)P;
    v28 = v9;
    do
    {
      v29 = *(_QWORD *)*v27 - 0x11D1D56605901221LL;
      if ( *(_QWORD *)*v27 == 0x11D1D56605901221LL )
        v29 = *(_QWORD *)(*v27 + 8) - 0x102906C9A000F0B2LL;
      if ( !v29 )
        sub_1409DE4C4(v27[1], qword_140A37EB8);
      v27 += 2;
      --v28;
    }
    while ( v28 );
    sub_14075DBD8(4, v9, v26);
    ExFreePoolWithTag(v26, 0);
  }
  if ( v8 )
  {
    v30 = (_OWORD **)v41;
    v31 = v41;
    v32 = v8;
    do
    {
      v33 = (_QWORD *)*v31;
      v34 = *(_QWORD *)*v31 - 0x11D1D56605901221LL;
      if ( *(_QWORD *)*v31 == 0x11D1D56605901221LL )
        v34 = v33[1] - 0x102906C9A000F0B2LL;
      if ( !v34 )
      {
        sub_1409DE4C4(v31[1], qword_140A37EB8);
        v33 = (_QWORD *)*v31;
      }
      sub_14075DA88(v33, v31[1]);
      v31 += 2;
      --v32;
    }
    while ( v32 );
    sub_14075DBD8(1, v8, v30);
    ExFreePoolWithTag(v30, 0);
  }
  return 0LL;
}
