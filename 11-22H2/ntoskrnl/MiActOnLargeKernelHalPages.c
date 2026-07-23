/*
 * XREFs of MiActOnLargeKernelHalPages @ 0x14081E6F8
 * Callers:
 *     MiProtectSystemImage @ 0x14081F240 (MiProtectSystemImage.c)
 *     MiInitializeBootLoadedDriverPfns @ 0x140B4750C (MiInitializeBootLoadedDriverPfns.c)
 *     MiCreateSlabAllocationsFromKernelHal @ 0x140B486E4 (MiCreateSlabAllocationsFromKernelHal.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140214B50 (RtlImageNtHeader.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

__int64 __fastcall MiActOnLargeKernelHalPages(char *a1, __int64 (__fastcall *a2)(char *, char *))
{
  PIMAGE_NT_HEADERS v4; // rbp
  __int64 *v5; // rbx
  int v6; // r8d
  char *v7; // r9
  unsigned int SizeOfHeaders; // ecx
  int v9; // esi
  unsigned int v10; // ecx
  char *v11; // rdi
  unsigned int v12; // r15d
  unsigned __int64 v13; // r14
  __int64 result; // rax
  __int64 v15; // [rsp+20h] [rbp-68h] BYREF
  __int64 v16; // [rsp+28h] [rbp-60h]
  unsigned int v17; // [rsp+30h] [rbp-58h]
  __int128 v18; // [rsp+34h] [rbp-54h]
  int v19; // [rsp+44h] [rbp-44h]

  v4 = RtlImageNtHeader(a1);
  v5 = &v15;
  v6 = 0x40000000;
  v16 = 0LL;
  v7 = a1;
  v15 = 0LL;
  SizeOfHeaders = v4->OptionalHeader.SizeOfHeaders;
  v9 = v4->FileHeader.NumberOfSections + 1;
  v19 = 0x40000000;
  v18 = 0LL;
  LODWORD(v16) = SizeOfHeaders;
  v17 = SizeOfHeaders;
  do
  {
    v10 = *((_DWORD *)v5 + 4);
    v11 = &a1[*((unsigned int *)v5 + 3)];
    if ( v10 < *((_DWORD *)v5 + 2) )
      v10 = *((_DWORD *)v5 + 2);
    v12 = *((_DWORD *)v5 + 9) & 0xE0000000;
    v13 = ((v10 + 4095LL) & 0xFFFFFFFFFFFFF000uLL) + 0x1FFFFF;
    if ( v12 != v6 )
    {
      if ( v7 < v11 )
      {
        result = a2(v7, &a1[*((unsigned int *)v5 + 3)]);
        if ( (int)result < 0 )
          return result;
      }
      v6 = v12;
      v7 = v11;
    }
    if ( v5 == &v15 )
      v5 = (__int64 *)((char *)&v4->OptionalHeader + v4->FileHeader.SizeOfOptionalHeader);
    else
      v5 += 5;
    --v9;
  }
  while ( v9 );
  return a2(v7, (char *)((unsigned __int64)&v11[v13] & 0xFFFFFFFFFFE00000uLL));
}
