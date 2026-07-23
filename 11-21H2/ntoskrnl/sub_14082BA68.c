/*
 * XREFs of sub_14082BA68 @ 0x14082BA68
 * Callers:
 *     sub_14082B6F0 @ 0x14082B6F0 (sub_14082B6F0.c)
 *     sub_140B06C30 @ 0x140B06C30 (sub_140B06C30.c)
 *     sub_140B1A054 @ 0x140B1A054 (sub_140B1A054.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140281450 (RtlImageNtHeader.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_14082BA68(char *a1)
{
  PIMAGE_NT_HEADERS v2; // rax
  __int64 *v3; // rbx
  int v4; // r8d
  PIMAGE_NT_HEADERS v5; // rbp
  char *v6; // r9
  int v7; // esi
  unsigned int v8; // ecx
  char *v9; // rdi
  unsigned int v10; // r15d
  unsigned __int64 v11; // r14
  __int64 result; // rax
  __int64 v13; // [rsp+20h] [rbp-68h] BYREF
  DWORD SizeOfHeaders; // [rsp+28h] [rbp-60h]
  int v15; // [rsp+2Ch] [rbp-5Ch]
  DWORD v16; // [rsp+30h] [rbp-58h]
  __int128 v17; // [rsp+34h] [rbp-54h]
  int v18; // [rsp+44h] [rbp-44h]

  v2 = RtlImageNtHeader(a1);
  v13 = 0LL;
  v3 = &v13;
  v15 = 0;
  v4 = 0x40000000;
  v18 = 0x40000000;
  v5 = v2;
  v6 = a1;
  v7 = v2->FileHeader.NumberOfSections + 1;
  SizeOfHeaders = v2->OptionalHeader.SizeOfHeaders;
  v17 = 0LL;
  v16 = SizeOfHeaders;
  do
  {
    v8 = *((_DWORD *)v3 + 4);
    v9 = &a1[*((unsigned int *)v3 + 3)];
    if ( v8 < *((_DWORD *)v3 + 2) )
      v8 = *((_DWORD *)v3 + 2);
    v10 = *((_DWORD *)v3 + 9) & 0xE0000000;
    v11 = ((v8 + 4095LL) & 0xFFFFFFFFFFFFF000uLL) + 0x1FFFFF;
    if ( v10 != v4 )
    {
      if ( v6 < v9 )
      {
        result = sub_14042A5E0(v6, &a1[*((unsigned int *)v3 + 3)]);
        if ( (int)result < 0 )
          return result;
      }
      v4 = v10;
      v6 = v9;
    }
    if ( v3 == &v13 )
      v3 = (__int64 *)((char *)&v5->OptionalHeader + v5->FileHeader.SizeOfOptionalHeader);
    else
      v3 += 5;
    --v7;
  }
  while ( v7 );
  return sub_14042A5E0(v6, (unsigned __int64)&v9[v11] & 0xFFFFFFFFFFE00000uLL);
}
