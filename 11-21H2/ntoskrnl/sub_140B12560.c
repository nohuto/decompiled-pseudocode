/*
 * XREFs of sub_140B12560 @ 0x140B12560
 * Callers:
 *     sub_140B110B4 @ 0x140B110B4 (sub_140B110B4.c)
 *     sub_140B114E8 @ 0x140B114E8 (sub_140B114E8.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_14067B838 @ 0x14067B838 (sub_14067B838.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     sub_140B125BC @ 0x140B125BC (sub_140B125BC.c)
 */

__int64 __fastcall sub_140B12560(void *a1)
{
  PVOID v2; // rsi
  unsigned int v3; // ebx
  int v4; // ebp
  const WCHAR *v5; // rdi
  __int64 MaximumLength; // r14
  __int64 v7; // rax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-28h] BYREF
  PVOID P; // [rsp+58h] [rbp+10h] BYREF

  P = 0LL;
  DestinationString = 0LL;
  if ( sub_14067B838(a1, L"DependOnGroup", 0, &P) < 0 )
    return 1LL;
  v2 = P;
  v3 = 1;
  v4 = *((_DWORD *)P + 3);
  v5 = (const WCHAR *)((char *)P + *((unsigned int *)P + 2));
  if ( v4 )
  {
    while ( 1 )
    {
      RtlInitUnicodeString(&DestinationString, v5);
      MaximumLength = DestinationString.MaximumLength;
      DestinationString.Length = DestinationString.MaximumLength;
      v7 = sub_140B125BC(&DestinationString);
      if ( v7 )
      {
        if ( !*(_DWORD *)(v7 + 28) )
          break;
      }
      v5 = (const WCHAR *)((char *)v5 + MaximumLength);
      v4 -= MaximumLength;
      if ( !v4 )
        goto LABEL_8;
    }
    v3 = 0;
  }
LABEL_8:
  ExFreePoolWithTag(v2, 0);
  return v3;
}
