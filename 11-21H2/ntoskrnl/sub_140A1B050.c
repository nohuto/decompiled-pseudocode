/*
 * XREFs of sub_140A1B050 @ 0x140A1B050
 * Callers:
 *     sub_140A1BC24 @ 0x140A1BC24 (sub_140A1BC24.c)
 * Callees:
 *     sub_1402511F0 @ 0x1402511F0 (sub_1402511F0.c)
 *     RtlIpv6AddressToStringW @ 0x1402527A0 (RtlIpv6AddressToStringW.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140A1B050(_WORD *a1, __int64 a2, _BYTE *a3, __int64 a4, _BYTE *a5)
{
  unsigned int v9; // ebx
  __int64 Pool2; // rax
  __int64 v11; // rax
  __int64 v12; // rax

  if ( *a1 != 23 )
  {
    v9 = -1073741503;
    goto LABEL_14;
  }
  if ( a2 && a3 )
  {
    *(_WORD *)(a2 + 2) = 110;
    Pool2 = ExAllocatePool2(256LL, 110LL, 1799447891LL);
    *(_QWORD *)(a2 + 8) = Pool2;
    if ( !Pool2 )
    {
      v9 = -1073741801;
      goto LABEL_15;
    }
    *a3 = 1;
    *(_WORD *)a2 = 2
                 * ((__int64)((unsigned int)RtlIpv6AddressToStringW(
                                              (const struct in6_addr *)(a1 + 4),
                                              *(PWSTR *)(a2 + 8))
                            - *(_DWORD *)(a2 + 8)) >> 1);
  }
  if ( !a4 || !a5 )
    return 0;
  *(_WORD *)(a4 + 2) = 16;
  v11 = ExAllocatePool2(256LL, 16LL, 1799447891LL);
  *(_QWORD *)(a4 + 8) = v11;
  if ( !v11 )
  {
    v9 = -1073741801;
    goto LABEL_14;
  }
  *a5 = 1;
  if ( (int)sub_1402511F0(*(wchar_t **)(a4 + 8), 8LL, L"%d", (unsigned __int16)__ROL2__(a1[1], 8)) >= 0 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( *(_WORD *)(*(_QWORD *)(a4 + 8) + 2 * v12) );
    *(_WORD *)a4 = 2 * v12;
    return 0;
  }
  v9 = -1073741811;
LABEL_14:
  if ( a3 )
  {
LABEL_15:
    if ( *a3 )
    {
      *a3 = 0;
      ExFreePoolWithTag(*(PVOID *)(a2 + 8), 0);
    }
  }
  if ( a5 && *a5 )
  {
    *a5 = 0;
    ExFreePoolWithTag(*(PVOID *)(a4 + 8), 0);
  }
  return v9;
}
