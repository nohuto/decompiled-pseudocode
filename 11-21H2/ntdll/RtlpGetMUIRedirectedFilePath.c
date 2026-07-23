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

__int64 __fastcall RtlpGetMUIRedirectedFilePath(
        UNICODE_STRING *a1,
        const WCHAR *a2,
        const WCHAR *a3,
        __int64 a4,
        char a5,
        char a6,
        void *a7)
{
  WCHAR *v10; // rbx
  NTSTATUS OverlayFilePathUsingChecksum; // eax
  int MUIRedirectedFilePathInternal; // edi
  WCHAR *Heap; // rax
  unsigned int Size[4]; // [rsp+30h] [rbp-D0h] BYREF
  UNICODE_STRING Source; // [rsp+40h] [rbp-C0h] BYREF
  _WORD BaseAddress[264]; // [rsp+50h] [rbp-B0h] BYREF

  memset(BaseAddress, 0, 0x208uLL);
  Size[0] = 520;
  v10 = BaseAddress;
  if ( !a6 )
    goto LABEL_4;
  OverlayFilePathUsingChecksum = GetOverlayFilePathUsingChecksum(a1->Buffer, a2, 0LL, 0LL, Size, BaseAddress);
  if ( OverlayFilePathUsingChecksum == -1073741789 )
  {
    Heap = (WCHAR *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, Size[0]);
    v10 = Heap;
    if ( !Heap )
    {
LABEL_4:
      Source = *a1;
      MUIRedirectedFilePathInternal = RtlpGetMUIRedirectedFilePathInternal(&Source, a2, a3, a5, a7);
      goto LABEL_5;
    }
    OverlayFilePathUsingChecksum = GetOverlayFilePathUsingChecksum(a1->Buffer, a2, 0LL, 0LL, Size, Heap);
  }
  if ( OverlayFilePathUsingChecksum < 0 )
    goto LABEL_4;
  Source = *a1;
  MUIRedirectedFilePathInternal = RtlpGetMUIRedirectedFilePathInternal(&Source, v10, a3, a5, a7);
  if ( MUIRedirectedFilePathInternal < 0 )
    goto LABEL_4;
LABEL_5:
  if ( v10 != BaseAddress && v10 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
  return (unsigned int)MUIRedirectedFilePathInternal;
}
