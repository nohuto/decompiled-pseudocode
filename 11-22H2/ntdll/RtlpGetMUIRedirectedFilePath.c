/*
 * XREFs of RtlpGetMUIRedirectedFilePath @ 0x180009C6C
 * Callers:
 *     RtlGetFileMUIPath @ 0x180009780 (RtlGetFileMUIPath.c)
 * Callees:
 *     RtlpGetMUIRedirectedFilePathInternal @ 0x18000AFE8 (RtlpGetMUIRedirectedFilePathInternal.c)
 *     GetOverlayFilePathUsingChecksum @ 0x18000B228 (GetOverlayFilePathUsingChecksum.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180130010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpGetMUIRedirectedFilePath(__int64 a1, __int64 a2, int a3, int a4, char a5, char a6, void *a7)
{
  int *v11; // rbx
  int OverlayFilePathUsingChecksum; // eax
  int MUIRedirectedFilePathInternal; // edi
  __int64 Heap; // rax
  _DWORD v16[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v17[4]; // [rsp+40h] [rbp-C0h] BYREF
  int v18[132]; // [rsp+50h] [rbp-B0h] BYREF

  memset_thunk_772440563353939046(v18, 0, 0x208uLL);
  v16[0] = 520;
  v11 = v18;
  if ( !a6 )
    goto LABEL_4;
  OverlayFilePathUsingChecksum = GetOverlayFilePathUsingChecksum(*(_QWORD *)(a1 + 8), a2, 0LL, 0LL, v16, v18);
  if ( OverlayFilePathUsingChecksum == -1073741789 )
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8LL, v16[0]);
    v11 = (int *)Heap;
    if ( !Heap )
    {
LABEL_4:
      *(_OWORD *)v17 = *(_OWORD *)a1;
      MUIRedirectedFilePathInternal = RtlpGetMUIRedirectedFilePathInternal((int)v17, a2, a3, a4, a5, a7);
      goto LABEL_5;
    }
    OverlayFilePathUsingChecksum = GetOverlayFilePathUsingChecksum(*(_QWORD *)(a1 + 8), a2, 0LL, 0LL, v16, Heap);
  }
  if ( OverlayFilePathUsingChecksum < 0 )
    goto LABEL_4;
  *(_OWORD *)v17 = *(_OWORD *)a1;
  MUIRedirectedFilePathInternal = RtlpGetMUIRedirectedFilePathInternal((int)v17, (int)v11, a3, a4, a5, a7);
  if ( MUIRedirectedFilePathInternal < 0 )
    goto LABEL_4;
LABEL_5:
  if ( v11 != v18 && v11 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v11);
  return (unsigned int)MUIRedirectedFilePathInternal;
}
