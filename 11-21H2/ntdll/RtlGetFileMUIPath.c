/*
 * XREFs of RtlGetFileMUIPath @ 0x1800634A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     RtlpCreateProcessRegistryInfo @ 0x1800430C0 (RtlpCreateProcessRegistryInfo.c)
 *     RtlGetFullPathName_UEx @ 0x180043A20 (RtlGetFullPathName_UEx.c)
 *     RtlIntegerToUnicode @ 0x180048590 (RtlIntegerToUnicode.c)
 *     RtlGetThreadPreferredUILanguages @ 0x1800494B0 (RtlGetThreadPreferredUILanguages.c)
 *     RtlLCIDToCultureName @ 0x18004B690 (RtlLCIDToCultureName.c)
 *     RtlCultureNameToLCID @ 0x18004BE40 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x18004C040 (RtlInitUnicodeString.c)
 *     RtlpGetMUIRedirectedFilePath @ 0x180063B0C (RtlpGetMUIRedirectedFilePath.c)
 *     LdrpCalcAllocSize @ 0x180063E8C (LdrpCalcAllocSize.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x180063EB0 (RtlpFileIsWin32WithRCManifest.c)
 *     RtlUnicodeStringToInteger @ 0x18007C230 (RtlUnicodeStringToInteger.c)
 *     RtlpMUIEnumerateFolder @ 0x18008F6D4 (RtlpMUIEnumerateFolder.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1800956E0 (_wcsicmp.c)
 *     memmove @ 0x1800AAB40 (memmove.c)
 *     RtlpMUIGetAllInstalledLang @ 0x1800FBC4C (RtlpMUIGetAllInstalledLang.c)
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
  wchar_t *v7; // r10
  __int64 v9; // r13
  __int64 v10; // r14
  unsigned int v11; // eax
  __int64 v12; // rdi
  unsigned int v13; // ebx
  unsigned __int64 v14; // r14
  int FullPathName_UEx; // eax
  unsigned __int64 v16; // rax
  int v18; // esi
  int v19; // ecx
  int v20; // r15d
  __int64 v21; // rax
  _DWORD *v22; // rax
  int v23; // eax
  unsigned __int64 v24; // r15
  unsigned __int64 v25; // rdi
  unsigned __int64 v26; // rcx
  const WCHAR *i; // rbx
  int MUIRedirectedFilePath; // eax
  WCHAR *v29; // rsi
  int *v30; // r12
  unsigned __int64 Length; // rbx
  bool v32; // al
  __int64 v33; // rdx
  char IsWin32WithRCManifest; // al
  __int64 v35; // rax
  char v36; // si
  int v37; // eax
  PCWSTR v38; // rcx
  char v39; // al
  wchar_t *v40; // rbx
  unsigned __int64 v41; // rcx
  int v42; // eax
  int v43; // eax
  __int64 v44; // r9
  unsigned __int64 v45; // r8
  unsigned __int16 v46; // dx
  unsigned __int64 v47; // rax
  __int64 v48; // rax
  _DWORD *v49; // rax
  int ThreadPreferredUILanguages; // eax
  __int64 v51; // rax
  unsigned __int64 v52; // rcx
  const WCHAR *j; // rbx
  __int64 v54; // rax
  int v55; // eax
  __int64 v56; // rax
  char v57; // al
  int v58; // eax
  wchar_t *v59; // rax
  char v60; // al
  __int64 v61; // rax
  __int64 v62; // rax
  char v63; // bl
  int v64; // [rsp+20h] [rbp-E0h]
  int v65; // [rsp+28h] [rbp-D8h]
  char v66; // [rsp+40h] [rbp-C0h]
  bool v67; // [rsp+41h] [rbp-BFh]
  unsigned int v68; // [rsp+44h] [rbp-BCh] BYREF
  _DWORD *v69; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v70; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v71; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v72; // [rsp+5Ch] [rbp-A4h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  __int64 Heap; // [rsp+70h] [rbp-90h]
  __int64 v75; // [rsp+78h] [rbp-88h] BYREF
  wchar_t *String1; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v77; // [rsp+88h] [rbp-78h] BYREF
  __int64 v78; // [rsp+90h] [rbp-70h]
  __int64 v79; // [rsp+98h] [rbp-68h]
  int *v80; // [rsp+A0h] [rbp-60h]
  wchar_t *v81; // [rsp+A8h] [rbp-58h]
  __int64 v82; // [rsp+B0h] [rbp-50h]
  PCWSTR SourceString; // [rsp+B8h] [rbp-48h]
  UNICODE_STRING v84; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int64 *v85; // [rsp+D0h] [rbp-30h]
  UNICODE_STRING v86; // [rsp+E0h] [rbp-20h] BYREF
  WCHAR v87[4]; // [rsp+F0h] [rbp-10h] BYREF
  __int16 v88; // [rsp+F8h] [rbp-8h]

  v7 = 0LL;
  v78 = a5;
  v9 = 0LL;
  v79 = a6;
  v10 = 0LL;
  v80 = a4;
  *(_QWORD *)v87 = 0LL;
  v88 = 0;
  v11 = a1 >> 10;
  LOBYTE(v11) = (a1 & 0x400) != 0;
  SourceString = a3;
  v12 = a1;
  v85 = a7;
  v70 = 0LL;
  v82 = 0LL;
  v69 = 0LL;
  String1 = 0LL;
  v71 = 0;
  v81 = 0LL;
  Heap = 0LL;
  v77 = 0LL;
  v75 = 0LL;
  v72 = v11;
  DestinationString = 0LL;
  if ( !a2 || !a7 )
  {
    v13 = -1073741811;
    goto LABEL_86;
  }
  v13 = RtlpCreateProcessRegistryInfo(&v75);
  if ( (v13 & 0x80000000) == 0 )
  {
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 522LL);
    v14 = Heap;
    if ( !Heap )
      return (unsigned int)-1073741801;
    FullPathName_UEx = RtlGetFullPathName_UEx(a2, 0x208u, Heap, (__int64)&v77, &v68);
    v7 = 0LL;
    if ( FullPathName_UEx < 0 || v68 - 1 > 0x206 || !v77 || v77 <= v14 || v77 >= v14 + 520 )
      goto LABEL_12;
    *(_WORD *)(v77 - 2) = 0;
    v16 = *a7;
    if ( *a7 )
    {
      v24 = v70;
      v44 = *a7 & 0xF;
      v45 = 0LL;
      v82 = v44;
      v46 = v16 & 0xF;
      v47 = v16 >> 4;
      while ( 1 )
      {
        v25 = v47 & 0xFFF;
        v46 ^= v47 & 0xFFF;
        if ( v45 )
        {
          if ( v45 == 2 )
          {
            v24 = v47 & 0xFFF;
            v70 = v24;
          }
          else if ( v45 == 3 )
          {
            v47 >>= 12;
LABEL_102:
            if ( (((unsigned __int16)v47 ^ v46) & 0xFFF) != 0 )
            {
              v13 = -1073741776;
              goto LABEL_13;
            }
            if ( v25 > v24 )
            {
              v13 = -2147483642;
              goto LABEL_13;
            }
            if ( (v9 & 0x20) != 0 )
              v18 = 2;
            else
              v18 = (unsigned __int64)(v9 & 0x40 | 0x20) >> 5;
            v10 = (__int64)v69;
            v67 = (v9 & 4) == 0;
            v66 = v44 & 1;
LABEL_27:
            if ( v18 == 1 )
            {
              if ( v10 )
                goto LABEL_29;
              v68 = 0;
              RtlGetThreadPreferredUILanguages(48, (int *)&v71, 0LL, &v68);
              v7 = 0LL;
              if ( v68 )
              {
                v48 = LdrpCalcAllocSize(v68, 2LL);
                if ( !v48 )
                {
                  v13 = -1073741675;
                  goto LABEL_88;
                }
                v49 = (_DWORD *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v48);
                v7 = 0LL;
                v69 = v49;
                v10 = (__int64)v49;
                if ( v49 )
                {
                  ThreadPreferredUILanguages = RtlGetThreadPreferredUILanguages(48, (int *)&v71, v49, &v68);
                  v7 = 0LL;
                  if ( ThreadPreferredUILanguages >= 0 )
                  {
                    v24 = v70;
                    goto LABEL_29;
                  }
                }
                v24 = v70;
              }
              v25 = v24;
LABEL_29:
              v26 = 0LL;
              for ( i = (const WCHAR *)v10; v26 < v25; i += v51 + 1 )
              {
                if ( !i )
                  break;
                if ( !*i )
                  break;
                ++v26;
                v51 = -1LL;
                do
                  ++v51;
                while ( i[v51] );
              }
              if ( v25 < v24 )
              {
                do
                {
                  if ( !*i )
                    break;
                  RtlInitUnicodeString(&DestinationString, i);
                  LOBYTE(v65) = v72;
                  LOBYTE(v64) = v66;
                  v84 = DestinationString;
                  MUIRedirectedFilePath = RtlpGetMUIRedirectedFilePath(&v84, Heap, v77, v79, v64, v65, v78);
                  v7 = 0LL;
                  if ( MUIRedirectedFilePath >= 0 )
                    break;
                  if ( MUIRedirectedFilePath == -1073741789 )
                    break;
                  ++v25;
                  v35 = -1LL;
                  do
                    ++v35;
                  while ( i[v35] );
                  i += v35 + 1;
                }
                while ( v25 < v24 );
                goto LABEL_33;
              }
              goto LABEL_58;
            }
            if ( v18 != 2 )
            {
              if ( !String1 )
              {
                v57 = RtlpMUIEnumerateFolder(Heap, &v84, &String1);
                v7 = 0LL;
                if ( !v57 )
                  v25 = v24;
              }
              v36 = 0;
              if ( v25 || (v37 = *v80) == 0 || !SourceString )
              {
LABEL_71:
                v40 = String1;
                v41 = 0LL;
                if ( v25 )
                {
                  do
                  {
                    if ( !v40 )
                      break;
                    if ( !*v40 )
                      break;
                    ++v41;
                    v61 = -1LL;
                    do
                      ++v61;
                    while ( v40[v61] );
                    v40 += v61 + 1;
                  }
                  while ( v41 < v25 );
                  v10 = (__int64)v69;
                }
                if ( v25 < v24 )
                {
                  while ( 1 )
                  {
                    if ( v36 && (v42 = wcsicmp(v40, DestinationString.Buffer), v7 = 0LL, v42) )
                    {
                      v62 = -1LL;
                      do
                        ++v62;
                      while ( v40[v62] );
                    }
                    else
                    {
                      RtlInitUnicodeString(&DestinationString, v40);
                      LOBYTE(v65) = v72;
                      LOBYTE(v64) = v66;
                      v86 = DestinationString;
                      v43 = RtlpGetMUIRedirectedFilePath(&v86, Heap, v77, v79, v64, v65, v78);
                      v7 = 0LL;
                      if ( (int)(v43 + 0x80000000) < 0 || v43 == -1073741789 )
                        goto LABEL_33;
                      v62 = -1LL;
                      do
                        ++v62;
                      while ( v40[v62] );
                    }
                    ++v25;
                    v40 += v62 + 1;
                    if ( v25 >= v24 )
                      goto LABEL_33;
                  }
                }
                goto LABEL_58;
              }
              v38 = SourceString;
              while ( *v38 )
              {
                ++v38;
                if ( !--v37 )
                  goto LABEL_71;
              }
              if ( v67 )
              {
                RtlInitUnicodeString(&DestinationString, SourceString);
                v39 = RtlCultureNameToLCID(&DestinationString.Length, &v75);
                v7 = 0LL;
                if ( v39 )
                  v36 = 1;
                goto LABEL_71;
              }
              RtlInitUnicodeString(&v86, SourceString);
              v58 = RtlUnicodeStringToInteger(&v86, 16LL, &v75);
              v7 = 0LL;
              if ( v58 < 0 )
                goto LABEL_71;
              v59 = (wchar_t *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 170LL);
              v7 = 0LL;
              v81 = v59;
              if ( v59 )
              {
                DestinationString.Buffer = v59;
                *(_DWORD *)&DestinationString.Length = 11141120;
                v60 = RtlLCIDToCultureName(v75, (__int64)&DestinationString);
                v24 = v70;
                v7 = 0LL;
                v10 = (__int64)v69;
                if ( v60 )
                  v36 = 1;
                goto LABEL_71;
              }
              v10 = (__int64)v69;
LABEL_86:
              if ( v10 )
              {
                RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v69);
                v7 = 0LL;
              }
LABEL_88:
              if ( String1 != v7 )
                RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)String1);
              v14 = Heap;
              if ( !Heap )
                return v13;
LABEL_13:
              RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v14);
              return v13;
            }
            if ( !v10 )
            {
              RtlpMUIGetAllInstalledLang(v75, &v69, &v84);
              v10 = (__int64)v69;
              v7 = 0LL;
            }
            v52 = 0LL;
            for ( j = (const WCHAR *)v10; v52 < v25; j += v54 + 1 )
            {
              if ( !j )
                break;
              if ( !*j )
                break;
              ++v52;
              v54 = -1LL;
              do
                ++v54;
              while ( j[v54] );
            }
            if ( v25 < v24 )
            {
              do
              {
                if ( !j )
                  break;
                if ( !*j )
                  break;
                RtlInitUnicodeString(&DestinationString, j);
                LOBYTE(v65) = v72;
                LOBYTE(v64) = v66;
                v84 = DestinationString;
                v55 = RtlpGetMUIRedirectedFilePath(&v84, Heap, v77, v79, v64, v65, v78);
                v7 = 0LL;
                if ( v55 >= 0 )
                  break;
                if ( v55 == -1073741789 )
                  break;
                ++v25;
                v56 = -1LL;
                do
                  ++v56;
                while ( j[v56] );
                j += v56 + 1;
              }
              while ( v25 < v24 );
LABEL_33:
              if ( v25 < v24 )
              {
                v29 = (WCHAR *)SourceString;
                v30 = v80;
                if ( SourceString || v80 )
                {
                  if ( v67 )
                    goto LABEL_36;
                  v63 = RtlCultureNameToLCID(&DestinationString.Length, &v72);
                  if ( v63 )
                    v63 = (int)RtlIntegerToUnicode((unsigned __int16)v72, 0x10u, -4, (char *)v87) >= 0;
                  RtlInitUnicodeString(&DestinationString, v87);
                  v7 = 0LL;
                  if ( v63 )
                  {
LABEL_36:
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
                v32 = v78 && (v29 || !v30);
                v33 = (__int64)v81;
                v13 = 0;
                if ( v32 )
LABEL_44:
                  *v85 = v82 | (((v25 + 1) ^ v24 ^ v82 ^ v9) << 52) ^ 0xCB7000000CB70000uLL | (16
                                                                                             * (v9 | ((v24 | ((v25 + 1) << 12)) << 24) | 0xCB7000));
                if ( v33 )
                {
                  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v33);
                  v10 = (__int64)v69;
                  v7 = 0LL;
                }
                goto LABEL_86;
              }
            }
LABEL_58:
            v33 = (__int64)v81;
            v13 = -2147483642;
            goto LABEL_44;
          }
        }
        else
        {
          v9 = v47 & 0xFFF;
        }
        v47 >>= 12;
        ++v45;
        v25 = 0LL;
        if ( v45 >= 4 )
          goto LABEL_102;
      }
    }
    if ( (v12 & 0xC) == 0xC
      || (v12 & 0x30) == 0x30
      || (v12 & 0x50) == 0x50
      || (v12 & 0x60) == 0x60
      || (v12 & 0x70) == 112
      || (v12 & 0x300) == 768 )
    {
LABEL_12:
      v13 = -1073741811;
      goto LABEL_13;
    }
    v9 = v12;
    if ( (v12 & 0x20) != 0 )
      v18 = 2;
    else
      v18 = (unsigned __int64)(v12 & 0x40 | 0x20) >> 5;
    v67 = (v12 & 4) == 0;
    if ( (v12 & 0x200) == 0
      && ((v12 & 0x100) != 0
       || (IsWin32WithRCManifest = RtlpFileIsWin32WithRCManifest(a2), v7 = 0LL, IsWin32WithRCManifest)) )
    {
      v66 = 1;
      v82 = 1LL;
    }
    else
    {
      v66 = 0;
    }
    v19 = v18 - 1;
    if ( v18 == 1 )
    {
      v20 = v19 + 48;
      v68 = 0;
      RtlGetThreadPreferredUILanguages(v19 + 48, (int *)&v71, 0LL, &v68);
      if ( !v68 )
        goto LABEL_13;
      v21 = LdrpCalcAllocSize(v68, 2LL);
      if ( !v21 )
      {
        v13 = -1073741675;
        goto LABEL_13;
      }
      v22 = (_DWORD *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, v20 - 40, v21);
      v69 = v22;
      v10 = (__int64)v22;
      if ( !v22 )
      {
        v14 = Heap;
        v13 = -1073741801;
        goto LABEL_13;
      }
      v23 = RtlGetThreadPreferredUILanguages(v20, (int *)&v71, v22, &v68);
      v7 = 0LL;
      if ( v23 < 0 )
      {
        v13 = v23;
        goto LABEL_86;
      }
      v24 = v71;
      v70 = v71;
    }
    else
    {
      if ( v18 == 2 )
      {
        RtlpMUIGetAllInstalledLang(v75, &v69, &v70);
      }
      else
      {
        if ( v18 != 3 )
        {
          v24 = v70;
          v10 = (__int64)v69;
          goto LABEL_26;
        }
        RtlpMUIEnumerateFolder(v14, &v70, &String1);
      }
      v24 = v70;
      v7 = 0LL;
      v10 = (__int64)v69;
    }
LABEL_26:
    v25 = 0LL;
    goto LABEL_27;
  }
  return v13;
}
