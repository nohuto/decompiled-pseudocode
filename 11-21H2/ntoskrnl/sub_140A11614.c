/*
 * XREFs of sub_140A11614 @ 0x140A11614
 * Callers:
 *     sub_140A114F0 @ 0x140A114F0 (sub_140A114F0.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     sub_14075B444 @ 0x14075B444 (sub_14075B444.c)
 *     sub_14075E160 @ 0x14075E160 (sub_14075E160.c)
 *     sub_14075E448 @ 0x14075E448 (sub_14075E448.c)
 *     sub_1408415E4 @ 0x1408415E4 (sub_1408415E4.c)
 *     sub_140A129F4 @ 0x140A129F4 (sub_140A129F4.c)
 *     sub_140A12DA0 @ 0x140A12DA0 (sub_140A12DA0.c)
 *     sub_140A14AA8 @ 0x140A14AA8 (sub_140A14AA8.c)
 *     sub_140A14B40 @ 0x140A14B40 (sub_140A14B40.c)
 *     sub_140A15078 @ 0x140A15078 (sub_140A15078.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140A11614(
        __int64 a1,
        int *a2,
        unsigned __int16 *a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        int *a8,
        _DWORD *a9)
{
  _DWORD *v10; // r13
  int v11; // edx
  unsigned int v13; // esi
  int v14; // eax
  PVOID v15; // rdi
  PVOID *v16; // rbx
  int v17; // eax
  int *v18; // rbp
  int v19; // esi
  __int64 v20; // r9
  int v21; // eax
  int v22; // ecx
  int v23; // ecx
  unsigned __int64 v24; // rax
  __int64 v25; // rcx
  unsigned int v27; // esi
  unsigned int v28; // ebp
  int v29; // r15d
  int v30; // r15d
  unsigned int v31; // r14d
  PVOID v32; // rax
  char *v33; // rdx
  __int64 v34; // rax
  int v35; // ecx
  int v36; // [rsp+30h] [rbp-58h]
  PVOID P; // [rsp+38h] [rbp-50h] BYREF
  PVOID v38[9]; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int16 *v39; // [rsp+A0h] [rbp+18h]

  v39 = a3;
  v10 = a9;
  v11 = 0;
  P = 0LL;
  v38[0] = 0LL;
  v13 = 0;
  v14 = *a2;
  v15 = 0LL;
  v36 = 0;
  v16 = 0LL;
  *a8 = 0;
  *a9 = 0;
  if ( (v14 & 1) == 0 )
  {
    v17 = sub_140A129F4(a2);
    v11 = 0;
    if ( !v17 )
    {
      sub_1406E0C3C(1LL, (__int64)"SdbpCheckMatchingTextEntry");
      goto LABEL_17;
    }
    a3 = v39;
  }
  v18 = (int *)*((_QWORD *)a2 + 9);
  v19 = 0;
  if ( *v18 <= 0 )
    goto LABEL_15;
  while ( 1 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( a3[v20] );
    if ( !(unsigned int)sub_140A12DA0(a1, a2, a3, v20, &v18[12 * v19 + 2], &P) )
    {
      sub_1406E0C3C(1LL, (__int64)"SdbpCheckMatchingTextEntry");
      v15 = P;
      goto LABEL_52;
    }
    v15 = P;
    v21 = sub_14075E160(v38, (WCHAR *)P, 0LL, 0LL, 0LL);
    v16 = (PVOID *)v38[0];
    v22 = v21;
    if ( v21 >= 0 )
      v22 = sub_140A15078(v38[0], 0LL);
    if ( !sub_1408415E4(v22) )
      break;
    sub_14075E448(v16);
    v11 = 0;
    v38[0] = 0LL;
    v16 = 0LL;
    if ( v15 )
    {
      ExFreePoolWithTag(v15, 0x74705041u);
      v11 = 0;
    }
    a3 = v39;
    ++v19;
    v15 = 0LL;
    P = 0LL;
    if ( v19 >= *v18 )
      goto LABEL_15;
  }
  if ( v23 < 0 )
  {
    sub_1406E0C3C(1LL, (__int64)"SdbpCheckMatchingTextEntry");
LABEL_52:
    v13 = 0;
    goto LABEL_17;
  }
  if ( v19 > 0 )
    *a9 = 1;
  if ( !v16 )
    goto LABEL_15;
  v27 = v11;
  v28 = a7;
  if ( a7 >= (unsigned __int64)v16[3] )
    v28 = (unsigned int)v16[3];
  P = v16[4];
  if ( a5 <= v28 )
  {
    v29 = v11;
    LOBYTE(v29) = a6 == 3;
    v30 = v29 + 1;
    if ( !v28 )
    {
LABEL_49:
      v10 = a9;
      *a8 = v36;
      goto LABEL_16;
    }
    while ( 1 )
    {
      if ( v27 > a5 )
        v27 += v30 - a5;
      v31 = v28 - v27;
      if ( v28 - v27 > 0x1000 )
        v31 = 4096;
      v32 = sub_14075B444(4096LL, v31 + 2LL);
      v38[0] = v32;
      if ( !v32 )
        break;
      v33 = (char *)P + v27;
      if ( v33 < P )
        break;
      memmove(v32, v33, v31);
      if ( !a6 )
        break;
      if ( a6 <= 2 )
      {
        v34 = sub_140A14AA8(v38[0], v31, a4, a5);
        v35 = v36;
        if ( v34 )
          v35 = 1;
        v36 = v35;
      }
      else
      {
        if ( a6 != 3 )
          break;
        if ( sub_140A14B40(v38[0], v31 >> 1, a4, a5 >> 1) )
          v36 = 1;
      }
      v27 += v31;
      ExFreePoolWithTag(v38[0], 0x74705041u);
      if ( v27 >= v28 )
        goto LABEL_49;
    }
    sub_1406E0C3C(1LL, (__int64)"SdbpCheckMatchingTextEntry");
    v13 = 0;
    v10 = a9;
  }
  else
  {
LABEL_15:
    *a8 = v11;
LABEL_16:
    v13 = 1;
  }
LABEL_17:
  v24 = *v39;
  LOWORD(v24) = v24 - 37;
  if ( (unsigned __int16)v24 <= 0x37u )
  {
    v25 = 0x80000000000201LL;
    if ( _bittest64(&v25, v24) )
      *v10 = 1;
  }
  if ( v15 )
    ExFreePoolWithTag(v15, 0x74705041u);
  if ( v16 )
    sub_14075E448(v16);
  return v13;
}
