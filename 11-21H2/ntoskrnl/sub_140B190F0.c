/*
 * XREFs of sub_140B190F0 @ 0x140B190F0
 * Callers:
 *     sub_140B03800 @ 0x140B03800 (sub_140B03800.c)
 * Callees:
 *     sub_14020D8D0 @ 0x14020D8D0 (sub_14020D8D0.c)
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_14026DFC0 @ 0x14026DFC0 (sub_14026DFC0.c)
 *     sub_14026ED30 @ 0x14026ED30 (sub_14026ED30.c)
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_1402CF280 @ 0x1402CF280 (sub_1402CF280.c)
 *     sub_1402CF4F0 @ 0x1402CF4F0 (sub_1402CF4F0.c)
 *     sub_1402E4D28 @ 0x1402E4D28 (sub_1402E4D28.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_14031DE00 @ 0x14031DE00 (sub_14031DE00.c)
 *     sub_14032F1B0 @ 0x14032F1B0 (sub_14032F1B0.c)
 *     sub_14033A410 @ 0x14033A410 (sub_14033A410.c)
 *     sub_14036C804 @ 0x14036C804 (sub_14036C804.c)
 *     sub_1403C84E4 @ 0x1403C84E4 (sub_1403C84E4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14083D398 @ 0x14083D398 (sub_14083D398.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     sub_140B19724 @ 0x140B19724 (sub_140B19724.c)
 */

void sub_140B190F0()
{
  __int64 v0; // rsi
  __int64 v1; // rdi
  unsigned int v2; // ebp
  __int64 v3; // rax
  unsigned __int64 i; // rcx
  __int64 v5; // rdx
  int v6; // eax
  _QWORD **v7; // rax
  unsigned __int64 v8; // rdx
  _QWORD *v9; // rdx
  _QWORD *v10; // rax
  signed __int64 v11; // rbx
  char *v12; // rdi
  unsigned __int8 v13; // al
  __int64 v14; // r9
  __int64 v15; // rcx
  unsigned __int64 j; // r14
  unsigned __int64 v17; // rbp
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r15
  __int64 v21; // rsi
  unsigned __int64 v22; // r13
  unsigned __int64 v23; // r12
  unsigned __int64 v24; // rbx
  __int64 v25; // rcx
  __int64 v26; // rcx
  unsigned __int64 v27; // rax
  __int64 v28; // rax
  char v29; // di
  __int64 v30; // rbx
  int v31; // eax
  bool v32; // zf
  __int64 v33; // r13
  bool v34; // cf
  _QWORD **v35; // rax
  unsigned __int64 v36; // rcx
  _QWORD *v37; // rcx
  _QWORD *v38; // rax
  _QWORD *v39; // rbp
  _QWORD *v40; // rbx
  __int64 v41; // rax
  unsigned __int64 k; // rsi
  unsigned int v43; // eax
  int v44; // ecx
  _QWORD **v45; // rax
  unsigned __int64 v46; // rcx
  _QWORD *v47; // rcx
  _QWORD *m; // rbx
  __int64 v49; // r8
  __int64 v50; // rdx
  _QWORD *v51; // rcx
  unsigned __int64 v52; // rdi
  unsigned __int64 v53; // rcx
  unsigned __int64 v54; // rdi
  unsigned __int8 v55; // [rsp+20h] [rbp-158h]
  unsigned int v56; // [rsp+30h] [rbp-148h]
  __int64 v57; // [rsp+38h] [rbp-140h]
  __int64 v58; // [rsp+40h] [rbp-138h]
  __int64 v59; // [rsp+48h] [rbp-130h]
  unsigned __int64 *v60; // [rsp+50h] [rbp-128h]
  __int64 v61; // [rsp+58h] [rbp-120h] BYREF
  char *v62; // [rsp+60h] [rbp-118h]
  _QWORD *v63; // [rsp+68h] [rbp-110h]
  __int64 v64; // [rsp+70h] [rbp-108h]
  __int64 v65; // [rsp+78h] [rbp-100h]
  _QWORD v66[24]; // [rsp+80h] [rbp-F8h] BYREF

  memset(v66, 0, 0xB8uLL);
  v0 = qword_140D068D0 + 352;
  v1 = 0LL;
  v65 = qword_140D068D0 + 352;
  v59 = 0LL;
  v2 = 0;
  v57 = 0LL;
  v3 = *(_QWORD *)(qword_140D068D0 + 360);
  if ( (v3 & 1) != 0 )
  {
    if ( v3 == 1 )
      goto LABEL_62;
    i = v3 ^ (v0 | 1);
  }
  else
  {
    i = *(_QWORD *)(qword_140D068D0 + 360);
  }
  if ( i )
  {
    do
    {
      v5 = *(_QWORD *)(i + 40);
      if ( v5 )
      {
        v6 = *(_DWORD *)(i + 24);
        if ( v6 == 19 )
        {
          v1 += v5;
        }
        else if ( v6 == 7 || v6 == 21 || v6 == 14 )
        {
          ++v2;
        }
      }
      v7 = *(_QWORD ***)(i + 8);
      v8 = i;
      if ( v7 )
      {
        v9 = *v7;
        for ( i = *(_QWORD *)(i + 8); v9; v9 = (_QWORD *)*v9 )
          i = (unsigned __int64)v9;
      }
      else
      {
        while ( 1 )
        {
          i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !i || *(_QWORD *)i == v8 )
            break;
          v8 = i;
        }
      }
    }
    while ( i );
    v56 = v2;
    if ( v1 )
    {
      v10 = sub_1402828F0(64, 8 * v1 + 8, 0x624D6D4Du);
      v63 = v10;
      v11 = (signed __int64)v10;
      if ( v10 )
      {
        *v10 = v1;
        v66[3] = 0LL;
        v60 = v10 + 1;
        LODWORD(v66[1]) = 20;
        v62 = sub_14026DFC0(1);
        v12 = v62;
        v13 = sub_1402CF4F0((__int64)v62);
        v15 = *(_QWORD *)(v0 + 8);
        v55 = v13;
        if ( (v15 & 1) != 0 )
        {
          if ( v15 == 1 )
          {
LABEL_60:
            sub_1402B0CE0((__int64)v12, v13);
            if ( _InterlockedCompareExchange64(&qword_140C53438, v11, 0LL) )
            {
              qword_140C53438 = v11;
              sub_14083D398();
            }
            goto LABEL_62;
          }
          j = v15 ^ (v0 | 1);
        }
        else
        {
          j = *(_QWORD *)(v0 + 8);
        }
        if ( j )
        {
          while ( *(_DWORD *)(j + 24) != 19 || !*(_QWORD *)(j + 40) )
          {
LABEL_51:
            v35 = *(_QWORD ***)(j + 8);
            v36 = j;
            if ( v35 )
            {
              v37 = *v35;
              for ( j = *(_QWORD *)(j + 8); v37; v37 = (_QWORD *)*v37 )
                j = (unsigned __int64)v37;
            }
            else
            {
              while ( 1 )
              {
                j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL;
                if ( !j || *(_QWORD *)j == v36 )
                  break;
                v36 = j;
              }
            }
            if ( !j )
            {
              v0 = v65;
              v11 = (signed __int64)v63;
              v2 = v56;
              v13 = v55;
              goto LABEL_60;
            }
          }
          v58 = 0LL;
          v17 = 0LL;
          v18 = *(_QWORD *)(j + 32);
          v19 = 0LL;
          v64 = 0LL;
          v20 = 48 * v18 - 0x220000000000LL;
          v21 = v18;
          while ( 1 )
          {
            v22 = *(_QWORD *)(v20 + 8) | 0x8000000000000000uLL;
            v23 = (__int64)((v22 << 25) - v19) >> 16;
            *v60++ = v23;
            v24 = ((v22 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            if ( v17 != v24 )
            {
              if ( v17 )
              {
                sub_14032F1B0((__int64)v66);
                sub_140B19724(v59, v57);
                sub_14020D8D0((__int64)v12, v17);
              }
              v17 = ((v22 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
              sub_14031DE00((__int64)v12, v24, 0LL, v14);
            }
            v61 = sub_140317A10(v22);
            sub_14036C804(v20, 0);
            sub_14033A410(v25, v23);
            sub_14026ED30(v26, v23);
            v27 = sub_140317A10((unsigned __int64)&v61);
            v28 = sub_1402E4D28((v27 >> 12) & 0xFFFFFFFFFFLL, 4);
            v29 = v28;
            v61 = v28;
            v30 = v28;
            if ( sub_140317A80(v22) )
            {
              if ( (unsigned int)sub_140229550() )
              {
                v31 = 1;
                if ( !HIBYTE(word_140C51864) )
                {
                  v32 = (v29 & 1) == 0;
                  goto LABEL_39;
                }
              }
              else
              {
                v31 = 0;
                if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 )
                {
                  v32 = (v29 & 1) == 0;
LABEL_39:
                  if ( !v32 )
                    v30 |= 0x8000000000000000uLL;
                }
              }
            }
            else
            {
              v31 = 0;
            }
            *(_QWORD *)v22 = v30;
            if ( v31 )
              sub_1402294F0(v22, v30);
            if ( HIDWORD(v66[1]) )
            {
              v33 = v57 + 1;
            }
            else
            {
              v33 = 1LL;
              v59 = v21 + v58;
            }
            v57 = v33;
            sub_1402CF280((__int64)v66, v23, 1LL, 0);
            v20 += 48LL;
            v12 = v62;
            v34 = (unsigned __int64)++v58 < *(_QWORD *)(j + 40);
            v19 = v64;
            if ( !v34 )
            {
              sub_14032F1B0((__int64)v66);
              sub_140B19724(v59, v33);
              sub_14020D8D0((__int64)v12, v17);
              goto LABEL_51;
            }
          }
        }
        goto LABEL_60;
      }
    }
  }
LABEL_62:
  v38 = sub_1402828F0(64, 16LL * v2, 0x624D6D4Du);
  v39 = v38;
  if ( !v38 )
    return;
  v40 = v38;
  v41 = *(_QWORD *)(v0 + 8);
  if ( (v41 & 1) == 0 )
  {
    k = *(_QWORD *)(v0 + 8);
    goto LABEL_67;
  }
  if ( v41 != 1 )
  {
    k = v41 ^ (v0 | 1);
LABEL_67:
    if ( k )
    {
      do
      {
        v43 = *(_DWORD *)(k + 24);
        if ( v43 <= 0x15 )
        {
          v44 = 2113664;
          if ( _bittest(&v44, v43) )
          {
            if ( *(_QWORD *)(k + 40) )
            {
              *v40 = *(_QWORD *)(k + 32);
              v40[1] = *(_QWORD *)(k + 40);
              v40 += 2;
            }
          }
        }
        v45 = *(_QWORD ***)(k + 8);
        v46 = k;
        if ( v45 )
        {
          v47 = *v45;
          for ( k = *(_QWORD *)(k + 8); v47; v47 = (_QWORD *)*v47 )
            k = (unsigned __int64)v47;
        }
        else
        {
          while ( 1 )
          {
            k = *(_QWORD *)(k + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            if ( !k || *(_QWORD *)k == v46 )
              break;
            v46 = k;
          }
        }
      }
      while ( k );
      if ( v40 != v39 )
      {
        for ( m = v40 - 2; m >= v39; m -= 2 )
        {
          v49 = 48LL * *m;
          v50 = m[1];
          v51 = (_QWORD *)(v49 - 0x21FFFFFFFFF8LL);
          v52 = *(_QWORD *)(v49 - 0x21FFFFFFFFF8LL) | 0x8000000000000000uLL;
          while ( --v50 )
          {
            v51 += 6;
            v52 += 8LL;
            if ( (*v51 | 0x8000000000000000uLL) != v52 )
            {
              v53 = *(_QWORD *)(v49 - 0x21FFFFFFFFF8LL) | 0x8000000000000000uLL;
              v54 = (__int64)(v52 - v53) >> 3;
              sub_1403C84E4(v53, v54, v49);
              m[1] -= v54;
              *m += v54;
              m += 2;
              if ( v54 )
                goto LABEL_88;
              break;
            }
          }
          sub_1403C84E4(*(_QWORD *)(48LL * *m - 0x21FFFFFFFFF8LL) | 0x8000000000000000uLL, m[1], v49);
LABEL_88:
          ;
        }
      }
    }
  }
  ExFreePoolWithTag(v39, 0);
}
