/*
 * XREFs of GetLongPathNameW @ 0x140013BCC
 * Callers:
 *     GetFinalPathNameByHandleW @ 0x140012C8C (GetFinalPathNameByHandleW.c)
 * Callees:
 *     __security_check_cookie @ 0x140010ED0 (__security_check_cookie.c)
 *     InternalGetFileAttributesW @ 0x140013184 (InternalGetFileAttributesW.c)
 *     SetErrorMode @ 0x1400138C0 (SetErrorMode.c)
 *     FindLFNorSFN_U @ 0x140013AB4 (FindLFNorSFN_U.c)
 *     SkipPathTypeIndicator_U @ 0x14001406C (SkipPathTypeIndicator_U.c)
 *     FindClose @ 0x14001435C (FindClose.c)
 *     InternalFindFirstFileExW @ 0x140014490 (InternalFindFirstFileExW.c)
 *     memmove_0 @ 0x140014B43 (memmove_0.c)
 */

__int64 __fastcall GetLongPathNameW(WCHAR *Name, WCHAR *a2, unsigned int a3)
{
  __int64 v3; // r12
  unsigned int v6; // edi
  WCHAR *v7; // r15
  int v9; // esi
  __int16 *v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rax
  SIZE_T v13; // rdi
  WCHAR *Heap; // rax
  __int16 *v15; // r15
  char *v16; // r13
  __int64 v17; // r8
  _BYTE *v18; // r12
  __int64 v19; // rax
  unsigned int v20; // edi
  size_t v21; // rbx
  __int16 v22; // bx
  void *FirstFile; // rax
  __int64 v24; // rax
  size_t v25; // rbx
  __int64 v26; // rsi
  int v27; // [rsp+30h] [rbp-2D8h]
  int v28; // [rsp+34h] [rbp-2D4h]
  WCHAR *Src; // [rsp+38h] [rbp-2D0h]
  void *v30; // [rsp+40h] [rbp-2C8h] BYREF
  unsigned int v31; // [rsp+48h] [rbp-2C0h]
  PVOID BaseAddress; // [rsp+50h] [rbp-2B8h]
  char *v33; // [rsp+58h] [rbp-2B0h] BYREF
  WCHAR *v34; // [rsp+60h] [rbp-2A8h]
  void *v35; // [rsp+68h] [rbp-2A0h]
  _WORD v36[274]; // [rsp+9Ch] [rbp-26Ch] BYREF

  v3 = a3;
  v31 = a3;
  v6 = 0;
  v27 = 0;
  v30 = 0LL;
  v33 = 0LL;
  BaseAddress = 0LL;
  v7 = 0LL;
  Src = 0LL;
  if ( !Name )
  {
    RtlSetLastWin32Error(0x57u);
    return 0LL;
  }
  v9 = SetErrorMode(32769);
  v28 = v9;
  if ( (unsigned int)InternalGetFileAttributesW(Name) != -1 )
  {
    v10 = (__int16 *)SkipPathTypeIndicator_U(Name);
    if ( !v10 || !*v10 || !(unsigned int)FindLFNorSFN_U(v10, (__int16 **)&v30, (__int16 **)&v33) )
    {
      v26 = -1LL;
      do
        ++v26;
      while ( Name[v26] );
      v6 = v26;
      v27 = v26;
      if ( (unsigned int)v3 > (unsigned int)v26 && a2 )
      {
        if ( a2 != Name )
          memmove_0(a2, Name, 2LL * (unsigned int)(v26 + 1));
      }
      else
      {
        v6 = v26 + 1;
        v27 = v26 + 1;
      }
      goto LABEL_53;
    }
    v11 = -1LL;
    v12 = -1LL;
    do
      ++v12;
    while ( Name[v12] );
    v13 = 2LL * (unsigned int)(v12 + 1);
    Heap = (WCHAR *)RtlAllocateHeap(
                      *(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL),
                      KernelBaseGlobalData + 0x200000,
                      v13);
    v7 = Heap;
    Src = Heap;
    if ( !Heap )
    {
      RtlSetLastWin32Error(8u);
      v6 = 0;
LABEL_53:
      v9 = v28;
      goto LABEL_54;
    }
    memmove_0(Heap, Name, v13);
    v30 = &v7[((_BYTE *)v30 - (_BYTE *)Name) >> 1];
    v15 = (__int16 *)&v7[(v33 - (char *)Name) >> 1];
    v33 = (char *)v15;
    v16 = (char *)a2;
    v34 = a2;
    if ( !(_DWORD)v3 || !a2 )
      goto LABEL_21;
    if ( a2 >= Name )
    {
      if ( a2 < &Name[v13 / 2] )
      {
        v17 = v3;
LABEL_18:
        BaseAddress = RtlAllocateHeap(
                        *(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL),
                        KernelBaseGlobalData + 0x200000,
                        2 * v17);
        if ( !BaseAddress )
        {
          RtlSetLastWin32Error(8u);
          v6 = 0;
LABEL_52:
          v7 = Src;
          goto LABEL_53;
        }
        v16 = (char *)BaseAddress;
        v34 = (WCHAR *)BaseAddress;
        v15 = (__int16 *)v33;
LABEL_21:
        v18 = Src;
        v35 = Src;
        v6 = 0;
        while ( 1 )
        {
          v19 = ((_BYTE *)v30 - v18) >> 1;
          v20 = v19 + v6;
          if ( (_DWORD)v19 && v31 > v20 )
          {
            v21 = 2LL * (unsigned int)v19;
            memmove_0(v16, v18, v21);
            v16 += v21;
            v34 = (WCHAR *)v16;
          }
          v22 = *v15;
          *v15 = 0;
          FirstFile = (void *)InternalFindFirstFileExW(Src);
          *v15 = v22;
          if ( FirstFile == (void *)-1LL )
            break;
          FindClose(FirstFile);
          v24 = -1LL;
          do
            ++v24;
          while ( v36[v24] );
          if ( (_DWORD)v24 )
            v30 = v36;
          else
            v24 = ((char *)v15 - (_BYTE *)v30) >> 1;
          v6 = v24 + v20;
          v27 = v6;
          if ( v31 > v6 && a2 )
          {
            v25 = 2LL * (unsigned int)v24;
            memmove_0(v16, v30, v25);
            v16 += v25;
            v34 = (WCHAR *)v16;
          }
          v18 = v15;
          v35 = v15;
          if ( !*v15 || !(unsigned int)FindLFNorSFN_U(v15, (__int16 **)&v30, (__int16 **)&v33) )
            goto LABEL_38;
          v15 = (__int16 *)v33;
        }
        v6 = 0;
        v27 = 0;
LABEL_38:
        if ( v6 )
        {
          do
            ++v11;
          while ( *(_WORD *)&v18[2 * v11] );
          v6 += v11;
          v27 = v6;
          if ( v31 > v6 && a2 )
          {
            memmove_0(v16, v18, 2LL * (unsigned int)(v11 + 1));
            if ( BaseAddress )
              memmove_0(a2, BaseAddress, 2LL * (v6 + 1));
          }
          else
          {
            v27 = ++v6;
          }
        }
        goto LABEL_52;
      }
      if ( a2 >= Name )
        goto LABEL_21;
    }
    v17 = v3;
    if ( &a2[v3] < Name )
      goto LABEL_21;
    goto LABEL_18;
  }
LABEL_54:
  if ( v7 )
  {
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, Src);
    v6 = v27;
  }
  if ( BaseAddress )
  {
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, BaseAddress);
    v6 = v27;
  }
  SetErrorMode(v9);
  return v6;
}
