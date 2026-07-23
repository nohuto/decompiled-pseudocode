/*
 * XREFs of sub_1406F2C30 @ 0x1406F2C30
 * Callers:
 *     sub_1405B60A0 @ 0x1405B60A0 (sub_1405B60A0.c)
 *     sub_1407F8FE0 @ 0x1407F8FE0 (sub_1407F8FE0.c)
 * Callees:
 *     KeGetCurrentNodeNumber @ 0x140221E50 (KeGetCurrentNodeNumber.c)
 *     sub_1402399A8 @ 0x1402399A8 (sub_1402399A8.c)
 *     sub_140239A98 @ 0x140239A98 (sub_140239A98.c)
 *     sub_14026AB40 @ 0x14026AB40 (sub_14026AB40.c)
 *     sub_14026AB70 @ 0x14026AB70 (sub_14026AB70.c)
 *     sub_14026AE50 @ 0x14026AE50 (sub_14026AE50.c)
 *     sub_14026AEB0 @ 0x14026AEB0 (sub_14026AEB0.c)
 *     sub_14026B308 @ 0x14026B308 (sub_14026B308.c)
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     RtlAvlRemoveNode @ 0x1402C66C0 (RtlAvlRemoveNode.c)
 *     sub_14030B860 @ 0x14030B860 (sub_14030B860.c)
 *     RtlAvlInsertNodeEx @ 0x14030EFD0 (RtlAvlInsertNodeEx.c)
 *     sub_140314BA0 @ 0x140314BA0 (sub_140314BA0.c)
 *     sub_14033D7D0 @ 0x14033D7D0 (sub_14033D7D0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     qsort @ 0x1403E1E70 (qsort.c)
 *     sub_14069A6F4 @ 0x14069A6F4 (sub_14069A6F4.c)
 *     sub_1406E6E88 @ 0x1406E6E88 (sub_1406E6E88.c)
 *     sub_1406F33E4 @ 0x1406F33E4 (sub_1406F33E4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 *__fastcall sub_1406F2C30(__int64 a1, char *a2, size_t a3, int a4)
{
  __int64 *result; // rax
  __int64 *v5; // r12
  int v6; // ebx
  char *v8; // r14
  __int64 v9; // r13
  __int64 *v10; // rax
  struct _KTHREAD *v11; // r11
  __int64 v12; // r8
  char *v13; // rdi
  struct _KTHREAD *v14; // rbx
  __int64 v15; // rax
  ULONG_PTR v16; // rsi
  unsigned __int64 v17; // r15
  unsigned int v18; // r12d
  __int64 v19; // rdx
  char *v20; // r8
  unsigned __int64 v21; // r9
  unsigned __int64 v22; // r10
  __int64 v23; // rcx
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // r14
  struct _KTHREAD *v26; // rcx
  __int64 v27; // rax
  _QWORD *v28; // rsi
  int v29; // eax
  _QWORD *v30; // rax
  _QWORD *v31; // rdx
  bool v32; // r8
  _QWORD *v33; // rax
  __int64 v34; // rax
  size_t v35; // r13
  char *v36; // r15
  _QWORD *v37; // rax
  _QWORD *j; // rcx
  __int64 v39; // r8
  __int64 i; // rax
  _QWORD **v41; // rax
  _QWORD *v42; // rdx
  _QWORD *v43; // rdx
  _QWORD *v44; // r12
  size_t v45; // rsi
  __int64 v46; // rbx
  _QWORD **v47; // r14
  _QWORD *v48; // rdi
  unsigned __int64 v49; // r10
  __int64 v50; // rdx
  _QWORD *v51; // rdi
  size_t v52; // r14
  __int64 v53; // rsi
  _QWORD *v54; // rax
  size_t k; // rsi
  __int64 v56; // rcx
  __int64 v57; // rdx
  void *v58; // rcx
  __int64 v59; // rcx
  __int64 v60; // rax
  _QWORD *v61; // rdx
  int v62; // eax
  PVOID P; // [rsp+48h] [rbp-89h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-81h]
  PVOID Object; // [rsp+58h] [rbp-79h] BYREF
  int v66; // [rsp+60h] [rbp-71h] BYREF
  int v67; // [rsp+64h] [rbp-6Dh]
  char *v68; // [rsp+68h] [rbp-69h]
  __int64 v69[2]; // [rsp+70h] [rbp-61h] BYREF
  __int64 v70; // [rsp+80h] [rbp-51h] BYREF
  unsigned int v71; // [rsp+88h] [rbp-49h]
  size_t NumOfElements; // [rsp+90h] [rbp-41h]
  __int64 *v73; // [rsp+98h] [rbp-39h]
  __int64 *v74; // [rsp+A0h] [rbp-31h]
  unsigned __int64 v75; // [rsp+A8h] [rbp-29h] BYREF
  char *v76; // [rsp+B0h] [rbp-21h]
  __int64 *v77; // [rsp+B8h] [rbp-19h] BYREF
  __int128 v78; // [rsp+C0h] [rbp-11h] BYREF
  __int64 v79; // [rsp+D0h] [rbp-1h]

  result = 0LL;
  v74 = (__int64 *)a1;
  v5 = (__int64 *)a1;
  v68 = a2;
  v79 = 0LL;
  v75 = 0LL;
  v6 = a4;
  v67 = a4;
  v66 = 0;
  v70 = 0LL;
  v8 = a2;
  v78 = 0LL;
  if ( a3 )
  {
    v9 = *(_QWORD *)(a1 + 8);
    v71 = *(_DWORD *)(a1 + 60);
    v10 = *(__int64 **)a1;
    P = 0LL;
    v73 = v10;
    v77 = v10;
    qsort(a2, a3, 0x28uLL, (int (__cdecl *)(const void *, const void *))sub_14069A6D0);
    v11 = 0LL;
    CurrentThread = KeGetCurrentThread();
    NumOfElements = 0LL;
    v69[1] = (__int64)v69;
    v12 = 5 * (a3 - 1);
    v13 = v8;
    v76 = &v8[8 * v12];
    v69[0] = (__int64)v69;
    if ( v8 <= v76 )
    {
      v14 = CurrentThread;
      while ( 1 )
      {
        if ( v9 && *(_DWORD *)(v9 + 4) || (*((_DWORD *)v14 + 344) & 1) != 0 )
        {
LABEL_54:
          v6 = v67;
          v5 = v74;
          goto LABEL_55;
        }
        v15 = *((_QWORD *)v13 + 1);
        CurrentThread = v11;
        v16 = 48 * v15 - 0x220000000000LL;
        v17 = *(_QWORD *)(v16 + 8) | 0x8000000000000000uLL;
        v18 = (*(_DWORD *)(v16 + 16) >> 5) & 0x1F;
        if ( !sub_14026AB40(v18) || v17 < v21 || v17 > v22 )
          goto LABEL_14;
        v23 = *(_QWORD *)v13;
        if ( (v13 == v20 || v23 != *((_QWORD *)v13 + 5)) && (v23 != v19 || v13 == v8) )
        {
          v24 = sub_14026AB70((__int64)v73, *(_QWORD *)v13, v18, 0LL, (int)v11);
          v11 = 0LL;
          CurrentThread = (struct _KTHREAD *)v24;
          if ( !v24 )
            goto LABEL_14;
          v23 = *(_QWORD *)v13;
        }
        else if ( (*(_BYTE *)(v16 + 34) & 0xC0u) >= 0xC0 )
        {
          *(_QWORD *)v13 = v11;
          goto LABEL_14;
        }
        Object = v11;
        v25 = sub_14026AEB0(v74, v16, v71, v23, &Object, &v75, &v66, &v70);
        if ( !v25 || v75 != v17 || v66 != v18 )
        {
          if ( Object )
            ObfDereferenceObject(Object);
          if ( CurrentThread )
          {
            sub_1402399A8(0LL, (__int64)CurrentThread + 48);
            v8 = v68;
            v11 = 0LL;
            *(_QWORD *)v13 = 0LL;
            goto LABEL_14;
          }
          goto LABEL_47;
        }
        v26 = CurrentThread;
        if ( !CurrentThread )
          goto LABEL_22;
        v27 = v70;
        if ( *((_QWORD *)CurrentThread + 8) != v70 )
          break;
LABEL_23:
        *((_DWORD *)v13 + 8) = v18;
        *((_QWORD *)v13 + 3) = v27;
        if ( v26 )
          *((_QWORD *)v13 + 4) = v26;
        v28 = P;
        if ( !P )
          goto LABEL_33;
        while ( v25 > v28[4] )
        {
          v28 = (_QWORD *)v28[1];
LABEL_32:
          if ( !v28 )
            goto LABEL_33;
        }
        if ( v25 < v28[4] )
        {
          v28 = (_QWORD *)*v28;
          goto LABEL_32;
        }
        if ( v28 )
        {
          if ( Object )
            ObfDereferenceObject(Object);
          goto LABEL_41;
        }
LABEL_33:
        LOWORD(v29) = KeGetCurrentNodeNumber();
        v30 = sub_14030B860(64LL, 0x38uLL, 0x6D56694Du, v29 | 0x80000000);
        v28 = v30;
        if ( !v30 )
        {
          if ( Object )
            ObfDereferenceObject(Object);
          if ( CurrentThread )
          {
            sub_1402399A8(0LL, (__int64)CurrentThread + 48);
            v11 = 0LL;
            *(_QWORD *)v13 = 0LL;
            *((_QWORD *)v13 + 4) = 0LL;
          }
          else
          {
            v11 = 0LL;
          }
          goto LABEL_48;
        }
        v31 = P;
        v32 = 0;
        v30[4] = v25;
        v30[5] = Object;
        if ( !v31 )
          goto LABEL_40;
        while ( 2 )
        {
          if ( v25 < (unsigned __int64)(v31 + 4) )
          {
            v33 = (_QWORD *)*v31;
            if ( !*v31 )
              goto LABEL_40;
            goto LABEL_37;
          }
          v33 = (_QWORD *)v31[1];
          if ( v33 )
          {
LABEL_37:
            v31 = v33;
            continue;
          }
          break;
        }
        v32 = 1;
LABEL_40:
        RtlAvlInsertNodeEx((unsigned __int64 *)&P, (unsigned __int64)v31, v32, v28);
LABEL_41:
        v34 = v28[6];
        ++NumOfElements;
        *((_QWORD *)v13 + 2) = v34;
        ++v28[3];
        v28[6] = v13;
        v8 = v68;
        *((_QWORD *)v13 + 1) = (__int64)(v17 << 25) >> 16;
        v11 = 0LL;
LABEL_14:
        v13 += 40;
        if ( v13 > v76 )
          goto LABEL_54;
      }
      sub_1402399A8(0LL, (__int64)CurrentThread + 48);
      CurrentThread = (struct _KTHREAD *)sub_14026AB70((__int64)v73, *(_QWORD *)v13, v18, &v70, 0);
      v26 = CurrentThread;
      if ( !CurrentThread )
      {
        if ( Object )
          ObfDereferenceObject(Object);
LABEL_47:
        v11 = 0LL;
        *(_QWORD *)v13 = 0LL;
LABEL_48:
        v8 = v68;
        goto LABEL_14;
      }
LABEL_22:
      v27 = v70;
      goto LABEL_23;
    }
LABEL_55:
    v35 = NumOfElements;
    v36 = (char *)v11;
    if ( NumOfElements )
    {
      v36 = (char *)sub_1402828F0(256, 8 * NumOfElements, 0x6D56694Du);
      if ( v36 )
      {
        v37 = P;
        j = 0LL;
        v39 = 0LL;
        if ( P )
        {
          do
          {
            j = v37;
            v37 = (_QWORD *)*v37;
          }
          while ( v37 );
        }
        while ( j )
        {
          for ( i = j[6]; i; i = *(_QWORD *)(i + 16) )
            *(_QWORD *)&v36[8 * v39++] = i;
          v41 = (_QWORD **)j[1];
          v42 = j;
          if ( v41 )
          {
            v43 = *v41;
            for ( j = (_QWORD *)j[1]; v43; v43 = (_QWORD *)*v43 )
              j = v43;
          }
          else
          {
            for ( j = (_QWORD *)(j[2] & 0xFFFFFFFFFFFFFFFCuLL); j; j = (_QWORD *)(j[2] & 0xFFFFFFFFFFFFFFFCuLL) )
            {
              if ( (_QWORD *)*j == v42 )
                break;
              v42 = j;
            }
          }
        }
        qsort(v36, v35, 8uLL, (int (__cdecl *)(const void *, const void *))sub_140229860);
        v44 = 0LL;
        v45 = 0LL;
        if ( v35 )
        {
          v46 = (__int64)v73;
          v47 = (_QWORD **)(v36 + 8);
          while ( 1 )
          {
            v48 = *(v47 - 1);
            v49 = v48[4];
            if ( v49 <= 0x100 )
            {
              if ( (v45 && !(unsigned int)sub_14026AE50(*(v47 - 1), *(v47 - 2))
                 || v45 != v35 - 1 && !(unsigned int)sub_14026AE50(v48, *v47))
                && v50 )
              {
                if ( v44 && !(unsigned int)sub_14026AE50(v44, v48) )
                  goto LABEL_74;
                v61 = (_QWORD *)sub_14026AB70(v46, *v48, v49, v48 + 3, 1);
                if ( !v61 )
                  goto LABEL_74;
LABEL_111:
                if ( v61[3] )
                {
                  v48[4] = v61;
                }
                else
                {
                  sub_14026B308(v69, v61);
                  v62 = sub_14033D7D0(*((_DWORD *)v48 + 8));
                  ++*((_QWORD *)&v78 + v62);
                }
                v44 = v48;
                goto LABEL_74;
              }
              v61 = (_QWORD *)sub_14026AB70(v46, *v48, v49, v48 + 3, 0);
              if ( v61 )
                goto LABEL_111;
              v48[1] = -1LL;
            }
LABEL_74:
            ++v45;
            ++v47;
            if ( v45 >= v35 )
            {
              v6 = v67;
              break;
            }
          }
        }
        v5 = v74;
        sub_1406E6E88((__int64)v74, v6, (__int64)&v78);
      }
    }
    while ( P )
    {
      v51 = P;
      RtlAvlRemoveNode((unsigned __int64 *)&P, (unsigned __int64 *)P);
      v52 = v51[3];
      v53 = v51[6];
      if ( v36 )
      {
        if ( v53 )
        {
          v54 = v36;
          do
          {
            *v54++ = v53;
            v53 = *(_QWORD *)(v53 + 16);
          }
          while ( v53 );
        }
        qsort(v36, v52, 8uLL, (int (__cdecl *)(const void *, const void *))sub_140230760);
        v51[6] = 0LL;
        for ( k = 0LL; k < v52; ++k )
        {
          v56 = *(_QWORD *)&v36[8 * k];
          v57 = *(_QWORD *)(v56 + 8);
          if ( v57 == -1 || k && v57 == *(_QWORD *)(*(_QWORD *)&v36[8 * k - 8] + 8LL) )
          {
            sub_1406F33E4(v56);
            --v51[3];
          }
          else
          {
            *(_QWORD *)(v56 + 16) = v51[6];
            v51[6] = v56;
          }
        }
        if ( v51[3] )
          sub_140314BA0((__int64)v5, v51, v69, &v77, v6);
      }
      else
      {
        for ( ; v53; v53 = *(_QWORD *)(v53 + 16) )
          sub_1406F33E4(v53);
      }
      v58 = (void *)v51[5];
      if ( v58 )
        ObfDereferenceObject(v58);
      ExFreePoolWithTag(v51, 0);
    }
    if ( v36 )
      ExFreePoolWithTag(v36, 0);
    if ( (*((_DWORD *)v5 + 15) & 2) == 0 )
      sub_14069A6F4((__int64)v5);
    while ( 1 )
    {
      v59 = v69[0];
      result = v69;
      if ( (__int64 *)v69[0] == v69 )
        break;
      if ( *(__int64 **)(v69[0] + 8) != v69 || (v60 = *(_QWORD *)v69[0], *(_QWORD *)(*(_QWORD *)v69[0] + 8LL) != v69[0]) )
        __fastfail(3u);
      v69[0] = *(_QWORD *)v69[0];
      *(_QWORD *)(v60 + 8) = v69;
      *(_QWORD *)(v59 + 32) = 0LL;
      sub_140239A98(v59);
    }
  }
  return result;
}
