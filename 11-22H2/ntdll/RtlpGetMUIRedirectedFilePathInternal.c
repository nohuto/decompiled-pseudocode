/*
 * XREFs of RtlpGetMUIRedirectedFilePathInternal @ 0x18000AFE8
 * Callers:
 *     RtlpGetMUIRedirectedFilePath @ 0x180009C6C (RtlpGetMUIRedirectedFilePath.c)
 * Callees:
 *     RtlDoesFileExists_UEx @ 0x18000973C (RtlDoesFileExists_UEx.c)
 *     RtlAppendUnicodeToString @ 0x18000B5F0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x180019500 (RtlAppendUnicodeStringToString.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     memmove @ 0x1800A5980 (memmove.c)
 */

__int64 __fastcall RtlpGetMUIRedirectedFilePathInternal(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4,
        char a5,
        void *a6)
{
  void *v10; // r12
  unsigned __int64 v11; // rax
  void *Heap; // rax
  int appended; // ebx
  unsigned __int64 v14; // r14
  unsigned int v16; // [rsp+20h] [rbp-48h]
  void *Src[2]; // [rsp+28h] [rbp-40h] BYREF

  v10 = 0LL;
  if ( !a2 || !a3 )
  {
    appended = -1073741811;
    goto LABEL_35;
  }
  v11 = -1LL;
  do
    ++v11;
  while ( *(_WORD *)(a2 + 2 * v11) );
  if ( v11 >= 0x104 )
  {
    appended = -1073741306;
LABEL_35:
    v16 = appended;
    goto LABEL_29;
  }
  Heap = (void *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8LL, 520LL);
  v10 = Heap;
  if ( !Heap )
  {
    appended = -1073741801;
    goto LABEL_35;
  }
  Src[0] = (void *)34078720;
  Src[1] = Heap;
  appended = RtlAppendUnicodeToString(Src, a2);
  v16 = appended;
  if ( appended < 0 )
    goto LABEL_29;
  appended = RtlAppendUnicodeToString(Src, L"\\");
  v16 = appended;
  if ( appended < 0 )
    goto LABEL_29;
  appended = RtlAppendUnicodeStringToString(Src, a1);
  v16 = appended;
  if ( appended < 0 )
    goto LABEL_29;
  appended = RtlAppendUnicodeToString(Src, L"\\");
  v16 = appended;
  if ( appended < 0 )
    goto LABEL_29;
  appended = RtlAppendUnicodeToString(Src, a3);
  v16 = appended;
  if ( appended < 0 )
    goto LABEL_29;
  if ( a5 )
  {
    appended = RtlAppendUnicodeToString(Src, L".mui");
    v16 = appended;
    if ( appended < 0 )
      goto LABEL_29;
  }
  if ( !RtlDoesFileExists_UEx((__int64)Src[1], 1) )
  {
    appended = -1073741809;
LABEL_20:
    v16 = appended;
    goto LABEL_29;
  }
  if ( a6 )
  {
    v14 = (unsigned __int64)LOWORD(Src[0]) >> 1;
    if ( (unsigned int)*a4 >= v14 + 1 )
    {
      memmove(a6, Src[1], LOWORD(Src[0]));
      *((_WORD *)a6 + v14) = 0;
      goto LABEL_29;
    }
    *a4 = v14 + 1;
    appended = -1073741789;
    goto LABEL_20;
  }
  if ( a4 )
    *a4 = (LOWORD(Src[0]) >> 1) + 1;
LABEL_29:
  if ( v10 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v10);
    return v16;
  }
  return (unsigned int)appended;
}
