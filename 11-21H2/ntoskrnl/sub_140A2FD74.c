/*
 * XREFs of sub_140A2FD74 @ 0x140A2FD74
 * Callers:
 *     sub_1407881D0 @ 0x1407881D0 (sub_1407881D0.c)
 *     sub_140A2FD74 @ 0x140A2FD74 (sub_140A2FD74.c)
 * Callees:
 *     _wcsicmp @ 0x1403E1490 (_wcsicmp.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406D5A30 @ 0x1406D5A30 (sub_1406D5A30.c)
 *     sub_14077FC64 @ 0x14077FC64 (sub_14077FC64.c)
 *     sub_140788A34 @ 0x140788A34 (sub_140788A34.c)
 *     sub_14081D304 @ 0x14081D304 (sub_14081D304.c)
 *     sub_140A2ED3C @ 0x140A2ED3C (sub_140A2ED3C.c)
 *     sub_140A2EDF4 @ 0x140A2EDF4 (sub_140A2EDF4.c)
 *     sub_140A2FD74 @ 0x140A2FD74 (sub_140A2FD74.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140A2FD74(__int64 *a1, _WORD *a2, void *a3, __int64 a4, int a5, void *Src, unsigned int a7)
{
  int v8; // r8d
  _WORD *v10; // rbx
  _WORD *v12; // r15
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  int v19; // ebx
  unsigned int v20; // edx
  __int64 (**i)[3]; // r9
  __int64 *v22; // r10
  __int64 v23; // rcx
  __int64 (**v25)[3]; // r13
  int v26; // r14d
  int v27; // eax
  bool v28; // zf
  _OWORD *Pool2; // rdi
  HANDLE v30; // rcx
  int v31; // eax
  size_t v32; // r8
  char *v33; // rcx
  HANDLE v34; // rcx
  const wchar_t *v35; // rdx
  ULONG v36; // r12d
  int *v37; // r15
  __int64 v38; // rax
  __int64 v39; // rcx
  int v40; // eax
  HANDLE v41; // r8
  HANDLE v42; // rdx
  __int64 v43; // rax
  HANDLE v44; // r8
  __int64 v45; // rdx
  __int64 v46; // rcx
  const wchar_t *v47; // rbx
  HANDLE v48; // r8
  int v49; // r8d
  HANDLE v50; // rdx
  NTSTATUS v51; // eax
  HANDLE v52; // r8
  HANDLE v53; // r8
  HANDLE v54; // rdx
  int v55; // r8d
  int v56; // [rsp+40h] [rbp-20h] BYREF
  int v57; // [rsp+44h] [rbp-1Ch] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-18h] BYREF
  _WORD *v59; // [rsp+50h] [rbp-10h]
  __int64 v62; // [rsp+B8h] [rbp+58h] BYREF

  v8 = *(_DWORD *)(a4 + 16);
  Handle = 0LL;
  v10 = a2;
  v57 = 0;
  v56 = 0;
  v12 = 0LL;
  v59 = 0LL;
  LODWORD(v62) = 0;
  if ( v8 == 2 )
  {
    v13 = *(_QWORD *)a4 - 0x498DAD270D6C5BD7LL;
    if ( *(_QWORD *)a4 == 0x498DAD270D6C5BD7LL )
      v13 = *(_QWORD *)(a4 + 8) + 0x5008C7D4C8250077LL;
    if ( !v13 )
      return (unsigned int)-1073741790;
  }
  if ( v8 == 18 )
  {
    v14 = *(_QWORD *)a4 - 0x4F7A142C8163EB01LL;
    if ( *(_QWORD *)a4 == 0x4F7A142C8163EB01LL )
      v14 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
    if ( !v14 )
      return (unsigned int)-1073741790;
  }
  if ( v8 == 29 )
  {
    v15 = *(_QWORD *)a4 - 0x4F7A142C8163EB01LL;
    if ( *(_QWORD *)a4 == 0x4F7A142C8163EB01LL )
      v15 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
    if ( !v15 )
      return (unsigned int)-1073741790;
  }
  if ( v8 == 30 )
  {
    v16 = *(_QWORD *)a4 - 0x4F7A142C8163EB01LL;
    if ( *(_QWORD *)a4 == 0x4F7A142C8163EB01LL )
      v16 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
    if ( !v16 )
      return (unsigned int)-1073741790;
  }
  if ( v8 == 33 )
  {
    v17 = *(_QWORD *)a4 - 0x4F7A142C8163EB01LL;
    if ( *(_QWORD *)a4 == 0x4F7A142C8163EB01LL )
      v17 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
    if ( !v17 )
      return (unsigned int)-1073741790;
  }
  if ( v8 == 40 )
  {
    v18 = *(_QWORD *)a4 - 0x4F7A142C8163EB01LL;
    if ( *(_QWORD *)a4 == 0x4F7A142C8163EB01LL )
      v18 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
    if ( !v18 )
      return (unsigned int)-1073741790;
  }
  v20 = 0;
  for ( i = &off_140002870; ; i += 5 )
  {
    v22 = (__int64 *)*i;
    if ( LODWORD((**i)[2]) == v8 )
    {
      v23 = *v22 - *(_QWORD *)a4;
      if ( *v22 == *(_QWORD *)a4 )
        v23 = v22[1] - *(_QWORD *)(a4 + 8);
      if ( !v23 )
        break;
    }
    if ( ++v20 >= 0x20 )
      return (unsigned int)-1073741802;
  }
  v25 = &off_140002870 + 5 * v20;
  if ( !v25 )
    return (unsigned int)-1073741802;
  v26 = a5;
  if ( a5 != *((_DWORD *)v25 + 2) && a5 )
    return (unsigned int)-1073741811;
  if ( !a3 )
  {
    v19 = sub_140788A34(a1, (__int64)v10, 3, 0, (__int64)&Handle, 0LL);
    if ( v19 < 0 )
      goto LABEL_111;
    v10 = a2;
  }
  v27 = *((_DWORD *)v25 + 8);
  if ( v27 )
  {
    if ( v26 )
      v28 = a7 == v27;
    else
      v28 = a7 == 0;
    if ( !v28 )
    {
      v19 = -1073741823;
      goto LABEL_111;
    }
    LODWORD(v62) = 48;
    Pool2 = (_OWORD *)ExAllocatePool2(256LL, 48LL, 1111770192LL);
    if ( !Pool2 )
      goto LABEL_48;
    v30 = Handle;
    if ( a3 )
      v30 = a3;
    v31 = sub_14077FC64(v30, L"Version", &v57, Pool2, (unsigned int *)&v62);
    v19 = v31;
    if ( v31 == -1073741772 )
    {
      *Pool2 = 0LL;
      Pool2[1] = 0LL;
      Pool2[2] = 0LL;
      goto LABEL_58;
    }
    if ( v31 == -1073741789 )
    {
      v19 = -1073741595;
    }
    else if ( v31 >= 0 )
    {
      if ( v57 == 3 && (_DWORD)v62 == 48 )
      {
LABEL_58:
        v32 = *((unsigned int *)v25 + 8);
        v33 = (char *)Pool2 + *((unsigned int *)v25 + 7);
        if ( v26 )
          memmove(v33, Src, v32);
        else
          memset(v33, 0, v32);
        v34 = Handle;
        if ( a3 )
          v34 = a3;
        v19 = sub_1406D5A30(v34, L"Version", 3u, Pool2, 0x30u);
        goto LABEL_65;
      }
      v19 = -1073741823;
    }
LABEL_65:
    ExFreePoolWithTag(Pool2, 0);
LABEL_109:
    if ( v12 )
      ExFreePoolWithTag(v12, 0);
    goto LABEL_111;
  }
  v35 = L"Microsoft Windows";
  v36 = a7;
  v37 = (int *)Src;
  if ( *(_DWORD *)(a4 + 16) == 7 )
  {
    v38 = *(_QWORD *)a4 - 0x4F7A142C8163EB01LL;
    if ( *(_QWORD *)a4 == 0x4F7A142C8163EB01LL )
      v38 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
    v39 = 0LL;
    if ( !v38 && v26 == 18 && a7 > 2 )
    {
      if ( Src )
      {
        if ( !*((_WORD *)Src + ((unsigned __int64)a7 >> 1) - 1) )
        {
          v40 = wcsicmp((const wchar_t *)Src, L"Microsoft Windows");
          v39 = 0LL;
          if ( !v40 )
          {
            v41 = Handle;
            if ( a3 )
              v41 = a3;
            if ( (int)sub_140A2EDF4(a1, v10, v41, &v56) >= 0 && v56 == 218103811 )
            {
              v42 = Handle;
              if ( a3 )
                v42 = a3;
              v19 = sub_14081D304(v39, v42, (__int64)v25, 0, 0LL, 0);
              if ( v19 != -1073741275 )
                goto LABEL_111;
              goto LABEL_82;
            }
LABEL_106:
            v50 = Handle;
            if ( a3 )
              v50 = a3;
            v51 = sub_14081D304(v39, v50, (__int64)v25, v26, v37, v36);
            v12 = v59;
            v19 = v51;
            goto LABEL_109;
          }
        }
      }
    }
  }
  else
  {
    v39 = 0LL;
  }
  if ( *(_DWORD *)(a4 + 16) != 8 )
    goto LABEL_106;
  v43 = *(_QWORD *)a4 - 0x4F7A142C8163EB01LL;
  if ( *(_QWORD *)a4 == 0x4F7A142C8163EB01LL )
    v43 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
  if ( v43 )
    goto LABEL_106;
  if ( v26 == 7 )
  {
    if ( v36 != 4 || !v37 )
      goto LABEL_106;
    if ( *v37 == 218103811 )
    {
      v44 = Handle;
      if ( a3 )
        v44 = a3;
      if ( (unsigned int)sub_140A2ED3C(0LL, (__int64)v35, v44, 0LL, 0, (unsigned int *)&v62) == -1073741789
        && (_DWORD)v62 == 18 )
      {
        v59 = (_WORD *)ExAllocatePool2(256LL, 36LL, 1111770192LL);
        v47 = v59;
        if ( !v59 )
        {
LABEL_48:
          v19 = -1073741801;
          goto LABEL_111;
        }
        v48 = Handle;
        if ( a3 )
          v48 = a3;
        if ( (int)sub_140A2ED3C(v46, v45, v48, v59, 18, (unsigned int *)&v62) >= 0
          && (_DWORD)v62
          && !v47[(unsigned int)(v62 - 1)]
          && !wcsicmp(v47, L"Microsoft Windows") )
        {
          v49 = (int)Handle;
          if ( a3 )
            v49 = (int)a3;
          sub_140A2FD74((int)a1, (int)a2, v49, (int)&qword_140017280, 0, 0LL, 0);
        }
      }
      goto LABEL_106;
    }
  }
  else if ( v26 )
  {
    goto LABEL_106;
  }
  v52 = Handle;
  if ( a3 )
    v52 = a3;
  if ( (int)sub_140A2EDF4(a1, a2, v52, &v56) < 0 || v56 != 218103811 )
    goto LABEL_106;
  v53 = Handle;
  if ( a3 )
    v53 = a3;
  if ( (unsigned int)sub_140A2ED3C(v39, 0LL, v53, 0LL, 0, (unsigned int *)&v62) != -1073741275 )
    goto LABEL_106;
  v54 = Handle;
  if ( a3 )
    v54 = a3;
  v19 = sub_14081D304(v39, v54, (__int64)v25, v26, v37, v36);
  if ( v19 < 0 )
    goto LABEL_111;
  v55 = (int)Handle;
  if ( a3 )
    v55 = (int)a3;
  sub_140A2FD74((int)a1, (int)a2, v55, (int)&qword_140017280, 18, (void *)L"Microsoft Windows", 36);
LABEL_82:
  v19 = 0;
LABEL_111:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v19;
}
