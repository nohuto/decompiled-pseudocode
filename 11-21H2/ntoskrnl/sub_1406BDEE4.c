/*
 * XREFs of sub_1406BDEE4 @ 0x1406BDEE4
 * Callers:
 *     sub_1406BD3A8 @ 0x1406BD3A8 (sub_1406BD3A8.c)
 *     sub_140A2B950 @ 0x140A2B950 (sub_140A2B950.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1403E1490 (_wcsicmp.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_14077D29C @ 0x14077D29C (sub_14077D29C.c)
 *     sub_14077EF20 @ 0x14077EF20 (sub_14077EF20.c)
 *     sub_14077FC64 @ 0x14077FC64 (sub_14077FC64.c)
 *     sub_140789460 @ 0x140789460 (sub_140789460.c)
 */

__int64 __fastcall sub_1406BDEE4(
        __int64 a1,
        int a2,
        void *a3,
        __int64 a4,
        _DWORD *a5,
        unsigned __int64 a6,
        int a7,
        _DWORD *a8)
{
  _BYTE *v9; // r12
  __int64 (**v12)[6]; // rdx
  int v13; // r10d
  int v14; // ebx
  unsigned int v15; // r9d
  __int64 *v16; // r8
  __int64 (**v17)[6]; // rsi
  __int64 v18; // rcx
  int v19; // r14d
  int v20; // ecx
  int v21; // edx
  __int64 *v22; // r8
  int v23; // ecx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  HANDLE v30; // rcx
  int v31; // eax
  int v32; // eax
  __int64 v33; // rax
  int v34; // edi
  const WCHAR *v35; // r8
  int v36; // edx
  int v37; // eax
  int v38; // eax
  __int64 v39; // rax
  int v40; // edx
  int v41; // eax
  _BYTE v42[4]; // [rsp+40h] [rbp-59h] BYREF
  __int64 v43; // [rsp+44h] [rbp-55h] BYREF
  HANDLE v44; // [rsp+50h] [rbp-49h] BYREF
  int v45; // [rsp+58h] [rbp-41h]
  __int64 v46; // [rsp+60h] [rbp-39h]
  _DWORD *v47; // [rsp+68h] [rbp-31h]
  HANDLE Handle; // [rsp+70h] [rbp-29h]
  wchar_t Str2[12]; // [rsp+78h] [rbp-21h] BYREF

  v9 = (_BYTE *)a6;
  v46 = a1;
  v47 = a8;
  v12 = &off_140A39F60;
  v13 = *(_DWORD *)(a4 + 16);
  v14 = 0;
  v44 = 0LL;
  v15 = 0;
  Handle = 0LL;
  v43 = 0LL;
  v42[0] = 0;
  v45 = 0;
  do
  {
    v16 = (__int64 *)*v12;
    v17 = v12;
    if ( v13 == LODWORD((**v12)[2]) )
    {
      v18 = *(_QWORD *)a4 - *v16;
      if ( *(_QWORD *)a4 == *v16 )
        v18 = *(_QWORD *)(a4 + 8) - v16[1];
      if ( !v18 )
        break;
    }
    ++v15;
    v12 += 4;
    v17 = 0LL;
  }
  while ( v15 < 0xD );
  if ( !v17 )
    return (unsigned int)-1073741802;
  *a5 = 0;
  *a8 = 0;
  if ( a6 )
  {
    v19 = a7;
    v9 = (_BYTE *)(-(__int64)(a7 != 0) & a6);
  }
  else
  {
    v19 = 0;
  }
  if ( !a3 )
  {
    v14 = sub_140789460(v46, a2, (_DWORD)v16, 0, 1, 0, (__int64)&v44, 0LL);
    if ( v14 < 0 )
      goto LABEL_22;
  }
  v20 = *(_DWORD *)(a4 + 16);
  if ( v20 == 7 )
  {
    v25 = *(_QWORD *)a4 - 0x47CE50A7259ABFFCLL;
    if ( *(_QWORD *)a4 == 0x47CE50A7259ABFFCLL )
      v25 = *(_QWORD *)(a4 + 8) - 0x6633D7A7C96808AFLL;
    if ( !v25 )
      goto LABEL_50;
  }
  if ( v20 == 8 )
  {
    v26 = *(_QWORD *)a4 - 0x47CE50A7259ABFFCLL;
    if ( *(_QWORD *)a4 == 0x47CE50A7259ABFFCLL )
      v26 = *(_QWORD *)(a4 + 8) - 0x6633D7A7C96808AFLL;
    if ( !v26 )
      goto LABEL_50;
  }
  if ( v20 == 9 )
  {
    v27 = *(_QWORD *)a4 - 0x47CE50A7259ABFFCLL;
    if ( *(_QWORD *)a4 == 0x47CE50A7259ABFFCLL )
      v27 = *(_QWORD *)(a4 + 8) - 0x6633D7A7C96808AFLL;
    if ( !v27 )
      goto LABEL_50;
  }
  if ( v20 == 10 )
  {
    v28 = *(_QWORD *)a4 - 0x47CE50A7259ABFFCLL;
    if ( *(_QWORD *)a4 == 0x47CE50A7259ABFFCLL )
      v28 = *(_QWORD *)(a4 + 8) - 0x6633D7A7C96808AFLL;
    if ( !v28 )
      goto LABEL_50;
  }
  if ( v20 == 15 )
  {
    v29 = *(_QWORD *)a4 - 0x47CE50A7259ABFFCLL;
    if ( *(_QWORD *)a4 == 0x47CE50A7259ABFFCLL )
      v29 = *(_QWORD *)(a4 + 8) - 0x6633D7A7C96808AFLL;
    if ( v29 )
      goto LABEL_18;
LABEL_50:
    v30 = v44;
    LODWORD(v43) = 22;
    if ( a3 )
      v30 = a3;
    v31 = sub_14077FC64(v30, (__int64)&v43);
    if ( v31 == -1073741772 || v31 == -1073741444 )
    {
LABEL_21:
      v14 = -1073741275;
      goto LABEL_22;
    }
    if ( v31 >= 0 )
    {
      *v47 = 1;
      *a5 = *((_DWORD *)v17 + 2);
      if ( v19 )
      {
        Str2[10] = 0;
        v32 = wcsicmp(a0_7, Str2);
LABEL_59:
        *v9 = -(v32 != 0);
        goto LABEL_22;
      }
LABEL_58:
      v14 = -1073741789;
      goto LABEL_22;
    }
LABEL_57:
    v14 = v31;
    goto LABEL_22;
  }
  if ( v20 != 2 )
    goto LABEL_18;
  v33 = *(_QWORD *)a4 - 0x47CE50A7259ABFFCLL;
  if ( *(_QWORD *)a4 == 0x47CE50A7259ABFFCLL )
    v33 = *(_QWORD *)(a4 + 8) - 0x6633D7A7C96808AFLL;
  if ( v33 )
  {
    v39 = *(_QWORD *)a4 - 0x4BA266CFD14D3EF3LL;
    if ( *(_QWORD *)a4 == 0x4BA266CFD14D3EF3LL )
      v39 = *(_QWORD *)(a4 + 8) - 0x147AB37DB0D389DLL;
    if ( !v39 )
    {
      v40 = (int)v44;
      if ( a3 )
        v40 = (int)a3;
      LODWORD(v43) = 4;
      v41 = sub_14077EF20(v46, v40, 0, 1, 0);
      v14 = v41;
      if ( v41 == -1073741772 )
        goto LABEL_21;
      if ( v41 < 0 )
        goto LABEL_22;
      v31 = sub_14077FC64(Handle, (__int64)&v43);
      if ( v31 == -1073741772 || v31 == -1073741444 )
        goto LABEL_21;
      if ( v31 >= 0 )
      {
        *v47 = 1;
        *a5 = *((_DWORD *)v17 + 2);
        if ( v19 )
        {
          v32 = v45;
          goto LABEL_59;
        }
        goto LABEL_58;
      }
      goto LABEL_57;
    }
LABEL_18:
    v21 = (int)v44;
    v22 = (__int64 *)v17[2];
    if ( a3 )
      v21 = (int)a3;
    LODWORD(v43) = v19;
    v23 = sub_14077D29C(v46, v21, (_DWORD)v22, (unsigned int)&v43 + 4, (__int64)v9, (__int64)&v43, (__int64)v42);
    if ( v23 != -1073741772 && v23 != -1073741444 )
    {
      if ( v23 && v23 != -1073741789 )
      {
        v14 = v23;
        goto LABEL_22;
      }
      if ( HIDWORD(v43) != *((_DWORD *)v17 + 6) )
      {
        v14 = -1073741811;
        goto LABEL_22;
      }
      goto LABEL_78;
    }
    goto LABEL_21;
  }
  v34 = 0;
  v14 = -1073741275;
  while ( 1 )
  {
    if ( v34 )
    {
      v35 = &word_140867F00;
    }
    else
    {
      v35 = (const WCHAR *)v17[2];
      if ( !v35 )
        goto LABEL_22;
    }
    v36 = (int)v44;
    LODWORD(v43) = v19;
    if ( a3 )
      v36 = (int)a3;
    v37 = sub_14077D29C(v46, v36, (_DWORD)v35, (unsigned int)&v43 + 4, (__int64)v9, (__int64)&v43, (__int64)v42);
    v23 = v37;
    if ( v37 != -1073741772 && v37 != -1073741444 )
      break;
    if ( ++v34 >= 2 )
      goto LABEL_22;
  }
  if ( !v37 || v37 == -1073741789 )
  {
    v14 = 0;
    goto LABEL_78;
  }
  v14 = v37;
  if ( v37 >= 0 )
  {
LABEL_78:
    *v47 = v43;
    v38 = *((_DWORD *)v17 + 2);
    *a5 = v38;
    if ( v23 || !v19 )
      v14 = -1073741789;
    if ( v38 == 18 && v42[0] )
      *a5 = 25;
  }
LABEL_22:
  if ( Handle )
    ZwClose(Handle);
  if ( v44 )
    ZwClose(v44);
  return (unsigned int)v14;
}
