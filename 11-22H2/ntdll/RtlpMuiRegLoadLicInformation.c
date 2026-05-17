/*
 * XREFs of RtlpMuiRegLoadLicInformation @ 0x1801123DC
 * Callers:
 *     RtlpMuiRegLoadRegistryInfo @ 0x18000A360 (RtlpMuiRegLoadRegistryInfo.c)
 * Callees:
 *     RtlCultureNameToLCID @ 0x180016750 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x1800189D0 (RtlInitUnicodeString.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     wcspbrk @ 0x180094B70 (wcspbrk.c)
 *     ZwQueryLicenseValue @ 0x1800A19A0 (ZwQueryLicenseValue.c)
 *     memmove @ 0x1800A5980 (memmove.c)
 */

__int64 __fastcall RtlpMuiRegLoadLicInformation(__int64 a1)
{
  __int64 v1; // r15
  const void *v2; // rdi
  __int64 v3; // r13
  __int64 v4; // r12
  unsigned int v5; // esi
  unsigned int v6; // ebx
  __int64 Heap; // rbx
  int LicenseValue; // ecx
  int *v9; // rbx
  int v10; // ecx
  __int64 v11; // rbx
  int v12; // ecx
  unsigned int v13; // eax
  bool v14; // zf
  unsigned int v15; // eax
  wchar_t *v16; // rax
  const wchar_t *v17; // rbx
  wchar_t *v18; // r14
  __int64 v19; // rbx
  int v20; // ecx
  unsigned int v21; // eax
  unsigned int v22; // eax
  wchar_t *v23; // rax
  const wchar_t *v24; // rbx
  int v25; // esi
  wchar_t *v26; // r14
  __int64 v27; // rbx
  int v28; // ecx
  unsigned int v29; // eax
  unsigned int v30; // eax
  wchar_t *v31; // rax
  const wchar_t *v32; // rbx
  int v33; // esi
  wchar_t *v34; // r14
  __int64 result; // rax
  unsigned int v36; // [rsp+30h] [rbp-69h]
  unsigned int v37; // [rsp+34h] [rbp-65h]
  unsigned int v38; // [rsp+38h] [rbp-61h]
  int v39; // [rsp+3Ch] [rbp-5Dh]
  __int64 v40; // [rsp+40h] [rbp-59h]
  int v41; // [rsp+48h] [rbp-51h]
  UNICODE_STRING v42; // [rsp+50h] [rbp-49h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-39h] BYREF
  UNICODE_STRING v44; // [rsp+70h] [rbp-29h] BYREF
  UNICODE_STRING v45; // [rsp+80h] [rbp-19h] BYREF
  UNICODE_STRING v46; // [rsp+90h] [rbp-9h] BYREF
  UNICODE_STRING v47; // [rsp+A0h] [rbp+7h] BYREF
  unsigned int Size; // [rsp+108h] [rbp+6Fh]
  int v50; // [rsp+118h] [rbp+7Fh] BYREF

  v41 = -1;
  v37 = 0;
  v1 = a1;
  v36 = 0;
  v2 = 0LL;
  v40 = 0LL;
  v3 = 0LL;
  v38 = 0;
  v4 = 0LL;
  v39 = 0;
  v5 = 0;
  if ( !a1 )
  {
    v6 = -1073741811;
    goto LABEL_112;
  }
  Heap = 0LL;
  RtlInitUnicodeString(&DestinationString, L"WindowsExcludedProcs");
  LicenseValue = ZwQueryLicenseValue();
  if ( LicenseValue >= 0 )
  {
    if ( !Size )
    {
      v39 = 1;
      goto LABEL_11;
    }
    goto LABEL_6;
  }
  if ( LicenseValue == -1073741789 )
  {
    if ( !Size )
      goto LABEL_11;
LABEL_6:
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, Size);
    if ( !Heap )
      goto LABEL_11;
  }
  if ( (int)ZwQueryLicenseValue() >= 0 )
    v39 = 1;
  if ( Heap )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
LABEL_11:
  v9 = 0LL;
  RtlInitUnicodeString(&v44, L"Kernel-MUI-Number-Allowed");
  v10 = ZwQueryLicenseValue();
  if ( v10 >= 0 )
  {
    if ( !Size )
    {
LABEL_20:
      v41 = *v9;
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v9);
      v2 = 0LL;
      goto LABEL_23;
    }
LABEL_17:
    if ( !Size )
      goto LABEL_23;
    v9 = (int *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, Size);
    if ( !v9 )
      goto LABEL_23;
    goto LABEL_19;
  }
  if ( v10 == -1073741789 )
    goto LABEL_17;
LABEL_19:
  if ( (int)ZwQueryLicenseValue() >= 0 )
    goto LABEL_20;
  if ( v9 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v9);
LABEL_23:
  v11 = 0LL;
  RtlInitUnicodeString(&v45, L"Kernel-MUI-Language-Allowed");
  v12 = ZwQueryLicenseValue();
  v13 = Size;
  if ( v12 >= 0 )
  {
    if ( !Size )
    {
      v2 = 0LL;
      goto LABEL_29;
    }
    goto LABEL_26;
  }
  if ( v12 == -1073741789 )
  {
    if ( !Size )
      goto LABEL_50;
LABEL_26:
    v11 = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, Size);
    if ( !v11 )
      goto LABEL_50;
  }
  if ( (int)ZwQueryLicenseValue() < 0 )
  {
    if ( v11 )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v11);
    goto LABEL_50;
  }
  v13 = Size;
  v2 = (const void *)v11;
LABEL_29:
  v14 = v13 == -4;
  v15 = v13 + 4;
  v37 = v15;
  if ( v14
    || (v16 = (wchar_t *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v15),
        v17 = v16,
        (v3 = (__int64)v16) == 0) )
  {
    v37 = 0;
    goto LABEL_47;
  }
  memmove(v16, v2, Size);
  v18 = wcspbrk(v17, L";");
  if ( v18 )
  {
    do
    {
      *v18 = 0;
      RtlInitUnicodeString(&v42, v17);
      if ( RtlCultureNameToLCID(&v42.Length, &v50) )
        ++v5;
      v17 = v18 + 1;
      v18 = wcspbrk(v18 + 1, L";");
    }
    while ( v18 );
    v1 = a1;
  }
  if ( *v17 )
  {
    RtlInitUnicodeString(&v42, v17);
    if ( RtlCultureNameToLCID(&v42.Length, &v50) )
      ++v5;
  }
  if ( !v5 )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v3);
    v37 = 0;
    v3 = 0LL;
  }
  if ( v2 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v2);
  v2 = 0LL;
LABEL_50:
  v19 = 0LL;
  RtlInitUnicodeString(&v46, L"Kernel-MUI-Language-Disallowed");
  v20 = ZwQueryLicenseValue();
  v21 = Size;
  if ( v20 < 0 )
  {
    if ( v20 != -1073741789 )
    {
LABEL_54:
      if ( (int)ZwQueryLicenseValue() < 0 )
      {
        if ( v19 )
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v19);
LABEL_77:
        v27 = 0LL;
        RtlInitUnicodeString(&v47, L"Kernel-MUI-Language-SKU");
        v28 = ZwQueryLicenseValue();
        v29 = Size;
        if ( v28 >= 0 )
        {
          if ( !Size )
          {
            v2 = 0LL;
            goto LABEL_83;
          }
        }
        else
        {
          if ( v28 != -1073741789 )
          {
LABEL_81:
            if ( (int)ZwQueryLicenseValue() < 0 )
            {
              if ( v27 )
                RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v27);
              goto LABEL_105;
            }
            v29 = Size;
            v2 = (const void *)v27;
LABEL_83:
            v14 = v29 == -4;
            v30 = v29 + 4;
            v38 = v30;
            if ( v14 )
            {
              v40 = 0LL;
            }
            else
            {
              v31 = (wchar_t *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v30);
              v40 = (__int64)v31;
              v32 = v31;
              if ( v31 )
              {
                memmove(v31, v2, Size);
                v33 = 0;
                v40 = (__int64)v32;
                v34 = wcspbrk(v32, L";");
                if ( v34 )
                {
                  v40 = (__int64)v32;
                  do
                  {
                    *v34 = 0;
                    RtlInitUnicodeString(&v42, v32);
                    if ( RtlCultureNameToLCID(&v42.Length, &v50) )
                      ++v33;
                    v32 = v34 + 1;
                    v34 = wcspbrk(v34 + 1, L";");
                  }
                  while ( v34 );
                  v1 = a1;
                }
                if ( *v32 )
                {
                  RtlInitUnicodeString(&v42, v32);
                  if ( RtlCultureNameToLCID(&v42.Length, &v50) )
                    ++v33;
                }
                if ( !v33 )
                {
                  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v40);
                  v38 = 0;
                  v40 = 0LL;
                }
                if ( v2 )
                  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v2);
                v2 = 0LL;
                goto LABEL_105;
              }
            }
            v38 = 0;
            v6 = -1073741801;
LABEL_106:
            v5 = v36;
            goto LABEL_107;
          }
          if ( !Size )
          {
LABEL_105:
            v6 = 0;
            goto LABEL_106;
          }
        }
        v27 = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, Size);
        if ( v27 )
          goto LABEL_81;
        goto LABEL_105;
      }
      v21 = Size;
      v2 = (const void *)v19;
      goto LABEL_56;
    }
    if ( !Size )
      goto LABEL_77;
LABEL_53:
    v19 = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, Size);
    if ( !v19 )
      goto LABEL_77;
    goto LABEL_54;
  }
  if ( Size )
    goto LABEL_53;
  v2 = 0LL;
LABEL_56:
  v14 = v21 == -4;
  v22 = v21 + 4;
  v36 = v22;
  if ( v14 )
  {
    v4 = 0LL;
  }
  else
  {
    v23 = (wchar_t *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v22);
    v24 = v23;
    v4 = (__int64)v23;
    if ( v23 )
    {
      memmove(v23, v2, Size);
      v25 = 0;
      v26 = wcspbrk(v24, L";");
      if ( v26 )
      {
        do
        {
          *v26 = 0;
          RtlInitUnicodeString(&v42, v24);
          if ( RtlCultureNameToLCID(&v42.Length, &v50) )
            ++v25;
          v24 = v26 + 1;
          v26 = wcspbrk(v26 + 1, L";");
        }
        while ( v26 );
        v1 = a1;
      }
      if ( *v24 )
      {
        RtlInitUnicodeString(&v42, v24);
        if ( RtlCultureNameToLCID(&v42.Length, &v50) )
          ++v25;
      }
      if ( !v25 )
      {
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v4);
        v36 = 0;
        v4 = 0LL;
      }
      if ( v2 )
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v2);
      v2 = 0LL;
      goto LABEL_77;
    }
  }
  v5 = 0;
LABEL_47:
  v6 = -1073741801;
LABEL_107:
  if ( v2 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v2);
  if ( v3 && v4 )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v4);
    v4 = 0LL;
    v5 = 0;
  }
LABEL_112:
  *(_DWORD *)v1 |= 0x800u;
  *(_DWORD *)(v1 + 116) = v39;
  *(_DWORD *)(v1 + 120) = v41;
  *(_DWORD *)(v1 + 148) = v37;
  *(_QWORD *)(v1 + 136) = v40;
  *(_DWORD *)(v1 + 144) = v38;
  result = v6;
  *(_QWORD *)(v1 + 128) = v3;
  *(_QWORD *)(v1 + 152) = v4;
  *(_DWORD *)(v1 + 160) = v5;
  return result;
}
