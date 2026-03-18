/*
 * XREFs of ComputeInverseMatrix3x3 @ 0x1C0095B10
 * Callers:
 *     ComputeColorSpaceXForm @ 0x1C0095D6C (ComputeColorSpaceXForm.c)
 *     HT_CreateDeviceHalftoneInfo @ 0x1C0096118 (HT_CreateDeviceHalftoneInfo.c)
 * Callees:
 *     MulFD6 @ 0x1C00945F0 (MulFD6.c)
 *     DivFD6 @ 0x1C00952E0 (DivFD6.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 __fastcall ComputeInverseMatrix3x3(__int128 *a1, __int64 a2)
{
  int v2; // eax
  int *v3; // r13
  __int128 v4; // xmm0
  __int64 v5; // rsi
  __int128 v6; // xmm1
  int *v7; // rbx
  int v8; // r10d
  __int64 v9; // rdi
  int v10; // r11d
  __int64 v11; // r9
  int v12; // r15d
  __int64 i; // r14
  __int64 v14; // rcx
  signed int v15; // r8d
  signed int v16; // eax
  int v17; // ecx
  int v18; // r14d
  __int64 v19; // r15
  __int64 v20; // rbx
  int v21; // eax
  int v22; // ecx
  __int64 v23; // r12
  __int64 v24; // r14
  __int64 v25; // rdi
  __int64 v26; // r15
  __int64 v27; // r12
  int v28; // esi
  int v29; // eax
  int v30; // ecx
  unsigned int v31; // edx
  int v32; // ecx
  __int128 v33; // xmm1
  __int64 v35; // r8
  __int64 v36; // rax
  __int64 v37; // r9
  __int64 v38; // r10
  char *v39; // r11
  __int64 v40; // r8
  _DWORD *v41; // rdx
  int v42; // ecx
  int v43; // eax
  int v44; // ecx
  int v45; // [rsp+20h] [rbp-89h]
  int v46; // [rsp+28h] [rbp-81h]
  __int64 v47; // [rsp+30h] [rbp-79h]
  int *v48; // [rsp+38h] [rbp-71h]
  __int64 v49; // [rsp+40h] [rbp-69h]
  int *v50; // [rsp+48h] [rbp-61h]
  int *v51; // [rsp+50h] [rbp-59h]
  __int64 v52; // [rsp+58h] [rbp-51h]
  __int64 v53; // [rsp+60h] [rbp-49h]
  __int128 v55; // [rsp+70h] [rbp-39h] BYREF
  __int128 v56; // [rsp+80h] [rbp-29h]
  int v57; // [rsp+90h] [rbp-19h]
  _OWORD v58[2]; // [rsp+98h] [rbp-11h] BYREF
  int v59; // [rsp+B8h] [rbp+Fh]

  v2 = *((_DWORD *)a1 + 8);
  v3 = (int *)v58;
  v4 = *a1;
  *(_QWORD *)((char *)&v55 + 4) = 0LL;
  v5 = 0LL;
  v6 = a1[1];
  HIDWORD(v55) = 0;
  v7 = (int *)v58;
  v56 = 0xF4240uLL;
  v8 = 0;
  v59 = v2;
  v9 = 0LL;
  v52 = 0LL;
  v58[0] = v4;
  v57 = 1000000;
  v58[1] = v6;
  LODWORD(v55) = 1000000;
  v45 = 1;
  v49 = 0LL;
  v51 = (int *)v58;
  v50 = (int *)v58;
  do
  {
    v10 = v8;
    v46 = v8 + 1;
    v53 = v5 + 1;
    v11 = v5;
    v12 = v8 + 1;
    for ( i = v5 + 1; v12 < 3; v10 = v17 )
    {
      v14 = i;
      v15 = abs32(*((_DWORD *)v58 + 2 * i + i + v5));
      v16 = abs32(*((_DWORD *)v58 + 2 * v11 + v11 + v5));
      if ( v15 <= v16 )
        v14 = v11;
      v11 = v14;
      v17 = v12;
      if ( v15 <= v16 )
        v17 = v10;
      ++v12;
      ++i;
    }
    if ( *((_DWORD *)v58 + 2 * v11 + v11 + v5) )
    {
      if ( v10 != v8 )
      {
        v35 = 3 * v11;
        v36 = v5 - v11;
        v37 = 3LL;
        v38 = 3 * v36;
        v39 = (char *)&v55 + 12 * v36 - (_QWORD)v58;
        v40 = 4 * v35;
        do
        {
          v41 = (_DWORD *)((char *)v58 + v40);
          v42 = *(_DWORD *)((char *)v58 + v40 + v38 * 4);
          v41[v38] = *v41;
          v43 = *(_DWORD *)((char *)&v55 + v40);
          *v41 = v42;
          v44 = *(_DWORD *)((char *)v58 + v40 + (_QWORD)v39);
          *(_DWORD *)((char *)v41 + (_QWORD)v39) = v43;
          *(_DWORD *)((char *)&v55 + v40) = v44;
          v40 += 4LL;
          --v37;
        }
        while ( v37 );
      }
      v18 = *v7;
      v19 = 3LL;
      v20 = v9;
      do
      {
        v21 = DivFD6(*(_DWORD *)((char *)v58 + v20), v18);
        v22 = *(_DWORD *)((char *)&v55 + v20);
        *(_DWORD *)((char *)v58 + v20) = v21;
        *(_DWORD *)((char *)&v55 + v20) = DivFD6(v22, v18);
        v20 += 4LL;
        --v19;
      }
      while ( v19 );
      v23 = 0LL;
      v48 = v3;
      v24 = 0LL;
      v47 = 0LL;
      v25 = v9 - (_QWORD)v58;
      do
      {
        if ( v23 != v5 && *v3 )
        {
          v26 = v24;
          v27 = 3LL;
          v28 = *v3;
          do
          {
            v29 = MulFD6(*(_DWORD *)((char *)v58 + (_QWORD)v58 + v26 + v25), v28);
            v30 = *(_DWORD *)((char *)&v55 + v25 + (_QWORD)v58 + v26);
            *(_DWORD *)((char *)v58 + v26) -= v29;
            *(_DWORD *)((char *)&v55 + v26) -= MulFD6(v30, v28);
            v26 += 4LL;
            --v27;
          }
          while ( v27 );
          v5 = v49;
          v23 = v47;
          v3 = v48;
        }
        ++v23;
        v3 += 3;
        v25 -= 12LL;
        v47 = v23;
        v24 += 12LL;
        v48 = v3;
      }
      while ( v24 < 36 );
      v9 = v52;
      v7 = v50;
      v3 = v51;
      v31 = v45;
    }
    else
    {
      v31 = 0;
      v45 = 0;
    }
    v8 = v46;
    v7 += 4;
    v5 = v53;
    ++v3;
    v9 += 12LL;
    v49 = v53;
    v50 = v7;
    v51 = v3;
    v52 = v9;
  }
  while ( v46 < 3 );
  v32 = v57;
  v33 = v56;
  *(_OWORD *)a2 = v55;
  *(_OWORD *)(a2 + 16) = v33;
  *(_DWORD *)(a2 + 32) = v32;
  return v31;
}
