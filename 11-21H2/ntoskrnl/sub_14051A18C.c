/*
 * XREFs of sub_14051A18C @ 0x14051A18C
 * Callers:
 *     sub_140510850 @ 0x140510850 (sub_140510850.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x1402A76A0 (RtlCopyUnicodeString.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_1403BE424 @ 0x1403BE424 (sub_1403BE424.c)
 *     sub_1403BF104 @ 0x1403BF104 (sub_1403BF104.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_14051A18C(__int64 a1, UNICODE_STRING *a2)
{
  UNICODE_STRING *p_DestinationString; // rsi
  unsigned int v4; // ebp
  void *v5; // rax
  __int64 v6; // rbx
  __int64 result; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rdx
  __int64 v10; // rcx
  signed __int32 v11; // eax
  __int64 *v12; // rax
  size_t SizeInWords; // [rsp+38h] [rbp-100h]
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-E8h] BYREF
  WCHAR SourceString[80]; // [rsp+60h] [rbp-D8h] BYREF

  p_DestinationString = a2;
  DestinationString = 0LL;
  if ( *(_DWORD *)a1 != 1 || *(_DWORD *)(a1 + 4) != 80 )
    return 3221225485LL;
  if ( !a2 )
  {
    LODWORD(SizeInWords) = 75;
    sub_1403BE424(1413894989, 0, 0x4200u, 0, 1u, 0, *(_DWORD *)(a1 + 8), SizeInWords, SourceString);
    p_DestinationString = &DestinationString;
    RtlInitUnicodeString(&DestinationString, SourceString);
  }
  v4 = (((*(_DWORD *)(a1 + 64) + 7 + ((160 * *(_DWORD *)(a1 + 12) + 231) & 0xFFFFFFF8)) & 0xFFFFFFF8)
      + 9
      + p_DestinationString->Length) & 0xFFFFFFF8;
  v5 = (void *)sub_1403BF104(v4, 1u);
  v6 = (__int64)v5;
  if ( !v5 )
    return 3221225626LL;
  memset(v5, 0, v4);
  v8 = (v6 + 231) & 0xFFFFFFFFFFFFFFF8uLL;
  *(_QWORD *)(v6 + 56) = v8;
  v9 = 160LL * *(unsigned int *)(a1 + 12) + v8;
  *(_QWORD *)(v6 + 64) = v9;
  v10 = *(unsigned int *)(a1 + 64) + 7LL;
  *(_QWORD *)(v6 + 24) = v6 + 16;
  *(_QWORD *)(v6 + 16) = v6 + 16;
  *(_QWORD *)(v6 + 168) = 0LL;
  *(_QWORD *)(v6 + 200) = (v9 + v10) & 0xFFFFFFFFFFFFFFF8uLL;
  memmove(*(void **)(v6 + 64), *(const void **)(a1 + 56), *(unsigned int *)(a1 + 64));
  *(_WORD *)(v6 + 192) = 0;
  *(_WORD *)(v6 + 194) = p_DestinationString->Length + 2;
  RtlCopyUnicodeString((PUNICODE_STRING)(v6 + 192), p_DestinationString);
  *(_BYTE *)(v6 + 176) = 12;
  *(_BYTE *)(v6 + 72) = *(_BYTE *)(a1 + 16);
  v11 = _InterlockedIncrement(&dword_140D01780);
  *(_DWORD *)(v6 + 32) = v11;
  *(_DWORD *)(a1 + 8) = v11;
  *(_DWORD *)(v6 + 44) = *(_DWORD *)(a1 + 12);
  *(_DWORD *)(v6 + 76) = *(_DWORD *)(a1 + 20);
  *(_DWORD *)(v6 + 48) = 1;
  *(_DWORD *)(v6 + 36) = *(_DWORD *)(a1 + 32);
  *(_DWORD *)(v6 + 40) = *(_DWORD *)(a1 + 36);
  *(_DWORD *)(v6 + 160) = *(_DWORD *)(a1 + 24);
  *(_DWORD *)(v6 + 164) = *(_DWORD *)(a1 + 28);
  *(_BYTE *)(v6 + 177) = *(_BYTE *)(a1 + 40);
  if ( *(_BYTE *)(a1 + 40) )
  {
    *(_DWORD *)(v6 + 180) = *(_DWORD *)(a1 + 44);
    *(_DWORD *)(v6 + 184) = *(_DWORD *)(a1 + 48);
    *(_DWORD *)(v6 + 188) = *(_DWORD *)(a1 + 52);
  }
  *(_QWORD *)(v6 + 80) = **(_QWORD **)(a1 + 72);
  *(_QWORD *)(v6 + 88) = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 8LL);
  *(_QWORD *)(v6 + 96) = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 16LL);
  *(_QWORD *)(v6 + 104) = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 24LL);
  *(_QWORD *)(v6 + 112) = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 32LL);
  *(_QWORD *)(v6 + 120) = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 40LL);
  *(_QWORD *)(v6 + 128) = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 48LL);
  *(_QWORD *)(v6 + 136) = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 56LL);
  *(_QWORD *)(v6 + 144) = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 64LL);
  *(_QWORD *)(v6 + 152) = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 72LL);
  v12 = (__int64 *)qword_140C4BC98;
  if ( *(__int64 **)qword_140C4BC98 != &qword_140C4BC90 )
    __fastfail(3u);
  *(_QWORD *)(v6 + 8) = qword_140C4BC98;
  *(_QWORD *)v6 = &qword_140C4BC90;
  *v12 = v6;
  result = 0LL;
  qword_140C4BC98 = v6;
  return result;
}
