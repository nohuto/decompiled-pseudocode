/*
 * XREFs of RtlRunEncodeUnicodeString @ 0x1800F1A10
 * Callers:
 *     <none>
 * Callees:
 *     ZwQuerySystemTime @ 0x18009F930 (ZwQuerySystemTime.c)
 */

__int64 __fastcall RtlRunEncodeUnicodeString(char *a1, unsigned __int16 *a2)
{
  char v2; // r8
  __int64 result; // rax
  unsigned int i; // ecx
  unsigned int v7; // r9d
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  if ( !*a1 )
  {
    result = ZwQuerySystemTime(&v10);
    v2 = BYTE1(v10);
    for ( i = 1; ; ++i )
    {
      *a1 = v2;
      if ( v2 || i >= 8 )
        break;
      result = i;
      v2 = *((_BYTE *)&v10 + i);
    }
    if ( !v2 )
    {
      *a1 = 1;
      v2 = 1;
    }
  }
  if ( *a2 )
  {
    result = *((_QWORD *)a2 + 1);
    *(_BYTE *)result ^= v2 | 0x43;
  }
  v7 = 1;
  if ( *a2 > 1u )
  {
    do
    {
      v8 = v7 - 1;
      v9 = v7++;
      *(_BYTE *)(v9 + *((_QWORD *)a2 + 1)) ^= *a1 ^ *(_BYTE *)(v8 + *((_QWORD *)a2 + 1));
      result = *a2;
    }
    while ( v7 < (unsigned int)result );
  }
  return result;
}
