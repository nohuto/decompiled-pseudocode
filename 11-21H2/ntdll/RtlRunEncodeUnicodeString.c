/*
 * XREFs of RtlRunEncodeUnicodeString @ 0x1800F1FB0
 * Callers:
 *     <none>
 * Callees:
 *     ZwQuerySystemTime @ 0x1800A4BB0 (ZwQuerySystemTime.c)
 */

__int64 __fastcall RtlRunEncodeUnicodeString(char *a1, unsigned __int16 *a2)
{
  char v2; // r8
  char v5; // al
  unsigned int v6; // r8d
  __int64 v7; // rax
  __int64 result; // rax
  unsigned int i; // r9d
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  if ( !*a1 )
  {
    ZwQuerySystemTime(&v12);
    v5 = BYTE1(v12);
    v6 = 1;
    *a1 = BYTE1(v12);
    if ( !v5 )
    {
      do
      {
        if ( v6 >= 8 )
          break;
        v7 = v6++;
        *a1 |= *((_BYTE *)&v12 + v7);
      }
      while ( !*a1 );
    }
    v2 = *a1;
    if ( !*a1 )
    {
      *a1 = 1;
      v2 = 1;
    }
  }
  result = *a2;
  if ( (_WORD)result )
  {
    **((_BYTE **)a2 + 1) ^= v2 | 0x43;
    result = *a2;
  }
  for ( i = 1; i < (unsigned int)result; result = *a2 )
  {
    v10 = i - 1;
    v11 = i++;
    *(_BYTE *)(v11 + *((_QWORD *)a2 + 1)) ^= *a1 ^ *(_BYTE *)(v10 + *((_QWORD *)a2 + 1));
  }
  return result;
}
