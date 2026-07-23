/*
 * XREFs of AVrfpParseVerifierDllsString @ 0x1800E67D0
 * Callers:
 *     AVrfInitializeVerifier @ 0x1800E5114 (AVrfInitializeVerifier.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1800187C0 (RtlInitUnicodeString.c)
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 *     _wcsicmp @ 0x180090EB0 (_wcsicmp.c)
 *     memset$thunk$772440563353939046 @ 0x180132010 (memset$thunk$772440563353939046.c)
 */

__int64 AVrfpParseVerifierDllsString()
{
  void *ProcessHeap; // rbp
  PVOID Heap; // rax
  __int64 v2; // rbx
  __int64 *v3; // rax
  bool v4; // zf
  wchar_t *v5; // rbx
  wchar_t v6; // ax
  const WCHAR *v7; // rsi
  PVOID v8; // rax
  __int64 v9; // rdi
  __int64 *v10; // rax

  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  Heap = RtlAllocateHeap(ProcessHeap, 0, 0x48uLL);
  v2 = (__int64)Heap;
  if ( !Heap )
    return 3221225495LL;
  memset_thunk_772440563353939046(Heap, 0, 0x48uLL);
  *(UNICODE_STRING *)(v2 + 16) = VerifierDllString;
  v3 = (__int64 *)qword_180186678;
  if ( *(__int64 **)qword_180186678 != &AVrfpVerifierProvidersList )
LABEL_19:
    __fastfail(3u);
  v4 = UseWOW64 == 0;
  *(_QWORD *)v2 = &AVrfpVerifierProvidersList;
  *(_QWORD *)(v2 + 8) = v3;
  *v3 = v2;
  qword_180186678 = v2;
  if ( v4 )
  {
    v5 = &AVrfpVerifierDllsString;
    if ( AVrfpVerifierDllsString )
    {
      do
      {
        while ( 1 )
        {
          v6 = *v5;
          if ( *v5 != 32 && v6 != 9 )
            break;
          ++v5;
        }
        v7 = v5;
        if ( !v6 )
          break;
        do
        {
          if ( v6 == 32 )
            break;
          if ( v6 == 9 )
            break;
          v6 = *++v5;
        }
        while ( *v5 );
        if ( v7 == v5 )
          break;
        *v5 = 0;
        if ( wcsicmp(v7, L"verifier.dll") )
        {
          v8 = RtlAllocateHeap(ProcessHeap, 0, 0x48uLL);
          v9 = (__int64)v8;
          if ( !v8 )
            return 3221225495LL;
          memset_thunk_772440563353939046(v8, 0, 0x48uLL);
          RtlInitUnicodeString((PUNICODE_STRING)(v9 + 16), v7);
          v10 = (__int64 *)qword_180186678;
          if ( *(__int64 **)qword_180186678 != &AVrfpVerifierProvidersList )
            goto LABEL_19;
          *(_QWORD *)v9 = &AVrfpVerifierProvidersList;
          *(_QWORD *)(v9 + 8) = v10;
          *v10 = v9;
          qword_180186678 = v9;
        }
        ++v5;
      }
      while ( *v5 );
    }
  }
  return 0LL;
}
