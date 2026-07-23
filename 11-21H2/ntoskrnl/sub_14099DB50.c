/*
 * XREFs of sub_14099DB50 @ 0x14099DB50
 * Callers:
 *     <none>
 * Callees:
 *     sub_140224C00 @ 0x140224C00 (sub_140224C00.c)
 *     sub_140224E90 @ 0x140224E90 (sub_140224E90.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_140781F40 @ 0x140781F40 (sub_140781F40.c)
 *     sub_14083113C @ 0x14083113C (sub_14083113C.c)
 *     sub_14099D480 @ 0x14099D480 (sub_14099D480.c)
 *     sub_14099D7E4 @ 0x14099D7E4 (sub_14099D7E4.c)
 *     sub_14099D934 @ 0x14099D934 (sub_14099D934.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14099DB50(void *a1)
{
  void *v2; // rdi
  __int64 v3; // rcx
  const wchar_t *v4; // rax
  __int16 v5; // cx
  const WCHAR *v6; // rax
  __int64 v7; // rcx
  __int16 v8; // cx
  int v9; // ebx
  __int64 v10; // r8
  unsigned __int8 i; // si
  const char *v12; // rdx
  _QWORD *v13; // r14
  __int64 v14; // rax
  __int64 v15; // rcx
  const char *v16; // rax
  const char *v17; // rax
  __int16 v18; // cx
  __int64 v19; // rdx
  NTSTATUS v20; // ebx
  char v21; // bl
  char v22; // r15
  __int64 v23; // rdx
  int v25[4]; // [rsp+38h] [rbp-39h] BYREF
  int v26; // [rsp+48h] [rbp-29h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-21h] BYREF
  HANDLE v28; // [rsp+58h] [rbp-19h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp-11h] BYREF
  int v30[4]; // [rsp+68h] [rbp-9h] BYREF
  int v31[4]; // [rsp+78h] [rbp+7h] BYREF
  __int128 v32; // [rsp+88h] [rbp+17h] BYREF

  v26 = -1;
  Handle = 0LL;
  v28 = 0LL;
  KeyHandle = 0LL;
  *(_OWORD *)v25 = 0LL;
  v2 = 0LL;
  v3 = 0x7FFFLL;
  *(_OWORD *)v30 = 0LL;
  v4 = L"v1";
  while ( *v4 )
  {
    ++v4;
    if ( !--v3 )
      goto LABEL_6;
  }
  v5 = 2 * v3;
  *(_QWORD *)&v30[2] = L"v1";
  LOWORD(v30[0]) = -2 - v5;
  HIWORD(v30[0]) = -v5;
LABEL_6:
  *(_OWORD *)v31 = 0LL;
  v6 = L"Default";
  v7 = 0x7FFFLL;
  while ( *v6 )
  {
    ++v6;
    if ( !--v7 )
      goto LABEL_11;
  }
  v8 = 2 * v7;
  *(_QWORD *)&v31[2] = L"Default";
  LOWORD(v31[0]) = -2 - v8;
  HIWORD(v31[0]) = -v8;
LABEL_11:
  v9 = sub_14099D7E4((UNICODE_STRING *)v30, (__int64)L"Default", 65534LL, a1, &KeyHandle);
  if ( v9 >= 0 )
  {
    v2 = (void *)sub_14099D480((__int64)&v26);
    if ( !v2 )
    {
      v9 = -1073741670;
      goto LABEL_36;
    }
    sub_140224E90((struct _KTHREAD **)&qword_140C22FE0);
    for ( i = 0; i < (unsigned __int8)byte_140C1D020; ++i )
    {
      v12 = L"VideoBatching";
      v13 = (_QWORD *)(qword_140C1D018 + 8624LL * i);
      v14 = *(_QWORD *)((char *)v13 + 12) - 0x4869272E4569E601LL;
      v32 = *(_OWORD *)((char *)v13 + 12);
      if ( !v14 )
        v14 = *((_QWORD *)&v32 + 1) - 0x6F96D7036C1CABBCLL;
      if ( v14 )
      {
        v12 = (const char *)*v13;
        *(_OWORD *)v25 = 0LL;
        if ( !v12 )
          goto LABEL_28;
        v15 = 0x7FFFLL;
        v17 = v12;
        while ( *(_WORD *)v17 )
        {
          v17 += 2;
          if ( !--v15 )
            goto LABEL_28;
        }
      }
      else
      {
        *(_OWORD *)v25 = 0LL;
        v15 = 0x7FFFLL;
        v16 = L"VideoBatching";
        while ( *(_WORD *)v16 )
        {
          v16 += 2;
          if ( !--v15 )
            goto LABEL_28;
        }
      }
      v18 = 2 * v15;
      *(_QWORD *)&v25[2] = v12;
      LOWORD(v25[0]) = -2 - v18;
      HIWORD(v25[0]) = -v18;
LABEL_28:
      if ( sub_14099D7E4((UNICODE_STRING *)v25, (__int64)v12, v10, KeyHandle, &Handle) >= 0 )
      {
        v20 = sub_14099D7E4((UNICODE_STRING *)v31, v19, v10, Handle, &v28);
        ZwClose(Handle);
        if ( v20 >= 0 )
        {
          v9 = sub_140781F40(0x40000000, (const WCHAR *)v28, (__int64)v2, 0LL);
          ZwClose(v28);
          sub_140224C00(&qword_140C22FE0);
          if ( v9 < 0 )
            goto LABEL_36;
          v21 = sub_14099D934((__int64 *)&v32, 0, (__int64)v2);
          v22 = sub_14099D934((__int64 *)&v32, 1, (__int64)v2);
          sub_140224E90((struct _KTHREAD **)&qword_140C22FE0);
          if ( v21 || v22 )
            sub_14083113C((__int64)v13, v23);
        }
      }
    }
    sub_140224C00(&qword_140C22FE0);
    dword_140C1D024 |= 2u;
    v9 = 0;
  }
LABEL_36:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v2 )
    ExFreePoolWithTag(v2, 0x704D5053u);
  return (unsigned int)v9;
}
