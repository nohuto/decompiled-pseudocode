/*
 * XREFs of sub_1409F5F90 @ 0x1409F5F90
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1402D17BC @ 0x1402D17BC (sub_1402D17BC.c)
 *     sub_1402F374C @ 0x1402F374C (sub_1402F374C.c)
 *     PsGetCurrentServerSilo @ 0x1402F61B0 (PsGetCurrentServerSilo.c)
 *     sub_140300B74 @ 0x140300B74 (sub_140300B74.c)
 *     sub_14030263C @ 0x14030263C (sub_14030263C.c)
 *     KeQueryInterruptTimePrecise @ 0x140303490 (KeQueryInterruptTimePrecise.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406C5900 @ 0x1406C5900 (sub_1406C5900.c)
 *     RtlIntegerToUnicodeString @ 0x14075AC60 (RtlIntegerToUnicodeString.c)
 *     sub_1407B6430 @ 0x1407B6430 (sub_1407B6430.c)
 *     sub_1407B66E0 @ 0x1407B66E0 (sub_1407B66E0.c)
 *     sub_1407B69B8 @ 0x1407B69B8 (sub_1407B69B8.c)
 *     sub_1407B69F0 @ 0x1407B69F0 (sub_1407B69F0.c)
 *     PcwAddInstance @ 0x1407E18E0 (PcwAddInstance.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1409F5F90(int a1, __int64 a2)
{
  __int64 CurrentServerSilo; // rsi
  struct _PCW_BUFFER *v6; // r12
  char v7; // r14
  __int64 v8; // rax
  __int64 *v9; // rbx
  __int64 v10; // r15
  int v11; // edi
  __int64 v12; // rcx
  __int128 v13; // xmm0
  __int64 v14; // rcx
  bool v15; // sf
  __int128 *QuadPart; // rax
  unsigned __int16 v17; // cx
  unsigned __int16 i; // r8
  __int16 v19; // ax
  __int128 v20; // [rsp+38h] [rbp-D0h] BYREF
  LARGE_INTEGER String; // [rsp+48h] [rbp-C0h] BYREF
  UNICODE_STRING String_8; // [rsp+50h] [rbp-B8h] BYREF
  UNICODE_STRING Name_8; // [rsp+60h] [rbp-A8h] BYREF
  struct _PCW_DATA Data; // [rsp+70h] [rbp-98h] BYREF
  _QWORD v25[32]; // [rsp+88h] [rbp-80h] BYREF
  _QWORD v26[14]; // [rsp+188h] [rbp+80h] BYREF
  _QWORD v27[28]; // [rsp+1F8h] [rbp+F0h] BYREF
  char v28; // [rsp+2D8h] [rbp+1D0h] BYREF
  char v29; // [rsp+2F8h] [rbp+1F0h] BYREF

  CurrentServerSilo = PsGetCurrentServerSilo();
  if ( (unsigned int)(a1 - 2) >= 2 )
    return 0LL;
  v6 = *(struct _PCW_BUFFER **)(a2 + 24);
  v7 = sub_1406C5900(1);
  sub_1402F374C(1);
  v8 = KeQueryInterruptTimePrecise(&String);
  v9 = (__int64 *)qword_140D06940;
  v10 = v8;
  v11 = 0;
  if ( qword_140D06940 )
  {
    do
    {
      memset(v27, 0, 0xD8uLL);
      memset(v25, 0, sizeof(v25));
      memset(v26, 0, 0x68uLL);
      String.QuadPart = 0LL;
      v20 = 0LL;
      String_8 = 0LL;
      Name_8 = 0LL;
      if ( !sub_1407B69B8((__int64)v9) && sub_140300B74(v12, CurrentServerSilo) )
      {
        v11 = sub_1407B6430((__int64)v25, (__int64)v9, 0, v26);
        if ( v11 < 0 )
          break;
        v27[1] = v25[5];
        v27[2] = v25[6];
        v27[0] = v25[5] + v25[6];
        v27[3] = v25[14];
        v27[4] = v25[15];
        v27[5] = __PAIR64__(v25[12], v25[16]);
        v27[6] = v25[17];
        v27[7] = v25[18];
        v27[8] = v25[24];
        v27[9] = v25[23];
        v27[10] = v25[25];
        LODWORD(v27[11]) = *((_DWORD *)v9 + 380);
        HIDWORD(v27[11]) = v25[9];
        v27[12] = v9[288];
        v27[13] = __PAIR64__(v25[11], v25[10]);
        v27[14] = v25[20];
        v27[15] = v25[22];
        v27[17] = v25[27];
        v27[18] = v25[26] + v25[27];
        v27[19] = v25[28];
        v27[21] = v25[30];
        v27[16] = v25[26];
        v27[20] = v25[29];
        v27[22] = v25[29] + v25[30];
        v27[23] = v25[31];
        v27[24] = v25[1];
        v27[25] = 10000000LL;
        v27[26] = v10;
        String.QuadPart = 0LL;
        if ( v9 == qword_140D06940 )
        {
          v13 = *(_OWORD *)L"\b\n";
          HIDWORD(v27[5]) = 0;
        }
        else if ( v9 == (__int64 *)PsInitialSystemProcess )
        {
          v13 = *(_OWORD *)byte_140001030;
        }
        else if ( v9 == (__int64 *)qword_140D06A30 )
        {
          v13 = *(_OWORD *)byte_140001180;
          v27[7] = qword_140C50848 << 12;
          v27[24] = qword_140C50848 << 12;
        }
        else if ( sub_14030263C(v9) )
        {
          v13 = *(_OWORD *)L"$&";
        }
        else
        {
          v15 = (int)sub_1407B66E0(v14, &String) < 0;
          QuadPart = (__int128 *)String.QuadPart;
          if ( v15 )
            QuadPart = (__int128 *)v9[184];
          v13 = *QuadPart;
        }
        v20 = v13;
        v17 = (unsigned __int16)v13 >> 1;
        if ( (unsigned __int16)((unsigned __int16)v13 >> 1) >= 4u
          && *(_WORD *)(*((_QWORD *)&v13 + 1) + 2LL * v17 - 8) == 46
          && (*(_WORD *)(*((_QWORD *)&v13 + 1) + 2LL * v17 - 6) | 0x20) == 0x65
          && (*(_WORD *)(*((_QWORD *)&v13 + 1) + 2LL * v17 - 4) | 0x20) == 0x78
          && (*(_WORD *)(*((_QWORD *)&v13 + 1) + 2LL * v17 - 2) | 0x20) == 0x65 )
        {
          v17 -= 4;
        }
        for ( i = v17; i; --i )
        {
          if ( *(_WORD *)(*((_QWORD *)&v13 + 1) + 2LL * i - 2) == 92 )
            break;
        }
        *(_DWORD *)&String_8.Length = 1310720;
        LOWORD(v20) = 2 * (v17 - i);
        WORD1(v20) = v20;
        *((_QWORD *)&v20 + 1) = *((_QWORD *)&v13 + 1) + 2LL * i;
        String_8.Buffer = (wchar_t *)&v28;
        RtlIntegerToUnicodeString(v27[13], 0xAu, &String_8);
        v19 = v20;
        *(_DWORD *)&Name_8.Length = 0x800000;
        if ( (unsigned __int16)(126 - String_8.Length) < (unsigned __int16)v20 )
          v19 = 126 - String_8.Length;
        LOWORD(v20) = v19;
        Name_8.Buffer = (wchar_t *)&v29;
        sub_1402D17BC(&Name_8, L"%wZ:%wZ", &v20, &String_8);
        Data.Data = v27;
        Data.Size = 216;
        v11 = PcwAddInstance(v6, &Name_8, v27[13], 1u, &Data);
        if ( String.QuadPart )
          ExFreePoolWithTag((PVOID)String.QuadPart, 0);
        if ( v11 < 0 )
          break;
      }
      if ( v9 == qword_140D06940 )
        v9 = 0LL;
      v9 = sub_1407B69F0(v9, v7);
    }
    while ( v9 );
    if ( v9 )
    {
      if ( v9 != qword_140D06940 )
        ObfDereferenceObjectWithTag(v9, 0x6E457350u);
    }
  }
  return (unsigned int)v11;
}
