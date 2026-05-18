/*
 * XREFs of sub_1800AD694 @ 0x1800AD694
 * Callers:
 *     sub_1800ADEF0 @ 0x1800ADEF0 (sub_1800ADEF0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     memset @ 0x18000C0CC (memset.c)
 *     unknown_libname_6 @ 0x180048C50 (unknown_libname_6.c)
 *     sub_1800ACA78 @ 0x1800ACA78 (sub_1800ACA78.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800AD694(__int64 a1, __int64 a2, __int64 a3, float a4, float a5)
{
  float v5; // xmm2_4
  __int64 v9; // r15
  __int64 v10; // rsi
  int *v11; // rbx
  __int64 v12; // rdi
  int *v13; // rbx
  __int64 v14; // rdi
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  __int64 (__fastcall *v18)(); // rax
  float v19; // xmm6_4
  float *v20; // rax
  int *v21; // rbx
  __int64 v22; // r14
  __int64 v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // rcx
  float *v26; // rax
  float v27; // xmm1_4
  float v28; // xmm1_4
  __int64 v29; // rdi
  float v30; // xmm0_4
  float v31; // xmm0_4
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rax
  _DWORD *v37; // rcx
  char *v38; // rdx
  __int64 v39; // r10
  _DWORD *v40; // rcx
  char *v41; // rdx
  __int64 v42; // r10
  __int64 result; // rax
  _BYTE *v44; // rdx
  __int64 v45[2]; // [rsp+28h] [rbp-E0h] BYREF
  _BYTE v46[56]; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE *v47; // [rsp+70h] [rbp-98h]
  _DWORD v48[32]; // [rsp+78h] [rbp-90h] BYREF
  int v49; // [rsp+F8h] [rbp-10h] BYREF
  _DWORD v51[62]; // [rsp+100h] [rbp-8h] BYREF
  int v52; // [rsp+1F8h] [rbp+F0h] BYREF
  _DWORD v54[62]; // [rsp+200h] [rbp+F8h] BYREF
  int v55; // [rsp+2F8h] [rbp+1F0h] BYREF
  _DWORD v56[63]; // [rsp+2FCh] [rbp+1F4h] BYREF

  v9 = *(int *)(a1 + 372);
  v10 = *(_DWORD *)(a1 + 372) / 2;
  v11 = &v49;
  v12 = 16LL;
  do
  {
    unknown_libname_6(v11);
    v11 += 4;
    --v12;
  }
  while ( v12 );
  v13 = &v52;
  v14 = 16LL;
  do
  {
    unknown_libname_6(v13);
    v13 += 4;
    --v14;
  }
  while ( v14 );
  memset(v48, 0, sizeof(v48));
  v47 = 0LL;
  v15 = *(_DWORD *)(a1 + 368);
  if ( v15 )
  {
    v16 = v15 - 1;
    if ( v16 )
    {
      v17 = v16 - 1;
      if ( v17 )
      {
        if ( v17 != 1 )
          goto LABEL_14;
        v18 = sub_1800ADB00;
      }
      else
      {
        v18 = sub_1800ADB30;
      }
    }
    else
    {
      v18 = sub_1800ADBC0;
    }
  }
  else
  {
    v18 = sub_1800ADB90;
  }
  v45[0] = (__int64)v18;
  sub_1800ACA78((__int64)v46, v45);
LABEL_14:
  if ( *(_DWORD *)(a1 + 368) )
  {
    v22 = 0LL;
    if ( (int)v9 > 0 )
    {
      v29 = 0LL;
      v19 = 1.0;
      do
      {
        v30 = fmaxf(
                (float)((float)((float)((float)(int)v22 + 1.0) / (float)((float)(int)v9 + 1.0))
                      + (float)((float)((float)(int)v22 + 1.0) / (float)((float)(int)v9 + 1.0)))
              - 1.0,
                -1.0);
        v27 = 1.0;
        LODWORD(v45[0]) = fminf(v30, 1.0);
        if ( !v47 )
        {
          std::_Xbad_function_call();
          __debugbreak();
          goto LABEL_30;
        }
        *(float *)&v48[v29] = (*(float (__fastcall **)(_BYTE *, __int64 *))(*(_QWORD *)v47 + 16LL))(v47, v45);
        v22 = (unsigned int)(v22 + 1);
        ++v29;
      }
      while ( v29 < v9 );
    }
  }
  else
  {
    memset(v48, 0, sizeof(v48));
    v48[v10] = 1065353216;
  }
  v19 = 0.0;
  v20 = (float *)v48;
  do
    v19 = v19 + *v20++;
  while ( v20 != (float *)&v49 );
  v21 = &v55;
  v22 = 16LL;
  v23 = 16LL;
  do
  {
    unknown_libname_6(v21);
    v21 += 4;
    --v23;
  }
  while ( v23 );
  v24 = v10;
  if ( (int)v10 > 0 )
  {
    v25 = 0LL;
    v26 = (float *)v56;
    LODWORD(v10) = -(int)v10;
    do
    {
      v27 = *(float *)&v48[2 * v25 + 1];
      v5 = v27 + *(float *)&v48[2 * v25];
      if ( v5 == 0.0 )
        v28 = 0.5;
      else
LABEL_30:
        v28 = v27 / v5;
      v31 = (float)(int)v10 + v28;
      *(v26 - 1) = v31;
      *v26 = v31;
      v26[2] = v5;
      LODWORD(v10) = v10 + 2;
      ++v25;
      v26 = (float *)((char *)v26 + v22);
    }
    while ( v25 < v24 );
  }
  v32 = 0LL;
  v33 = v22;
  do
  {
    *(int *)((char *)&v49 + v32) = *(_DWORD *)((char *)&v56[-1] + v32);
    *(_DWORD *)((char *)&v51[-1] + v32) = *(_DWORD *)((char *)v56 + v32);
    *(_DWORD *)((char *)v51 + v32) = *(_DWORD *)((char *)&v56[1] + v32);
    *(_DWORD *)((char *)&v51[1] + v32) = *(_DWORD *)((char *)&v56[2] + v32);
    v32 += v22;
    --v33;
  }
  while ( v33 );
  v34 = 0LL;
  v35 = v22;
  do
  {
    *(int *)((char *)&v52 + v34) = *(_DWORD *)((char *)&v56[-1] + v34);
    *(_DWORD *)((char *)&v54[-1] + v34) = *(_DWORD *)((char *)v56 + v34);
    *(_DWORD *)((char *)v54 + v34) = *(_DWORD *)((char *)&v56[1] + v34);
    *(_DWORD *)((char *)&v54[1] + v34) = *(_DWORD *)((char *)&v56[2] + v34);
    v34 += v22;
    --v35;
  }
  while ( v35 );
  if ( v24 > 0 )
  {
    v36 = 0LL;
    do
    {
      *(float *)((char *)&v49 + v36) = *(float *)((char *)&v49 + v36) / a4;
      *(_DWORD *)((char *)&v51[-1] + v36) = 0;
      *(float *)((char *)&v51[1] + v36) = *(float *)((char *)&v51[1] + v36) / v19;
      *(int *)((char *)&v52 + v36) = 0;
      *(float *)((char *)&v54[-1] + v36) = *(float *)((char *)&v54[-1] + v36) / a5;
      *(float *)((char *)&v54[1] + v36) = *(float *)((char *)&v54[1] + v36) / v19;
      v36 += v22;
      --v24;
    }
    while ( v24 );
  }
  v37 = (_DWORD *)(a2 + 4);
  v38 = (char *)&v49 - a2;
  v39 = v22;
  do
  {
    *(v37 - 1) = *(_DWORD *)((char *)v37 + (_QWORD)v38 - 4);
    *v37 = *(_DWORD *)((char *)v37 + (_QWORD)v38);
    v37[1] = *(_DWORD *)((char *)v37 + (_QWORD)&v51[-1] - a2);
    v37[2] = *(_DWORD *)((char *)v37 + (_QWORD)v51 - a2);
    v37 = (_DWORD *)((char *)v37 + v22);
    --v39;
  }
  while ( v39 );
  v40 = (_DWORD *)(a3 + 4);
  v41 = (char *)&v52 - a3;
  v42 = v22;
  do
  {
    *(v40 - 1) = *(_DWORD *)((char *)v40 + (_QWORD)v41 - 4);
    *v40 = *(_DWORD *)((char *)v40 + (_QWORD)v41);
    v40[1] = *(_DWORD *)((char *)v40 + (_QWORD)&v54[-1] - a3);
    result = *(unsigned int *)((char *)v40 + (_QWORD)v54 - a3);
    v40[2] = result;
    v40 = (_DWORD *)((char *)v40 + v22);
    --v42;
  }
  while ( v42 );
  if ( v47 )
  {
    v44 = v46;
    LOBYTE(v44) = v47 != v46;
    return (*(__int64 (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v47 + 32LL))(v47, v44);
  }
  return result;
}
