/*
 * XREFs of sub_1403BE0BC @ 0x1403BE0BC
 * Callers:
 *     sub_1403BCA40 @ 0x1403BCA40 (sub_1403BCA40.c)
 *     sub_1403BCAD0 @ 0x1403BCAD0 (sub_1403BCAD0.c)
 *     sub_1403BCBD0 @ 0x1403BCBD0 (sub_1403BCBD0.c)
 *     sub_1403BCC5C @ 0x1403BCC5C (sub_1403BCC5C.c)
 *     sub_1403BCDA0 @ 0x1403BCDA0 (sub_1403BCDA0.c)
 *     sub_1403BCF1C @ 0x1403BCF1C (sub_1403BCF1C.c)
 *     sub_1403BD8C8 @ 0x1403BD8C8 (sub_1403BD8C8.c)
 *     sub_1403BE570 @ 0x1403BE570 (sub_1403BE570.c)
 *     sub_1403BE8A0 @ 0x1403BE8A0 (sub_1403BE8A0.c)
 *     sub_1403BE8FC @ 0x1403BE8FC (sub_1403BE8FC.c)
 *     sub_1403BEA4C @ 0x1403BEA4C (sub_1403BEA4C.c)
 *     sub_14050D760 @ 0x14050D760 (sub_14050D760.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x1402A76A0 (RtlCopyUnicodeString.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     HalQueryMaximumProcessorCount @ 0x14036FA30 (HalQueryMaximumProcessorCount.c)
 *     sub_1403BE3D0 @ 0x1403BE3D0 (sub_1403BE3D0.c)
 *     sub_1403BF104 @ 0x1403BF104 (sub_1403BF104.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140B4D700 @ 0x140B4D700 (sub_140B4D700.c)
 */

__int64 __fastcall sub_1403BE0BC(__int64 a1, UNICODE_STRING *a2)
{
  unsigned int v2; // ebx
  UNICODE_STRING *p_DestinationString; // r15
  int v5; // ecx
  unsigned int v6; // ebp
  unsigned int MaximumProcessorCount; // r12d
  unsigned int v8; // r14d
  void *v9; // rax
  __int64 v10; // rsi
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rcx
  __int128 v13; // xmm0
  unsigned int i; // ebp
  __int64 v15; // rcx
  __int64 *v16; // rax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-F8h] BYREF
  WCHAR SourceString[80]; // [rsp+30h] [rbp-E8h] BYREF

  v2 = 0;
  p_DestinationString = a2;
  DestinationString = 0LL;
  if ( !byte_140C09780 )
    return (unsigned int)-1073741431;
  if ( *(_DWORD *)a1 != 1 )
    return (unsigned int)-1073741811;
  if ( *(_DWORD *)(a1 + 4) != 144 )
    return (unsigned int)-1073741811;
  v5 = *(_DWORD *)(a1 + 116);
  if ( (v5 & 0xFE000000) != 0
    || (v5 & 0x400000) != 0
    || !*(_DWORD *)(a1 + 136)
    || (v5 & 0x400) != 0 && !*(_QWORD *)(a1 + 56) )
  {
    return (unsigned int)-1073741811;
  }
  if ( (v5 & 0x1000) != 0 || (v5 & 0x80u) != 0 )
    return (unsigned int)-1073741637;
  if ( (v5 & 0x800) != 0 && !*(_QWORD *)(a1 + 72) )
    return (unsigned int)-1073741811;
  if ( (v5 & 0x801) == 0x800 )
  {
    return (unsigned int)-1073741637;
  }
  else
  {
    if ( (v5 & 0xF00) != 0 && !*(_QWORD *)(a1 + 40)
      || (v5 & 2) != 0 && !*(_QWORD *)(a1 + 16)
      || (v5 & 0x10000) != 0 && (v5 & 1) == 0 )
    {
      return (unsigned int)-1073741811;
    }
    if ( !a2 )
    {
      sub_1403BE3D0(a1, 75LL, SourceString);
      p_DestinationString = &DestinationString;
      RtlInitUnicodeString(&DestinationString, SourceString);
      v5 = *(_DWORD *)(a1 + 116);
    }
    if ( (v5 & 0x10000) != 0 )
    {
      MaximumProcessorCount = HalQueryMaximumProcessorCount();
      v6 = (*(_DWORD *)(a1 + 96) + 7) & 0xFFFFFFF8;
    }
    else
    {
      v6 = *(_DWORD *)(a1 + 96);
      MaximumProcessorCount = 1;
    }
    v8 = (((MaximumProcessorCount * v6 + 351) & 0xFFFFFFF8) + 9 + p_DestinationString->Length) & 0xFFFFFFF8;
    v9 = (void *)sub_1403BF104(v8, 1LL);
    v10 = (__int64)v9;
    if ( v9 )
    {
      memset(v9, 0, v8);
      v11 = (v10 + 303) & 0xFFFFFFFFFFFFFFF8uLL;
      *(_QWORD *)(v10 + 288) = v11;
      v12 = (v11 + 55) & 0xFFFFFFFFFFFFFFF8uLL;
      *(_QWORD *)(v10 + 72) = v12;
      *(_QWORD *)(v11 + 32) = (MaximumProcessorCount * v6 + v12 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
      *(_QWORD *)(v10 + 192) = *(_QWORD *)(a1 + 104);
      *(_OWORD *)(v10 + 104) = *(_OWORD *)(a1 + 8);
      *(_OWORD *)(v10 + 120) = *(_OWORD *)(a1 + 24);
      *(_OWORD *)(v10 + 136) = *(_OWORD *)(a1 + 40);
      *(_OWORD *)(v10 + 152) = *(_OWORD *)(a1 + 56);
      v13 = *(_OWORD *)(a1 + 72);
      *(_DWORD *)(v10 + 80) = v6;
      *(_OWORD *)(v10 + 168) = v13;
      *(_DWORD *)(v10 + 220) = *(_DWORD *)(a1 + 100);
      *(_DWORD *)(v10 + 224) = *(_DWORD *)(a1 + 116);
      *(_DWORD *)(v10 + 84) = *(_DWORD *)(a1 + 120);
      *(_DWORD *)(v10 + 88) = *(_DWORD *)(a1 + 124);
      *(_DWORD *)(v10 + 96) = *(_DWORD *)(a1 + 132);
      *(_DWORD *)(v10 + 92) = *(_DWORD *)(a1 + 128);
      *(_DWORD *)(v10 + 228) = *(_DWORD *)(a1 + 136);
      *(_DWORD *)(v10 + 216) = *(_DWORD *)(a1 + 112);
      if ( *(_DWORD *)(a1 + 96) )
      {
        if ( *(_QWORD *)(a1 + 88) )
        {
          for ( i = 0; i < MaximumProcessorCount; ++i )
            memmove(
              (void *)(*(_QWORD *)(v10 + 72) + i * *(_DWORD *)(v10 + 80)),
              *(const void **)(a1 + 88),
              *(unsigned int *)(a1 + 96));
        }
      }
      *(_DWORD *)(v10 + 284) = *(_DWORD *)(a1 + 140);
      *(_WORD *)(v11 + 24) = 0;
      *(_WORD *)(v11 + 26) = p_DestinationString->Length + 2;
      RtlCopyUnicodeString((PUNICODE_STRING)(v11 + 24), p_DestinationString);
      if ( (*(_DWORD *)(a1 + 116) & 0x400) != 0 )
      {
        *(_QWORD *)(v11 + 12) = 0LL;
        *(_DWORD *)(v11 + 8) = 0;
        *(_DWORD *)v11 = 0;
        *(_DWORD *)(v11 + 4) = 0;
        if ( *(_DWORD *)(a1 + 136) == 3 )
        {
          LOBYTE(v15) = *(_BYTE *)(a1 + 142);
          sub_140B4D700(v15, v11 + 8, (v10 + 303) & 0xFFFFFFFFFFFFFFF8uLL);
        }
      }
      v16 = (__int64 *)qword_140C4E4E8;
      if ( *(ULONG_PTR **)qword_140C4E4E8 != &qword_140C4E4E0 )
        __fastfail(3u);
      LODWORD(dword_140C4E4FC) = dword_140C4E4FC + 1;
      *(_QWORD *)v10 = &qword_140C4E4E0;
      *(_QWORD *)(v10 + 8) = v16;
      *v16 = v10;
      qword_140C4E4E8 = v10;
      if ( (*(_DWORD *)(v10 + 224) & 0x100000) != 0 )
        byte_140C4E4A8 = 1;
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v2;
}
