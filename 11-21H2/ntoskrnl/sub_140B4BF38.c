/*
 * XREFs of sub_140B4BF38 @ 0x140B4BF38
 * Callers:
 *     sub_1405307FC @ 0x1405307FC (sub_1405307FC.c)
 *     sub_1405370FC @ 0x1405370FC (sub_1405370FC.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x1402A76A0 (RtlCopyUnicodeString.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_1403BE424 @ 0x1403BE424 (sub_1403BE424.c)
 *     sub_1403BF104 @ 0x1403BF104 (sub_1403BF104.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_140B4BF38(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v5; // ecx
  unsigned int v6; // ebx
  _QWORD *v7; // rdx
  _QWORD *v8; // rax
  bool v9; // bp
  unsigned int v10; // ecx
  unsigned __int16 Length; // r15
  unsigned int v12; // r14d
  void *v13; // rax
  __int64 v14; // rsi
  unsigned __int64 v15; // rcx
  __int64 v16; // rax
  _OWORD *v17; // rax
  __int128 v18; // xmm1
  _OWORD *v19; // rax
  unsigned int v20; // eax
  const void *v21; // rdx
  int v22; // eax
  __int64 *v23; // rax
  size_t SizeInWords; // [rsp+38h] [rbp-110h]
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-F8h] BYREF
  WCHAR SourceString[80]; // [rsp+60h] [rbp-E8h] BYREF

  DestinationString = 0LL;
  if ( *(_DWORD *)a1 == 1
    && *(_DWORD *)(a1 + 4) == 104
    && (v5 = *(_DWORD *)(a1 + 20), (v5 & 0xFFFF0000) == 0)
    && (v6 = 0, *(_DWORD *)(a1 + 72))
    && (v7 = *(_QWORD **)(a1 + 56), v7[1])
    && ((v5 & 2) == 0 || *(_QWORD *)(*(_QWORD *)(a1 + 64) + 72LL))
    && ((v5 & 0x40) == 0 || v7[14] && v7[15] && v7[16])
    && ((v5 & 0x20) == 0
     || (v8 = *(_QWORD **)(a1 + 64), v8[1])
     && v8[2]
     && v8[3]
     && v8[4]
     && v8[5]
     && v8[7]
     && v8[8]
     && v8[10]
     && v8[11]
     && v8[12]) )
  {
    v9 = 0;
    if ( !*(_DWORD *)(a1 + 16) )
      v9 = *(_QWORD *)(a1 + 8) != 0LL;
    LODWORD(SizeInWords) = 75;
    sub_1403BE424(1413894989, 0, 0x4300u, *(_WORD *)(a1 + 72), 1u, 0, *(_DWORD *)(a1 + 100), SizeInWords, SourceString);
    RtlInitUnicodeString(&DestinationString, SourceString);
    v10 = 552;
    if ( !v9 )
      v10 = (*(_DWORD *)(a1 + 16) + 559) & 0xFFFFFFF8;
    Length = DestinationString.Length;
    v12 = (v10 + DestinationString.Length + 9) & 0xFFFFFFF8;
    v13 = (void *)sub_1403BF104(v12, 1u);
    v14 = (__int64)v13;
    if ( v13 )
    {
      memset(v13, 0, v12);
      v15 = (v14 + 559) & 0xFFFFFFFFFFFFFFF8uLL;
      if ( v9 )
      {
        *(_QWORD *)(v14 + 16) = *(_QWORD *)(a1 + 8);
      }
      else
      {
        *(_QWORD *)(v14 + 16) = v15;
        v15 = (*(unsigned int *)(a1 + 16) + 7LL + v15) & 0xFFFFFFFFFFFFFFF8uLL;
      }
      *(_QWORD *)(v14 + 536) = v15;
      *(_BYTE *)(v14 + 40) = 12;
      v16 = *(_QWORD *)(a1 + 56);
      *(_OWORD *)(v14 + 56) = *(_OWORD *)v16;
      *(_OWORD *)(v14 + 72) = *(_OWORD *)(v16 + 16);
      *(_OWORD *)(v14 + 88) = *(_OWORD *)(v16 + 32);
      *(_OWORD *)(v14 + 104) = *(_OWORD *)(v16 + 48);
      *(_OWORD *)(v14 + 120) = *(_OWORD *)(v16 + 64);
      *(_OWORD *)(v14 + 136) = *(_OWORD *)(v16 + 80);
      *(_OWORD *)(v14 + 152) = *(_OWORD *)(v16 + 96);
      *(_OWORD *)(v14 + 168) = *(_OWORD *)(v16 + 112);
      *(_QWORD *)(v14 + 184) = *(_QWORD *)(v16 + 128);
      v17 = *(_OWORD **)(a1 + 64);
      if ( v17 )
      {
        *(_OWORD *)(v14 + 192) = *v17;
        *(_OWORD *)(v14 + 208) = v17[1];
        *(_OWORD *)(v14 + 224) = v17[2];
        *(_OWORD *)(v14 + 240) = v17[3];
        *(_OWORD *)(v14 + 256) = v17[4];
        *(_OWORD *)(v14 + 272) = v17[5];
        *(_OWORD *)(v14 + 288) = v17[6];
        v18 = v17[7];
        v19 = v17 + 8;
        *(_OWORD *)(v14 + 304) = v18;
        *(_OWORD *)(v14 + 320) = *v19;
        *(_OWORD *)(v14 + 336) = v19[1];
        *(_OWORD *)(v14 + 352) = v19[2];
        *(_QWORD *)(v14 + 368) = *((_QWORD *)v19 + 6);
      }
      *(_DWORD *)(v14 + 24) = *(_DWORD *)(a1 + 16);
      *(_DWORD *)(v14 + 472) = *(_DWORD *)(a1 + 20);
      *(_DWORD *)(v14 + 44) = *(_DWORD *)(a1 + 40);
      *(_DWORD *)(v14 + 52) = *(_DWORD *)(a1 + 48);
      *(_DWORD *)(v14 + 48) = *(_DWORD *)(a1 + 44);
      *(_DWORD *)(v14 + 476) = *(_DWORD *)(a1 + 72);
      *(_DWORD *)(v14 + 480) = *(_DWORD *)(a1 + 76);
      *(_DWORD *)(v14 + 484) = *(_DWORD *)(a1 + 80);
      *(_DWORD *)(v14 + 488) = *(_DWORD *)(a1 + 84);
      *(_DWORD *)(v14 + 512) = *(_DWORD *)(a1 + 88);
      *(_DWORD *)(v14 + 440) = *(_DWORD *)(a1 + 92);
      *(_DWORD *)(v14 + 516) = *(_DWORD *)(a1 + 96);
      *(_QWORD *)(v14 + 392) = v14 + 384;
      *(_QWORD *)(v14 + 384) = v14 + 384;
      *(_DWORD *)(v14 + 420) = *(_DWORD *)(v14 + 516);
      *(_QWORD *)(v14 + 424) = *(_QWORD *)(v14 + 256);
      *(_QWORD *)(v14 + 432) = *(_QWORD *)(v14 + 248);
      *(_QWORD *)(v14 + 408) = 0LL;
      *(_QWORD *)(v14 + 400) = 0LL;
      *(_DWORD *)(v14 + 416) = 0;
      v20 = *(_DWORD *)(a1 + 16);
      if ( v20 )
      {
        v21 = *(const void **)(a1 + 8);
        if ( v21 )
          memmove(*(void **)(v14 + 16), v21, v20);
      }
      v22 = *(_DWORD *)(a1 + 100);
      *(_WORD *)(v14 + 528) = 0;
      *(_WORD *)(v14 + 530) = Length + 2;
      *(_DWORD *)(v14 + 520) = v22;
      RtlCopyUnicodeString((PUNICODE_STRING)(v14 + 528), &DestinationString);
      v23 = (__int64 *)qword_140C4BCE8;
      if ( *(__int64 **)qword_140C4BCE8 != &qword_140C4BCE0 )
        __fastfail(3u);
      ++dword_140C4BCB4;
      *(_QWORD *)v14 = &qword_140C4BCE0;
      *(_QWORD *)(v14 + 8) = v23;
      *v23 = v14;
      qword_140C4BCE8 = v14;
      if ( a3 )
        *a3 = *(_QWORD *)(v14 + 16);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v6;
}
