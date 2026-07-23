/*
 * XREFs of RtlpIdnToUnicodeWorker @ 0x18000E670
 * Callers:
 *     RtlIdnToUnicode @ 0x18000E5C0 (RtlIdnToUnicode.c)
 * Callees:
 *     punycode_decode @ 0x18000E7E8 (punycode_decode.c)
 *     RtlStringCchLengthW @ 0x180015F28 (RtlStringCchLengthW.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     memmove @ 0x1800A5980 (memmove.c)
 *     RtlIsNormalizedString @ 0x18010D5B0 (RtlIsNormalizedString.c)
 */

__int64 __fastcall RtlpIdnToUnicodeWorker(
        int a1,
        wchar_t *a2,
        int a3,
        void *a4,
        int *a5,
        void *Src,
        BOOLEAN Normalized)
{
  void *v7; // r15
  wchar_t *v8; // r11
  char v9; // di
  int *v10; // r14
  const WCHAR *v11; // r13
  wchar_t v12; // si
  __int64 result; // rax
  int v14; // ebx
  int v15; // ebx
  __int64 v16; // r12
  __int64 v17; // r8
  LONG v18; // ebx
  _BYTE *Heap; // rsi
  __int64 i; // rcx
  __int16 v21; // dx
  __int64 j; // rax
  __int64 v23; // [rsp+48h] [rbp-8h] BYREF
  int v24; // [rsp+98h] [rbp+48h] BYREF
  void *v25; // [rsp+A8h] [rbp+58h]

  v25 = a4;
  v7 = a4;
  v8 = a2;
  v9 = a1;
  if ( !a2 )
    return 3221225485LL;
  v10 = a5;
  if ( !a5 || *a5 < 0 || a3 < -1 || *a5 > 0 && !a4 )
    return 3221225485LL;
  if ( (a1 & 0xFFFFFFF0) != 0 )
    return 3221225485LL;
  if ( a3 == -1 )
  {
    if ( (int)RtlStringCchLengthW(a2, 515LL, &v24) < 0 )
      return 3221227286LL;
    a3 = v24 + 1;
  }
  v11 = (const WCHAR *)Src;
  v24 = 511;
  v12 = v8[a3 - 1];
  result = punycode_decode(v8, (v9 & 4) != 0, (v9 & 2) != 0, (__int64)&Normalized, (__int64)&v23);
  if ( (int)result < 0 )
    return result;
  if ( v12 )
  {
    v14 = v24;
  }
  else
  {
    v15 = v24;
    if ( v24 >= 511 )
      return 3221227286LL;
    v11[v24] = 0;
    v14 = v15 + 1;
    v24 = v14;
  }
  if ( (v9 & 8) != 0 || Normalized )
    goto LABEL_14;
  v16 = v23;
  if ( (v9 & 4) != 0 && (RtlIsNormalizedString(1u, v11, (v23 - (__int64)v11) >> 1, &Normalized) < 0 || !Normalized) )
    return 3221227286LL;
  v17 = (v16 - (__int64)v11) >> 1;
  if ( v17 < v14 - (v12 == 0) )
  {
    v18 = v14 - (2 - (v12 != 0)) - v17;
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v18);
    if ( !Heap )
      return 3221225495LL;
    if ( v18 > 0 )
    {
      for ( i = 0LL; i < v18; ++i )
      {
        v21 = *(_WORD *)(v16 + 2 * i + 2);
        if ( (unsigned __int16)(v21 - 65) <= 0x19u )
        {
          *(_WORD *)(v16 + 2 * i + 2) = v21 + 32;
          Heap[i] = 1;
        }
      }
    }
    if ( RtlIsNormalizedString((((v9 & 1) == 0) << 8) + 13, (PCWSTR)(v16 + 2), v18, &Normalized) >= 0 && Normalized )
    {
      if ( v18 > 0 )
      {
        for ( j = 0LL; j < v18; ++j )
        {
          if ( Heap[j] == 1 )
            *(_WORD *)(v16 + 2 * j + 2) -= 32;
        }
      }
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
      v14 = v24;
      v7 = v25;
      goto LABEL_14;
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
    return 3221227286LL;
  }
LABEL_14:
  if ( v7 && *v10 )
  {
    if ( v14 > *v10 )
      return 3221225507LL;
    memmove(v7, v11, 2LL * v14);
  }
  *v10 = v14;
  return 0LL;
}
