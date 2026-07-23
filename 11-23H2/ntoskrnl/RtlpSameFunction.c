/*
 * XREFs of RtlpSameFunction @ 0x1405B1F30
 * Callers:
 *     RtlpxVirtualUnwind @ 0x1402A5D10 (RtlpxVirtualUnwind.c)
 *     sub_140B19730 @ 0x140B19730 (sub_140B19730.c)
 * Callees:
 *     RtlLookupFunctionEntry @ 0x1402A5720 (RtlLookupFunctionEntry.c)
 *     RtlpLookupFunctionEntryForStackWalks @ 0x1402A5A80 (RtlpLookupFunctionEntryForStackWalks.c)
 *     RtlpLookupPrimaryFunctionEntry @ 0x1403C5080 (RtlpLookupPrimaryFunctionEntry.c)
 */

_BYTE *__fastcall RtlpSameFunction(_BYTE *a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rbx
  _BYTE *v5; // rbp
  _BYTE *v6; // rax
  unsigned __int64 v7; // rdi
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+30h] [rbp-18h]
  unsigned __int64 ImageBase; // [rsp+60h] [rbp+18h] BYREF

  v3 = 0LL;
  ImageBase = 0LL;
  v5 = RtlpLookupPrimaryFunctionEntry(a1, a2, a3);
  if ( a3 > 0x7FFFFFFEFFFFLL )
  {
    v6 = RtlLookupFunctionEntry(a3, &ImageBase, 0LL);
    v7 = ImageBase;
    if ( v6 )
      goto LABEL_5;
    return 0LL;
  }
  v9 = 0LL;
  v10 = 0LL;
  v6 = RtlpLookupFunctionEntryForStackWalks(a3, (__int64)&v9);
  if ( !v6 )
    return 0LL;
  v7 = *((_QWORD *)&v9 + 1);
LABEL_5:
  if ( *(_DWORD *)v5 == *(_DWORD *)RtlpLookupPrimaryFunctionEntry(v6, v7, a3) )
    return v5;
  return (_BYTE *)v3;
}
