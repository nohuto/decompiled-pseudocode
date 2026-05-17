/*
 * XREFs of RtlpGetMUIRedirectedFilePath @ 0x180063B0C
 * Callers:
 *     RtlGetFileMUIPath @ 0x1800634A0 (RtlGetFileMUIPath.c)
 * Callees:
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     GetOverlayFilePathUsingChecksum @ 0x180050A04 (GetOverlayFilePathUsingChecksum.c)
 *     RtlpGetMUIRedirectedFilePathInternal @ 0x180063C14 (RtlpGetMUIRedirectedFilePathInternal.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     memset @ 0x1800AAE00 (memset.c)
 */

__int64 __fastcall RtlpGetMUIRedirectedFilePath(__int64 a1, _WORD *a2, int a3, int a4, char a5, char a6, void *a7)
{
  int *v11; // rbx
  int OverlayFilePathUsingChecksum; // eax
  int MUIRedirectedFilePathInternal; // edi
  int *Heap; // rax
  unsigned int v16[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v17[4]; // [rsp+40h] [rbp-C0h] BYREF
  _WORD v18[264]; // [rsp+50h] [rbp-B0h] BYREF

  memset(v18, 0, 0x208uLL);
  v16[0] = 520;
  v11 = (int *)v18;
  if ( !a6 )
    goto LABEL_4;
  OverlayFilePathUsingChecksum = GetOverlayFilePathUsingChecksum(*(_QWORD *)(a1 + 8), a2, 0LL, 0LL, v16, v18);
  if ( OverlayFilePathUsingChecksum == -1073741789 )
  {
    Heap = (int *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v16[0]);
    v11 = Heap;
    if ( !Heap )
    {
LABEL_4:
      *(_OWORD *)v17 = *(_OWORD *)a1;
      MUIRedirectedFilePathInternal = RtlpGetMUIRedirectedFilePathInternal((int)v17, (int)a2, a3, a4, a5, a7);
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
  if ( v11 != (int *)v18 && v11 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v11);
  return (unsigned int)MUIRedirectedFilePathInternal;
}
