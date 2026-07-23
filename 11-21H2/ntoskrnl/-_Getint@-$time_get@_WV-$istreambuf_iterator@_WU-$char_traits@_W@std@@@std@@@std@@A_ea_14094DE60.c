/*
 * XREFs of ?_Getint@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBAHAEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@0HHAEAH@Z_1 @ 0x14094DE60
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402D199C @ 0x1402D199C (sub_1402D199C.c)
 *     sub_1402E0198 @ 0x1402E0198 (sub_1402E0198.c)
 *     sub_14039A190 @ 0x14039A190 (sub_14039A190.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_14067B838 @ 0x14067B838 (sub_14067B838.c)
 *     sub_14069A1F8 @ 0x14069A1F8 (sub_14069A1F8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getint(__int64 a1, void *a2, __int64 a3)
{
  unsigned int v5; // r14d
  NTSTATUS v6; // edi
  unsigned __int16 *v7; // r13
  NTSTATUS v8; // eax
  unsigned int *v9; // rbx
  unsigned int v10; // r10d
  const WCHAR *v11; // rsi
  const WCHAR *v12; // rcx
  __int64 v13; // rax
  __int64 Pool2; // rax
  __int64 *v15; // rdx
  unsigned int v16; // r14d
  int v17; // eax
  __int64 v18; // rax
  void *v19; // rcx
  unsigned __int16 v20; // ax
  int v21; // r12d
  unsigned __int16 *v22; // rsi
  unsigned __int16 v23; // dx
  unsigned int v24; // ecx
  __int64 v25; // rcx
  unsigned int v26; // eax
  __int64 v27; // rax
  int v28; // eax
  unsigned int v29; // r12d
  __int64 v30; // rax
  void *v31; // r13
  unsigned __int16 *v32; // r8
  _WORD *v33; // r15
  unsigned int v34; // r14d
  unsigned __int16 v35; // ax
  unsigned __int16 v36; // dx
  unsigned int v37; // ecx
  int v38; // eax
  __int64 v39; // rcx
  unsigned int v40; // eax
  wchar_t *v41; // rdx
  __int64 v42; // rsi
  unsigned int v43; // esi
  __int64 v44; // rsi
  __int64 v45; // rax
  unsigned int v47; // [rsp+20h] [rbp-60h]
  PVOID P; // [rsp+28h] [rbp-58h]
  NTSTATUS v49; // [rsp+30h] [rbp-50h]
  PVOID v50; // [rsp+38h] [rbp-48h] BYREF
  unsigned __int16 *v51; // [rsp+40h] [rbp-40h]
  PVOID v52; // [rsp+48h] [rbp-38h] BYREF
  __int64 v53; // [rsp+50h] [rbp-30h]
  wchar_t v54[12]; // [rsp+58h] [rbp-28h] BYREF

  v53 = a3;
  v52 = 0LL;
  v50 = 0LL;
  v47 = 0;
  P = 0LL;
  v5 = 0;
  v6 = sub_14067B838(a2, L"Format", 0, &v52);
  if ( v6 < 0 )
    goto LABEL_102;
  if ( !sub_1402D199C(v52) )
  {
    v6 = -1073741823;
    goto LABEL_102;
  }
  v7 = (unsigned __int16 *)((char *)v52 + *((unsigned int *)v52 + 2));
  v51 = v7;
  v8 = sub_14067B838(a2, L"Variables", 0, &v50);
  v9 = (unsigned int *)v50;
  v10 = 0;
  v49 = v8;
  v6 = v8;
  if ( v8 >= 0 )
  {
    if ( !sub_14039A190(v50) )
    {
      v6 = -1073741823;
      goto LABEL_100;
    }
  }
  else
  {
    if ( v8 != -1073741772 )
      goto LABEL_100;
    v6 = 0;
    v49 = 0;
  }
  if ( v9 )
  {
    v11 = (const WCHAR *)((char *)v9 + v9[2]);
    v12 = v11;
    if ( *v11 != (_WORD)v10 )
    {
      do
      {
        ++v5;
        v13 = -1LL;
        do
          ++v13;
        while ( v12[v13] != (_WORD)v10 );
        v12 += v13 + 1;
      }
      while ( *v12 != (_WORD)v10 );
      v47 = v5;
      if ( v5 )
      {
        Pool2 = ExAllocatePool2(256LL, 8LL * v5, 1667526736LL);
        v10 = 0;
        P = (PVOID)Pool2;
        v15 = (__int64 *)Pool2;
        if ( !Pool2 )
        {
          v6 = -1073741670;
          goto LABEL_100;
        }
        v16 = 0;
        if ( *v11 )
        {
          while ( v16 < v47 )
          {
            v17 = sub_14069A1F8(a1, v11, &v15[v16]);
            v10 = 0;
            v49 = v17;
            v6 = v17;
            if ( v17 < 0 )
            {
              v19 = P;
              if ( v17 == -1073741772 )
                v6 = -1073741823;
              goto LABEL_99;
            }
            v18 = -1LL;
            do
              ++v18;
            while ( v11[v18] );
            v15 = (__int64 *)P;
            v11 += v18 + 1;
            ++v16;
            if ( !*v11 )
            {
              v5 = v47;
              goto LABEL_28;
            }
          }
        }
        if ( v6 < 0 )
        {
          v19 = P;
          goto LABEL_99;
        }
        v5 = v47;
      }
    }
  }
LABEL_28:
  v20 = *v7;
  v21 = v10;
  v22 = v7;
  if ( !*v7 )
    goto LABEL_54;
  do
  {
    ++v22;
    if ( v20 != 37 )
      goto LABEL_32;
    v23 = *v22;
    if ( *v22 == 37 )
    {
      ++v22;
LABEL_32:
      v21 += 2;
      goto LABEL_52;
    }
    if ( (unsigned __int16)(v23 - 48) <= 9u )
    {
      v24 = v10;
      while ( v23 && (unsigned __int16)(v23 - 48) <= 9u )
      {
        ++v22;
        v24 = v23 + 2 * (5 * v24 - 24);
        v23 = *v22;
      }
      if ( v24 < v5 )
      {
        _mm_lfence();
        v25 = *((_QWORD *)P + v24);
        if ( v25 )
        {
          v26 = *(_DWORD *)(v25 + 32);
          if ( v26 )
          {
            if ( v26 <= 2 )
            {
              v21 = *(_DWORD *)(v25 + 36) + v21 - 2;
            }
            else
            {
              if ( v26 != 4 )
              {
                if ( v26 != 7 )
                  goto LABEL_52;
                v27 = -1LL;
                do
                  ++v27;
                while ( *(_WORD *)(*(_QWORD *)(v25 + 40) + 2 * v27) != (_WORD)v10 );
                goto LABEL_46;
              }
              v28 = sub_1402E0198(v54, 11LL, L"%u", **(unsigned int **)(v25 + 40));
              v10 = 0;
              if ( v28 >= 0 )
              {
                v27 = -1LL;
                do
                  ++v27;
                while ( v54[v27] );
LABEL_46:
                v21 += 2 * v27;
              }
            }
          }
        }
      }
    }
LABEL_52:
    v20 = *v22;
  }
  while ( *v22 );
  v9 = (unsigned int *)v50;
  v6 = v49;
LABEL_54:
  v29 = v21 + 2;
  v30 = ExAllocatePool2(256LL, v29, 1667526736LL);
  v31 = (void *)v30;
  if ( !v30 )
  {
    v6 = -1073741670;
    goto LABEL_92;
  }
  v32 = v51;
  v33 = (_WORD *)v30;
  v34 = v29;
  v35 = *v51;
  if ( *v51 )
  {
    while ( 2 )
    {
      if ( v35 == 37 )
      {
        v51 = ++v32;
        v36 = *v32;
        if ( *v32 == 37 )
        {
          if ( v34 <= 2 )
            goto LABEL_96;
          *v33 = 37;
          goto LABEL_61;
        }
        if ( (unsigned __int16)(v36 - 48) <= 9u )
        {
          v37 = 0;
          if ( v36 )
          {
            do
            {
              if ( (unsigned __int16)(v36 - 48) > 9u )
                break;
              ++v32;
              v38 = v36;
              v36 = *v32;
              v37 = v38 + 2 * (5 * v37 - 24);
            }
            while ( *v32 );
            v51 = v32;
          }
          if ( v37 < v47 )
          {
            _mm_lfence();
            v39 = *((_QWORD *)P + v37);
            if ( v39 )
            {
              v40 = *(_DWORD *)(v39 + 32);
              if ( v40 )
              {
                if ( v40 <= 2 )
                {
                  v41 = *(wchar_t **)(v39 + 40);
                  v43 = *(_DWORD *)(v39 + 36) - 2;
                  goto LABEL_81;
                }
                if ( v40 == 4 )
                {
                  if ( (int)sub_1402E0198(v54, 11LL, L"%u", **(unsigned int **)(v39 + 40)) >= 0 )
                  {
                    v41 = v54;
                    v44 = -1LL;
                    do
                      ++v44;
                    while ( v54[v44] );
                    v32 = v51;
                    v43 = 2 * v44;
                    goto LABEL_82;
                  }
LABEL_85:
                  v32 = v51;
                }
                else if ( v40 == 7 )
                {
                  v41 = *(wchar_t **)(v39 + 40);
                  v42 = -1LL;
                  do
                    ++v42;
                  while ( v41[v42] );
                  v43 = 2 * v42;
LABEL_81:
                  if ( v41 )
                  {
LABEL_82:
                    if ( v43 )
                    {
                      if ( v34 <= v43 )
                        goto LABEL_96;
                      memmove(v33, v41, v43);
                      v34 -= v43;
                      v33 += (unsigned __int64)v43 >> 1;
                      goto LABEL_85;
                    }
                  }
                }
              }
            }
          }
        }
      }
      else
      {
        if ( v34 <= 2 )
        {
LABEL_96:
          v9 = (unsigned int *)v50;
          v6 = -1073741823;
LABEL_91:
          ExFreePoolWithTag(v31, 0);
          goto LABEL_92;
        }
        *v33 = v35;
LABEL_61:
        ++v33;
        ++v32;
        v34 -= 2;
      }
      v35 = *v32;
      if ( !*v32 )
      {
        v9 = (unsigned int *)v50;
        break;
      }
      continue;
    }
  }
  if ( v6 < 0 )
    goto LABEL_91;
  if ( v34 != 2 )
  {
    v6 = -1073741823;
    goto LABEL_91;
  }
  v45 = v53;
  *v33 = 0;
  *(_DWORD *)(v45 + 32) = 1;
  *(_DWORD *)(v45 + 36) = v29;
  *(_QWORD *)(v45 + 40) = v31;
LABEL_92:
  v19 = P;
  if ( P )
LABEL_99:
    ExFreePoolWithTag(v19, 0);
LABEL_100:
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
LABEL_102:
  if ( v52 )
    ExFreePoolWithTag(v52, 0);
  return (unsigned int)v6;
}
