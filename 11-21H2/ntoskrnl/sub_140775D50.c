/*
 * XREFs of sub_140775D50 @ 0x140775D50
 * Callers:
 *     sub_140775990 @ 0x140775990 (sub_140775990.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     RtlLookupElementGenericTableAvl @ 0x1402DF3F0 (RtlLookupElementGenericTableAvl.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     _wcsicmp @ 0x1403E1490 (_wcsicmp.c)
 *     sub_1406DF8F0 @ 0x1406DF8F0 (sub_1406DF8F0.c)
 *     sub_1407734A4 @ 0x1407734A4 (sub_1407734A4.c)
 *     sub_140776E5C @ 0x140776E5C (sub_140776E5C.c)
 *     sub_140777C60 @ 0x140777C60 (sub_140777C60.c)
 *     sub_140777CF0 @ 0x140777CF0 (sub_140777CF0.c)
 *     sub_1407796C4 @ 0x1407796C4 (sub_1407796C4.c)
 *     sub_14077D454 @ 0x14077D454 (sub_14077D454.c)
 *     sub_14094A710 @ 0x14094A710 (sub_14094A710.c)
 */

char __fastcall sub_140775D50(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  unsigned int v5; // r13d
  char v8; // r12
  char v9; // di
  __int64 v10; // rdx
  int v11; // r8d
  int v12; // eax
  unsigned int v13; // r12d
  char v14; // r13
  unsigned int v15; // r15d
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // rax
  unsigned int k; // esi
  __int64 v20; // rcx
  unsigned int v21; // r15d
  __int64 v22; // rdi
  __int64 v23; // r8
  __int64 v24; // rdx
  const wchar_t *v25; // rcx
  const wchar_t *v26; // rdx
  struct _KTHREAD *CurrentThread; // rax
  bool v28; // r15
  bool v29; // cl
  __int64 v30; // rcx
  __int64 v31; // rcx
  const wchar_t *v32; // rcx
  const wchar_t *v33; // rdx
  __int64 v34; // r8
  int v35; // ecx
  bool v36; // di
  unsigned int v37; // r15d
  struct _KTHREAD *v38; // rax
  ULONG_PTR v39; // rcx
  unsigned int v40; // r12d
  __int64 v41; // rsi
  __int64 v42; // rdi
  __int64 v43; // rcx
  int v44; // eax
  struct _KTHREAD *v45; // rax
  struct _KTHREAD *v46; // rax
  unsigned int v47; // r15d
  __int64 v48; // rsi
  const wchar_t *i; // rdi
  __int64 v50; // rax
  const wchar_t *j; // r15
  __int64 v52; // rax
  int v53; // ecx
  const wchar_t *v54; // rdi
  __int64 v55; // rdx
  struct _KTHREAD *v56; // rax
  int v58; // [rsp+30h] [rbp-10h]
  __int64 v59; // [rsp+38h] [rbp-8h] BYREF
  __int64 Buffer; // [rsp+88h] [rbp+48h] BYREF
  char v61; // [rsp+90h] [rbp+50h]
  bool v62; // [rsp+98h] [rbp+58h]

  v4 = *(_DWORD *)(a2 + 4);
  v5 = 0;
  v58 = 0;
  v59 = 0LL;
  v62 = 0;
  v8 = 0;
  v61 = 0;
  v9 = 0;
  LOBYTE(Buffer) = 0;
  LOBYTE(a4) = 0;
  if ( (v4 & 3) != 0 || (v4 & 8) == 0 && !*(_DWORD *)(a2 + 76) )
    goto LABEL_28;
  if ( (v4 & 4) != 0 )
  {
    v58 = sub_14094A710(a1 + 32, a2 + 24, &Buffer, a4);
    if ( v58 < 0 )
      goto LABEL_134;
    LOBYTE(a4) = Buffer;
  }
  v10 = *(_QWORD *)(a1 + 24);
  v11 = *(_DWORD *)(v10 + 40) & 4;
  if ( (*(_DWORD *)(v10 + 40) & 2) != 0 )
  {
    if ( !v11 )
    {
LABEL_66:
      v8 = 1;
      goto LABEL_67;
    }
    v47 = 0;
    if ( *(_DWORD *)(a2 + 76) )
    {
      while ( 1 )
      {
        v48 = 32LL * v47;
        if ( *(_DWORD *)(v48 + a2 + 100) != 1 || (_BYTE)a4 )
        {
          if ( !*(_QWORD *)(v48 + a2 + 104) )
            goto LABEL_66;
          for ( i = *(const wchar_t **)(*(_QWORD *)(a1 + 24) + 56LL); *i; i += v50 + 1 )
          {
            if ( !wcsicmp(*(const wchar_t **)(v48 + a2 + 104), i) )
              goto LABEL_66;
            v50 = -1LL;
            do
              ++v50;
            while ( i[v50] );
          }
        }
        if ( ++v47 >= *(_DWORD *)(a2 + 76) )
          break;
        LOBYTE(a4) = Buffer;
      }
    }
LABEL_67:
    v14 = Buffer;
  }
  else
  {
    v12 = *(_DWORD *)(v10 + 64);
    if ( v11 )
    {
      if ( !v12 )
        goto LABEL_67;
      while ( 1 )
      {
        v40 = 0;
        v41 = *(_QWORD *)(v10 + 72) + 32LL * v5;
        if ( *(_DWORD *)(a2 + 76) )
          break;
LABEL_72:
        v10 = *(_QWORD *)(a1 + 24);
        ++v5;
        v8 = 0;
        if ( v5 >= *(_DWORD *)(v10 + 64) )
          goto LABEL_67;
        LOBYTE(a4) = Buffer;
      }
      while ( 1 )
      {
        v42 = 32LL * v40;
        if ( *(_DWORD *)(v41 + 16) == *(_DWORD *)(v42 + a2 + 96) )
        {
          v43 = *(_QWORD *)v41 - *(_QWORD *)(v42 + a2 + 80);
          if ( *(_QWORD *)v41 == *(_QWORD *)(v42 + a2 + 80) )
            v43 = *(_QWORD *)(v41 + 8) - *(_QWORD *)(v42 + a2 + 88);
          if ( !v43 )
          {
            v44 = *(_DWORD *)(v42 + a2 + 100);
            if ( *(_DWORD *)(v41 + 20) == v44 && (v44 != 1 || (_BYTE)a4) )
            {
              if ( !*(_QWORD *)(v42 + a2 + 104) )
              {
LABEL_80:
                v8 = 1;
                goto LABEL_67;
              }
              for ( j = *(const wchar_t **)(*(_QWORD *)(a1 + 24) + 56LL); *j; j += v52 + 1 )
              {
                if ( !wcsicmp(*(const wchar_t **)(v42 + a2 + 104), j) )
                  goto LABEL_80;
                v52 = -1LL;
                do
                  ++v52;
                while ( j[v52] );
              }
            }
          }
        }
        LOBYTE(a4) = Buffer;
        if ( ++v40 >= *(_DWORD *)(a2 + 76) )
          goto LABEL_72;
      }
    }
    v13 = 0;
    v14 = Buffer;
    if ( v12 )
    {
      do
      {
        v15 = 0;
        v16 = *(_QWORD *)(v10 + 72) + 32LL * v13;
        if ( *(_DWORD *)(a2 + 76) )
        {
          while ( 1 )
          {
            v17 = 32LL * v15;
            if ( *(_DWORD *)(v16 + 16) == *(_DWORD *)(v17 + a2 + 96) )
            {
              v31 = *(_QWORD *)v16 - *(_QWORD *)(v17 + a2 + 80);
              if ( *(_QWORD *)v16 == *(_QWORD *)(v17 + a2 + 80) )
                v31 = *(_QWORD *)(v16 + 8) - *(_QWORD *)(v17 + a2 + 88);
              if ( !v31 && *(_DWORD *)(v16 + 20) == *(_DWORD *)(v17 + a2 + 100) )
              {
                v32 = *(const wchar_t **)(v16 + 24);
                v33 = *(const wchar_t **)(v17 + a2 + 104);
                if ( (v32 == v33 || v32 && v33 && !wcsicmp(v32, v33)) && (*(_DWORD *)(v17 + a2 + 100) != 1 || v14) )
                  break;
              }
            }
            if ( ++v15 >= *(_DWORD *)(a2 + 76) )
              goto LABEL_11;
          }
          v61 = 1;
        }
LABEL_11:
        v10 = *(_QWORD *)(a1 + 24);
        ++v13;
      }
      while ( v13 < *(_DWORD *)(v10 + 64) );
      v8 = v61;
    }
    else
    {
      v8 = 0;
    }
  }
  v18 = *(_QWORD *)(a1 + 24);
  if ( !*(_DWORD *)(v18 + 20) && (LODWORD(v18) = *(_DWORD *)(a2 + 4), (v18 & 8) != 0) )
  {
LABEL_24:
    v9 = 1;
  }
  else
  {
    for ( k = 0; ; ++k )
    {
      v9 = 0;
      if ( k >= *(_DWORD *)(a2 + 76) )
        break;
      v20 = *(_QWORD *)(a1 + 24);
      v21 = 0;
      v22 = 32LL * k;
      if ( *(_DWORD *)(v20 + 80) )
      {
        do
        {
          v23 = *(_QWORD *)(v20 + 88);
          v24 = 56LL * v21;
          LODWORD(v18) = *(_DWORD *)(v22 + a2 + 96);
          if ( *(_DWORD *)(v24 + v23 + 24) == (_DWORD)v18 )
          {
            v30 = *(_QWORD *)(v24 + v23 + 8) - *(_QWORD *)(v22 + a2 + 80);
            if ( !v30 )
              v30 = *(_QWORD *)(v24 + v23 + 16) - *(_QWORD *)(v22 + a2 + 88);
            if ( !v30 )
            {
              LODWORD(v18) = *(_DWORD *)(v22 + a2 + 100);
              if ( *(_DWORD *)(v24 + v23 + 28) == (_DWORD)v18 )
              {
                v25 = *(const wchar_t **)(v24 + v23 + 32);
                v26 = *(const wchar_t **)(v22 + a2 + 104);
                if ( v25 == v26 || v25 && v26 && (LODWORD(v18) = wcsicmp(v25, v26), !(_DWORD)v18) )
                {
                  if ( *(_DWORD *)(v22 + a2 + 100) != 1 || v14 )
                    goto LABEL_24;
                }
              }
            }
          }
          v20 = *(_QWORD *)(a1 + 24);
        }
        while ( ++v21 < *(_DWORD *)(v20 + 80) );
      }
    }
  }
  if ( v8 || v9 )
  {
LABEL_28:
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    ExAcquirePushLockExclusiveEx(a1 + 64, 0LL);
    Buffer = *(_QWORD *)(a2 + 8);
    v28 = RtlLookupElementGenericTableAvl((PRTL_AVL_TABLE)(a1 + 72), &Buffer) != 0LL;
    ExReleasePushLockEx(a1 + 64, 0LL);
    sub_1402F9540((__int64)KeGetCurrentThread());
    LODWORD(v18) = *(_DWORD *)(a2 + 4);
    if ( (v18 & 2) != 0 )
    {
      if ( !v28 )
      {
        v36 = v62;
        v37 = 0;
        goto LABEL_60;
      }
      goto LABEL_84;
    }
    if ( (v18 & 1) != 0 || v9 )
    {
      v34 = *(_QWORD *)(a1 + 24);
      v35 = *(_DWORD *)(v34 + 20);
      if ( v35 )
      {
        v53 = v35 - 1;
        if ( v53 )
        {
          if ( v53 != 1 )
            goto LABEL_58;
          v54 = *(const wchar_t **)(v34 + 32);
          v29 = 0;
          LOBYTE(Buffer) = 0;
          if ( !*v54 )
            goto LABEL_58;
          LOBYTE(v18) = 0;
          while ( !(_BYTE)v18 )
          {
            v29 = wcsicmp(v54, *(const wchar_t **)(*(_QWORD *)(a2 + 8) + 16LL)) == 0;
            v55 = -1LL;
            LOBYTE(v18) = v29;
            LOBYTE(Buffer) = v29;
            do
              ++v55;
            while ( v54[v55] );
            v54 += v55 + 1;
            if ( !*v54 )
              goto LABEL_46;
          }
        }
        else
        {
          v29 = wcsicmp(*(const wchar_t **)(v34 + 24), *(const wchar_t **)(*(_QWORD *)(a2 + 8) + 16LL)) == 0;
          LOBYTE(Buffer) = v29;
          LOBYTE(v18) = v29;
LABEL_46:
          if ( !(_BYTE)v18 )
            goto LABEL_58;
        }
      }
      else
      {
        v29 = 1;
        LOBYTE(Buffer) = 1;
      }
      v18 = *(_QWORD *)(a1 + 24);
      if ( !*(_DWORD *)(v18 + 20) )
      {
        LODWORD(v18) = sub_14077D454(
                         qword_140D00AC0,
                         *(_QWORD *)(*(_QWORD *)(a2 + 8) + 16LL),
                         *(_DWORD *)(*(_QWORD *)(a2 + 8) + 28LL),
                         0,
                         (int)a1 + 32,
                         (__int64)&Buffer);
        v58 = v18;
        if ( (_DWORD)v18 == -1073741772 || (_DWORD)v18 == -1073741275 )
        {
          v29 = 0;
          v58 = 0;
          LOBYTE(Buffer) = 0;
        }
        else
        {
          if ( (int)v18 < 0 )
            goto LABEL_134;
          v29 = Buffer;
        }
      }
      if ( !v29 )
      {
LABEL_58:
        if ( !v28 )
        {
          v36 = v62;
          v37 = 0;
LABEL_60:
          if ( v58 >= 0 )
          {
            if ( !v36 )
              return v18;
            if ( (int)sub_140777C60(v37, *(_QWORD *)(a2 + 8), a2, &v59) >= 0 )
            {
              v38 = KeGetCurrentThread();
              --*((_WORD *)v38 + 242);
              ExAcquirePushLockExclusiveEx(a1 + 64, 0LL);
              sub_140777CF0(a1, v59);
              v39 = a1 + 64;
LABEL_64:
              ExReleasePushLockEx(v39, 0LL);
              LOBYTE(v18) = sub_1402F9540((__int64)KeGetCurrentThread());
              return v18;
            }
          }
LABEL_134:
          v56 = KeGetCurrentThread();
          --*((_WORD *)v56 + 242);
          ExAcquirePushLockExclusiveEx(a1 + 64, 0LL);
          *(_DWORD *)(a1 + 216) |= 1u;
          sub_140776E5C(a1);
          v39 = a1 + 64;
          goto LABEL_64;
        }
LABEL_84:
        v46 = KeGetCurrentThread();
        v36 = 1;
        v37 = 3;
        --*((_WORD *)v46 + 242);
        ExAcquirePushLockExclusiveEx(a1 + 64, 0LL);
        sub_1407734A4(a1, *(void **)(a2 + 8));
        ExReleasePushLockEx(a1 + 64, 0LL);
        LOBYTE(v18) = sub_1402F9540((__int64)KeGetCurrentThread());
        goto LABEL_60;
      }
      v18 = *(_QWORD *)(a1 + 24);
      if ( *(_QWORD *)(v18 + 88) )
      {
        LODWORD(v18) = sub_1407796C4(a1, *(_QWORD *)(*(_QWORD *)(a2 + 8) + 16LL), &Buffer);
        v58 = v18;
        if ( (_DWORD)v18 == -1073741772 )
        {
          v29 = 0;
          v58 = 0;
        }
        else
        {
          if ( (int)v18 < 0 )
            goto LABEL_134;
          v29 = Buffer;
        }
      }
    }
    else
    {
      v29 = v28;
    }
    if ( v29 )
    {
      if ( v28 )
      {
        v37 = 2;
        v36 = v8 != 0;
      }
      else
      {
        v45 = KeGetCurrentThread();
        v37 = 1;
        --*((_WORD *)v45 + 242);
        ExAcquirePushLockExclusiveEx(a1 + 64, 0LL);
        v58 = sub_1406DF8F0(a1, *(_QWORD *)(a2 + 8));
        ExReleasePushLockEx(a1 + 64, 0LL);
        LOBYTE(v18) = sub_1402F9540((__int64)KeGetCurrentThread());
        v36 = 1;
      }
      goto LABEL_60;
    }
    goto LABEL_58;
  }
  return v18;
}
