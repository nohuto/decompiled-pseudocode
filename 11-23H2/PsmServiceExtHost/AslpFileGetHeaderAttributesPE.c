/*
 * XREFs of AslpFileGetHeaderAttributesPE @ 0x18009B5E8
 * Callers:
 *     AslFileAllocAndGetAttributes @ 0x18009A3F0 (AslFileAllocAndGetAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1800982C0 (AslLogCallPrintf.c)
 *     AslFileMappingEnsure @ 0x180099998 (AslFileMappingEnsure.c)
 *     AslpFileGetNtHeaderAttributes @ 0x18009B95C (AslpFileGetNtHeaderAttributes.c)
 */

__int64 __fastcall AslpFileGetHeaderAttributesPE(__int64 a1, __int64 a2)
{
  int v4; // eax
  unsigned int v5; // edi
  int v6; // edi
  int NtHeaderAttributes; // eax
  int v8; // r9d
  int v9; // r10d
  int v10; // r11d
  int v11; // esi
  int v12; // r14d
  int v13; // r15d
  int v14; // edx
  int v15; // ecx
  int v16; // r10d
  int v17; // r11d
  int v18; // esi
  int v19; // r14d
  int v20; // r15d
  __int64 v21; // rax
  int v23; // [rsp+20h] [rbp-50h]
  _WORD v24[2]; // [rsp+50h] [rbp-20h] BYREF
  unsigned __int16 v25; // [rsp+54h] [rbp-1Ch] BYREF
  unsigned int v26; // [rsp+58h] [rbp-18h] BYREF
  unsigned int v27; // [rsp+5Ch] [rbp-14h] BYREF
  unsigned int v28; // [rsp+60h] [rbp-10h] BYREF
  unsigned int v29; // [rsp+64h] [rbp-Ch] BYREF
  unsigned __int16 v30; // [rsp+C0h] [rbp+50h] BYREF
  unsigned __int16 v31; // [rsp+C8h] [rbp+58h] BYREF

  v26 = 0;
  v27 = 0;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  v24[0] = 0;
  v25 = 0;
  v4 = AslFileMappingEnsure(a2);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v6 = 2;
    if ( *(_DWORD *)(a2 + 56) == 6 )
    {
      *(_DWORD *)(a1 + 664) |= 2u;
      *(_DWORD *)(a1 + 696) |= 2u;
      NtHeaderAttributes = AslpFileGetNtHeaderAttributes(
                             (unsigned int)&v26,
                             (unsigned int)&v27,
                             (unsigned int)&v28,
                             (unsigned int)&v29,
                             (__int64)&v30,
                             (__int64)&v31,
                             (__int64)v24,
                             (__int64)&v25,
                             a2);
      v8 = *(_DWORD *)(a1 + 600);
      v9 = *(_DWORD *)(a1 + 632);
      v10 = *(_DWORD *)(a1 + 728);
      v11 = *(_DWORD *)(a1 + 56);
      v12 = *(_DWORD *)(a1 + 952);
      v13 = *(_DWORD *)(a1 + 984);
      v14 = *(_DWORD *)(a1 + 1080);
      if ( NtHeaderAttributes < 0 )
      {
        v16 = v9 | 2;
        v17 = v10 | 2;
        *(_DWORD *)(a1 + 600) = v8 | 2;
        v18 = v11 | 2;
        v19 = v12 | 2;
        v20 = v13 | 2;
        v15 = 2;
      }
      else
      {
        *(_QWORD *)(a1 + 592) = v26;
        *(_QWORD *)(a1 + 624) = v27;
        v15 = 1;
        *(_QWORD *)(a1 + 720) = v28;
        v16 = v9 | 1;
        *(_QWORD *)(a1 + 48) = v29;
        v17 = v10 | 1;
        v18 = v11 | 1;
        *(_QWORD *)(a1 + 944) = v30;
        v19 = v12 | 1;
        v20 = v13 | 1;
        *(_QWORD *)(a1 + 976) = v31;
        *(_QWORD *)(a1 + 1008) = v24[0];
        v21 = v25;
        *(_DWORD *)(a1 + 576) = 2;
        *(_DWORD *)(a1 + 608) = 2;
        *(_DWORD *)(a1 + 704) = 2;
        *(_DWORD *)(a1 + 32) = 2;
        *(_QWORD *)(a1 + 936) = 2LL;
        *(_QWORD *)(a1 + 968) = 2LL;
        *(_QWORD *)(a1 + 1000) = 2LL;
        *(_QWORD *)(a1 + 1064) = 2LL;
        v6 = 1;
        *(_QWORD *)(a1 + 1072) = v21;
        *(_QWORD *)(a1 + 584) = 4LL;
        *(_DWORD *)(a1 + 600) = v8 | 1;
        *(_QWORD *)(a1 + 616) = 4LL;
        *(_QWORD *)(a1 + 712) = 4LL;
        *(_QWORD *)(a1 + 40) = 4LL;
        *(_DWORD *)(a1 + 928) = 1;
        *(_DWORD *)(a1 + 960) = 1;
        *(_DWORD *)(a1 + 992) = 1;
        *(_DWORD *)(a1 + 1056) = 1;
      }
      *(_DWORD *)(a1 + 632) = v16;
      *(_DWORD *)(a1 + 984) = v20;
      *(_DWORD *)(a1 + 952) = v19;
      *(_DWORD *)(a1 + 56) = v18;
      *(_DWORD *)(a1 + 728) = v17;
      *(_DWORD *)(a1 + 1016) |= v6;
      *(_DWORD *)(a1 + 1080) = v15 | v14;
    }
    else
    {
      *(_DWORD *)(a1 + 600) |= 2u;
      *(_DWORD *)(a1 + 632) |= 2u;
      *(_DWORD *)(a1 + 728) |= 2u;
      *(_DWORD *)(a1 + 56) |= 2u;
      *(_DWORD *)(a1 + 1016) |= 2u;
      *(_DWORD *)(a1 + 952) |= 2u;
      *(_DWORD *)(a1 + 984) |= 2u;
      *(_DWORD *)(a1 + 1080) |= 2u;
    }
    return 0;
  }
  else
  {
    v23 = v4;
    AslLogCallPrintf(
      1LL,
      (unsigned int)"AslpFileGetHeaderAttributesPE",
      2542,
      (unsigned int)"AslFileMappingEnsure failed [%x]",
      v23);
  }
  return v5;
}
