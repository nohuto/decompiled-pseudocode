/*
 * XREFs of SmpProcessModuleImports @ 0x140007570
 * Callers:
 *     <none>
 * Callees:
 *     SmpSaveRegistryValue_U @ 0x1400079E0 (SmpSaveRegistryValue_U.c)
 *     __security_check_cookie @ 0x140010ED0 (__security_check_cookie.c)
 *     ApiSetResolveToHost_V7 @ 0x140012034 (ApiSetResolveToHost_V7.c)
 */

int __fastcall SmpProcessModuleImports(__int16 **a1, const char *a2)
{
  __int16 **v3; // rdi
  unsigned __int64 v4; // rax
  __int64 v5; // rbx
  __int16 *v6; // r15
  PWSTR Buffer; // r10
  char v8; // r14
  unsigned int Length; // r11d
  unsigned __int16 v10; // r11
  unsigned int v11; // edi
  PWSTR v12; // r8
  __int64 v13; // r9
  int v14; // edx
  unsigned __int16 v15; // cx
  unsigned int *v16; // r13
  int v17; // edx
  int v18; // r9d
  int v19; // ecx
  __int64 v20; // r8
  unsigned int v21; // esi
  unsigned __int16 v22; // ax
  int v23; // r14d
  const WCHAR *v24; // r11
  __int64 v25; // r15
  unsigned __int16 v26; // ax
  int v27; // esi
  SIZE_T v28; // r10
  int v29; // edi
  __int64 v30; // r12
  LONG v31; // eax
  PWSTR v32; // rcx
  struct _UNICODE_STRING *v33; // rdx
  __int64 v34; // rcx
  char v36; // [rsp+30h] [rbp-D0h] BYREF
  struct _UNICODE_STRING v37; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING v38; // [rsp+50h] [rbp-B0h] BYREF
  SIZE_T v39; // [rsp+60h] [rbp-A0h]
  const WCHAR *v40; // [rsp+68h] [rbp-98h]
  __int16 **v41; // [rsp+70h] [rbp-90h]
  _STRING DestinationString; // [rsp+78h] [rbp-88h] BYREF
  char v43; // [rsp+90h] [rbp-70h] BYREF

  v41 = a1;
  v3 = a1;
  LODWORD(v4) = _stricmp(a2, "ntdll.dll");
  if ( !(_DWORD)v4 )
    return v4;
  LODWORD(v4) = _stricmp(a2, "ntdll32.dll");
  if ( !(_DWORD)v4 )
    return v4;
  RtlInitAnsiString(&DestinationString, a2);
  *(_QWORD *)&v37.Length = 34209792LL;
  v37.Buffer = (PWSTR)&v43;
  LODWORD(v4) = RtlAnsiStringToUnicodeString(&v37, &DestinationString, 0);
  if ( (v4 & 0x80000000) != 0LL )
    return v4;
  v4 = *(_QWORD *)&KeGetPcr()->MajorVersion;
  v5 = *(_QWORD *)(v4 + 104);
  v6 = *v3;
  if ( *(_BYTE *)v5 == 7 )
    goto LABEL_9;
  if ( *(_DWORD *)v5 == 6 && (*(_BYTE *)(v5 + 8) & 4) != 0 && *(_BYTE *)(v5 + 28) == 7 )
  {
    LODWORD(v5) = v5 + 28;
LABEL_9:
    LODWORD(v4) = ApiSetResolveToHost_V7(v5, (unsigned int)&v37, (unsigned int)*v3, (unsigned int)&v36, (__int64)&v38);
    if ( (v4 & 0x80000000) == 0LL )
    {
      Buffer = v37.Buffer;
      v8 = v36;
      goto LABEL_47;
    }
    return v4;
  }
  Buffer = v37.Buffer;
  v8 = 0;
  v38 = 0LL;
  if ( v37.Length < 8u )
    goto LABEL_46;
  v4 = *(_QWORD *)v37.Buffer & 0xFFFFFFDFFFDFFFDFuLL;
  if ( v4 != 0x2D004900500041LL && v4 != 0x2D005400580045LL )
    goto LABEL_46;
  Length = v37.Length;
  v4 = (unsigned __int64)v37.Buffer + v37.Length;
  if ( v37.Length > 1u )
  {
    do
    {
      Length -= 2;
      v4 -= 2LL;
    }
    while ( *(_WORD *)v4 != 45 && Length > 1 );
  }
  v10 = (unsigned __int16)Length >> 1;
  if ( !v10 )
    goto LABEL_46;
  v11 = 0;
  v12 = v37.Buffer;
  v13 = v10;
  do
  {
    v14 = *v12++;
    v15 = v14 + 32;
    LODWORD(v4) = v14 - 65;
    if ( (unsigned __int16)(v14 - 65) > 0x19u )
      v15 = v14;
    v11 = v15 + *(_DWORD *)(v5 + 24) * v11;
    --v13;
  }
  while ( v13 );
  v16 = 0LL;
  v17 = *(_DWORD *)(v5 + 12) - 1;
  v18 = 0;
  if ( v17 < 0 )
    goto LABEL_31;
  while ( 1 )
  {
    v19 = (v17 + v18) >> 1;
    LODWORD(v4) = v19;
    v20 = *(unsigned int *)(v5 + 20) + 8LL * v19;
    if ( v11 >= *(_DWORD *)(v20 + v5) )
      break;
    v17 = v19 - 1;
LABEL_27:
    if ( v18 > v17 )
      goto LABEL_46;
  }
  if ( v11 > *(_DWORD *)(v20 + v5) )
  {
    v18 = v19 + 1;
    goto LABEL_27;
  }
  v4 = *(unsigned int *)(v20 + v5 + 4);
  v16 = (unsigned int *)(v5 + *(unsigned int *)(v5 + 16) + 24 * v4);
  if ( v16 )
  {
    LODWORD(v4) = RtlCompareUnicodeStrings(v37.Buffer, v10, (PCWCH)(v5 + v16[1]), v16[3] >> 1, 1u);
    Buffer = v37.Buffer;
    if ( !(_DWORD)v4 )
    {
LABEL_31:
      if ( v16 )
      {
        if ( v6 )
        {
          v21 = v16[5];
          if ( v21 > 1 )
          {
            v22 = *v6;
            v23 = 1;
            v24 = (const WCHAR *)*((_QWORD *)v6 + 1);
            v25 = v5 + v16[4];
            v26 = v22 >> 1;
            v27 = v21 - 1;
            v40 = v24;
            if ( v27 < 1 )
              goto LABEL_45;
            v28 = v26;
            v39 = v26;
            while ( 1 )
            {
              v29 = (v27 + v23) >> 1;
              v30 = v5 + v16[4] + 20LL * v29;
              v31 = RtlCompareUnicodeStrings(
                      v24,
                      v28,
                      (PCWCH)(v5 + *(unsigned int *)(v30 + 4)),
                      *(_DWORD *)(v30 + 8) >> 1,
                      1u);
              if ( v31 >= 0 )
              {
                if ( v31 <= 0 )
                {
                  Buffer = v37.Buffer;
                  v25 = v30;
                  goto LABEL_45;
                }
                v23 = v29 + 1;
              }
              else
              {
                v27 = v29 - 1;
              }
              v28 = v39;
              v24 = v40;
              if ( v23 > v27 )
              {
                Buffer = v37.Buffer;
                goto LABEL_45;
              }
            }
          }
        }
        if ( v16[5] )
        {
          v25 = v5 + v16[4];
LABEL_45:
          v8 = 1;
          v38.Buffer = (PWSTR)(v5 + *(unsigned int *)(v25 + 12));
          v38.MaximumLength = *(_WORD *)(v25 + 16);
          LODWORD(v4) = *(unsigned __int16 *)(v25 + 16);
          v38.Length = *(_WORD *)(v25 + 16);
        }
      }
    }
  }
LABEL_46:
  v3 = v41;
LABEL_47:
  if ( v8 )
  {
    if ( v38.Length )
    {
      v37 = v38;
      Buffer = v38.Buffer;
      goto LABEL_50;
    }
  }
  else
  {
LABEL_50:
    v32 = (PWSTR)((char *)Buffer + v37.Length - 2);
    if ( v32 < Buffer )
      goto LABEL_53;
    while ( *v32 != 46 )
    {
      if ( --v32 < Buffer )
        goto LABEL_53;
    }
    if ( v32 < Buffer )
    {
LABEL_53:
      v33 = &v37;
    }
    else
    {
      *(&v38.MaximumLength + 2) = 0;
      v34 = v32 - Buffer;
      v33 = &v38;
      v38.Buffer = Buffer;
      *(_DWORD *)&v38.MaximumLength = (unsigned __int16)(2 * v34);
      v38.Length = 2 * v34;
    }
    LODWORD(v4) = SmpSaveRegistryValue_U(v3[1], v33, &v37, 1LL, 0LL);
  }
  return v4;
}
