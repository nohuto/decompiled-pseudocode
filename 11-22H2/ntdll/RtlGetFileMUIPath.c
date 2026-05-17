/*
 * XREFs of RtlGetFileMUIPath @ 0x180009780
 * Callers:
 *     <none>
 * Callees:
 *     LdrpCalcAllocSize @ 0x1800044A8 (LdrpCalcAllocSize.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x180007FE4 (RtlpFileIsWin32WithRCManifest.c)
 *     RtlpGetMUIRedirectedFilePath @ 0x180009C6C (RtlpGetMUIRedirectedFilePath.c)
 *     RtlGetThreadPreferredUILanguages @ 0x180011D50 (RtlGetThreadPreferredUILanguages.c)
 *     RtlLCIDToCultureName @ 0x180015CC0 (RtlLCIDToCultureName.c)
 *     RtlCultureNameToLCID @ 0x180016750 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x1800189D0 (RtlInitUnicodeString.c)
 *     RtlGetFullPathName_UEx @ 0x1800195A0 (RtlGetFullPathName_UEx.c)
 *     RtlIntegerToUnicode @ 0x18001B170 (RtlIntegerToUnicode.c)
 *     RtlpCreateProcessRegistryInfo @ 0x18001F370 (RtlpCreateProcessRegistryInfo.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     RtlUnicodeStringToInteger @ 0x180076E90 (RtlUnicodeStringToInteger.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1800906B0 (_wcsicmp.c)
 *     memmove @ 0x1800A5980 (memmove.c)
 *     RtlpMUIEnumerateFolder @ 0x1800FB648 (RtlpMUIEnumerateFolder.c)
 *     RtlpMUIGetAllInstalledLang @ 0x1800FB9A4 (RtlpMUIGetAllInstalledLang.c)
 */

__int64 __fastcall RtlGetFileMUIPath(
        unsigned int a1,
        __int64 a2,
        const WCHAR *a3,
        int *a4,
        __int64 a5,
        __int64 a6,
        unsigned __int64 *a7)
{
  wchar_t *v7; // r11
  unsigned __int64 v9; // rsi
  __int64 v10; // r13
  const WCHAR *v11; // r14
  unsigned int v12; // eax
  __int64 v13; // rdi
  unsigned int v14; // ebx
  unsigned __int64 v15; // r14
  int FullPathName_UEx; // eax
  unsigned __int64 v17; // rax
  int v19; // edi
  int v20; // ecx
  unsigned int v21; // r15d
  __int64 v22; // rax
  __int64 v23; // rax
  int ThreadPreferredUILanguages; // eax
  unsigned __int64 v25; // r15
  unsigned __int64 v26; // rcx
  const WCHAR *i; // rbx
  int MUIRedirectedFilePath; // eax
  WCHAR *v29; // rdi
  int *v30; // r12
  unsigned __int64 Length; // rbx
  char IsWin32WithRCManifest; // al
  __int64 v33; // rax
  __int64 v34; // r10
  __int64 v35; // rcx
  unsigned __int64 v36; // r9
  unsigned __int64 v37; // rax
  __int64 v38; // r8
  __int64 v39; // rax
  __int64 v40; // rax
  int v41; // eax
  __int64 v42; // rax
  unsigned __int64 v43; // rcx
  const WCHAR *j; // rbx
  __int64 v45; // rax
  int v46; // eax
  __int64 v47; // rax
  char v48; // al
  char v49; // di
  int v50; // ecx
  PCWSTR v51; // rax
  int v52; // eax
  wchar_t *v53; // rax
  char v54; // al
  char v55; // al
  wchar_t *v56; // rbx
  unsigned __int64 v57; // rcx
  __int64 v58; // rax
  int v59; // eax
  __int64 v60; // rax
  int v61; // eax
  char v62; // bl
  int v63; // [rsp+20h] [rbp-E0h]
  int v64; // [rsp+28h] [rbp-D8h]
  char v65; // [rsp+40h] [rbp-C0h]
  bool v66; // [rsp+41h] [rbp-BFh]
  unsigned int v67; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v68; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v69; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v70; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v72; // [rsp+70h] [rbp-90h] BYREF
  __int64 Heap; // [rsp+78h] [rbp-88h]
  __int64 v74; // [rsp+80h] [rbp-80h] BYREF
  wchar_t *String1; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v76; // [rsp+90h] [rbp-70h] BYREF
  __int64 v77; // [rsp+98h] [rbp-68h]
  wchar_t *v78; // [rsp+A0h] [rbp-60h]
  __int64 v79; // [rsp+A8h] [rbp-58h]
  int *v80; // [rsp+B0h] [rbp-50h]
  __int64 v81; // [rsp+B8h] [rbp-48h]
  PCWSTR SourceString; // [rsp+C0h] [rbp-40h]
  UNICODE_STRING v83; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int64 *v84; // [rsp+E0h] [rbp-20h]
  UNICODE_STRING v85; // [rsp+F0h] [rbp-10h] BYREF
  WCHAR v86[4]; // [rsp+100h] [rbp+0h] BYREF
  __int16 v87; // [rsp+108h] [rbp+8h]

  v7 = 0LL;
  v77 = a5;
  v9 = 0LL;
  v79 = a6;
  v10 = 0LL;
  v80 = a4;
  *(_QWORD *)v86 = 0LL;
  v11 = 0LL;
  v87 = 0;
  v12 = a1 >> 10;
  LOBYTE(v12) = (a1 & 0x400) != 0;
  SourceString = a3;
  v13 = a1;
  v84 = a7;
  v69 = 0LL;
  v81 = 0LL;
  v68 = 0LL;
  String1 = 0LL;
  v72 = 0;
  v78 = 0LL;
  Heap = 0LL;
  v76 = 0LL;
  v74 = 0LL;
  v70 = v12;
  DestinationString = 0LL;
  if ( !a2 || !a7 )
  {
    v14 = -1073741811;
    goto LABEL_61;
  }
  v14 = RtlpCreateProcessRegistryInfo(&v74);
  if ( (v14 & 0x80000000) == 0 )
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8LL, 522LL);
    v15 = Heap;
    if ( !Heap )
      return (unsigned int)-1073741801;
    FullPathName_UEx = RtlGetFullPathName_UEx(a2, 520, Heap, (unsigned int)&v76, (__int64)&v67);
    v7 = 0LL;
    if ( FullPathName_UEx < 0 || v67 - 1 > 0x206 || !v76 || v76 <= v15 || v76 >= v15 + 520 )
      goto LABEL_12;
    *(_WORD *)(v76 - 2) = 0;
    v17 = *a7;
    if ( !*a7 )
    {
      if ( (v13 & 0xC) != 0xC
        && (v13 & 0x30) != 0x30
        && (v13 & 0x50) != 0x50
        && (v13 & 0x60) != 0x60
        && (v13 & 0x70) != 112
        && (v13 & 0x300) != 768 )
      {
        v10 = v13;
        if ( (v13 & 0x20) != 0 )
          v19 = 2;
        else
          v19 = (unsigned __int64)(v13 & 0x40 | 0x20) >> 5;
        v66 = (v10 & 4) == 0;
        if ( (v10 & 0x200) == 0
          && ((v10 & 0x100) != 0
           || (IsWin32WithRCManifest = RtlpFileIsWin32WithRCManifest(a2), v7 = 0LL, IsWin32WithRCManifest)) )
        {
          v65 = 1;
          v81 = 1LL;
        }
        else
        {
          v65 = 0;
        }
        v20 = v19 - 1;
        switch ( v19 )
        {
          case 1:
            v21 = v20 + 48;
            v67 = 0;
            RtlGetThreadPreferredUILanguages((unsigned int)(v20 + 48), &v72, 0LL, &v67);
            if ( !v67 )
              goto LABEL_13;
            v22 = LdrpCalcAllocSize(v67, 2uLL);
            if ( !v22 )
            {
              v14 = -1073741675;
              goto LABEL_13;
            }
            v23 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, v21 - 40, v22);
            v68 = v23;
            v11 = (const WCHAR *)v23;
            if ( !v23 )
            {
              v15 = Heap;
              v14 = -1073741801;
              goto LABEL_13;
            }
            ThreadPreferredUILanguages = RtlGetThreadPreferredUILanguages(v21, &v72, v23, &v67);
            v7 = 0LL;
            if ( ThreadPreferredUILanguages < 0 )
            {
              v14 = ThreadPreferredUILanguages;
              goto LABEL_61;
            }
            v25 = v72;
            v69 = v72;
LABEL_26:
            v9 = 0LL;
            goto LABEL_27;
          case 2:
            RtlpMUIGetAllInstalledLang(v74, &v68, &v69);
            break;
          case 3:
            RtlpMUIEnumerateFolder(v15, &v69, &String1);
            break;
          default:
            v25 = v69;
            v11 = (const WCHAR *)v68;
            goto LABEL_26;
        }
        v25 = v69;
        v7 = 0LL;
        v11 = (const WCHAR *)v68;
        goto LABEL_26;
      }
LABEL_12:
      v14 = -1073741811;
      goto LABEL_13;
    }
    v25 = v69;
    v34 = *a7 & 0xF;
    v35 = 0LL;
    v81 = v34;
    v36 = v17 & 0xF;
    v37 = v17 >> 4;
    while ( 1 )
    {
      while ( 1 )
      {
        v38 = v37 & 0xFFF;
        v37 >>= 12;
        v36 ^= v38;
        if ( v35 )
          break;
        v10 = v38;
LABEL_77:
        ++v35;
      }
      if ( v35 == 2 )
      {
        v25 = v38;
        v69 = v38;
        goto LABEL_77;
      }
      if ( v35 == 3 )
      {
        v9 = v38;
LABEL_79:
        if ( ((v37 ^ v36) & 0xFFF) != 0 )
        {
          v14 = -1073741776;
          goto LABEL_13;
        }
        if ( v9 > v25 )
        {
          v14 = -2147483642;
          goto LABEL_13;
        }
        if ( (v10 & 0x20) != 0 )
          v19 = 2;
        else
          v19 = (unsigned __int64)(v10 & 0x40 | 0x20) >> 5;
        v11 = (const WCHAR *)v68;
        v66 = (v10 & 4) == 0;
        v65 = v34 & 1;
LABEL_27:
        if ( v19 == 1 )
        {
          if ( v11 )
            goto LABEL_29;
          v67 = 0;
          RtlGetThreadPreferredUILanguages(48LL, &v72, 0LL, &v67);
          v7 = 0LL;
          if ( v67 )
          {
            v39 = LdrpCalcAllocSize(v67, 2uLL);
            if ( !v39 )
            {
              v14 = -1073741675;
              goto LABEL_63;
            }
            v40 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8LL, v39);
            v7 = 0LL;
            v68 = v40;
            v11 = (const WCHAR *)v40;
            if ( v40 )
            {
              v41 = RtlGetThreadPreferredUILanguages(48LL, &v72, v40, &v67);
              v7 = 0LL;
              if ( v41 >= 0 )
              {
                v25 = v69;
                goto LABEL_29;
              }
            }
            v25 = v69;
          }
          v9 = v25;
LABEL_29:
          v26 = 0LL;
          for ( i = v11; v26 < v9; i += v42 + 1 )
          {
            if ( !i )
              break;
            if ( !*i )
              break;
            ++v26;
            v42 = -1LL;
            do
              ++v42;
            while ( i[v42] );
          }
          if ( v9 < v25 )
          {
            do
            {
              if ( !*i )
                break;
              RtlInitUnicodeString(&DestinationString, i);
              LOBYTE(v64) = v70;
              LOBYTE(v63) = v65;
              v83 = DestinationString;
              MUIRedirectedFilePath = RtlpGetMUIRedirectedFilePath(&v83, Heap, v76, v79, v63, v64, v77);
              v7 = 0LL;
              if ( MUIRedirectedFilePath >= 0 )
                break;
              if ( MUIRedirectedFilePath == -1073741789 )
                break;
              ++v9;
              v33 = -1LL;
              do
                ++v33;
              while ( i[v33] );
              i += v33 + 1;
            }
            while ( v9 < v25 );
            goto LABEL_33;
          }
          goto LABEL_56;
        }
        if ( v19 != 2 )
        {
          if ( !String1 )
          {
            v48 = RtlpMUIEnumerateFolder(Heap, &v83, &String1);
            v7 = 0LL;
            if ( !v48 )
              v9 = v25;
          }
          v49 = 0;
          if ( !v9 )
          {
            v50 = *v80;
            if ( *v80 )
            {
              if ( SourceString )
              {
                v51 = SourceString;
                while ( *v51 )
                {
                  ++v51;
                  if ( !--v50 )
                    goto LABEL_146;
                }
                if ( v66 )
                {
                  RtlInitUnicodeString(&DestinationString, SourceString);
                  v55 = RtlCultureNameToLCID(&DestinationString, &v74);
                  v7 = 0LL;
                  if ( v55 )
                    v49 = 1;
                }
                else
                {
                  RtlInitUnicodeString(&v85, SourceString);
                  v52 = RtlUnicodeStringToInteger(&v85, 16LL, &v74);
                  v7 = 0LL;
                  if ( v52 >= 0 )
                  {
                    v53 = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8LL, 170LL);
                    v7 = 0LL;
                    v78 = v53;
                    if ( !v53 )
                    {
                      v11 = (const WCHAR *)v68;
                      goto LABEL_61;
                    }
                    DestinationString.Buffer = v53;
                    *(_DWORD *)&DestinationString.Length = 11141120;
                    v54 = RtlLCIDToCultureName((unsigned int)v74, &DestinationString);
                    v25 = v69;
                    v7 = 0LL;
                    v11 = (const WCHAR *)v68;
                    if ( v54 )
                      v49 = 1;
                  }
                }
              }
            }
          }
LABEL_146:
          v56 = String1;
          v57 = 0LL;
          if ( v9 )
          {
            do
            {
              if ( !v56 )
                break;
              if ( !*v56 )
                break;
              ++v57;
              v58 = -1LL;
              do
                ++v58;
              while ( v56[v58] );
              v56 += v58 + 1;
            }
            while ( v57 < v9 );
            v11 = (const WCHAR *)v68;
          }
          if ( v9 < v25 )
          {
            while ( 1 )
            {
              if ( v49 && (v59 = wcsicmp(v56, DestinationString.Buffer), v7 = 0LL, v59) )
              {
                v60 = -1LL;
                do
                  ++v60;
                while ( v56[v60] );
              }
              else
              {
                RtlInitUnicodeString(&DestinationString, v56);
                LOBYTE(v64) = v70;
                LOBYTE(v63) = v65;
                v85 = DestinationString;
                v61 = RtlpGetMUIRedirectedFilePath(&v85, Heap, v76, v79, v63, v64, v77);
                v7 = 0LL;
                if ( (int)(v61 + 0x80000000) < 0 || v61 == -1073741789 )
                  goto LABEL_33;
                v60 = -1LL;
                do
                  ++v60;
                while ( v56[v60] );
              }
              ++v9;
              v56 += v60 + 1;
              if ( v9 >= v25 )
                goto LABEL_33;
            }
          }
          goto LABEL_56;
        }
        if ( !v11 )
        {
          RtlpMUIGetAllInstalledLang(v74, &v68, &v83);
          v11 = (const WCHAR *)v68;
          v7 = 0LL;
        }
        v43 = 0LL;
        for ( j = v11; v43 < v9; j += v45 + 1 )
        {
          if ( !j )
            break;
          if ( !*j )
            break;
          ++v43;
          v45 = -1LL;
          do
            ++v45;
          while ( j[v45] );
        }
        if ( v9 >= v25 )
          goto LABEL_56;
        do
        {
          if ( !j )
            break;
          if ( !*j )
            break;
          RtlInitUnicodeString(&DestinationString, j);
          LOBYTE(v64) = v70;
          LOBYTE(v63) = v65;
          v83 = DestinationString;
          v46 = RtlpGetMUIRedirectedFilePath(&v83, Heap, v76, v79, v63, v64, v77);
          v7 = 0LL;
          if ( v46 >= 0 )
            break;
          if ( v46 == -1073741789 )
            break;
          ++v9;
          v47 = -1LL;
          do
            ++v47;
          while ( j[v47] );
          j += v47 + 1;
        }
        while ( v9 < v25 );
LABEL_33:
        if ( v9 >= v25 )
        {
LABEL_56:
          v14 = -2147483642;
        }
        else
        {
          v29 = (WCHAR *)SourceString;
          v30 = v80;
          if ( SourceString || v80 )
          {
            if ( v66 )
              goto LABEL_37;
            v62 = RtlCultureNameToLCID(&DestinationString, &v70);
            if ( v62 )
              v62 = (int)RtlIntegerToUnicode((unsigned __int16)v70, 16LL, 4294967292LL, v86) >= 0;
            RtlInitUnicodeString(&DestinationString, v86);
            v7 = 0LL;
            if ( v62 )
            {
LABEL_37:
              if ( v30 )
              {
                if ( v29 )
                {
                  if ( *v30 > (unsigned int)(DestinationString.Length >> 1) )
                  {
                    Length = DestinationString.Length;
                    memmove(v29, DestinationString.Buffer, DestinationString.Length);
                    v7 = 0LL;
                    v29[Length >> 1] = 0;
                  }
                }
                else
                {
                  *v30 = 85;
                }
              }
            }
          }
          if ( !v77 || !v29 && v30 )
          {
            v14 = 0;
            goto LABEL_169;
          }
          v14 = 0;
        }
        *v84 = v81 | (((v9 + 1) ^ v25 ^ v81 ^ v10) << 52) ^ 0xCB7000000CB70000uLL | (16
                                                                                   * (v10 | ((v25 | ((v9 + 1) << 12)) << 24) | 0xCB7000));
LABEL_169:
        if ( v78 )
        {
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v78);
          v11 = (const WCHAR *)v68;
          v7 = 0LL;
        }
LABEL_61:
        if ( v11 )
        {
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v68);
          v7 = 0LL;
        }
LABEL_63:
        if ( String1 != v7 )
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, String1);
        v15 = Heap;
        if ( !Heap )
          return v14;
LABEL_13:
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v15);
        return v14;
      }
      if ( (unsigned __int64)++v35 >= 4 )
        goto LABEL_79;
    }
  }
  return v14;
}
