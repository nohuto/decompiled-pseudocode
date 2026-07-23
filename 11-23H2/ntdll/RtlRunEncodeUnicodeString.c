/*
 * XREFs of RtlRunEncodeUnicodeString @ 0x1800F2E20
 * Callers:
 *     <none>
 * Callees:
 *     ZwQuerySystemTime @ 0x1800A19F0 (ZwQuerySystemTime.c)
 */

void __cdecl RtlRunEncodeUnicodeString(PUCHAR Seed, PUNICODE_STRING String)
{
  UCHAR v2; // r8
  unsigned int i; // ecx
  unsigned int j; // r9d
  __int64 v7; // rax
  __int64 v8; // rdx
  LARGE_INTEGER SystemTime; // [rsp+30h] [rbp+8h] BYREF

  v2 = *Seed;
  if ( !*Seed )
  {
    ZwQuerySystemTime(&SystemTime);
    v2 = BYTE1(SystemTime.LowPart);
    for ( i = 1; ; ++i )
    {
      *Seed = v2;
      if ( v2 || i >= 8 )
        break;
      v2 = *((_BYTE *)&SystemTime.LowPart + i);
    }
    if ( !v2 )
    {
      *Seed = 1;
      v2 = 1;
    }
  }
  if ( String->Length )
    *(_BYTE *)String->Buffer ^= v2 | 0x43;
  for ( j = 1; j < String->Length; *((_BYTE *)String->Buffer + v8) ^= *Seed ^ *((_BYTE *)String->Buffer + v7) )
  {
    v7 = j - 1;
    v8 = j++;
  }
}
