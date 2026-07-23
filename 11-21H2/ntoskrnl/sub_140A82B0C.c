/*
 * XREFs of sub_140A82B0C @ 0x140A82B0C
 * Callers:
 *     sub_140A9A8F8 @ 0x140A9A8F8 (sub_140A9A8F8.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140281450 (RtlImageNtHeader.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _stricmp @ 0x1403E1190 (_stricmp.c)
 *     sub_1405FFA20 @ 0x1405FFA20 (sub_1405FFA20.c)
 *     sub_140A83044 @ 0x140A83044 (sub_140A83044.c)
 *     sub_140A8B2AC @ 0x140A8B2AC (sub_140A8B2AC.c)
 */

void __fastcall sub_140A82B0C(__int64 a1)
{
  int v2; // r13d
  PIMAGE_NT_HEADERS v3; // rax
  PIMAGE_NT_HEADERS v4; // rdi
  ULONG_PTR v5; // rsi
  IMAGE_DATA_DIRECTORY *v6; // r14
  unsigned int v7; // r12d
  DWORD v8; // ecx
  WORD Magic; // ax
  DWORD SectionAlignment; // ecx
  char Str1[8]; // [rsp+30h] [rbp-20h] BYREF
  char v12; // [rsp+38h] [rbp-18h]

  v2 = 1;
  if ( (dword_140C29FC0 & 0x2000000) != 0 )
  {
    v3 = RtlImageNtHeader(*(PVOID *)(a1 + 48));
    v4 = v3;
    if ( v3 )
    {
      v5 = (ULONG_PTR)&v3->OptionalHeader + v3->FileHeader.SizeOfOptionalHeader;
      v6 = &v3->OptionalHeader.DataDirectory[12];
      if ( !v3->OptionalHeader.DataDirectory[12].VirtualAddress || !v3->OptionalHeader.DataDirectory[12].Size )
        v2 = 0;
      v7 = 0;
      if ( v3->FileHeader.NumberOfSections )
      {
        do
        {
          if ( (*(_DWORD *)(v5 + 36) & 0xA0000000) == 0xA0000000 )
          {
            *(_QWORD *)Str1 = *(_QWORD *)v5;
            v12 = 0;
            if ( stricmp(Str1, "INIT") || (dword_140C1AA7C & 0x100) != 0 )
            {
              sub_140A83044(
                Response,
                "The image %wZ contains an executable and writable section 0x%p (name %s).",
                8195LL,
                a1 + 88,
                v5,
                Str1);
              sub_1405FFA20(0xC4u, 0x2003uLL, a1 + 88, v5, (ULONG_PTR)Str1, Response);
              if ( (dword_140C29FC0 & 0x1000) != 0 )
                sub_140A8B2AC(*(_QWORD *)(a1 + 56), 292LL);
              _InterlockedIncrement(&dword_140C2A064);
            }
          }
          if ( v2 )
          {
            v8 = *(_DWORD *)(v5 + 12);
            if ( v8 <= v6->VirtualAddress
              && *(_DWORD *)(v5 + 8) + v8 > v6->VirtualAddress
              && (*(_DWORD *)(v5 + 36) & 0x20000000) != 0 )
            {
              *(_QWORD *)Str1 = *(_QWORD *)v5;
              v12 = 0;
              sub_140A83044(
                byte_140C0D8D4,
                "The image %wZ contains an IAT, 0x%p in executable section (name %s).",
                8197LL,
                a1 + 88,
                v6,
                Str1);
              sub_1405FFA20(0xC4u, 0x2005uLL, a1 + 88, (ULONG_PTR)v6, (ULONG_PTR)Str1, byte_140C0D8D4);
              if ( (dword_140C29FC0 & 0x1000) != 0 )
                sub_140A8B2AC(*(_QWORD *)(a1 + 56), 300LL);
              _InterlockedIncrement(&dword_140C2A06C);
            }
          }
          Magic = v4->OptionalHeader.Magic;
          if ( Magic == 267 || Magic == 523 )
          {
            SectionAlignment = v4->OptionalHeader.SectionAlignment;
            if ( !SectionAlignment || (SectionAlignment & 0xFFF) != 0 )
            {
              *(_QWORD *)Str1 = *(_QWORD *)v5;
              v12 = 0;
              sub_140A83044(
                byte_140C0D8D8,
                "The image %wZ contains section 0x%p that is not page aligned (name %s).",
                8196LL,
                a1 + 88,
                v5,
                Str1);
              sub_1405FFA20(0xC4u, 0x2004uLL, a1 + 88, v5, (ULONG_PTR)Str1, byte_140C0D8D8);
              if ( (dword_140C29FC0 & 0x1000) != 0 )
                sub_140A8B2AC(*(_QWORD *)(a1 + 56), 296LL);
              _InterlockedIncrement(&dword_140C2A068);
            }
          }
          v5 += 40LL;
          ++v7;
        }
        while ( v7 < v4->FileHeader.NumberOfSections );
      }
    }
  }
}
