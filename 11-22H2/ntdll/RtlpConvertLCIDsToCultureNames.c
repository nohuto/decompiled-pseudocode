/*
 * XREFs of RtlpConvertLCIDsToCultureNames @ 0x1800FAFF0
 * Callers:
 *     RtlpSetPreferredUILanguages @ 0x1800FC160 (RtlpSetPreferredUILanguages.c)
 * Callees:
 *     RtlLCIDToCultureName @ 0x180015CC0 (RtlLCIDToCultureName.c)
 *     RtlInitUnicodeString @ 0x1800189D0 (RtlInitUnicodeString.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     LdrpMultiSZCchLength @ 0x180070294 (LdrpMultiSZCchLength.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     wcsnlen @ 0x180094B40 (wcsnlen.c)
 *     memmove @ 0x1800A5980 (memmove.c)
 *     RtlUnicodeStringToLcid @ 0x1800FA3AC (RtlUnicodeStringToLcid.c)
 */

__int64 __fastcall RtlpConvertLCIDsToCultureNames(WCHAR *SourceString, _QWORD *a2)
{
  PCWSTR v3; // rsi
  unsigned int v4; // r14d
  unsigned int v5; // edi
  unsigned int v6; // ebx
  void *ProcessHeap; // rcx
  _DWORD *Heap; // r15
  _DWORD *v9; // r13
  unsigned int v10; // eax
  LCID v11; // ebx
  int v12; // ecx
  unsigned __int64 Length; // rbx
  unsigned int v15; // [rsp+20h] [rbp-E0h] BYREF
  unsigned __int16 v16; // [rsp+24h] [rbp-DCh]
  _UNICODE_STRING String; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v18; // [rsp+38h] [rbp-C8h]
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  ULONG v20[4]; // [rsp+50h] [rbp-B0h] BYREF
  char v21; // [rsp+60h] [rbp-A0h] BYREF

  v16 = 0;
  v3 = SourceString;
  v4 = 0;
  v5 = 0;
  if ( !a2 || !SourceString || *a2 || (int)LdrpMultiSZCchLength(SourceString, (__int64)a2, &v15) < 0 )
    return 3221225485LL;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  v15 *= 2;
  v6 = v15;
  Heap = RtlAllocateHeap(ProcessHeap, 0, 0x2A8uLL);
  v9 = Heap;
  v10 = v6;
  while ( 1 )
  {
    if ( !*v3 || !v6 )
    {
LABEL_16:
      *v9 = 0;
      goto LABEL_17;
    }
    if ( v4 >= 4 )
      goto LABEL_20;
    v18 = 2 * (unsigned int)wcsnlen(v3, (unsigned __int64)v10 >> 1);
    RtlInitUnicodeString(&DestinationString, v3);
    if ( (int)RtlUnicodeStringToLcid(&DestinationString, &v20[v4]) < 0 )
      goto LABEL_20;
    v11 = v20[v4];
    String.Buffer = (wchar_t *)&v21;
    *(_DWORD *)&String.Length = 11141120;
    if ( !RtlLCIDToCultureName(v11, &String) )
      goto LABEL_20;
    v12 = 0;
    if ( v4 )
      break;
LABEL_14:
    v16 += String.Length + 2;
    if ( v16 >= 0x2A7u )
    {
      v5 = -1073741595;
      goto LABEL_21;
    }
    Length = String.Length;
    memmove(v9, String.Buffer, String.Length + 2LL);
    ++v4;
    v3 = (PCWSTR)((char *)v3 + (unsigned int)v18 + 2);
    v9 = (_DWORD *)((char *)v9 + 2 * (Length >> 1) + 2);
    v6 = v15 - v18 - 2;
    v15 = v6;
    v10 = v6;
    if ( !v3 )
      goto LABEL_16;
  }
  while ( v11 != v20[v12] )
  {
    if ( ++v12 >= v4 )
      goto LABEL_14;
  }
LABEL_20:
  v5 = -1073741811;
LABEL_21:
  if ( !Heap )
  {
LABEL_17:
    *a2 = Heap;
    return v5;
  }
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  return v5;
}
