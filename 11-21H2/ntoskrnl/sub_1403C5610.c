/*
 * XREFs of sub_1403C5610 @ 0x1403C5610
 * Callers:
 *     <none>
 * Callees:
 *     sub_140243A18 @ 0x140243A18 (sub_140243A18.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1403E1490 (_wcsicmp.c)
 *     sub_14069946C @ 0x14069946C (sub_14069946C.c)
 *     sub_1406994BC @ 0x1406994BC (sub_1406994BC.c)
 *     sub_140772A24 @ 0x140772A24 (sub_140772A24.c)
 *     sub_140772AA0 @ 0x140772AA0 (sub_140772AA0.c)
 *     sub_14078014C @ 0x14078014C (sub_14078014C.c)
 *     RtlGetPersistedStateLocation @ 0x140782DD0 (RtlGetPersistedStateLocation.c)
 *     sub_14082EB54 @ 0x14082EB54 (sub_14082EB54.c)
 *     sub_14082EB8C @ 0x14082EB8C (sub_14082EB8C.c)
 *     sub_14082EBA4 @ 0x14082EBA4 (sub_14082EBA4.c)
 *     sub_14082EBE0 @ 0x14082EBE0 (sub_14082EBE0.c)
 *     sub_140A22D40 @ 0x140A22D40 (sub_140A22D40.c)
 *     sub_140A22D7C @ 0x140A22D7C (sub_140A22D7C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void __fastcall sub_1403C5610(void *a1)
{
  unsigned int v1; // esi
  PVOID v2; // rbx
  void *v3; // rdi
  PWCHAR v4; // r15
  void *Pool2; // r12
  ULONG BufferLengthIn; // ebx
  int v7; // ecx
  __int64 v8; // rcx
  unsigned int v9; // r14d
  int v10; // r13d
  unsigned int v11; // esi
  int v12; // r14d
  __int64 v13; // rcx
  void *v14; // r13
  unsigned int v15; // ebx
  int v16; // eax
  int v17; // ebx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 BufferLengthOut; // [rsp+48h] [rbp-59h] BYREF
  int v21; // [rsp+50h] [rbp-51h] BYREF
  void *v22; // [rsp+58h] [rbp-49h]
  PVOID P; // [rsp+60h] [rbp-41h]
  __int64 v24; // [rsp+68h] [rbp-39h] BYREF
  int v25; // [rsp+70h] [rbp-31h] BYREF
  int v26; // [rsp+74h] [rbp-2Dh] BYREF
  __int64 v27; // [rsp+78h] [rbp-29h] BYREF
  LARGE_INTEGER v28; // [rsp+80h] [rbp-21h] BYREF
  __int64 v29; // [rsp+88h] [rbp-19h] BYREF
  unsigned int v30; // [rsp+90h] [rbp-11h] BYREF
  unsigned int v31; // [rsp+94h] [rbp-Dh] BYREF
  int v32; // [rsp+98h] [rbp-9h] BYREF
  __int64 v33; // [rsp+A0h] [rbp-1h] BYREF
  PWCHAR TargetPath; // [rsp+A8h] [rbp+7h] BYREF
  __int64 v35; // [rsp+B0h] [rbp+Fh] BYREF
  wchar_t Str1[8]; // [rsp+B8h] [rbp+17h] BYREF

  v1 = 0;
  P = a1;
  v2 = a1;
  v28.QuadPart = 0LL;
  v35 = 0LL;
  v3 = 0LL;
  v29 = 0LL;
  v4 = 0LL;
  v24 = 0LL;
  TargetPath = 0LL;
  Pool2 = 0LL;
  v27 = 0LL;
  v33 = 0LL;
  LODWORD(BufferLengthOut) = 0;
  v25 = 0;
  v26 = 0;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  v21 = 0;
  v22 = 0LL;
  if ( (int)sub_14078014C(*(_QWORD *)&qword_140D00AC0, 15LL, &TargetPath) < 0
    || (unsigned int)sub_14082EBA4(
                       0,
                       (_DWORD)TargetPath,
                       (unsigned int)L"Current\\ProductIds",
                       0,
                       131097,
                       (__int64)&v33) == -1073741772
    || RtlGetPersistedStateLocation(
         L"DynamicInstalledProducts",
         0LL,
         L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Update\\TargetingInfo\\DynamicInstalled",
         LocationTypeRegistry,
         0LL,
         0,
         (PULONG)&BufferLengthOut) != -2147483643 )
  {
    v14 = 0LL;
    goto LABEL_36;
  }
  BufferLengthIn = BufferLengthOut;
  TargetPath = (PWCHAR)ExAllocatePool2(256LL, (unsigned int)BufferLengthOut, 1852403792LL);
  v4 = TargetPath;
  if ( !TargetPath )
    goto LABEL_72;
  if ( RtlGetPersistedStateLocation(
         L"DynamicInstalledProducts",
         0LL,
         L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Update\\TargetingInfo\\DynamicInstalled",
         LocationTypeRegistry,
         TargetPath,
         BufferLengthIn,
         (PULONG)&BufferLengthOut) < 0 )
    goto LABEL_72;
  if ( (unsigned int)sub_140772AA0(0, 0, (_DWORD)v4, 0, 131103, 0LL, (__int64)&v29, 0LL) )
    goto LABEL_72;
  sub_140243A18(&BufferLengthOut, &v28, &v35);
  v28.QuadPart -= v35;
  if ( (unsigned int)sub_1406994BC(v7, v29, (unsigned int)&v30, (unsigned int)&v25, 0LL, 0LL, 0LL) )
    goto LABEL_72;
  v9 = v30;
  if ( !v30 )
    goto LABEL_22;
  v10 = v25 + 1;
  Pool2 = (void *)ExAllocatePool2(256LL, 2LL * (unsigned int)(v25 + 1), 1852403792LL);
  if ( !Pool2 )
  {
LABEL_72:
    v14 = 0LL;
    goto LABEL_35;
  }
  if ( !v9 )
    goto LABEL_22;
  do
  {
    v25 = v10;
    if ( v24 )
    {
      sub_14082EB8C();
      v24 = 0LL;
    }
    if ( (int)sub_14082EBE0(v8, v29, v1, Pool2, &v25) >= 0
      && (int)sub_14082EBA4(0, v29, (_DWORD)Pool2, 0, 131103, (__int64)&v24) >= 0 )
    {
      LODWORD(BufferLengthOut) = 14;
      if ( (int)sub_14082EB54(v8, v24, L"Source", &v21, Str1, &BufferLengthOut) >= 0
        && v21 == 1
        && (_DWORD)BufferLengthOut == 14
        && !wcsicmp(Str1, L"SMBIOS") )
      {
        LODWORD(BufferLengthOut) = 0;
        if ( (unsigned int)sub_14082EB54(v8, v33, Pool2, 0LL, 0LL, &BufferLengthOut) == -1073741772 )
        {
          if ( v3 )
          {
            ExFreePoolWithTag(v3, 0);
            v3 = 0LL;
          }
          LODWORD(BufferLengthOut) = 0;
          v16 = sub_14082EB54(v8, v24, L"Version", &v21, v3, &BufferLengthOut);
          if ( v16 == -1073741789 )
          {
            v17 = BufferLengthOut;
            v3 = (void *)ExAllocatePool2(256LL, (unsigned int)BufferLengthOut, 1852403792LL);
            if ( !v3 )
            {
LABEL_66:
              sub_140A22D7C(v8, v24, L"DeactivationTime", 3LL, &v28, 8);
              if ( v3 )
                sub_140A22D7C(v18, v24, L"DeactivationVersion", 1LL, v3, v17);
              sub_140A22D40(v18, v24, L"Version");
              goto LABEL_20;
            }
            v16 = sub_14082EB54(v8, v24, L"Version", &v21, v3, &BufferLengthOut);
          }
          if ( v16 == -1073741772 )
            goto LABEL_20;
          v17 = BufferLengthOut;
          if ( (v16 < 0 || v21 != 1 || (unsigned int)BufferLengthOut < 2) && v3 )
          {
            ExFreePoolWithTag(v3, 0);
            v3 = 0LL;
          }
          goto LABEL_66;
        }
      }
    }
LABEL_20:
    ++v1;
  }
  while ( v1 < v9 );
  v4 = TargetPath;
LABEL_22:
  if ( (unsigned int)sub_1406994BC(v8, v33, 0, 0, (__int64)&v31, (__int64)&v26, 0LL) || (v11 = v31) == 0 )
  {
    v14 = v22;
  }
  else
  {
    v12 = v26 + 1;
    v14 = (void *)ExAllocatePool2(256LL, 2LL * (unsigned int)(v26 + 1), 1852403792LL);
    if ( v14 )
    {
      v15 = 0;
      if ( v11 )
      {
        do
        {
          v26 = v12;
          if ( v27 )
          {
            sub_14082EB8C();
            v27 = 0LL;
          }
          if ( (int)sub_14069946C(v13, v33, v15, v14, &v26, 0LL, 0LL, 0LL) >= 0
            && (int)sub_140772A24(0, v29, (_DWORD)v14, 0, 131078, 0LL, (__int64)&v27, (__int64)&v32) >= 0 )
          {
            if ( v32 == 1 )
              sub_140A22D7C(v13, v27, L"CreationTime", 3LL, &v28, 8);
            LODWORD(BufferLengthOut) = 0;
            if ( (unsigned int)sub_14082EB54(v13, v27, L"Version", 0LL, 0LL, &BufferLengthOut) == -1073741772
              && (int)sub_140A22D7C(v13, v27, L"Version", 1LL, L"0.0.0.0", 16) >= 0 )
            {
              sub_140A22D7C(v13, v27, L"ActivationTime", 3LL, &v28, 8);
              sub_140A22D7C(v19, v27, L"Source", 1LL, L"SMBIOS", 14);
            }
          }
          ++v15;
        }
        while ( v15 < v11 );
        v4 = TargetPath;
      }
    }
  }
LABEL_35:
  v2 = P;
LABEL_36:
  if ( v27 )
    sub_14082EB8C();
  if ( v33 )
    sub_14082EB8C();
  if ( v24 )
    sub_14082EB8C();
  if ( v29 )
    sub_14082EB8C();
  if ( v14 )
    ExFreePoolWithTag(v14, 0);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
}
