/*
 * XREFs of RtlpGetMUIRedirectedFilePathInternal @ 0x180063C14
 * Callers:
 *     RtlpGetMUIRedirectedFilePath @ 0x180063B0C (RtlpGetMUIRedirectedFilePath.c)
 * Callees:
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     RtlAppendUnicodeStringToString @ 0x180049410 (RtlAppendUnicodeStringToString.c)
 *     RtlAppendUnicodeToString @ 0x18004F4E0 (RtlAppendUnicodeToString.c)
 *     RtlDoesFileExists_UEx @ 0x180063E54 (RtlDoesFileExists_UEx.c)
 *     memmove @ 0x1800AAB40 (memmove.c)
 */

__int64 __fastcall RtlpGetMUIRedirectedFilePathInternal(
        const void **a1,
        _WORD *a2,
        _WORD *a3,
        _DWORD *a4,
        char a5,
        void *a6)
{
  __int64 v10; // r12
  unsigned __int64 v11; // rax
  void *Heap; // rax
  int appended; // ebx
  __int64 v14; // rdx
  unsigned __int64 v15; // r14
  unsigned int v17; // [rsp+20h] [rbp-48h]
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
  while ( a2[v11] );
  if ( v11 >= 0x104 )
  {
    appended = -1073741306;
LABEL_35:
    v17 = appended;
    goto LABEL_29;
  }
  Heap = (void *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 520LL);
  v10 = (__int64)Heap;
  if ( !Heap )
  {
    appended = -1073741801;
    goto LABEL_35;
  }
  Src[0] = (void *)34078720;
  Src[1] = Heap;
  appended = RtlAppendUnicodeToString((unsigned __int16 *)Src, a2);
  v17 = appended;
  if ( appended < 0 )
    goto LABEL_29;
  appended = RtlAppendUnicodeToString((unsigned __int16 *)Src, L"\\");
  v17 = appended;
  if ( appended < 0 )
    goto LABEL_29;
  appended = RtlAppendUnicodeStringToString((unsigned __int16 *)Src, a1);
  v17 = appended;
  if ( appended < 0 )
    goto LABEL_29;
  appended = RtlAppendUnicodeToString((unsigned __int16 *)Src, L"\\");
  v17 = appended;
  if ( appended < 0 )
    goto LABEL_29;
  appended = RtlAppendUnicodeToString((unsigned __int16 *)Src, a3);
  v17 = appended;
  if ( appended < 0 )
    goto LABEL_29;
  if ( a5 )
  {
    appended = RtlAppendUnicodeToString((unsigned __int16 *)Src, L".mui");
    v17 = appended;
    if ( appended < 0 )
      goto LABEL_29;
  }
  LOBYTE(v14) = 1;
  if ( !(unsigned __int8)RtlDoesFileExists_UEx(Src[1], v14) )
  {
    appended = -1073741809;
LABEL_20:
    v17 = appended;
    goto LABEL_29;
  }
  if ( a6 )
  {
    v15 = (unsigned __int64)LOWORD(Src[0]) >> 1;
    if ( (unsigned int)*a4 >= v15 + 1 )
    {
      memmove(a6, Src[1], LOWORD(Src[0]));
      *((_WORD *)a6 + v15) = 0;
      goto LABEL_29;
    }
    *a4 = v15 + 1;
    appended = -1073741789;
    goto LABEL_20;
  }
  if ( a4 )
    *a4 = (LOWORD(Src[0]) >> 1) + 1;
LABEL_29:
  if ( v10 )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v10);
    return v17;
  }
  return (unsigned int)appended;
}
