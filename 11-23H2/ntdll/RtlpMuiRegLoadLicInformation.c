/*
 * XREFs of RtlpMuiRegLoadLicInformation @ 0x18011385C
 * Callers:
 *     RtlpMuiRegLoadRegistryInfo @ 0x18000A230 (RtlpMuiRegLoadRegistryInfo.c)
 * Callees:
 *     RtlCultureNameToLCID @ 0x180016540 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x1800187C0 (RtlInitUnicodeString.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 *     wcspbrk @ 0x180095370 (wcspbrk.c)
 *     ZwQueryLicenseValue @ 0x1800A3A60 (ZwQueryLicenseValue.c)
 *     memmove @ 0x1800A7A40 (memmove.c)
 */

__int64 __fastcall RtlpMuiRegLoadLicInformation(__int64 a1)
{
  __int64 v1; // r15
  void *v2; // rdi
  wchar_t *v3; // r13
  wchar_t *v4; // r12
  ULONG v5; // esi
  unsigned int v6; // ebx
  PVOID Heap; // rbx
  NTSTATUS v8; // ecx
  int *v9; // rbx
  NTSTATUS v10; // ecx
  PVOID v11; // rbx
  NTSTATUS v12; // ecx
  ULONG v13; // eax
  bool v14; // zf
  ULONG v15; // eax
  wchar_t *v16; // rax
  const wchar_t *v17; // rbx
  wchar_t *v18; // r14
  PVOID v19; // rbx
  NTSTATUS v20; // ecx
  ULONG v21; // eax
  ULONG v22; // eax
  wchar_t *v23; // rax
  const wchar_t *v24; // rbx
  int v25; // esi
  wchar_t *v26; // r14
  PVOID v27; // rbx
  NTSTATUS v28; // ecx
  ULONG v29; // eax
  ULONG v30; // eax
  wchar_t *v31; // rax
  const wchar_t *v32; // rbx
  int v33; // esi
  wchar_t *v34; // r14
  __int64 result; // rax
  ULONG v36; // [rsp+30h] [rbp-69h]
  ULONG v37; // [rsp+34h] [rbp-65h]
  ULONG v38; // [rsp+38h] [rbp-61h]
  int v39; // [rsp+3Ch] [rbp-5Dh]
  wchar_t *BaseAddress; // [rsp+40h] [rbp-59h]
  int v41; // [rsp+48h] [rbp-51h]
  _UNICODE_STRING String; // [rsp+50h] [rbp-49h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-39h] BYREF
  _UNICODE_STRING ValueName; // [rsp+70h] [rbp-29h] BYREF
  _UNICODE_STRING v45; // [rsp+80h] [rbp-19h] BYREF
  _UNICODE_STRING v46; // [rsp+90h] [rbp-9h] BYREF
  _UNICODE_STRING v47; // [rsp+A0h] [rbp+7h] BYREF
  ULONG DataSize; // [rsp+108h] [rbp+6Fh] BYREF
  ULONG Type; // [rsp+110h] [rbp+77h] BYREF
  DWORD Lcid; // [rsp+118h] [rbp+7Fh] BYREF

  v41 = -1;
  v37 = 0;
  v1 = a1;
  v36 = 0;
  v2 = 0LL;
  BaseAddress = 0LL;
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
  v8 = ZwQueryLicenseValue(&DestinationString, &Type, 0LL, 0, &DataSize);
  if ( v8 >= 0 )
  {
    if ( !DataSize )
    {
      v39 = 1;
      goto LABEL_11;
    }
    goto LABEL_6;
  }
  if ( v8 == -1073741789 )
  {
    if ( !DataSize )
      goto LABEL_11;
LABEL_6:
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, DataSize);
    if ( !Heap )
      goto LABEL_11;
  }
  if ( ZwQueryLicenseValue(&DestinationString, &Type, Heap, DataSize, &DataSize) >= 0 )
    v39 = 1;
  if ( Heap )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
LABEL_11:
  v9 = 0LL;
  RtlInitUnicodeString(&ValueName, L"Kernel-MUI-Number-Allowed");
  v10 = ZwQueryLicenseValue(&ValueName, &Type, 0LL, 0, &DataSize);
  if ( v10 >= 0 )
  {
    if ( !DataSize )
    {
LABEL_20:
      v41 = *v9;
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v9);
      v2 = 0LL;
      goto LABEL_23;
    }
LABEL_17:
    if ( !DataSize )
      goto LABEL_23;
    v9 = (int *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, DataSize);
    if ( !v9 )
      goto LABEL_23;
    goto LABEL_19;
  }
  if ( v10 == -1073741789 )
    goto LABEL_17;
LABEL_19:
  if ( ZwQueryLicenseValue(&ValueName, &Type, v9, DataSize, &DataSize) >= 0 )
    goto LABEL_20;
  if ( v9 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v9);
LABEL_23:
  v11 = 0LL;
  RtlInitUnicodeString(&v45, L"Kernel-MUI-Language-Allowed");
  v12 = ZwQueryLicenseValue(&v45, &Type, 0LL, 0, &DataSize);
  v13 = DataSize;
  if ( v12 >= 0 )
  {
    if ( !DataSize )
    {
      v2 = 0LL;
      goto LABEL_29;
    }
    goto LABEL_26;
  }
  if ( v12 == -1073741789 )
  {
    if ( !DataSize )
      goto LABEL_50;
LABEL_26:
    v11 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, DataSize);
    if ( !v11 )
      goto LABEL_50;
  }
  if ( ZwQueryLicenseValue(&v45, &Type, v11, DataSize, &DataSize) < 0 )
  {
    if ( v11 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v11);
    goto LABEL_50;
  }
  v13 = DataSize;
  v2 = v11;
LABEL_29:
  v14 = v13 == -4;
  v15 = v13 + 4;
  v37 = v15;
  if ( v14 || (v16 = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v15), v17 = v16, (v3 = v16) == 0LL) )
  {
    v37 = 0;
    goto LABEL_47;
  }
  memmove(v16, v2, DataSize);
  v18 = wcspbrk(v17, L";");
  if ( v18 )
  {
    do
    {
      *v18 = 0;
      RtlInitUnicodeString(&String, v17);
      if ( RtlCultureNameToLCID(&String, &Lcid) )
        ++v5;
      v17 = v18 + 1;
      v18 = wcspbrk(v18 + 1, L";");
    }
    while ( v18 );
    v1 = a1;
  }
  if ( *v17 )
  {
    RtlInitUnicodeString(&String, v17);
    if ( RtlCultureNameToLCID(&String, &Lcid) )
      ++v5;
  }
  if ( !v5 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3);
    v37 = 0;
    v3 = 0LL;
  }
  if ( v2 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v2);
  v2 = 0LL;
LABEL_50:
  v19 = 0LL;
  RtlInitUnicodeString(&v46, L"Kernel-MUI-Language-Disallowed");
  v20 = ZwQueryLicenseValue(&v46, &Type, 0LL, 0, &DataSize);
  v21 = DataSize;
  if ( v20 < 0 )
  {
    if ( v20 != -1073741789 )
    {
LABEL_54:
      if ( ZwQueryLicenseValue(&v46, &Type, v19, DataSize, &DataSize) < 0 )
      {
        if ( v19 )
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v19);
LABEL_77:
        v27 = 0LL;
        RtlInitUnicodeString(&v47, L"Kernel-MUI-Language-SKU");
        v28 = ZwQueryLicenseValue(&v47, &Type, 0LL, 0, &DataSize);
        v29 = DataSize;
        if ( v28 >= 0 )
        {
          if ( !DataSize )
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
            if ( ZwQueryLicenseValue(&v47, &Type, v27, DataSize, &DataSize) < 0 )
            {
              if ( v27 )
                RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v27);
              goto LABEL_105;
            }
            v29 = DataSize;
            v2 = v27;
LABEL_83:
            v14 = v29 == -4;
            v30 = v29 + 4;
            v38 = v30;
            if ( v14 )
            {
              BaseAddress = 0LL;
            }
            else
            {
              v31 = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v30);
              BaseAddress = v31;
              v32 = v31;
              if ( v31 )
              {
                memmove(v31, v2, DataSize);
                v33 = 0;
                BaseAddress = (wchar_t *)v32;
                v34 = wcspbrk(v32, L";");
                if ( v34 )
                {
                  BaseAddress = (wchar_t *)v32;
                  do
                  {
                    *v34 = 0;
                    RtlInitUnicodeString(&String, v32);
                    if ( RtlCultureNameToLCID(&String, &Lcid) )
                      ++v33;
                    v32 = v34 + 1;
                    v34 = wcspbrk(v34 + 1, L";");
                  }
                  while ( v34 );
                  v1 = a1;
                }
                if ( *v32 )
                {
                  RtlInitUnicodeString(&String, v32);
                  if ( RtlCultureNameToLCID(&String, &Lcid) )
                    ++v33;
                }
                if ( !v33 )
                {
                  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
                  v38 = 0;
                  BaseAddress = 0LL;
                }
                if ( v2 )
                  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v2);
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
          if ( !DataSize )
          {
LABEL_105:
            v6 = 0;
            goto LABEL_106;
          }
        }
        v27 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, DataSize);
        if ( v27 )
          goto LABEL_81;
        goto LABEL_105;
      }
      v21 = DataSize;
      v2 = v19;
      goto LABEL_56;
    }
    if ( !DataSize )
      goto LABEL_77;
LABEL_53:
    v19 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, DataSize);
    if ( !v19 )
      goto LABEL_77;
    goto LABEL_54;
  }
  if ( DataSize )
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
    v23 = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v22);
    v24 = v23;
    v4 = v23;
    if ( v23 )
    {
      memmove(v23, v2, DataSize);
      v25 = 0;
      v26 = wcspbrk(v24, L";");
      if ( v26 )
      {
        do
        {
          *v26 = 0;
          RtlInitUnicodeString(&String, v24);
          if ( RtlCultureNameToLCID(&String, &Lcid) )
            ++v25;
          v24 = v26 + 1;
          v26 = wcspbrk(v26 + 1, L";");
        }
        while ( v26 );
        v1 = a1;
      }
      if ( *v24 )
      {
        RtlInitUnicodeString(&String, v24);
        if ( RtlCultureNameToLCID(&String, &Lcid) )
          ++v25;
      }
      if ( !v25 )
      {
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
        v36 = 0;
        v4 = 0LL;
      }
      if ( v2 )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v2);
      v2 = 0LL;
      goto LABEL_77;
    }
  }
  v5 = 0;
LABEL_47:
  v6 = -1073741801;
LABEL_107:
  if ( v2 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v2);
  if ( v3 && v4 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
    v4 = 0LL;
    v5 = 0;
  }
LABEL_112:
  *(_DWORD *)v1 |= 0x800u;
  *(_DWORD *)(v1 + 116) = v39;
  *(_DWORD *)(v1 + 120) = v41;
  *(_DWORD *)(v1 + 148) = v37;
  *(_QWORD *)(v1 + 136) = BaseAddress;
  *(_DWORD *)(v1 + 144) = v38;
  result = v6;
  *(_QWORD *)(v1 + 128) = v3;
  *(_QWORD *)(v1 + 152) = v4;
  *(_DWORD *)(v1 + 160) = v5;
  return result;
}
