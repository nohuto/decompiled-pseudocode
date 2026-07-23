/*
 * XREFs of sub_1406C1FDC @ 0x1406C1FDC
 * Callers:
 *     sub_1406C1D24 @ 0x1406C1D24 (sub_1406C1D24.c)
 *     sub_140788A80 @ 0x140788A80 (sub_140788A80.c)
 *     sub_140A2E1BC @ 0x140A2E1BC (sub_140A2E1BC.c)
 * Callees:
 *     _wcsicmp @ 0x1403E1490 (_wcsicmp.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1406C2248 @ 0x1406C2248 (sub_1406C2248.c)
 *     sub_1407827F0 @ 0x1407827F0 (sub_1407827F0.c)
 *     sub_140788D90 @ 0x140788D90 (sub_140788D90.c)
 *     sub_140859460 @ 0x140859460 (sub_140859460.c)
 */

__int64 __fastcall sub_1406C1FDC(
        __int64 a1,
        const wchar_t *a2,
        void *a3,
        __int64 a4,
        _DWORD *a5,
        _BYTE *a6,
        unsigned int a7,
        unsigned int *a8)
{
  int v11; // ebx
  __int64 v12; // r15
  int v13; // r10d
  __int64 v14; // r9
  __int64 **v15; // rdx
  __int64 *v16; // r8
  unsigned int v17; // edx
  __int64 (**v18)[2]; // r8
  __int64 *v19; // r9
  unsigned int v20; // edx
  __int64 (**v21)[3]; // r8
  __int64 *v22; // r9
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 (**v25)[2]; // r12
  __int64 v26; // rdi
  HANDLE v27; // rdx
  __int64 v29; // rax
  __int64 v30; // rcx
  int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // rax
  void *v34; // rcx
  unsigned int v35; // edx
  size_t v36; // r8
  const wchar_t *v37; // rdx
  int v38; // eax
  int v39; // eax
  __int64 v40; // rax
  _BYTE *v41; // rdx
  bool v42; // cf
  __int64 v43; // rax
  __int64 v44; // rax
  char v45; // cl
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rdx
  size_t v51; // rax
  __int64 v52; // [rsp+50h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-8h] BYREF

  Handle = 0LL;
  v52 = 0LL;
  *a5 = 0;
  *a8 = 0;
  v11 = 0;
  v12 = 0LL;
  if ( !wcsicmp(a2, asc_140868930) )
  {
    v11 = -1073741637;
    goto LABEL_23;
  }
  v13 = *(_DWORD *)(a4 + 16);
  if ( v13 == 2 )
  {
    v29 = *(_QWORD *)a4 - 0x498DAD270D6C5BD7LL;
    if ( *(_QWORD *)a4 == 0x498DAD270D6C5BD7LL )
      v29 = *(_QWORD *)(a4 + 8) + 0x5008C7D4C8250077LL;
    if ( !v29 )
    {
      *a5 = 18;
      v33 = -1LL;
      do
        ++v33;
      while ( a2[v33] );
      v34 = a6;
      v35 = 2 * v33 + 2;
      *a8 = v35;
      if ( a6 && a7 >= v35 )
      {
        v36 = v35;
        v37 = a2;
LABEL_51:
        memmove(v34, v37, v36);
        goto LABEL_23;
      }
      goto LABEL_52;
    }
  }
  v14 = 0LL;
  v15 = &off_140C04470;
  do
  {
    v16 = *v15;
    if ( *((_DWORD *)*v15 + 4) == v13 )
    {
      v30 = *v16 - *(_QWORD *)a4;
      if ( *v16 == *(_QWORD *)a4 )
        v30 = v16[1] - *(_QWORD *)(a4 + 8);
      if ( !v30 )
      {
        v38 = sub_1406C2248(a1, a2, &v52, v14);
        v11 = v38;
        if ( v38 < 0 )
          goto LABEL_23;
        v39 = *(_DWORD *)(a4 + 16);
        if ( v39 == 5 )
        {
          v40 = *(_QWORD *)a4 - 0x4F7A142C8163EB00LL;
          if ( *(_QWORD *)a4 == 0x4F7A142C8163EB00LL )
            v40 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
          if ( v40 )
            goto LABEL_23;
          v41 = a6;
          *a5 = 17;
          *a8 = 1;
          if ( !a6 || !a7 )
            goto LABEL_52;
          v42 = *(_QWORD *)(v52 + 96) != 0LL;
        }
        else
        {
          switch ( v39 )
          {
            case 6:
              v43 = *(_QWORD *)a4 - 0x4F7A142C8163EB00LL;
              if ( *(_QWORD *)a4 == 0x4F7A142C8163EB00LL )
                v43 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
              if ( v43 )
                goto LABEL_23;
              *a5 = 17;
              *a8 = 1;
              if ( a6 && a7 )
              {
                *a6 = (*(_QWORD *)(a1 + 48) != v52) - 1;
                goto LABEL_23;
              }
              goto LABEL_52;
            case 7:
              v44 = *(_QWORD *)a4 - 0x4F7A142C8163EB00LL;
              if ( *(_QWORD *)a4 == 0x4F7A142C8163EB00LL )
                v44 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
              if ( v44 )
                goto LABEL_23;
              v41 = a6;
              *a5 = 17;
              *a8 = 1;
              if ( !a6 || !a7 )
                goto LABEL_52;
              v45 = *(_DWORD *)(v52 + 64) & 4;
              break;
            case 11:
              v46 = *(_QWORD *)a4 - 0x4F7A142C8163EB00LL;
              if ( *(_QWORD *)a4 == 0x4F7A142C8163EB00LL )
                v46 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
              if ( v46 )
                goto LABEL_23;
              *a5 = 7;
              *a8 = 4;
              if ( a6 && a7 >= 4 )
              {
                *(_DWORD *)a6 = *(_DWORD *)(a1 + 12);
                goto LABEL_23;
              }
              goto LABEL_52;
            case 15:
              v47 = *(_QWORD *)a4 - 0x4F7A142C8163EB00LL;
              if ( *(_QWORD *)a4 == 0x4F7A142C8163EB00LL )
                v47 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
              if ( v47 )
                goto LABEL_23;
              *a5 = 24;
              *a8 = 4;
              if ( a6 && a7 >= 4 )
              {
                *(_DWORD *)a6 = *(_DWORD *)(v52 + 160);
                goto LABEL_23;
              }
              goto LABEL_52;
            case 23:
              v48 = *(_QWORD *)a4 - 0x4F7A142C8163EB00LL;
              if ( *(_QWORD *)a4 == 0x4F7A142C8163EB00LL )
                v48 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
              if ( v48 )
                goto LABEL_23;
              v41 = a6;
              *a5 = 17;
              *a8 = 1;
              if ( !a6 || !a7 )
                goto LABEL_52;
              v45 = *(_DWORD *)(v52 + 64) & 0x10;
              break;
            case 24:
              v49 = *(_QWORD *)a4 - 0x4F7A142C8163EB00LL;
              if ( *(_QWORD *)a4 == 0x4F7A142C8163EB00LL )
                v49 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
              if ( v49 )
                goto LABEL_23;
              v50 = v52;
              if ( !*(_QWORD *)(v52 + 32) )
              {
                v11 = -1073741772;
                goto LABEL_23;
              }
              *a5 = 18;
              v51 = (unsigned int)*(unsigned __int16 *)(*(_QWORD *)(v50 + 32) + 16LL) + 2;
              *a8 = v51;
              v34 = a6;
              if ( a6 && a7 >= (unsigned int)v51 )
              {
                v36 = v51;
                v37 = *(const wchar_t **)(*(_QWORD *)(v50 + 32) + 24LL);
                goto LABEL_51;
              }
LABEL_52:
              v11 = -1073741789;
              goto LABEL_23;
            default:
              goto LABEL_23;
          }
          v42 = v45 != 0;
        }
        *v41 = -v42;
        goto LABEL_23;
      }
    }
    v14 = (unsigned int)(v14 + 1);
    ++v15;
  }
  while ( (unsigned int)v14 < 8 );
  v17 = 0;
  v18 = &off_140001300;
  while ( 1 )
  {
    v19 = (__int64 *)*v18;
    if ( LODWORD((**v18)[2]) == v13 )
    {
      v23 = *v19 - *(_QWORD *)a4;
      if ( *v19 == *(_QWORD *)a4 )
        v23 = v19[1] - *(_QWORD *)(a4 + 8);
      if ( !v23 )
        break;
    }
    ++v17;
    v18 += 5;
    if ( v17 >= 0xC )
      goto LABEL_9;
  }
  v24 = 5LL * v17;
  v25 = &off_140001300 + 5 * v17;
  if ( v25 )
  {
    v26 = a1;
    goto LABEL_18;
  }
LABEL_9:
  v20 = 0;
  v21 = &off_1400014E0;
  while ( 1 )
  {
    v22 = (__int64 *)*v21;
    if ( LODWORD((**v21)[2]) == v13 )
    {
      v32 = *v22 - *(_QWORD *)a4;
      if ( *v22 == *(_QWORD *)a4 )
        v32 = v22[1] - *(_QWORD *)(a4 + 8);
      if ( !v32 )
        break;
    }
    ++v20;
    v21 += 5;
    if ( v20 >= 4 )
      goto LABEL_109;
  }
  v25 = (__int64 (**)[2])(&off_1400014E0 + 5 * v20);
  if ( !v25 )
  {
LABEL_109:
    v11 = -1073741802;
    goto LABEL_23;
  }
  v26 = a1;
  v11 = sub_1406C2248(a1, a2, &v52, v22);
  if ( v11 < 0 )
    goto LABEL_23;
  v12 = v52;
LABEL_18:
  if ( a3 && (!v12 || (*(_DWORD *)(v12 + 64) & 0x10) == 0)
    || (!v12 || (*(_DWORD *)(v12 + 64) & 0x10) == 0
      ? (v31 = sub_140859460(v26, a2, 1LL, 0LL, &Handle, 0LL))
      : (v31 = sub_1407827F0(v26, *(_QWORD *)(v26 + 40), 1, (_DWORD)a2, 1, 0, (__int64)&Handle, 0LL, 0LL)),
        v11 = v31,
        v31 >= 0) )
  {
    v27 = a3;
    if ( Handle )
      v27 = Handle;
    v11 = sub_140788D90(v24, v27, v25, a5, a6, a7, a8);
  }
LABEL_23:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v11;
}
