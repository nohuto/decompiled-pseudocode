/*
 * XREFs of RtlpMuiRegLoadLicInformation @ 0x180111F70
 * Callers:
 *     RtlpMuiRegLoadRegistryInfo @ 0x18006E750 (RtlpMuiRegLoadRegistryInfo.c)
 * Callees:
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     RtlCultureNameToLCID @ 0x18004BE40 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x18004C040 (RtlInitUnicodeString.c)
 *     wcspbrk @ 0x180099AA0 (wcspbrk.c)
 *     ZwQueryLicenseValue @ 0x1800A6BC0 (ZwQueryLicenseValue.c)
 *     memmove @ 0x1800AAB40 (memmove.c)
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
  NTSTATUS v8; // eax
  ULONG v9; // eax
  int *v10; // rbx
  NTSTATUS v11; // eax
  ULONG v12; // eax
  PVOID v13; // rbx
  NTSTATUS v14; // eax
  ULONG v15; // eax
  bool v16; // zf
  ULONG v17; // eax
  wchar_t *v18; // rax
  const wchar_t *v19; // rbx
  wchar_t *v20; // r14
  PVOID v21; // rbx
  NTSTATUS v22; // eax
  ULONG v23; // eax
  ULONG v24; // eax
  wchar_t *v25; // rax
  const wchar_t *v26; // rbx
  int v27; // esi
  wchar_t *v28; // r14
  PVOID v29; // rbx
  NTSTATUS v30; // eax
  ULONG v31; // eax
  ULONG v32; // eax
  wchar_t *v33; // rax
  const wchar_t *v34; // rbx
  int v35; // esi
  wchar_t *v36; // r14
  __int64 result; // rax
  ULONG v38; // [rsp+30h] [rbp-69h]
  ULONG v39; // [rsp+34h] [rbp-65h]
  ULONG v40; // [rsp+38h] [rbp-61h]
  wchar_t *BaseAddress; // [rsp+40h] [rbp-59h]
  int v42; // [rsp+48h] [rbp-51h]
  int v43; // [rsp+4Ch] [rbp-4Dh]
  _UNICODE_STRING String; // [rsp+50h] [rbp-49h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-39h] BYREF
  _UNICODE_STRING ValueName; // [rsp+70h] [rbp-29h] BYREF
  _UNICODE_STRING v47; // [rsp+80h] [rbp-19h] BYREF
  _UNICODE_STRING v48; // [rsp+90h] [rbp-9h] BYREF
  _UNICODE_STRING v49; // [rsp+A0h] [rbp+7h] BYREF
  ULONG DataSize; // [rsp+108h] [rbp+6Fh] BYREF
  ULONG Type; // [rsp+110h] [rbp+77h] BYREF
  DWORD Lcid; // [rsp+118h] [rbp+7Fh] BYREF

  v43 = -1;
  v39 = 0;
  v1 = a1;
  v38 = 0;
  v2 = 0LL;
  BaseAddress = 0LL;
  v3 = 0LL;
  v40 = 0;
  v4 = 0LL;
  v42 = 0;
  v5 = 0;
  if ( !a1 )
  {
    v6 = -1073741811;
    goto LABEL_114;
  }
  Heap = 0LL;
  RtlInitUnicodeString(&DestinationString, L"WindowsExcludedProcs");
  v8 = ZwQueryLicenseValue(&DestinationString, &Type, 0LL, 0, &DataSize);
  if ( v8 >= 0 )
  {
    v9 = DataSize;
    if ( !DataSize )
    {
LABEL_12:
      v42 = 1;
      goto LABEL_13;
    }
  }
  else
  {
    if ( v8 != -1073741789 )
      goto LABEL_9;
    v9 = DataSize;
    if ( !DataSize )
      goto LABEL_13;
  }
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v9);
  if ( !Heap )
    goto LABEL_13;
LABEL_9:
  if ( ZwQueryLicenseValue(&DestinationString, &Type, Heap, DataSize, &DataSize) >= 0 )
  {
    if ( Heap )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
    goto LABEL_12;
  }
  if ( Heap )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
LABEL_13:
  v10 = 0LL;
  RtlInitUnicodeString(&ValueName, L"Kernel-MUI-Number-Allowed");
  v11 = ZwQueryLicenseValue(&ValueName, &Type, 0LL, 0, &DataSize);
  if ( v11 >= 0 )
  {
    v12 = DataSize;
    if ( !DataSize )
    {
LABEL_22:
      v43 = *v10;
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
      v2 = 0LL;
      goto LABEL_25;
    }
  }
  else
  {
    if ( v11 != -1073741789 )
      goto LABEL_21;
    v12 = DataSize;
    if ( !DataSize )
      goto LABEL_25;
  }
  v10 = (int *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v12);
  if ( !v10 )
    goto LABEL_25;
LABEL_21:
  if ( ZwQueryLicenseValue(&ValueName, &Type, v10, DataSize, &DataSize) >= 0 )
    goto LABEL_22;
  if ( v10 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
LABEL_25:
  v13 = 0LL;
  RtlInitUnicodeString(&v47, L"Kernel-MUI-Language-Allowed");
  v14 = ZwQueryLicenseValue(&v47, &Type, 0LL, 0, &DataSize);
  if ( v14 >= 0 )
  {
    v15 = DataSize;
    if ( !DataSize )
    {
      v2 = 0LL;
      goto LABEL_31;
    }
    goto LABEL_28;
  }
  if ( v14 == -1073741789 )
  {
    v15 = DataSize;
    if ( !DataSize )
      goto LABEL_52;
LABEL_28:
    v13 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v15);
    if ( !v13 )
      goto LABEL_52;
  }
  if ( ZwQueryLicenseValue(&v47, &Type, v13, DataSize, &DataSize) < 0 )
  {
    if ( v13 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v13);
    goto LABEL_52;
  }
  v15 = DataSize;
  v2 = v13;
LABEL_31:
  v16 = v15 == -4;
  v17 = v15 + 4;
  v39 = v17;
  if ( v16 || (v18 = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v17), v19 = v18, (v3 = v18) == 0LL) )
  {
    v39 = 0;
    goto LABEL_49;
  }
  memmove(v18, v2, DataSize);
  v20 = wcspbrk(v19, L";");
  if ( v20 )
  {
    do
    {
      *v20 = 0;
      RtlInitUnicodeString(&String, v19);
      if ( RtlCultureNameToLCID(&String, &Lcid) )
        ++v5;
      v19 = v20 + 1;
      v20 = wcspbrk(v20 + 1, L";");
    }
    while ( v20 );
    v1 = a1;
  }
  if ( *v19 )
  {
    RtlInitUnicodeString(&String, v19);
    if ( RtlCultureNameToLCID(&String, &Lcid) )
      ++v5;
  }
  if ( !v5 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3);
    v39 = 0;
    v3 = 0LL;
  }
  if ( v2 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v2);
  v2 = 0LL;
LABEL_52:
  v21 = 0LL;
  RtlInitUnicodeString(&v48, L"Kernel-MUI-Language-Disallowed");
  v22 = ZwQueryLicenseValue(&v48, &Type, 0LL, 0, &DataSize);
  if ( v22 < 0 )
  {
    if ( v22 != -1073741789 )
    {
LABEL_56:
      if ( ZwQueryLicenseValue(&v48, &Type, v21, DataSize, &DataSize) < 0 )
      {
        if ( v21 )
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v21);
LABEL_79:
        v29 = 0LL;
        RtlInitUnicodeString(&v49, L"Kernel-MUI-Language-SKU");
        v30 = ZwQueryLicenseValue(&v49, &Type, 0LL, 0, &DataSize);
        if ( v30 >= 0 )
        {
          v31 = DataSize;
          if ( !DataSize )
          {
            v2 = 0LL;
            goto LABEL_85;
          }
        }
        else
        {
          if ( v30 != -1073741789 )
          {
LABEL_83:
            if ( ZwQueryLicenseValue(&v49, &Type, v29, DataSize, &DataSize) < 0 )
            {
              if ( v29 )
                RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v29);
              goto LABEL_107;
            }
            v31 = DataSize;
            v2 = v29;
LABEL_85:
            v16 = v31 == -4;
            v32 = v31 + 4;
            v40 = v32;
            if ( v16 )
            {
              BaseAddress = 0LL;
            }
            else
            {
              v33 = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v32);
              BaseAddress = v33;
              v34 = v33;
              if ( v33 )
              {
                memmove(v33, v2, DataSize);
                v35 = 0;
                BaseAddress = (wchar_t *)v34;
                v36 = wcspbrk(v34, L";");
                if ( v36 )
                {
                  BaseAddress = (wchar_t *)v34;
                  do
                  {
                    *v36 = 0;
                    RtlInitUnicodeString(&String, v34);
                    if ( RtlCultureNameToLCID(&String, &Lcid) )
                      ++v35;
                    v34 = v36 + 1;
                    v36 = wcspbrk(v36 + 1, L";");
                  }
                  while ( v36 );
                  v1 = a1;
                }
                if ( *v34 )
                {
                  RtlInitUnicodeString(&String, v34);
                  if ( RtlCultureNameToLCID(&String, &Lcid) )
                    ++v35;
                }
                if ( !v35 )
                {
                  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
                  v40 = 0;
                  BaseAddress = 0LL;
                }
                if ( v2 )
                  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v2);
                v2 = 0LL;
                goto LABEL_107;
              }
            }
            v40 = 0;
            v6 = -1073741801;
LABEL_108:
            v5 = v38;
            goto LABEL_109;
          }
          v31 = DataSize;
          if ( !DataSize )
          {
LABEL_107:
            v6 = 0;
            goto LABEL_108;
          }
        }
        v29 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v31);
        if ( v29 )
          goto LABEL_83;
        goto LABEL_107;
      }
      v23 = DataSize;
      v2 = v21;
      goto LABEL_58;
    }
    v23 = DataSize;
    if ( !DataSize )
      goto LABEL_79;
LABEL_55:
    v21 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v23);
    if ( !v21 )
      goto LABEL_79;
    goto LABEL_56;
  }
  v23 = DataSize;
  if ( DataSize )
    goto LABEL_55;
  v2 = 0LL;
LABEL_58:
  v16 = v23 == -4;
  v24 = v23 + 4;
  v38 = v24;
  if ( v16 )
  {
    v4 = 0LL;
  }
  else
  {
    v25 = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v24);
    v26 = v25;
    v4 = v25;
    if ( v25 )
    {
      memmove(v25, v2, DataSize);
      v27 = 0;
      v28 = wcspbrk(v26, L";");
      if ( v28 )
      {
        do
        {
          *v28 = 0;
          RtlInitUnicodeString(&String, v26);
          if ( RtlCultureNameToLCID(&String, &Lcid) )
            ++v27;
          v26 = v28 + 1;
          v28 = wcspbrk(v28 + 1, L";");
        }
        while ( v28 );
        v1 = a1;
      }
      if ( *v26 )
      {
        RtlInitUnicodeString(&String, v26);
        if ( RtlCultureNameToLCID(&String, &Lcid) )
          ++v27;
      }
      if ( !v27 )
      {
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
        v38 = 0;
        v4 = 0LL;
      }
      if ( v2 )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v2);
      v2 = 0LL;
      goto LABEL_79;
    }
  }
  v5 = 0;
LABEL_49:
  v6 = -1073741801;
LABEL_109:
  if ( v2 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v2);
  if ( v3 && v4 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
    v4 = 0LL;
    v5 = 0;
  }
LABEL_114:
  *(_DWORD *)v1 |= 0x800u;
  *(_DWORD *)(v1 + 116) = v42;
  *(_DWORD *)(v1 + 120) = v43;
  *(_DWORD *)(v1 + 148) = v39;
  *(_QWORD *)(v1 + 136) = BaseAddress;
  *(_DWORD *)(v1 + 144) = v40;
  result = v6;
  *(_QWORD *)(v1 + 128) = v3;
  *(_QWORD *)(v1 + 152) = v4;
  *(_DWORD *)(v1 + 160) = v5;
  return result;
}
