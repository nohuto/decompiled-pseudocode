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
  int OverlayFilePathUsingChecksum; // eax
  int MUIRedirectedFilePathInternal; // edi
  WCHAR *Heap; // rax
  unsigned int Size[4]; // [rsp+30h] [rbp-D0h] BYREF
  UNICODE_STRING Source; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE BaseAddress[528]; // [rsp+50h] [rbp-B0h] BYREF

  memset_thunk_772440563353939046(BaseAddress, 0, 0x208uLL);
  Size[0] = 520;
  v10 = (WCHAR *)BaseAddress;
  if ( !a6 )
    goto LABEL_4;
  OverlayFilePathUsingChecksum = GetOverlayFilePathUsingChecksum(a1->Buffer, (__int64)Size, BaseAddress);
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
    OverlayFilePathUsingChecksum = GetOverlayFilePathUsingChecksum(a1->Buffer, (__int64)Size, Heap);
  }
  if ( OverlayFilePathUsingChecksum < 0 )
    goto LABEL_4;
  Source = *a1;
  MUIRedirectedFilePathInternal = RtlpGetMUIRedirectedFilePathInternal(&Source, v10, a3, a5, a7);
  if ( MUIRedirectedFilePathInternal < 0 )
    goto LABEL_4;
LABEL_5:
  if ( v10 != (WCHAR *)BaseAddress && v10 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
  return (unsigned int)MUIRedirectedFilePathInternal;
}
