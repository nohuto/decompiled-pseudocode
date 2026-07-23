/*
 * XREFs of sub_140761234 @ 0x140761234
 * Callers:
 *     sub_14075FC44 @ 0x14075FC44 (sub_14075FC44.c)
 *     sub_140971848 @ 0x140971848 (sub_140971848.c)
 *     sub_140975FF0 @ 0x140975FF0 (sub_140975FF0.c)
 * Callees:
 *     sub_14027B080 @ 0x14027B080 (sub_14027B080.c)
 *     sub_140280D08 @ 0x140280D08 (sub_140280D08.c)
 *     sub_140281750 @ 0x140281750 (sub_140281750.c)
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     sub_140287970 @ 0x140287970 (sub_140287970.c)
 *     sub_1402D9D04 @ 0x1402D9D04 (sub_1402D9D04.c)
 *     sub_1402DB994 @ 0x1402DB994 (sub_1402DB994.c)
 *     sub_1402E1280 @ 0x1402E1280 (sub_1402E1280.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     _wcsnicmp @ 0x1403E15D0 (_wcsnicmp.c)
 *     sub_1406F84B0 @ 0x1406F84B0 (sub_1406F84B0.c)
 *     sub_1407619F4 @ 0x1407619F4 (sub_1407619F4.c)
 *     RtlGetNtSystemRoot @ 0x140761D60 (RtlGetNtSystemRoot.c)
 *     sub_14082B6F0 @ 0x14082B6F0 (sub_14082B6F0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     sub_140A7C224 @ 0x140A7C224 (sub_140A7C224.c)
 */

__int64 __fastcall sub_140761234(__int64 a1, __int64 a2, unsigned __int16 *a3, __int64 a4, __int64 a5, char a6)
{
  __int64 *v9; // rdi
  __int64 v10; // rcx
  char v11; // dl
  unsigned __int64 v12; // rbx
  wchar_t *v13; // rbx
  __m128i v14; // xmm0
  PWSTR NtSystemRoot; // rax
  int v16; // eax
  __int64 v17; // rdx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-50h] BYREF
  __int128 v20; // [rsp+40h] [rbp-40h] BYREF
  __int128 v21; // [rsp+50h] [rbp-30h]
  __int128 v22; // [rsp+60h] [rbp-20h]
  __int64 v23; // [rsp+70h] [rbp-10h]

  v23 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  if ( a6 == 1 )
  {
    *(_DWORD *)(a1 + 104) |= 0x41004000u;
    *(_DWORD *)(a1 + 196) |= 0x100u;
    v9 = (__int64 *)sub_140287970(a2);
    v10 = *v9;
    BYTE8(v20) = 3;
    v11 = *(_BYTE *)(v10 + 15);
    DWORD2(v21) = 0;
    DWORD2(v22) = 0;
    *(_QWORD *)&v22 = *(unsigned int *)(a1 + 64);
    *(_QWORD *)&v21 = *(_QWORD *)(a1 + 48);
    DWORD2(v20) = DWORD2(v20) & 0xFFF80FFF | ((v11 & 0xF1 | ((v11 & 0xE) << 7) | 1) << 8);
    v12 = sub_140281750((__int64)v9);
    sub_1406F84B0(a3, 0LL, (__int64)&v20, v12);
    sub_140280D08((__int64)v9, v12);
    if ( sub_1407619F4(*(_QWORD *)(a1 + 48)) )
    {
      DestinationString = 0LL;
      v13 = (wchar_t *)sub_1402828F0(256, 0x100uLL, 0x6E4C6D4Du);
      if ( v13 )
      {
        if ( *(_WORD *)a4 <= 0x16u || wcsnicmp(*(const wchar_t **)(a4 + 8), L"\\SystemRoot", 0xBuLL) )
        {
          v16 = sub_1402E1280(v13, 0x100uLL, L"%wZ", a5);
        }
        else
        {
          v14 = *(__m128i *)a4;
          *(_QWORD *)&DestinationString.Length = *(_QWORD *)a4;
          DestinationString.Buffer = (wchar_t *)(_mm_srli_si128(v14, 8).m128i_u64[0] + 22);
          DestinationString.Length -= 22;
          NtSystemRoot = RtlGetNtSystemRoot();
          v16 = sub_1402E1280(v13, 0x100uLL, L"%ws%wZ", NtSystemRoot + 2, &DestinationString);
        }
        if ( v16 >= 0 )
        {
          RtlInitUnicodeString(&DestinationString, v13);
          if ( (unsigned int)sub_1402D9D04(&DestinationString, *(_QWORD *)(a1 + 48)) == 1 )
            *(_DWORD *)(a1 + 104) |= 0x100000u;
        }
        ExFreePoolWithTag(v13, 0);
      }
    }
  }
  if ( !*(_QWORD *)(sub_140287970(*(_QWORD *)(a1 + 112)) + 144) || (*(_DWORD *)(a1 + 104) & 0x8000000) == 0 )
    sub_14082B6F0(a1);
  if ( (unsigned int)sub_14027B080(*(_QWORD *)(a1 + 48)) == 1 )
    sub_1402DB994(a1, v17);
  return sub_140A7C224(a1);
}
