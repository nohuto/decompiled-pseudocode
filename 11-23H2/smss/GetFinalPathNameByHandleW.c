/*
 * XREFs of GetFinalPathNameByHandleW @ 0x140012C8C
 * Callers:
 *     SmpPathCanBeTrustedIsNotARedirection @ 0x140011C6C (SmpPathCanBeTrustedIsNotARedirection.c)
 * Callees:
 *     BasepGetFileNameInformation @ 0x1400125E0 (BasepGetFileNameInformation.c)
 *     BasepGetObjectNTName @ 0x1400126FC (BasepGetObjectNTName.c)
 *     BasepGetVolumeDosLetterNameFromNTName @ 0x140012818 (BasepGetVolumeDosLetterNameFromNTName.c)
 *     StringCchCatW @ 0x140013064 (StringCchCatW.c)
 *     StringCchCopyW @ 0x1400130F0 (StringCchCopyW.c)
 *     GetLongPathNameW @ 0x140013BCC (GetLongPathNameW.c)
 *     memmove_0 @ 0x140014B43 (memmove_0.c)
 */

__int64 __fastcall GetFinalPathNameByHandleW(HANDLE FileHandle, STRSAFE_LPWSTR pszDest, unsigned int a3)
{
  __int64 v3; // rbx
  unsigned int v4; // r14d
  unsigned int v7; // edi
  ULONG v8; // ecx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  const wchar_t *v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned __int64 v17; // r14
  PVOID Heap; // rax
  wchar_t *v19; // rsi
  STRSAFE_LPCWSTR v20; // r12
  unsigned int v21; // r14d
  unsigned int LongPathNameW; // eax
  __int64 v23; // rax
  __int64 v24; // r8
  const wchar_t *v25; // r11
  __int64 v26; // rax
  unsigned int v27; // eax
  const wchar_t *v28; // r8
  STRSAFE_LPCWSTR pszSrc; // [rsp+20h] [rbp-20h] BYREF
  PVOID BaseAddress; // [rsp+28h] [rbp-18h] BYREF
  PVOID Src; // [rsp+30h] [rbp-10h] BYREF
  STRSAFE_LPCWSTR v33; // [rsp+80h] [rbp+40h] BYREF
  size_t cchDest; // [rsp+90h] [rbp+50h]

  LODWORD(cchDest) = a3;
  v3 = -1LL;
  pszSrc = 0LL;
  v4 = a3;
  v33 = 0LL;
  Src = 0LL;
  v7 = 0;
  if ( FileHandle == (HANDLE)-1LL )
  {
    RtlSetLastWin32Error(6u);
    return v7;
  }
  if ( (unsigned int)BasepGetObjectNTName(FileHandle, (const void ***)&Src)
    && (unsigned int)BasepGetFileNameInformation(FileHandle, FileNameInformation, &v33) )
  {
    if ( *v33 == 92 )
    {
      v9 = -1LL;
      do
        ++v9;
      while ( *((_WORD *)Src + v9) );
      v10 = -1LL;
      do
        ++v10;
      while ( v33[v10] );
      if ( v10 < v9 )
      {
        v11 = -1LL;
        do
          ++v11;
        while ( *((_WORD *)Src + v11) );
        v12 = -1LL;
        do
          ++v12;
        while ( v33[v12] );
        v13 = v11 - v12;
        v14 = (const wchar_t *)Src;
        *((_WORD *)Src + v13) = 0;
        if ( !(unsigned int)BasepGetVolumeDosLetterNameFromNTName(v14, &pszSrc) )
          goto LABEL_50;
        BaseAddress = 0LL;
        if ( (unsigned int)BasepGetFileNameInformation(FileHandle, FileNormalizedNameInformation, &BaseAddress) )
        {
          RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, (PVOID)v33);
        }
        else
        {
          if ( LODWORD(KeGetPcr()->NtTib.Self[1].Self) != 87
            && LODWORD(KeGetPcr()->NtTib.Self[1].Self) != 124
            && LODWORD(KeGetPcr()->NtTib.Self[1].Self) != 50 )
          {
            goto LABEL_50;
          }
          v15 = -1LL;
          do
            ++v15;
          while ( pszSrc[v15] );
          v16 = -1LL;
          do
            ++v16;
          while ( v33[v16] );
          v17 = 2 * (v4 + (_DWORD)v15 + (_DWORD)v16) + 2;
          Heap = RtlAllocateHeap(
                   *(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL),
                   KernelBaseGlobalData,
                   (unsigned int)v17);
          BaseAddress = Heap;
          v19 = (wchar_t *)Heap;
          if ( !Heap )
          {
            RtlSetLastWin32Error(8u);
            goto LABEL_50;
          }
          v20 = pszSrc;
          StringCchCopyW((STRSAFE_LPWSTR)Heap, v17 >> 1, pszSrc);
          StringCchCatW(v19, v17 >> 1, v33);
          v21 = (unsigned int)v17 >> 1;
          LongPathNameW = GetLongPathNameW(v19, v19);
          if ( !LongPathNameW )
          {
            RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, BaseAddress);
            goto LABEL_50;
          }
          if ( LongPathNameW >= v21 )
          {
            v7 = LongPathNameW + 1;
            RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, BaseAddress);
            v8 = 0;
            goto LABEL_7;
          }
          v23 = -1LL;
          do
            ++v23;
          while ( v20[v23] );
          v24 = -1LL;
          do
            ++v24;
          while ( v19[v24] );
          memmove_0(v19, &v19[(unsigned int)v23], 2 * (1LL - (unsigned int)v23 + v24));
          RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, (PVOID)v33);
          v4 = cchDest;
        }
        v25 = (const wchar_t *)BaseAddress;
        v33 = (STRSAFE_LPCWSTR)BaseAddress;
        if ( pszSrc )
        {
          v26 = -1LL;
          do
            ++v26;
          while ( pszSrc[v26] );
        }
        else
        {
          LODWORD(v26) = 0;
        }
        do
          ++v3;
        while ( *((_WORD *)BaseAddress + v3) );
        v7 = v26 + v3;
        v27 = v26 + v3 + 1;
        if ( v27 <= v4 )
        {
          v28 = pszSrc;
          *pszDest = 0;
          if ( v28 )
            StringCchCopyW(pszDest, v4, v28);
          StringCchCatW(pszDest, v4, v25);
          goto LABEL_50;
        }
        v7 = v27;
        v8 = 8;
        goto LABEL_7;
      }
      v8 = 161;
    }
    else
    {
      v8 = 5;
    }
LABEL_7:
    RtlSetLastWin32Error(v8);
  }
LABEL_50:
  if ( Src )
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, Src);
  if ( v33 )
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, (PVOID)v33);
  if ( pszSrc )
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, (PVOID)pszSrc);
  return v7;
}
