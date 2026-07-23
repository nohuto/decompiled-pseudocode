/*
 * XREFs of SepValidateReferencedCachedHandles @ 0x1407F4E30
 * Callers:
 *     SepSetTokenCachedHandles @ 0x1407F4770 (SepSetTokenCachedHandles.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x14022AA1C (RtlStringCchPrintfW.c)
 *     RtlInitUnicodeString @ 0x14022E2C0 (RtlInitUnicodeString.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     RtlSubAuthoritySid @ 0x140297D60 (RtlSubAuthoritySid.c)
 *     RtlGetCurrentServiceSessionId @ 0x14036E610 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     RtlPrefixUnicodeString @ 0x1406D9E50 (RtlPrefixUnicodeString.c)
 *     RtlEqualUnicodeString @ 0x1406DA320 (RtlEqualUnicodeString.c)
 *     ObReferenceObjectByHandle @ 0x1406E62F0 (ObReferenceObjectByHandle.c)
 *     RtlFreeUnicodeString @ 0x14076F5C0 (RtlFreeUnicodeString.c)
 *     RtlGetAppContainerSidType @ 0x1407F4670 (RtlGetAppContainerSidType.c)
 *     SepQueryNameString @ 0x1407F51BC (SepQueryNameString.c)
 *     RtlConvertSidToUnicodeString @ 0x1407FB010 (RtlConvertSidToUnicodeString.c)
 *     RtlGetAppContainerParent @ 0x1409BC270 (RtlGetAppContainerParent.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepValidateReferencedCachedHandles(__int64 a1, int *a2, unsigned int a3, HANDLE *a4)
{
  int v5; // ecx
  NTSTATUS v7; // ebx
  PVOID v8; // r14
  unsigned int v9; // r15d
  void *v10; // r12
  __int64 v11; // r9
  _QWORD *v12; // r13
  NTSTATUS v13; // eax
  __int64 v14; // r8
  __int64 v15; // r9
  char *v16; // rdi
  struct _OBJECT_TYPE *v17; // rax
  unsigned int v18; // esi
  char *v19; // rdi
  char v20; // si
  unsigned int v21; // edi
  __int64 v23; // r9
  PULONG v24; // rsi
  PULONG v25; // rdi
  PULONG v26; // rbx
  PULONG v27; // rax
  void *v28; // rcx
  char v29; // [rsp+40h] [rbp-C0h]
  PVOID AppContainerSidParent; // [rsp+48h] [rbp-B8h] BYREF
  _APPCONTAINER_SID_TYPE AppContainerSidType; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v32; // [rsp+54h] [rbp-ACh]
  unsigned int v33; // [rsp+58h] [rbp-A8h]
  PVOID P; // [rsp+60h] [rbp-A0h] BYREF
  PCUNICODE_STRING p_UnicodeString; // [rsp+68h] [rbp-98h]
  HANDLE *v36; // [rsp+70h] [rbp-90h]
  UNICODE_STRING String2; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+88h] [rbp-78h] BYREF
  UNICODE_STRING String1; // [rsp+98h] [rbp-68h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v41[8]; // [rsp+B8h] [rbp-48h]
  UNICODE_STRING v42; // [rsp+C0h] [rbp-40h] BYREF
  char v43; // [rsp+D0h] [rbp-30h]
  wchar_t pszDest[256]; // [rsp+E0h] [rbp-20h] BYREF
  wchar_t SourceString[256]; // [rsp+2E0h] [rbp+1E0h] BYREF

  v36 = a4;
  v33 = a3;
  v5 = *a2;
  AppContainerSidParent = a2;
  v32 = 0;
  v7 = 0;
  v29 = 0;
  v8 = 0LL;
  AppContainerSidType = NotAppContainerSidType;
  v9 = 0;
  P = 0LL;
  p_UnicodeString = 0LL;
  UnicodeString = 0LL;
  if ( v5 )
  {
    if ( v5 != 1 )
      goto LABEL_9;
    v23 = *(unsigned int *)(a1 + 120);
    p_UnicodeString = (PCUNICODE_STRING)(a2 + 2);
    v7 = RtlStringCchPrintfW(pszDest, 0x100uLL, L"\\Sessions\\%d", v23);
    if ( v7 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, pszDest);
      v41[0] = 1;
      v9 = 1;
      if ( *(_DWORD *)(a1 + 120) != RtlGetCurrentServiceSessionId() )
        goto LABEL_9;
      RtlInitUnicodeString(&v42, L"\\BaseNamedObjects");
      v43 = 1;
LABEL_8:
      v9 = 2;
LABEL_9:
      if ( !v33 )
        goto LABEL_33;
      v12 = AppContainerSidParent;
      do
      {
        if ( v8 )
          ObfDereferenceObject(v8);
        AppContainerSidParent = 0LL;
        v13 = ObReferenceObjectByHandle(*v36, 0, 0LL, 0, &AppContainerSidParent, 0LL);
        v8 = AppContainerSidParent;
        v7 = v13;
        if ( v13 >= 0 )
        {
          v16 = (char *)AppContainerSidParent - 48;
          v17 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)AppContainerSidParent - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)AppContainerSidParent - 48) >> 8)];
          if ( v17 != ObpSymbolicLinkObjectType
            && v17 != ObpDirectoryObjectType
            && (v17 != (struct _OBJECT_TYPE *)IoFileObjectType
             || *(_DWORD *)(*((_QWORD *)AppContainerSidParent + 1) + 72LL) != 17) )
          {
            goto LABEL_44;
          }
          if ( P )
          {
            ExFreePoolWithTag(P, 0);
            P = 0LL;
          }
          v7 = SepQueryNameString(v8, &P, v14, v15);
          if ( v7 < 0 )
            break;
          if ( !P || !*((_WORD *)P + 1) || (v18 = 0, String2 = *(UNICODE_STRING *)P, !v9) )
          {
LABEL_44:
            v7 = -1073741811;
            break;
          }
          while ( !RtlPrefixUnicodeString((UNICODE_STRING *)((char *)&DestinationString + 24 * v18), &String2, 1u) )
          {
            if ( ++v18 >= v9 )
              goto LABEL_44;
          }
          if ( v41[24 * v18] )
          {
            if ( (v16[26] & 2) == 0 )
              goto LABEL_44;
            v19 = &v16[-ObpInfoMaskToOffset[v16[26] & 3]];
            if ( !v19 || !*((_WORD *)v19 + 5) )
              goto LABEL_44;
            String1 = *(UNICODE_STRING *)(v19 + 8);
            if ( !RtlEqualUnicodeString(&String1, p_UnicodeString, 1u) )
            {
              v20 = 0;
              v21 = 0;
              while ( !RtlEqualUnicodeString(&String1, (PCUNICODE_STRING)&AllowedCachedObjectNames[2 * v21], 1u) )
              {
                if ( ++v21 >= 5 )
                {
                  if ( AppContainerSidType != ChildAppContainerSidType )
                    goto LABEL_44;
                  v28 = (void *)v12[1];
                  AppContainerSidParent = 0LL;
                  if ( RtlGetAppContainerParent(v28, &AppContainerSidParent) < 0 )
                    goto LABEL_44;
                  String2 = 0LL;
                  v7 = RtlConvertSidToUnicodeString(&String2, AppContainerSidParent, 1u);
                  if ( v7 >= 0 )
                  {
                    if ( RtlEqualUnicodeString(&String1, &String2, 1u) )
                      v20 = 1;
                    RtlFreeUnicodeString(&String2);
                  }
                  ExFreePoolWithTag(AppContainerSidParent, 0);
                  if ( !v20 )
                    goto LABEL_44;
                  break;
                }
              }
            }
          }
        }
        ++v36;
        ++v32;
      }
      while ( v32 < v33 );
    }
  }
  else
  {
    v7 = RtlGetAppContainerSidType(*((PSID *)a2 + 1), &AppContainerSidType);
    if ( v7 < 0 )
      goto LABEL_33;
    v10 = (void *)*((_QWORD *)a2 + 1);
    if ( AppContainerSidType == ParentAppContainerSidType )
    {
      v7 = RtlConvertSidToUnicodeString(&UnicodeString, v10, 1u);
      if ( v7 < 0 )
        goto LABEL_33;
      v29 = 1;
      goto LABEL_6;
    }
    v24 = RtlSubAuthoritySid(*((PSID *)a2 + 1), 0xBu);
    v25 = RtlSubAuthoritySid(v10, 0xAu);
    v26 = RtlSubAuthoritySid(v10, 9u);
    v27 = RtlSubAuthoritySid(v10, 8u);
    v7 = RtlStringCchPrintfW(SourceString, 0x100uLL, L"%u-%u-%u-%u", *v27, *v26, *v25, *v24);
    if ( v7 >= 0 )
    {
      RtlInitUnicodeString(&UnicodeString, SourceString);
LABEL_6:
      v11 = *(unsigned int *)(a1 + 120);
      p_UnicodeString = &UnicodeString;
      v7 = RtlStringCchPrintfW(pszDest, 0x100uLL, L"\\Sessions\\%d", v11);
      if ( v7 < 0 )
        goto LABEL_33;
      RtlInitUnicodeString(&DestinationString, pszDest);
      v41[0] = 1;
      RtlInitUnicodeString(&v42, L"\\Device\\NamedPipe");
      v43 = 0;
      goto LABEL_8;
    }
  }
LABEL_33:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v8 )
    ObfDereferenceObject(v8);
  if ( v29 )
    RtlFreeUnicodeString(&UnicodeString);
  return (unsigned int)v7;
}
