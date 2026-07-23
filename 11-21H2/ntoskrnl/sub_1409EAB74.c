/*
 * XREFs of sub_1409EAB74 @ 0x1409EAB74
 * Callers:
 *     sub_140814360 @ 0x140814360 (sub_140814360.c)
 * Callees:
 *     sub_140230C48 @ 0x140230C48 (sub_140230C48.c)
 *     sub_140231240 @ 0x140231240 (sub_140231240.c)
 *     sub_1402312E0 @ 0x1402312E0 (sub_1402312E0.c)
 *     sub_1402A1770 @ 0x1402A1770 (sub_1402A1770.c)
 *     sub_1402AB170 @ 0x1402AB170 (sub_1402AB170.c)
 *     sub_140300B40 @ 0x140300B40 (sub_140300B40.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14063A8C0 @ 0x14063A8C0 (sub_14063A8C0.c)
 *     sub_1407F9820 @ 0x1407F9820 (sub_1407F9820.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void __fastcall sub_1409EAB74(__int64 a1, char a2)
{
  int *v2; // rbx
  char v3; // r12
  unsigned int v5; // edi
  unsigned __int16 v6; // si
  int *Pool2; // rax
  int v8; // eax
  unsigned int v9; // edi
  int *v10; // r14
  unsigned int v11; // r8d
  __int64 v12; // rdx
  int v13; // eax
  unsigned int v14; // edi
  int *v15; // rax
  int v16; // eax
  unsigned int v17; // edi
  int *v18; // r14
  unsigned int v19; // r8d
  __int64 v20; // rdx
  int v21; // eax
  void *j; // rcx
  unsigned int v23; // esi
  unsigned int v24; // r14d
  int *v25; // rax
  int v26; // eax
  unsigned int v27; // esi
  int *v28; // r14
  unsigned int v29; // r8d
  __int64 v30; // rdx
  int v31; // eax
  unsigned int v32; // esi
  int *v33; // rax
  int v34; // eax
  int *v35; // r15
  unsigned int v36; // esi
  unsigned int v37; // r8d
  __int64 v38; // rdx
  int v39; // eax
  ULONG_PTR v40; // rax
  __int64 v41; // rdi
  unsigned int v43; // [rsp+3Ch] [rbp-45h] BYREF
  unsigned int i; // [rsp+40h] [rbp-41h] BYREF
  int v45; // [rsp+44h] [rbp-3Dh] BYREF
  int v46; // [rsp+48h] [rbp-39h] BYREF
  _OWORD v47[3]; // [rsp+50h] [rbp-31h] BYREF
  unsigned int *v48; // [rsp+80h] [rbp-1h] BYREF
  int v49; // [rsp+88h] [rbp+7h]
  int v50; // [rsp+8Ch] [rbp+Bh]
  int *v51; // [rsp+90h] [rbp+Fh]
  int v52; // [rsp+98h] [rbp+17h]
  int v53; // [rsp+9Ch] [rbp+1Bh]
  int *v54; // [rsp+A0h] [rbp+1Fh]
  int v55; // [rsp+A8h] [rbp+27h]
  int v56; // [rsp+ACh] [rbp+2Bh]

  v46 = 0;
  v43 = 0;
  v2 = 0LL;
  v45 = 0;
  v50 = 0;
  v3 = a2;
  v48 = &v43;
  v49 = 4;
  v5 = 48;
  i = 48;
  v6 = 3625 - (a2 != 0);
  memset(v47, 0, sizeof(v47));
  while ( 1 )
  {
    if ( v2 )
      ExFreePoolWithTag(v2, 0);
    Pool2 = (int *)ExAllocatePool2(256LL, v5, 1953985605LL);
    v2 = Pool2;
    if ( !Pool2 )
      break;
    v8 = sub_1407F9820(Pool2, v5, (int *)&i);
    if ( v8 != -1073741820 )
    {
      if ( v8 >= 0 )
      {
        v9 = *v2;
        v10 = v2 + 2;
        if ( *v2 )
        {
          do
          {
            v11 = *(_DWORD *)a1;
            v12 = *(_QWORD *)(a1 + 1096);
            v13 = v9;
            v51 = v10;
            if ( v9 > 0x64 )
              v13 = 100;
            v53 = 0;
            v43 = v13;
            v52 = 40 * v13;
            sub_1402AB170((__int64)&v48, v12, v11, 2u, v6, 0x401802u);
            v10 += 10 * v43;
            v9 -= v43;
          }
          while ( v9 );
          v3 = a2;
        }
      }
      break;
    }
    v5 = i;
  }
  v14 = 32;
  for ( i = 32; ; v14 = i )
  {
    if ( v2 )
      ExFreePoolWithTag(v2, 0);
    v15 = (int *)ExAllocatePool2(256LL, v14, 1953985605LL);
    v2 = v15;
    if ( !v15 )
      break;
    v16 = sub_14063A8C0(v15, v14, 1, &i);
    if ( v16 != -1073741820 )
    {
      if ( v16 >= 0 )
      {
        v17 = *v2;
        v18 = v2 + 2;
        if ( *v2 )
        {
          do
          {
            v19 = *(_DWORD *)a1;
            v20 = *(_QWORD *)(a1 + 1096);
            v21 = v17;
            v51 = v18;
            if ( v17 > 0x64 )
              v21 = 100;
            v53 = 0;
            v43 = v21;
            v52 = 24 * v21;
            sub_1402AB170((__int64)&v48, v20, v19, 2u, 3627 - (v3 != 0), 0x401802u);
            v18 += 6 * v43;
            v17 -= v43;
          }
          while ( v17 );
          v3 = a2;
        }
      }
      break;
    }
  }
  for ( j = 0LL; ; j = (void *)v41 )
  {
    v40 = sub_1402A1770(j);
    v41 = v40;
    if ( !v40 )
      break;
    if ( (int)sub_1402312E0(v40) >= 0 )
    {
      v45 = sub_140300B40(v41);
      v23 = 4000;
      v24 = 4000;
      while ( 1 )
      {
        if ( v2 )
          ExFreePoolWithTag(v2, 0);
        v25 = (int *)ExAllocatePool2(256LL, v24, 1953985605LL);
        v2 = v25;
        if ( !v25 )
          break;
        v26 = sub_140230C48(v25, v23, &v43, &v46);
        v23 = 40 * v46;
        v24 = 40 * v46;
        if ( v26 != -1073741820 )
        {
          if ( v26 >= 0 )
          {
            v53 = 0;
            v27 = v43;
            v28 = v2;
            v51 = &v45;
            v52 = 4;
            if ( v43 )
            {
              do
              {
                v29 = *(_DWORD *)a1;
                v30 = *(_QWORD *)(a1 + 1096);
                v31 = v27;
                v54 = v28;
                if ( v27 > 0x64 )
                  v31 = 100;
                v56 = 0;
                v43 = v31;
                v55 = 40 * v31;
                sub_1402AB170((__int64)&v48, v30, v29, 3u, 3629 - (v3 != 0), 0x401802u);
                v28 += 10 * v43;
                v27 -= v43;
              }
              while ( v27 );
              v3 = a2;
            }
          }
          break;
        }
      }
      v32 = 40;
      for ( i = 40; ; v32 = i )
      {
        if ( v2 )
          ExFreePoolWithTag(v2, 0);
        v33 = (int *)ExAllocatePool2(256LL, v32, 1953985605LL);
        v2 = v33;
        if ( !v33 )
          break;
        v34 = sub_14063A8C0(v33, v32, 0, &i);
        if ( v34 != -1073741820 )
        {
          if ( v34 >= 0 )
          {
            v53 = 0;
            v51 = &v45;
            v35 = v2 + 4;
            v52 = 4;
            v36 = v2[3];
            if ( v36 )
            {
              do
              {
                v37 = *(_DWORD *)a1;
                v38 = *(_QWORD *)(a1 + 1096);
                v39 = v36;
                v54 = v35;
                if ( v36 > 0x64 )
                  v39 = 100;
                v56 = 0;
                v43 = v39;
                v55 = 24 * v39;
                sub_1402AB170((__int64)&v48, v38, v37, 3u, 3631 - (v3 != 0), 0x401802u);
                v35 += 6 * v43;
                v36 -= v43;
              }
              while ( v36 );
              v3 = a2;
            }
          }
          break;
        }
      }
      sub_140231240(v41, (__int64)v47);
    }
  }
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
}
