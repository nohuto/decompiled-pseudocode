/*
 * XREFs of RtlpMuiRegAddAlternateCodePage @ 0x18011098C
 * Callers:
 *     RtlpMuiRegAddLanguageByName @ 0x180110B44 (RtlpMuiRegAddLanguageByName.c)
 * Callees:
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     RtlInitUnicodeString @ 0x18004C040 (RtlInitUnicodeString.c)
 *     LdrpQueryValueKey @ 0x18006F0A8 (LdrpQueryValueKey.c)
 *     RtlUnicodeStringToInteger @ 0x18007C230 (RtlUnicodeStringToInteger.c)
 *     _wcsicmp @ 0x1800956E0 (_wcsicmp.c)
 */

int __fastcall RtlpMuiRegAddAlternateCodePage(__int64 a1, void *a2)
{
  __int64 v4; // r14
  wchar_t *Heap; // rax
  int v6; // ecx
  unsigned int v7; // ecx
  const wchar_t *v8; // rbx
  wchar_t *v9; // rdi
  unsigned int v10; // r13d
  unsigned int v11; // esi
  _WORD *v12; // r15
  __int64 v13; // rax
  ULONG Value; // [rsp+30h] [rbp-20h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-18h] BYREF
  __int64 v17; // [rsp+A0h] [rbp+50h] BYREF
  int v18; // [rsp+A8h] [rbp+58h] BYREF

  v18 = 7;
  v4 = 0LL;
  LODWORD(v17) = 0;
  Value = 0;
  RtlInitUnicodeString(&DestinationString, L"AlternateCodePage");
  LODWORD(Heap) = LdrpQueryValueKey(a2, &DestinationString, &v18, 0LL, (ULONG *)&v17);
  if ( (_DWORD)Heap != -1073741772 )
  {
    v6 = v17;
    if ( (_DWORD)v17 )
    {
      if ( (_DWORD)Heap == -2147483643 )
      {
        LODWORD(v17) = v17 + 2;
        v7 = (v6 + 5) & 0xFFFFFFFC;
        if ( v7 )
        {
          Heap = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v7);
          v8 = Heap;
          if ( Heap )
          {
            v9 = Heap;
            if ( !(unsigned int)LdrpQueryValueKey(a2, &DestinationString, &v18, Heap, (ULONG *)&v17)
              && (v18 == 1 || v18 == 7) )
            {
              v10 = 0;
              v11 = (unsigned int)v17 >> 1;
              v9 = (wchar_t *)v8;
              if ( (unsigned int)v17 >> 1 )
              {
                v12 = (_WORD *)(a1 + 20);
                while ( v8 && *v8 )
                {
                  if ( !wcsicmp(v8, L"*") )
                  {
                    *(_WORD *)(a1 + 20) = -1;
                    break;
                  }
                  RtlInitUnicodeString(&DestinationString, v8);
                  if ( RtlUnicodeStringToInteger(&DestinationString, 0xAu, &Value)
                    || (++v4, *v12 = Value, ++v12, v4 < 4) )
                  {
                    v13 = -1LL;
                    do
                      ++v13;
                    while ( v8[v13] );
                    v10 += v13 + 1;
                    v8 += (unsigned int)(v13 + 1);
                    if ( v10 < v11 )
                      continue;
                  }
                  break;
                }
              }
            }
            LODWORD(Heap) = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v9);
          }
        }
      }
    }
  }
  return (int)Heap;
}
