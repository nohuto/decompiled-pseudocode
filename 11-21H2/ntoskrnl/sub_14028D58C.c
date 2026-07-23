/*
 * XREFs of sub_14028D58C @ 0x14028D58C
 * Callers:
 *     sub_1402853B0 @ 0x1402853B0 (sub_1402853B0.c)
 *     sub_140285740 @ 0x140285740 (sub_140285740.c)
 *     sub_14028D878 @ 0x14028D878 (sub_14028D878.c)
 * Callees:
 *     sub_1402477A4 @ 0x1402477A4 (sub_1402477A4.c)
 *     sub_140247914 @ 0x140247914 (sub_140247914.c)
 *     sub_1402479B8 @ 0x1402479B8 (sub_1402479B8.c)
 *     sub_14028D920 @ 0x14028D920 (sub_14028D920.c)
 *     sub_14028DDD0 @ 0x14028DDD0 (sub_14028DDD0.c)
 *     sub_1403877FC @ 0x1403877FC (sub_1403877FC.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

char __fastcall sub_14028D58C(__int64 a1, __int64 a2, unsigned __int64 a3, __int128 *a4)
{
  __int64 v5; // r15
  __int64 v6; // r12
  unsigned int v7; // ebx
  _QWORD *v8; // rdi
  __int64 v9; // rdx
  int v10; // ecx
  int v11; // r8d
  unsigned int v12; // r10d
  __int64 v13; // rdx
  _QWORD *v14; // r14
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  int v17; // esi
  _DWORD *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int128 *v21; // r9
  _DWORD *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  unsigned int v27; // eax
  __int64 v28; // rdx
  int v29; // eax
  BOOL v30; // esi
  _DWORD *v31; // rax
  __int64 v32; // rax
  __int64 i; // rcx
  _QWORD *v34; // r9
  _QWORD *v35; // rdx
  __int64 v36; // r10
  _QWORD *v37; // rax
  _QWORD *v38; // rcx
  __int64 v39; // rcx
  _QWORD *v40; // rax
  int v41; // [rsp+20h] [rbp-89h]
  __int128 *v42; // [rsp+28h] [rbp-81h]
  unsigned int v43; // [rsp+30h] [rbp-79h]
  __int128 v44; // [rsp+38h] [rbp-71h] BYREF
  __int128 v45; // [rsp+48h] [rbp-61h]
  __int64 v46; // [rsp+58h] [rbp-51h]
  __int64 v47; // [rsp+60h] [rbp-49h]
  unsigned __int64 v48; // [rsp+68h] [rbp-41h]
  _OWORD v49[3]; // [rsp+70h] [rbp-39h] BYREF
  __int64 v50; // [rsp+A0h] [rbp-9h]
  _DWORD v51[8]; // [rsp+A8h] [rbp-1h]

  v46 = a2;
  v42 = a4;
  v48 = a3;
  v5 = 0LL;
  v50 = 0LL;
  v6 = a2;
  v7 = 0;
  v8 = *(_QWORD **)(a1 + 88);
  v9 = *(_QWORD *)(a1 + 32);
  v10 = 25;
  memset(v49, 0, sizeof(v49));
  v44 = 0LL;
  v45 = 0LL;
  do
  {
    v11 = v10;
    v41 = v10;
    v10 += 7;
    ++v7;
  }
  while ( v9 > 1LL << v10 );
  do
  {
    v43 = v7;
    v12 = v7;
    v13 = v6 >> v11;
    --v7;
    if ( (unsigned int)v5 >= 7 )
      return 0;
    v51[v5] = v13;
    *((_QWORD *)v49 + v5) = v8;
    v5 = (unsigned int)(v5 + 1);
    v47 = (unsigned int)v13;
    v14 = (_QWORD *)v8[(unsigned int)v13];
    if ( !v14 )
    {
      v29 = *(_DWORD *)(a1 + 152) & 0x200;
      v30 = v29 && !v7;
      if ( !a4 )
      {
        *(_QWORD *)&v45 = 0LL;
        DWORD2(v45) = 0;
        *((_QWORD *)&v44 + 1) = &v44;
        *(_QWORD *)&v44 = &v44;
        if ( !sub_140247914(v12, v29 != 0, (__int64)&v44) )
          return 0;
        a4 = &v44;
        v42 = &v44;
      }
      v14 = sub_1402479B8((__int64)a4, v30);
      if ( v30 )
      {
        v32 = sub_14028DDD0(a1, v46, 0LL);
        for ( i = *(_QWORD *)(v32 + 8); *(_WORD *)(i - 16) == 765; i = *(_QWORD *)(i + 8) )
          v32 = i;
        v34 = *(_QWORD **)(v32 + 8);
        v35 = v14 + 128;
        *(_QWORD *)(v32 + 8) = v14 + 128;
        v36 = 63LL;
        v14[128] = v32;
        do
        {
          v37 = v35 + 2;
          v38 = v35;
          v35[1] = v35 + 2;
          v35 = v37;
          *v37 = v38;
          --v36;
        }
        while ( v36 );
        v37[1] = v34;
        *v34 = v37;
      }
      v8[v47] = v14;
      v31 = (_DWORD *)sub_14028D920(a1, v8, v43);
      a4 = v42;
      v11 = v41;
      ++*v31;
    }
    v15 = 1LL << v11;
    v11 -= 7;
    v41 = v11;
    v6 &= v15 - 1;
    v8 = v14;
  }
  while ( v7 );
  v16 = v48;
  if ( v48 < 0xFFFFFFFFFFFFFFFEuLL )
  {
    v17 = 0;
    v14[(unsigned int)(v6 >> v11)] = v48;
    if ( v16 )
      goto LABEL_8;
LABEL_13:
    while ( 1 )
    {
      v23 = (_DWORD *)sub_14028D920(a1, v8, v7);
      if ( v17 )
        --v23[1];
      else
        --*v23;
      v17 = 0;
      if ( *(_QWORD *)sub_14028D920(v25, v24, v26) || !(_DWORD)v5 )
        break;
      v27 = v7;
      v5 = (unsigned int)(v5 - 1);
      ++v7;
      v28 = 0LL;
      if ( !v27 && (*(_DWORD *)(a1 + 152) & 0x200) != 0 )
      {
        v39 = v8[128];
        v28 = 1LL;
        v40 = (_QWORD *)v8[255];
        *(_QWORD *)(v39 + 8) = v40;
        *v40 = v39;
      }
      sub_1403877FC(v8, v28);
      v8 = (_QWORD *)*((_QWORD *)v49 + v5);
      v8[v51[v5]] = 0LL;
    }
    v21 = v42;
    goto LABEL_10;
  }
  v17 = 1;
  if ( v48 == -2LL )
    goto LABEL_13;
LABEL_8:
  v18 = (_DWORD *)sub_14028D920(a1, v14, 0LL);
  if ( v17 )
    ++v18[1];
  else
    ++*v18;
LABEL_10:
  if ( v21 == &v44 )
    sub_1402477A4((__int64)v21, v19, v20);
  return 1;
}
