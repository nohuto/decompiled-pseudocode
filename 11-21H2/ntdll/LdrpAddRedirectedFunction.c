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
  const CHAR *v3; // rdx
  int inited; // edi
  int v6; // eax
  unsigned __int64 Root; // rbx
  int v8; // esi
  int v9; // eax
  unsigned __int64 v10; // rax
  char *Heap; // rax
  _RTL_BALANCED_NODE *v12; // r14
  size_t v13; // r8
  unsigned __int64 v14; // rbx
  BOOLEAN v15; // r8
  int v16; // esi
  unsigned __int64 v17; // rax
  int v19; // [rsp+28h] [rbp-E0h] BYREF
  __int128 v20; // [rsp+30h] [rbp-D8h] BYREF
  _UNICODE_STRING v21; // [rsp+40h] [rbp-C8h] BYREF
  _STRING DestinationString; // [rsp+50h] [rbp-B8h] BYREF
  _UNICODE_STRING v23; // [rsp+68h] [rbp-A0h] BYREF
  _WORD v24[128]; // [rsp+78h] [rbp-90h] BYREF
  int v25; // [rsp+178h] [rbp+70h] BYREF
  _WORD *v26; // [rsp+180h] [rbp+78h]
  _WORD v27[128]; // [rsp+188h] [rbp+80h] BYREF

  *(_DWORD *)&v23.Length = 0x1000000;
  v23.Buffer = v24;
  v3 = *(const CHAR **)a1;
  v26 = v27;
  v25 = 0x1000000;
  v24[0] = 0;
  v27[0] = 0;
  inited = RtlInitAnsiStringEx(&DestinationString, v3);
  if ( inited >= 0 )
  {
    inited = LdrpAppendAnsiStringToFilenameBuffer((unsigned __int16 *)&v25, &DestinationString);
    if ( inited >= 0 )
    {
      v19 = 0;
      inited = LdrpPreprocessDllName((unsigned __int16 *)&v25, &v23.Length, 0LL, &v19);
      if ( inited >= 0 )
      {
        v21 = v23;
        if ( (v19 & 0x20) == 0 )
          LdrpGetBaseNameFromFullName(&v21.Length, (__int64)&v21);
        *((_QWORD *)&v20 + 1) = *(_QWORD *)(a1 + 8);
        LODWORD(v20) = LdrpHashAsciizString();
        v6 = LdrpHashUnicodeString(&v21);
        Root = (unsigned __int64)LdrpRedirectionTree.Root;
        DWORD1(v20) = v6;
        if ( (*(_BYTE *)&LdrpRedirectionTree.0 & 1) != 0 )
        {
          if ( LdrpRedirectionTree.Root )
            Root = (unsigned __int64)&LdrpRedirectionTree ^ (unsigned __int64)LdrpRedirectionTree.Root;
          else
            Root = 0LL;
        }
        v8 = *(_BYTE *)&LdrpRedirectionTree.0 & 1;
        if ( !Root )
          goto LABEL_23;
        do
        {
          v9 = LdrpCompareRedirectedFunction(&v20, Root);
          if ( v9 >= 0 )
          {
            if ( v9 <= 0 )
              break;
            v10 = *(_QWORD *)(Root + 8);
          }
          else
          {
            v10 = *(_QWORD *)Root;
          }
          if ( v8 && v10 )
            Root ^= v10;
          else
            Root = v10;
        }
        while ( Root );
        if ( Root && !LdrpRedirectionByFunctionCalloutFunc )
        {
          inited = -1073739509;
        }
        else
        {
LABEL_23:
          Heap = (char *)RtlAllocateHeap(LdrpHeap, NtdllBaseTag + 0x40000, v21.Length + 74LL);
          v12 = (_RTL_BALANCED_NODE *)Heap;
          if ( Heap )
          {
            *(_OWORD *)(Heap + 24) = v20;
            *(_UNICODE_STRING *)(Heap + 40) = v21;
            v13 = *((unsigned __int16 *)Heap + 20);
            *((_QWORD *)Heap + 7) = *(_QWORD *)(a1 + 16);
            *((_DWORD *)Heap + 16) = a2;
            *((_QWORD *)Heap + 6) = Heap + 72;
            v13 += 2LL;
            *((_WORD *)Heap + 21) = v13;
            memmove(Heap + 72, v21.Buffer, v13);
            v14 = (unsigned __int64)LdrpRedirectionTree.Root;
            if ( (*(_BYTE *)&LdrpRedirectionTree.0 & 1) != 0 && LdrpRedirectionTree.Root )
              v14 = (unsigned __int64)&LdrpRedirectionTree ^ (unsigned __int64)LdrpRedirectionTree.Root;
            v15 = 0;
            v16 = *(_BYTE *)&LdrpRedirectionTree.0 & 1;
            if ( v14 )
            {
              while ( 1 )
              {
                if ( (int)LdrpCompareRedirectedFunction(&v12[1], v14) < 0 )
                {
                  v17 = *(_QWORD *)v14;
                  if ( v16 )
                  {
                    if ( !v17 )
                      goto LABEL_40;
                    v17 ^= v14;
                  }
                  if ( !v17 )
                  {
LABEL_40:
                    v15 = 0;
                    break;
                  }
                }
                else
                {
                  v17 = *(_QWORD *)(v14 + 8);
                  if ( v16 )
                  {
                    if ( !v17 )
                      goto LABEL_34;
                    v17 ^= v14;
                  }
                  if ( !v17 )
                  {
LABEL_34:
                    v15 = 1;
                    break;
                  }
                }
                v14 = v17;
              }
            }
            RtlRbInsertNodeEx(&LdrpRedirectionTree, (PRTL_BALANCED_NODE)v14, v15, v12);
          }
          else
          {
            inited = -1073741801;
          }
        }
      }
    }
  }
  if ( v24 != v23.Buffer )
    NtdllpFreeStringRoutine(v23.Buffer);
  v23.Buffer = v24;
  *(_DWORD *)&v23.Length = 0x1000000;
  v24[0] = 0;
  if ( v27 != v26 )
    NtdllpFreeStringRoutine(v26);
  return (unsigned int)inited;
}
