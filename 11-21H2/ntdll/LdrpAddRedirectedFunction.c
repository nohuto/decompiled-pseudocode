/*
 * XREFs of LdrpAddRedirectedFunction @ 0x1800E0E90
 * Callers:
 *     LdrpBuildImportRedirection @ 0x1800E118C (LdrpBuildImportRedirection.c)
 * Callees:
 *     LdrpAppendAnsiStringToFilenameBuffer @ 0x18000DDE0 (LdrpAppendAnsiStringToFilenameBuffer.c)
 *     RtlRbInsertNodeEx @ 0x18001AD20 (RtlRbInsertNodeEx.c)
 *     NtdllpFreeStringRoutine @ 0x180025BF0 (NtdllpFreeStringRoutine.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     LdrpGetBaseNameFromFullName @ 0x180042D7C (LdrpGetBaseNameFromFullName.c)
 *     LdrpPreprocessDllName @ 0x18004494C (LdrpPreprocessDllName.c)
 *     LdrpHashUnicodeString @ 0x18004FB5C (LdrpHashUnicodeString.c)
 *     RtlInitAnsiStringEx @ 0x1800741E0 (RtlInitAnsiStringEx.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     memmove @ 0x1800AAB40 (memmove.c)
 *     LdrpCompareRedirectedFunction @ 0x1800E1420 (LdrpCompareRedirectedFunction.c)
 *     LdrpHashAsciizString @ 0x1800E1E68 (LdrpHashAsciizString.c)
 */

__int64 __fastcall LdrpAddRedirectedFunction(__int64 a1, int a2)
{
  const char *v3; // rdx
  int inited; // edi
  __int64 v6; // rdx
  int v7; // eax
  unsigned __int64 v8; // rbx
  int v9; // esi
  int v10; // eax
  unsigned __int64 v11; // rax
  __int64 Heap; // rax
  unsigned __int64 v13; // r14
  size_t v14; // r8
  __int64 v15; // rbx
  bool v16; // r8
  int v17; // esi
  __int64 v18; // rax
  int v20; // [rsp+28h] [rbp-E0h] BYREF
  __int128 v21; // [rsp+30h] [rbp-D8h] BYREF
  __int128 v22; // [rsp+40h] [rbp-C8h] BYREF
  STRING DestinationString; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v24; // [rsp+68h] [rbp-A0h] BYREF
  _WORD v25[128]; // [rsp+78h] [rbp-90h] BYREF
  int v26; // [rsp+178h] [rbp+70h] BYREF
  _WORD *v27; // [rsp+180h] [rbp+78h]
  _WORD v28[128]; // [rsp+188h] [rbp+80h] BYREF

  LODWORD(v24) = 0x1000000;
  *((_QWORD *)&v24 + 1) = v25;
  v3 = *(const char **)a1;
  v27 = v28;
  v26 = 0x1000000;
  v25[0] = 0;
  v28[0] = 0;
  inited = RtlInitAnsiStringEx(&DestinationString, v3);
  if ( inited >= 0 )
  {
    inited = LdrpAppendAnsiStringToFilenameBuffer((unsigned __int16 *)&v26, &DestinationString);
    if ( inited >= 0 )
    {
      v20 = 0;
      inited = LdrpPreprocessDllName((unsigned __int16 *)&v26, (unsigned __int16 *)&v24, 0LL, &v20);
      if ( inited >= 0 )
      {
        v22 = v24;
        if ( (v20 & 0x20) == 0 )
          LdrpGetBaseNameFromFullName((unsigned __int16 *)&v22, (__int64)&v22);
        *((_QWORD *)&v21 + 1) = *(_QWORD *)(a1 + 8);
        LODWORD(v21) = LdrpHashAsciizString();
        v7 = LdrpHashUnicodeString((__int64)&v22, v6);
        v8 = LdrpRedirectionTree;
        DWORD1(v21) = v7;
        if ( (qword_18017B090 & 1) != 0 )
        {
          if ( LdrpRedirectionTree )
            v8 = (unsigned __int64)&LdrpRedirectionTree ^ LdrpRedirectionTree;
          else
            v8 = 0LL;
        }
        v9 = qword_18017B090 & 1;
        if ( !v8 )
          goto LABEL_23;
        do
        {
          v10 = LdrpCompareRedirectedFunction(&v21, v8);
          if ( v10 >= 0 )
          {
            if ( v10 <= 0 )
              break;
            v11 = *(_QWORD *)(v8 + 8);
          }
          else
          {
            v11 = *(_QWORD *)v8;
          }
          if ( v9 && v11 )
            v8 ^= v11;
          else
            v8 = v11;
        }
        while ( v8 );
        if ( v8 && !LdrpRedirectionByFunctionCalloutFunc )
        {
          inited = -1073739509;
        }
        else
        {
LABEL_23:
          Heap = RtlAllocateHeap(LdrpHeap, NtdllBaseTag + 0x40000, (unsigned __int16)v22 + 74LL);
          v13 = Heap;
          if ( Heap )
          {
            *(_OWORD *)(Heap + 24) = v21;
            *(_OWORD *)(Heap + 40) = v22;
            v14 = *(unsigned __int16 *)(Heap + 40);
            *(_QWORD *)(Heap + 56) = *(_QWORD *)(a1 + 16);
            *(_DWORD *)(Heap + 64) = a2;
            *(_QWORD *)(Heap + 48) = Heap + 72;
            v14 += 2LL;
            *(_WORD *)(Heap + 42) = v14;
            memmove((void *)(Heap + 72), *((const void **)&v22 + 1), v14);
            v15 = LdrpRedirectionTree;
            if ( (qword_18017B090 & 1) != 0 && LdrpRedirectionTree )
              v15 = (unsigned __int64)&LdrpRedirectionTree ^ LdrpRedirectionTree;
            v16 = 0;
            v17 = qword_18017B090 & 1;
            if ( v15 )
            {
              while ( 1 )
              {
                if ( (int)LdrpCompareRedirectedFunction(v13 + 24, v15) < 0 )
                {
                  v18 = *(_QWORD *)v15;
                  if ( v17 )
                  {
                    if ( !v18 )
                      goto LABEL_40;
                    v18 ^= v15;
                  }
                  if ( !v18 )
                  {
LABEL_40:
                    v16 = 0;
                    break;
                  }
                }
                else
                {
                  v18 = *(_QWORD *)(v15 + 8);
                  if ( v17 )
                  {
                    if ( !v18 )
                      goto LABEL_34;
                    v18 ^= v15;
                  }
                  if ( !v18 )
                  {
LABEL_34:
                    v16 = 1;
                    break;
                  }
                }
                v15 = v18;
              }
            }
            RtlRbInsertNodeEx((unsigned __int64 *)&LdrpRedirectionTree, v15, v16, v13);
          }
          else
          {
            inited = -1073741801;
          }
        }
      }
    }
  }
  if ( v25 != *((_WORD **)&v24 + 1) )
    NtdllpFreeStringRoutine(*((__int64 *)&v24 + 1));
  *((_QWORD *)&v24 + 1) = v25;
  LODWORD(v24) = 0x1000000;
  v25[0] = 0;
  if ( v28 != v27 )
    NtdllpFreeStringRoutine((__int64)v27);
  return (unsigned int)inited;
}
