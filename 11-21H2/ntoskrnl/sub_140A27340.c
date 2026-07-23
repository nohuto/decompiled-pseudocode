/*
 * XREFs of sub_140A27340 @ 0x140A27340
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1406BDAE4 @ 0x1406BDAE4 (sub_1406BDAE4.c)
 *     sub_14077CD90 @ 0x14077CD90 (sub_14077CD90.c)
 *     RtlEqualUnicodeString @ 0x1407CD6A0 (RtlEqualUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

char __fastcall sub_140A27340(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v5; // r15
  __int64 v6; // r14
  char v7; // di
  const WCHAR *v8; // rdx
  __int64 v9; // rdx
  int v10; // edi
  unsigned int v11; // eax
  void *v12; // rcx
  __int64 Pool2; // rax
  int v14; // esi
  int *v15; // r13
  int v16; // r12d
  unsigned int v17; // r15d
  int *v18; // r14
  unsigned int v19; // eax
  int v20; // eax
  void *v22; // rcx
  __int64 v23; // rax
  unsigned int v24; // eax
  const WCHAR *i; // rdi
  __int64 v26; // rax
  unsigned int v27; // [rsp+40h] [rbp-99h] BYREF
  int v28; // [rsp+44h] [rbp-95h] BYREF
  int v29; // [rsp+48h] [rbp-91h]
  int v30; // [rsp+4Ch] [rbp-8Dh]
  __int64 v31; // [rsp+50h] [rbp-89h]
  __int64 v32; // [rsp+58h] [rbp-81h]
  _DWORD v33[2]; // [rsp+60h] [rbp-79h] BYREF
  _DWORD v34[2]; // [rsp+68h] [rbp-71h] BYREF
  UNICODE_STRING String2; // [rsp+70h] [rbp-69h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-59h] BYREF
  _BYTE v37[76]; // [rsp+90h] [rbp-49h] BYREF
  __int16 v38; // [rsp+DCh] [rbp+3h]

  v30 = a3;
  v32 = a2;
  v31 = a1;
  v27 = 0;
  v28 = 0;
  v5 = a2;
  v6 = a1;
  v7 = 0;
  DestinationString = 0LL;
  String2 = 0LL;
  if ( !a4 )
    return v7;
  v8 = *(const WCHAR **)a4;
  if ( !*(_QWORD *)a4 || !*v8 )
    goto LABEL_28;
  if ( RtlInitUnicodeStringEx(&DestinationString, v8) < 0 )
    return v7;
  v9 = *(_QWORD *)(a4 + 8);
  while ( 1 )
  {
    v27 = *(_DWORD *)(a4 + 16);
    v10 = sub_14077CD90(v6, v5, 0LL, 5, (__int64)&v28, v9, (__int64)&v27, 0);
    v11 = v27;
    if ( !v10 && v27 < 2 )
      break;
    if ( v10 != -1073741789 )
    {
      v14 = v10;
      if ( v10 )
        goto LABEL_15;
      *(_WORD *)(*(_QWORD *)(a4 + 8) + 2 * ((unsigned __int64)*(unsigned int *)(a4 + 16) >> 1) - 2) = 0;
      if ( RtlInitUnicodeStringEx(&String2, *(PCWSTR *)(a4 + 8)) < 0
        || !RtlEqualUnicodeString(&DestinationString, &String2, 1u) )
      {
        goto LABEL_15;
      }
LABEL_28:
      v7 = 1;
      if ( *(_QWORD *)(a4 + 24) )
        return sub_14042A5E0(v6, v5);
      return v7;
    }
    if ( v27 < 2 )
      break;
    v12 = *(void **)(a4 + 8);
    if ( v12 )
    {
      ExFreePoolWithTag(v12, 0);
      v11 = v27;
    }
    Pool2 = ExAllocatePool2(256LL, v11, 1380994640LL);
    *(_QWORD *)(a4 + 8) = Pool2;
    v9 = Pool2;
    if ( !Pool2 )
    {
      *(_DWORD *)(a4 + 16) = 0;
      v14 = -1073741801;
      goto LABEL_15;
    }
    *(_DWORD *)(a4 + 16) = v27;
  }
  v14 = -1073741811;
LABEL_15:
  v33[0] = 1;
  v15 = v33;
  v33[1] = 2;
  v29 = 0;
  v34[0] = 18;
  v34[1] = 19;
  while ( 2 )
  {
    v16 = *v15;
    if ( *v15 == 2 )
    {
      v27 = 78;
      v14 = sub_14077CD90(v6, v5, 0LL, 9, (__int64)&v28, (__int64)v37, (__int64)&v27, 0);
      v7 = 0;
      if ( v14 < 0 || v28 != 1 || v27 < 2 )
        return v7;
      v38 = 0;
    }
    v17 = 0;
    v18 = v34;
    do
    {
      while ( 1 )
      {
        v19 = *(_DWORD *)(a4 + 16);
        v27 = v19;
        if ( v16 == 1 )
        {
          v20 = sub_14077CD90(v31, v32, 0LL, *v18, (__int64)&v28, *(_QWORD *)(a4 + 8), (__int64)&v27, 0);
LABEL_33:
          v14 = v20;
          v19 = v27;
          goto LABEL_34;
        }
        if ( v16 == 2 )
        {
          v20 = sub_1406BDAE4(v31, (__int64)v37, 0LL, *v18, (__int64)&v28, *(_QWORD *)(a4 + 8), (__int64)&v27);
          goto LABEL_33;
        }
LABEL_34:
        if ( !v14 && v19 < 2 )
        {
LABEL_36:
          v14 = -1073741811;
          goto LABEL_57;
        }
        if ( v14 != -1073741789 )
          break;
        if ( v19 < 2 )
          goto LABEL_36;
        v22 = *(void **)(a4 + 8);
        if ( v22 )
        {
          ExFreePoolWithTag(v22, 0);
          v19 = v27;
        }
        v23 = ExAllocatePool2(256LL, v19, 1380994640LL);
        *(_QWORD *)(a4 + 8) = v23;
        if ( !v23 )
        {
          *(_DWORD *)(a4 + 16) = 0;
          v14 = -1073741801;
          goto LABEL_57;
        }
        *(_DWORD *)(a4 + 16) = v27;
      }
      if ( v14 >= 0 && v28 == 7 )
      {
        v24 = *(_DWORD *)(a4 + 16);
        if ( v24 > 2 )
        {
          *(_WORD *)(*(_QWORD *)(a4 + 8) + 2 * ((unsigned __int64)v24 >> 1) - 2) = 0;
          v24 = *(_DWORD *)(a4 + 16);
        }
        if ( v24 > 4 )
          *(_WORD *)(*(_QWORD *)(a4 + 8) + 2 * ((unsigned __int64)v24 >> 1) - 4) = 0;
        for ( i = *(const WCHAR **)(a4 + 8); *i; i += v26 + 1 )
        {
          if ( RtlInitUnicodeStringEx(&String2, i) >= 0 && RtlEqualUnicodeString(&DestinationString, &String2, 1u) )
          {
            v6 = v31;
            v5 = v32;
            goto LABEL_28;
          }
          v26 = -1LL;
          do
            ++v26;
          while ( i[v26] );
        }
      }
LABEL_57:
      ++v17;
      ++v18;
    }
    while ( v17 < 2 );
    ++v15;
    if ( (unsigned int)++v29 < 2 )
    {
      v6 = v31;
      v5 = v32;
      continue;
    }
    return 0;
  }
}
