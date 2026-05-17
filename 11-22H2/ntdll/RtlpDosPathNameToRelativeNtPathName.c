/*
 * XREFs of RtlpDosPathNameToRelativeNtPathName @ 0x18001BDC0
 * Callers:
 *     RtlpDosPathNameToRelativeNtPathName_U @ 0x18001AB7C (RtlpDosPathNameToRelativeNtPathName_U.c)
 *     RtlDosPathNameToRelativeNtPathName_U_WithStatus @ 0x18001BD40 (RtlDosPathNameToRelativeNtPathName_U_WithStatus.c)
 *     RtlDoesFileExists_UstrEx @ 0x18001E298 (RtlDoesFileExists_UstrEx.c)
 *     LdrpGetNtPathFromDosPath @ 0x18002B2F4 (LdrpGetNtPathFromDosPath.c)
 *     LdrAddDllDirectory @ 0x180078440 (LdrAddDllDirectory.c)
 *     RtlDosPathNameToRelativeNtPathName @ 0x18007BAE8 (RtlDosPathNameToRelativeNtPathName.c)
 * Callees:
 *     RtlPrefixUnicodeString @ 0x180014AC0 (RtlPrefixUnicodeString.c)
 *     RtlpWin32NtNameToNtPathName @ 0x180019394 (RtlpWin32NtNameToNtPathName.c)
 *     RtlGetFullPathName_Ustr @ 0x18001C2A0 (RtlGetFullPathName_Ustr.c)
 *     RtlDetermineDosPathNameType_Ustr @ 0x18001D110 (RtlDetermineDosPathNameType_Ustr.c)
 *     RtlLeaveCriticalSection @ 0x1800271F0 (RtlLeaveCriticalSection.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     RtlpReferenceCurrentDirectory @ 0x18007B7A8 (RtlpReferenceCurrentDirectory.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     NtClose @ 0x18009EFD0 (NtClose.c)
 *     memmove @ 0x1800A5980 (memmove.c)
 */

__int64 __fastcall RtlpDosPathNameToRelativeNtPathName(
        int a1,
        __m128i *a2,
        unsigned __int16 *a3,
        unsigned __int16 *a4,
        unsigned __int16 **a5,
        unsigned __int64 *a6,
        __int64 a7)
{
  unsigned __int16 *v9; // rbx
  bool v10; // cc
  _WORD *v11; // rax
  unsigned int v12; // edi
  unsigned int v13; // ebp
  unsigned int v14; // r11d
  _BYTE *v15; // r14
  int v16; // eax
  unsigned __int16 v17; // r11
  int v18; // eax
  const wchar_t *v19; // r14
  unsigned int v20; // esi
  __int64 v21; // rax
  int v22; // esi
  size_t v23; // rbp
  void *v24; // r15
  unsigned __int16 v25; // si
  unsigned int v26; // eax
  __int64 v27; // r9
  __int16 v28; // bp
  __int64 v29; // r8
  const void *v30; // rdx
  unsigned __int16 v31; // si
  unsigned __int64 v32; // rbp
  void *v33; // r15
  unsigned __int16 v34; // si
  unsigned int v35; // eax
  _BYTE *v36; // rsi
  unsigned __int64 v37; // rcx
  bool v38; // zf
  __int16 v40; // cx
  __int64 v41; // rax
  __int64 v42; // r15
  _WORD *v43; // rcx
  __int16 v44; // bp
  _BYTE v45[4]; // [rsp+30h] [rbp-2A8h] BYREF
  unsigned int FullPathName_Ustr; // [rsp+34h] [rbp-2A4h]
  int v47; // [rsp+38h] [rbp-2A0h]
  _BYTE *Heap; // [rsp+40h] [rbp-298h]
  int v49; // [rsp+48h] [rbp-290h]
  __int64 v50; // [rsp+50h] [rbp-288h]
  __m128i v51; // [rsp+58h] [rbp-280h] BYREF
  int v52; // [rsp+68h] [rbp-270h] BYREF
  unsigned __int16 **v53; // [rsp+70h] [rbp-268h]
  _BYTE v54[528]; // [rsp+80h] [rbp-258h] BYREF

  v9 = a3;
  v47 = a1;
  v10 = a2->m128i_i16[0] <= 8u;
  v53 = a5;
  if ( !v10 )
  {
    v11 = (_WORD *)a2->m128i_i64[1];
    if ( *v11 == 92 )
    {
      v40 = v11[1];
      if ( (v40 == 92 || v40 == 63) && v11[2] == 63 && v11[3] == 92 )
        return RtlpWin32NtNameToNtPathName(a2, a3, a4, a5, a6, a7);
      LOBYTE(a1) = v47;
    }
  }
  v12 = 0;
  if ( a6 )
    *a6 = 0LL;
  Heap = v54;
  v13 = 520;
  if ( (a1 & 1) == 0 )
  {
    FullPathName_Ustr = RtlGetFullPathName_Ustr(a2, 520LL, v54, a6, v45, &v52);
    v14 = FullPathName_Ustr;
    if ( FullPathName_Ustr )
    {
      v15 = v54;
      while ( !v45[0] )
      {
        if ( v14 <= v13 )
        {
          v51.m128i_i16[0] = v14;
          v51.m128i_i16[1] = v13;
          v51.m128i_i64[1] = (__int64)v15;
          v16 = RtlDetermineDosPathNameType_Ustr(&v51);
          goto LABEL_11;
        }
        if ( (v47 & 4) == 0 && ((v47 & 8) != 0 || (NtCurrentPeb()->BitField & 0x80u) == 0) )
          goto LABEL_63;
        Heap = (_BYTE *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0LL, v14);
        v15 = Heap;
        if ( !Heap )
          return 3221225495LL;
        v13 = FullPathName_Ustr;
        FullPathName_Ustr = RtlGetFullPathName_Ustr(a2, FullPathName_Ustr, Heap, a6, v45, &v52);
        v14 = FullPathName_Ustr;
        if ( !FullPathName_Ustr )
          break;
      }
    }
    v12 = -1073741773;
    goto LABEL_58;
  }
  v51 = *a2;
  v16 = RtlDetermineDosPathNameType_Ustr(&v51);
  v17 = v51.m128i_i16[0];
  FullPathName_Ustr = v51.m128i_u16[0];
  v52 = v16;
LABEL_11:
  if ( v16 == 2 )
    goto LABEL_12;
  if ( v16 != 1 )
  {
    if ( v16 == 6 )
    {
      v50 = 8LL;
      LOWORD(v49) = 8;
      v18 = 2;
      goto LABEL_13;
    }
LABEL_12:
    v50 = 0LL;
    v18 = 10;
    LOWORD(v49) = 0;
LABEL_13:
    v19 = L"\b\n";
    goto LABEL_14;
  }
  v19 = (const wchar_t *)&RtlpDosDevicesUncPrefix;
  v50 = 4LL;
  v49 = 4;
  v18 = 14;
LABEL_14:
  v20 = v18 + v17;
  if ( v20 > 0xFFFE )
  {
LABEL_63:
    v36 = Heap;
    v12 = -1073741562;
    goto LABEL_33;
  }
  if ( v9 )
  {
    if ( v20 <= v9[1] )
    {
LABEL_19:
      v22 = *v19;
      if ( (_WORD)v22 )
      {
        if ( (unsigned int)*v9 + v22 <= v9[1] )
        {
          v23 = *v19;
          v24 = (void *)(*((_QWORD *)v9 + 1) + 2 * ((unsigned __int64)*v9 >> 1));
          memmove(v24, *((const void **)v19 + 1), v23);
          v25 = *v9 + v22;
          v26 = v9[1];
          *v9 = v25;
          if ( (unsigned int)v25 + 1 < v26 )
            *((_WORD *)v24 + (v23 >> 1)) = 0;
        }
      }
      v27 = v50;
      v28 = FullPathName_Ustr;
      v29 = *v9;
      v30 = (const void *)(v50 + v51.m128i_i64[1]);
      v31 = FullPathName_Ustr - v49;
      if ( (_WORD)FullPathName_Ustr != (_WORD)v49 && (unsigned int)v29 + v31 <= v9[1] )
      {
        v32 = v31;
        v33 = (void *)(*((_QWORD *)v9 + 1) + 2 * ((unsigned __int64)*v9 >> 1));
        memmove(v33, v30, v31);
        v34 = *v9 + v31;
        v35 = v9[1];
        v27 = v50;
        *v9 = v34;
        if ( (unsigned int)v34 + 1 < v35 )
          *((_WORD *)v33 + (v32 >> 1)) = 0;
        v28 = FullPathName_Ustr;
      }
      if ( v53 )
        *v53 = v9;
      v36 = Heap;
      v37 = (unsigned __int64)*v9 >> 1;
      *(_WORD *)(*((_QWORD *)v9 + 1) + 2 * v37) = 0;
      if ( a6 )
      {
        v37 = *a6;
        if ( *a6 )
          *a6 = *((_QWORD *)v9 + 1) + v37 + *v19 - v27 - (_QWORD)v36;
      }
      if ( a7 )
      {
        v38 = v52 == 5;
        *(_DWORD *)a7 = 0;
        *(_QWORD *)(a7 + 8) = 0LL;
        *(_QWORD *)(a7 + 16) = 0LL;
        *(_QWORD *)(a7 + 24) = 0LL;
        if ( v38 )
        {
          LOBYTE(v37) = 1;
          v41 = RtlpReferenceCurrentDirectory(v37, v30, v29);
          v42 = v41;
          if ( v41 )
          {
            if ( !RtlPrefixUnicodeString((unsigned __int16 *)(v41 + 24), (__int64)&v51, 1) )
              goto LABEL_70;
            v43 = (_WORD *)(*((_QWORD *)v9 + 1) + *v19 + *(unsigned __int16 *)(v42 + 24) - v50);
            *(_QWORD *)(a7 + 8) = v43;
            v44 = v28 - *(_WORD *)(v42 + 24);
            *(_WORD *)a7 = v44;
            if ( *v43 == 92 )
            {
              v44 -= 2;
              *(_WORD *)a7 = v44;
              *(_QWORD *)(a7 + 8) = v43 + 1;
            }
            v38 = (v47 & 2) == 0;
            *(_WORD *)(a7 + 2) = v44;
            if ( v38 )
            {
LABEL_70:
              if ( _InterlockedExchangeAdd((volatile signed __int32 *)v42, 0xFFFFFFFF) == 1 )
              {
                NtClose(*(HANDLE *)(v42 + 8));
                RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v42);
              }
            }
            else
            {
              *(_QWORD *)(a7 + 24) = v42;
              *(_QWORD *)(a7 + 16) = *(_QWORD *)(v42 + 8);
            }
          }
          else
          {
            RtlLeaveCriticalSection(&FastPebLock);
          }
        }
      }
      goto LABEL_33;
    }
    if ( !a4 )
    {
      v12 = -1073741562;
      goto LABEL_58;
    }
  }
  else if ( !a4 )
  {
    v12 = -1073741811;
    goto LABEL_58;
  }
  v21 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0LL, v20);
  *((_QWORD *)a4 + 1) = v21;
  if ( v21 )
  {
    v9 = a4;
    FullPathName_Ustr = v51.m128i_u16[0];
    *a4 = 0;
    a4[1] = v20;
    goto LABEL_19;
  }
  v12 = -1073741801;
LABEL_58:
  v36 = Heap;
LABEL_33:
  if ( v36 != v54 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v36);
  return v12;
}
