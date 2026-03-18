/*
 * XREFs of AdtpBuildAccessReasonAuditStringInternal @ 0x14064B9D8
 * Callers:
 *     AdtpBuildAccessReasonAuditString @ 0x14064B46C (AdtpBuildAccessReasonAuditString.c)
 * Callees:
 *     RtlGetDaclSecurityDescriptor @ 0x140203DD0 (RtlGetDaclSecurityDescriptor.c)
 *     SeConvertSecurityDescriptorToStringSecurityDescriptor @ 0x140206FA0 (SeConvertSecurityDescriptorToStringSecurityDescriptor.c)
 *     StringCchPrintfW @ 0x1402511F0 (StringCchPrintfW.c)
 *     RtlGetAce @ 0x1402A4750 (RtlGetAce.c)
 *     RtlAppendUnicodeStringToString @ 0x1402DFA30 (RtlAppendUnicodeStringToString.c)
 *     RtlAppendUnicodeToString @ 0x1402DFAC0 (RtlAppendUnicodeToString.c)
 *     RtlStringCbPrintfW @ 0x1402E1280 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     AdtpFormatPrefix @ 0x14064C858 (AdtpFormatPrefix.c)
 *     StringCchPrintfExW @ 0x14064C9B4 (StringCchPrintfExW.c)
 *     RtlCreateAcl @ 0x1407244A0 (RtlCreateAcl.c)
 *     RtlCreateSecurityDescriptor @ 0x140724520 (RtlCreateSecurityDescriptor.c)
 *     RtlAddAce @ 0x140724BB0 (RtlAddAce.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140726330 (RtlSetDaclSecurityDescriptor.c)
 *     RtlIntegerToUnicodeString @ 0x14075AC60 (RtlIntegerToUnicodeString.c)
 *     AdtpBuildPrivilegeAuditString @ 0x140A1B260 (AdtpBuildPrivilegeAuditString.c)
 *     AdtpBuildAccessesString @ 0x140A1C148 (AdtpBuildAccessesString.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall AdtpBuildAccessReasonAuditStringInternal(
        int a1,
        int a2,
        size_t a3,
        size_t a4,
        int a5,
        int a6,
        __int64 a7,
        __int64 a8,
        int a9,
        int a10,
        int a11,
        _BYTE *a12)
{
  unsigned int v15; // eax
  int v16; // ecx
  unsigned int v17; // esi
  NTSTATUS DaclSecurityDescriptor; // ebx
  unsigned __int16 v19; // r15
  int v20; // edx
  int v21; // edi
  unsigned int v22; // ebx
  const UNICODE_STRING *v23; // rdx
  ULONG v24; // ebx
  unsigned __int16 v25; // bx
  unsigned int v26; // eax
  __int64 v27; // rax
  unsigned int v28; // eax
  unsigned int v29; // ebx
  UNICODE_STRING *p_Source; // rdx
  const UNICODE_STRING *v31; // rdx
  ULONG v32; // esi
  PACL v33; // r14
  unsigned __int16 *v34; // r15
  ULONG v35; // ebx
  ACL *Pool2; // rax
  ACL *v37; // rsi
  int v38; // eax
  PACL v39; // r12
  UNICODE_STRING *v40; // r15
  __int64 v41; // r14
  __int64 v42; // rcx
  unsigned int v43; // ecx
  __int16 v44; // bx
  UNICODE_STRING *v45; // rdx
  NTSTATUS appended; // eax
  size_t Length; // r14
  unsigned int v48; // edi
  char *v49; // rsi
  __int64 v50; // rcx
  __int16 v51; // di
  __int64 v53; // [rsp+30h] [rbp-D0h]
  BOOLEAN DaclPresent[8]; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING Destination; // [rsp+58h] [rbp-A8h] BYREF
  PVOID Ace[2]; // [rsp+68h] [rbp-98h] BYREF
  PACL Dacl; // [rsp+78h] [rbp-88h] BYREF
  BOOLEAN DaclDefaulted[2]; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int16 v59; // [rsp+82h] [rbp-7Eh]
  size_t pcchRemaining; // [rsp+88h] [rbp-78h] BYREF
  int v61; // [rsp+90h] [rbp-70h]
  UNICODE_STRING v62; // [rsp+98h] [rbp-68h] BYREF
  UNICODE_STRING v63; // [rsp+A8h] [rbp-58h] BYREF
  UNICODE_STRING v64; // [rsp+B8h] [rbp-48h] BYREF
  UNICODE_STRING Source; // [rsp+C8h] [rbp-38h] BYREF
  UNICODE_STRING v66; // [rsp+D8h] [rbp-28h] BYREF
  UNICODE_STRING v67; // [rsp+E8h] [rbp-18h] BYREF
  UNICODE_STRING v68; // [rsp+F8h] [rbp-8h] BYREF
  void *Src[2]; // [rsp+108h] [rbp+8h] BYREF
  _BYTE *v70; // [rsp+118h] [rbp+18h]
  __int64 v71; // [rsp+120h] [rbp+20h]
  wchar_t pszFormat[8]; // [rsp+128h] [rbp+28h] BYREF
  UNICODE_STRING v73; // [rsp+138h] [rbp+38h] BYREF
  int v74; // [rsp+148h] [rbp+48h]
  wchar_t pszDest[8]; // [rsp+158h] [rbp+58h] BYREF
  __int128 v76; // [rsp+168h] [rbp+68h]
  __int64 v77; // [rsp+178h] [rbp+78h]
  char v78; // [rsp+180h] [rbp+80h] BYREF
  char v79; // [rsp+198h] [rbp+98h] BYREF
  char v80; // [rsp+1B8h] [rbp+B8h] BYREF
  char v81; // [rsp+1D8h] [rbp+D8h] BYREF
  char v82; // [rsp+1F8h] [rbp+F8h] BYREF
  char v83; // [rsp+218h] [rbp+118h] BYREF
  char v84; // [rsp+238h] [rbp+138h] BYREF
  char v85; // [rsp+258h] [rbp+158h] BYREF

  v70 = a12;
  v71 = a8;
  v15 = 0;
  pcchRemaining = a4;
  v16 = 1;
  DaclPresent[0] = 0;
  *(_DWORD *)(&v62.MaximumLength + 1) = 0;
  v17 = 0;
  *(_DWORD *)(&v66.MaximumLength + 1) = 0;
  *(_DWORD *)(&v67.MaximumLength + 1) = 0;
  *(_DWORD *)(&v68.MaximumLength + 1) = 0;
  HIDWORD(Ace[0]) = 0;
  *(_DWORD *)(&v64.MaximumLength + 1) = 0;
  *(_DWORD *)(&Source.MaximumLength + 1) = 0;
  *(_DWORD *)(&v73.MaximumLength + 1) = 0;
  Dacl = 0LL;
  *(_QWORD *)pszFormat = 0LL;
  *(_OWORD *)Src = 0LL;
  Destination = 0LL;
  v63 = 0LL;
  while ( (v16 & a5) == 0 )
  {
    ++v15;
    v16 *= 2;
    if ( v15 >= 0x20 )
      goto LABEL_6;
  }
  v17 = v15;
LABEL_6:
  *(_DWORD *)&v73.Length = 1310720;
  v73.Buffer = (wchar_t *)&v78;
  *(_DWORD *)&v62.Length = 1966080;
  v62.Buffer = (wchar_t *)&v79;
  DaclSecurityDescriptor = AdtpFormatPrefix(&v62, 0x709u);
  if ( DaclSecurityDescriptor < 0 )
    goto LABEL_123;
  *(_DWORD *)&v66.Length = 1966080;
  v66.Buffer = (wchar_t *)&v80;
  DaclSecurityDescriptor = AdtpFormatPrefix(&v66, 0x70Au);
  if ( DaclSecurityDescriptor < 0 )
    goto LABEL_123;
  *(_DWORD *)&v67.Length = 1966080;
  v67.Buffer = (wchar_t *)&v81;
  DaclSecurityDescriptor = AdtpFormatPrefix(&v67, 0x713u);
  if ( DaclSecurityDescriptor < 0 )
    goto LABEL_123;
  *(_DWORD *)&v68.Length = 1966080;
  v68.Buffer = (wchar_t *)&v82;
  DaclSecurityDescriptor = AdtpFormatPrefix(&v68, 0x714u);
  if ( DaclSecurityDescriptor < 0 )
    goto LABEL_123;
  LODWORD(Ace[0]) = 1966080;
  Ace[1] = &v83;
  DaclSecurityDescriptor = AdtpFormatPrefix((PUNICODE_STRING)Ace, 0x712u);
  if ( DaclSecurityDescriptor < 0 )
    goto LABEL_123;
  *(_DWORD *)&v64.Length = 1966080;
  v64.Buffer = (wchar_t *)&v84;
  DaclSecurityDescriptor = AdtpFormatPrefix(&v64, 0x716u);
  if ( DaclSecurityDescriptor < 0 )
    goto LABEL_123;
  *(_DWORD *)&Source.Length = 1966080;
  Source.Buffer = (wchar_t *)&v85;
  DaclSecurityDescriptor = AdtpFormatPrefix(&Source, 0x718u);
  if ( DaclSecurityDescriptor < 0 )
    goto LABEL_123;
  DaclSecurityDescriptor = AdtpBuildAccessesString(
                             a1,
                             a2,
                             a5,
                             2,
                             (PUNICODE_STRING)Src,
                             0LL,
                             0LL,
                             0LL,
                             (__int64)DaclPresent);
  if ( DaclSecurityDescriptor < 0 )
    goto LABEL_123;
  v19 = (unsigned __int16)Src[0];
  v59 = (unsigned __int16)Src[0];
  v61 = LOWORD(Src[0]) >> 1;
  v20 = *(_DWORD *)(a7 + 4LL * v17);
  v21 = v20 & 0xFF0000;
  if ( (v20 & 0xFF0000u) > 0x200000 )
  {
    switch ( v21 )
    {
      case 3145728:
        v24 = 1803;
        break;
      case 4194304:
        v24 = 1804;
        break;
      case 5242880:
        v24 = 1806;
        break;
      case 6291456:
        v24 = 1807;
        break;
      case 7340032:
        v24 = 1808;
        break;
      case 8388608:
        v24 = 1805;
        break;
      case 9437184:
        v24 = (unsigned int)Dacl;
        goto LABEL_96;
      case 10485760:
        v24 = 1856;
        break;
      default:
        goto LABEL_111;
    }
LABEL_106:
    Destination.Buffer = (wchar_t *)ExAllocatePool2(256LL, 78LL, 1799447891LL);
    if ( !Destination.Buffer )
      goto LABEL_107;
    *(_DWORD *)&Destination.Length = 5111808;
    RtlAppendUnicodeToString(&Destination, L"%%");
    DaclSecurityDescriptor = RtlIntegerToUnicodeString(v24, 0xAu, &v73);
    if ( DaclSecurityDescriptor < 0 )
      goto LABEL_123;
    v31 = &v73;
    goto LABEL_110;
  }
  switch ( v21 )
  {
    case 0x200000:
LABEL_25:
      *(_QWORD *)pszFormat = (unsigned __int16)v20;
      v73.Buffer = (wchar_t *)(unsigned __int16)v20;
      wcscpy(&v73.Length, L"\x01");
      *(_DWORD *)(&v73.MaximumLength + 1) = 1;
      v74 = 0;
      DaclSecurityDescriptor = AdtpBuildPrivilegeAuditString(&v73, &v63, 0LL, 0LL);
      if ( DaclSecurityDescriptor < 0 )
        goto LABEL_123;
      v22 = (v63.Length >> 1) + 27;
      Destination.Buffer = (wchar_t *)ExAllocatePool2(256LL, 2LL * v22, 1799447891LL);
      if ( Destination.Buffer )
      {
        Destination.Length = 0;
        Destination.MaximumLength = 2 * v22;
        if ( v21 == 0x200000 )
          v23 = &v62;
        else
          v23 = (const UNICODE_STRING *)Ace;
        RtlAppendUnicodeStringToString(&Destination, v23);
        RtlAppendUnicodeStringToString(&Destination, &v63);
        if ( v63.Buffer )
        {
          ExFreePoolWithTag(v63.Buffer, 0);
          v63.Buffer = 0LL;
        }
        break;
      }
LABEL_107:
      DaclSecurityDescriptor = -1073741801;
      goto LABEL_123;
    case 0:
      v24 = 1809;
      goto LABEL_106;
    case 0x10000:
    case 0x20000:
    case 0x30000:
    case 0x40000:
      Dacl = 0LL;
      v77 = 0LL;
      DaclPresent[0] = 0;
      v32 = (unsigned __int16)v20;
      Ace[0] = 0LL;
      *(_OWORD *)pszDest = 0LL;
      if ( ((v21 - 0x10000) & 0xFFFEFFFF) != 0 )
        a3 = pcchRemaining;
      v76 = 0LL;
      DaclSecurityDescriptor = RtlGetDaclSecurityDescriptor(
                                 *(PSECURITY_DESCRIPTOR *)a3,
                                 DaclPresent,
                                 &Dacl,
                                 DaclDefaulted);
      if ( DaclSecurityDescriptor < 0 )
        goto LABEL_123;
      if ( !DaclPresent[0] )
        goto LABEL_123;
      v33 = Dacl;
      DaclSecurityDescriptor = RtlGetAce(Dacl, v32, Ace);
      if ( DaclSecurityDescriptor < 0 )
        goto LABEL_123;
      v34 = (unsigned __int16 *)Ace[0];
      v35 = *((unsigned __int16 *)Ace[0] + 1) + 8;
      Pool2 = (ACL *)ExAllocatePool2(256LL, v35, 1799447891LL);
      v37 = Pool2;
      if ( !Pool2 )
        goto LABEL_107;
      DaclSecurityDescriptor = RtlCreateAcl(Pool2, v35, v33->AclRevision);
      if ( DaclSecurityDescriptor < 0
        || (DaclSecurityDescriptor = RtlAddAce(v37, v33->AclRevision, 0, v34, v34[1]), DaclSecurityDescriptor < 0)
        || (DaclSecurityDescriptor = RtlCreateSecurityDescriptor(pszDest, 1u), DaclSecurityDescriptor < 0)
        || (DaclSecurityDescriptor = RtlSetDaclSecurityDescriptor(pszDest, 1u, v37, 0), DaclSecurityDescriptor < 0) )
      {
LABEL_122:
        ExFreePoolWithTag(v37, 0);
        goto LABEL_123;
      }
      v38 = SeConvertSecurityDescriptorToStringSecurityDescriptor((__int64)pszDest, 1LL, 4LL, pszFormat, &Dacl);
      v39 = *(PACL *)pszFormat;
      DaclSecurityDescriptor = v38;
      Dacl = *(PACL *)pszFormat;
      if ( v38 < 0 )
      {
        if ( v38 == -1073741801 )
          goto LABEL_119;
        v40 = &v73;
        if ( StringCchPrintfW(&v73.Length, 0x10uLL, L"<0x%08X>", (unsigned int)v38) < 0 )
          v40 = (UNICODE_STRING *)L"-";
      }
      else
      {
        v40 = *(UNICODE_STRING **)pszFormat;
      }
      v41 = -1LL;
      v42 = -1LL;
      do
        ++v42;
      while ( *(&v40->Length + v42) );
      v43 = v42 + 1;
      if ( 2 * (unsigned __int64)v43 > 0xFFFF )
      {
        DaclSecurityDescriptor = RtlStringCbPrintfW(&v73.Length, 0x10uLL, L"%%%%%u", 1828LL);
        if ( DaclSecurityDescriptor < 0 )
          goto LABEL_119;
        v40 = &v73;
        do
          ++v41;
        while ( *(&v73.Length + v41) );
        v43 = v41 + 1;
      }
      v44 = v43 + 27;
      Destination.Buffer = (wchar_t *)ExAllocatePool2(256LL, 2LL * (v43 + 27), 1799447891LL);
      if ( !Destination.Buffer )
      {
        DaclSecurityDescriptor = -1073741801;
        goto LABEL_119;
      }
      Destination.Length = 0;
      Destination.MaximumLength = 2 * v44;
      switch ( v21 )
      {
        case 65536:
          v45 = &v62;
          break;
        case 131072:
          v45 = &v66;
          break;
        case 196608:
          v45 = &v67;
          break;
        default:
          v45 = &v68;
          break;
      }
      RtlAppendUnicodeStringToString(&Destination, v45);
      RtlAppendUnicodeToString(&Destination, &v40->Length);
      if ( v39 )
      {
        ExFreePoolWithTag(v39, 0);
        Dacl = 0LL;
      }
      ExFreePoolWithTag(v37, 0);
      v19 = v59;
      break;
    case 0x50000:
    case 0x60000:
      v25 = 2;
      wcscpy(pszFormat, L"# %d");
      Ace[0] = (PVOID)131074;
      Ace[1] = (PVOID)L"-";
      if ( v21 == 393216 )
      {
        v28 = *(_DWORD *)(pcchRemaining + 8);
        if ( !v28 )
          goto LABEL_39;
        if ( (unsigned __int16)v20 < v28 )
        {
          v27 = *(_QWORD *)(pcchRemaining + 16);
          goto LABEL_38;
        }
      }
      else
      {
        v26 = *(_DWORD *)(a3 + 8);
        if ( !v26 )
          goto LABEL_39;
        if ( (unsigned __int16)v20 < v26 )
        {
          v27 = *(_QWORD *)(a3 + 16);
LABEL_38:
          *(_OWORD *)Ace = *(_OWORD *)(v27 + 16LL * (unsigned __int16)v20);
          v25 = (unsigned __int16)Ace[0];
LABEL_39:
          if ( v25 <= 2u )
          {
            LODWORD(v53) = (unsigned __int16)v20;
            pcchRemaining = 0LL;
            if ( StringCchPrintfExW(pszDest, 0x14uLL, 0LL, &pcchRemaining, 0, pszFormat, v53) >= 0 )
            {
              WORD1(Ace[0]) = 40;
              v25 = 2 * (20 - pcchRemaining);
              LOWORD(Ace[0]) = v25;
              Ace[1] = pszDest;
            }
          }
          v29 = v25 + 54;
          Destination.Buffer = (wchar_t *)ExAllocatePool2(256LL, v29, 1799447891LL);
          if ( !Destination.Buffer )
            goto LABEL_107;
          Destination.Length = 0;
          Destination.MaximumLength = 2 * v29;
          if ( v21 == 327680 )
            p_Source = &v64;
          else
            p_Source = &Source;
          RtlAppendUnicodeStringToString(&Destination, p_Source);
          v31 = (const UNICODE_STRING *)Ace;
LABEL_110:
          RtlAppendUnicodeStringToString(&Destination, v31);
          break;
        }
      }
      DaclSecurityDescriptor = -1073741811;
      goto LABEL_123;
    case 0x70000:
      v24 = 1830;
LABEL_96:
      if ( v21 == 9437184 )
        v24 = 1841;
      goto LABEL_106;
    case 0x100000:
      goto LABEL_25;
  }
LABEL_111:
  appended = RtlAppendUnicodeToString(&Destination, L"\r\n\t\t\t\t");
  Length = Destination.Length;
  DaclSecurityDescriptor = appended;
  v48 = v61 + 1 + (Destination.Length >> 1);
  v49 = (char *)ExAllocatePool2(256LL, 2LL * v48, 1799447891LL);
  if ( v49 )
  {
    *v70 = 1;
    if ( v19 )
      memmove(v49, Src[1], v19);
    if ( (_WORD)Length )
      memmove(&v49[v19], Destination.Buffer, Length);
    v50 = v71;
    *(_WORD *)&v49[2 * v48 - 2] = 0;
    v51 = 2 * v48;
    *(_WORD *)(v50 + 2) = v51;
    *(_QWORD *)(v50 + 8) = v49;
    *(_WORD *)v50 = v51 - 2;
  }
  else
  {
    DaclSecurityDescriptor = -1073741801;
  }
  v39 = Dacl;
  v37 = 0LL;
LABEL_119:
  if ( v39 )
    ExFreePoolWithTag(v39, 0);
  if ( v37 )
    goto LABEL_122;
LABEL_123:
  if ( v63.Buffer )
    ExFreePoolWithTag(v63.Buffer, 0);
  if ( Src[1] )
    ExFreePoolWithTag(Src[1], 0);
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0);
  return (unsigned int)DaclSecurityDescriptor;
}
