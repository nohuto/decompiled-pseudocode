/*
 * XREFs of MiVerifyLargeSectionLayout @ 0x140B66BDC
 * Callers:
 *     MiCheckLargePageOk @ 0x140B43B40 (MiCheckLargePageOk.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140214B30 (RtlImageNtHeader.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 */

ULONG_PTR *__fastcall MiVerifyLargeSectionLayout(ULONG_PTR BugCheckParameter2)
{
  PIMAGE_NT_HEADERS v2; // rax
  unsigned int v3; // edx
  ULONG_PTR *p_BugCheckParameter3; // r9
  unsigned int v5; // ebp
  int v6; // r10d
  PIMAGE_NT_HEADERS v7; // rdi
  int NumberOfSections; // r11d
  int v9; // r11d
  int v10; // ecx
  unsigned int v11; // edx
  int v12; // eax
  int v13; // eax
  ULONG_PTR *result; // rax
  ULONG_PTR BugCheckParameter3; // [rsp+30h] [rbp-38h] BYREF
  __int64 v16; // [rsp+38h] [rbp-30h]
  int v17; // [rsp+40h] [rbp-28h]
  __int128 v18; // [rsp+44h] [rbp-24h]
  int v19; // [rsp+54h] [rbp-14h]

  v2 = RtlImageNtHeader((PVOID)BugCheckParameter2);
  v3 = 0;
  p_BugCheckParameter3 = &BugCheckParameter3;
  v5 = 0x40000000;
  v6 = 0;
  v7 = v2;
  NumberOfSections = v2->FileHeader.NumberOfSections;
  v16 = 0LL;
  BugCheckParameter3 = 0LL;
  v18 = 0LL;
  v19 = 0x40000000;
  v9 = NumberOfSections + 1;
  LODWORD(v16) = v2->OptionalHeader.SizeOfHeaders;
  v17 = v16;
  do
  {
    v10 = *((_DWORD *)p_BugCheckParameter3 + 3);
    if ( v3 != v10 )
      KeBugCheckEx(0x1Au, 0x3030209uLL, BugCheckParameter2, *((unsigned int *)p_BugCheckParameter3 + 3), v3);
    v11 = *((_DWORD *)p_BugCheckParameter3 + 4);
    if ( v11 < *((_DWORD *)p_BugCheckParameter3 + 2) )
      v11 = *((_DWORD *)p_BugCheckParameter3 + 2);
    if ( !v11 )
      KeBugCheckEx(0x1Au, 0x303020AuLL, BugCheckParameter2, (ULONG_PTR)p_BugCheckParameter3, 0LL);
    v3 = v10 + ((v11 + 4095) & 0xFFFFF000);
    v12 = v10 & 0x1FFFFF;
    if ( (*((_DWORD *)p_BugCheckParameter3 + 9) & 0xE0000000) != v5 )
    {
      if ( v12 )
        KeBugCheckEx(
          0x1Au,
          0x303020BuLL,
          BugCheckParameter2,
          (ULONG_PTR)p_BugCheckParameter3,
          *((unsigned int *)p_BugCheckParameter3 + 3));
      v5 = *((_DWORD *)p_BugCheckParameter3 + 9) & 0xE0000000;
    }
    v13 = v12 != 0 ? v6 : 0;
    v6 = v13;
    if ( (*((_DWORD *)p_BugCheckParameter3 + 9) & 0x2000000) != 0 )
    {
      v6 = 1;
    }
    else if ( v13 )
    {
      KeBugCheckEx(0x1Au, 0x303020CuLL, BugCheckParameter2, (ULONG_PTR)p_BugCheckParameter3, 0LL);
    }
    result = &BugCheckParameter3;
    if ( p_BugCheckParameter3 == &BugCheckParameter3 )
    {
      result = (ULONG_PTR *)v7->FileHeader.SizeOfOptionalHeader;
      p_BugCheckParameter3 = (ULONG_PTR *)((char *)&v7->OptionalHeader.Magic + (_QWORD)result);
    }
    else
    {
      p_BugCheckParameter3 += 5;
    }
    --v9;
  }
  while ( v9 );
  return result;
}
