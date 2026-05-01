/*
 * XREFs of SdbpEscapeQuoteInMsg @ 0x180096C80
 * Callers:
 *     SdbShouldBlockPackageLaunch @ 0x180030400 (SdbShouldBlockPackageLaunch.c)
 * Callees:
 *     AslStringDuplicate @ 0x18009E710 (AslStringDuplicate.c)
 */

_WORD *__fastcall SdbpEscapeQuoteInMsg(_WORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // r9
  _WORD *result; // rax
  __int16 v5; // dx
  _WORD *v6; // r8
  __int64 v7; // rax
  bool v8; // zf
  __int16 v9; // cx
  _WORD *v10; // r8
  _WORD *v11; // rdx
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  v12 = 0LL;
  v2 = 0LL;
  v3 = 0LL;
  if ( !a1 )
    return 0LL;
  v5 = *a1;
  v6 = a1;
  if ( !*a1 )
    goto LABEL_15;
  do
  {
    ++v3;
    v7 = v2 + 1;
    v8 = v5 == 34;
    v5 = *++v6;
    if ( !v8 )
      v7 = v2;
    v2 = v7;
  }
  while ( v5 );
  if ( v7 )
  {
    result = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 2 * (v3 + v7) + 2);
    if ( result )
    {
      v9 = *a1;
      v10 = result;
      if ( *a1 )
      {
        v11 = result;
        do
        {
          if ( v9 == 34 )
          {
            *result = 92;
            result = v11 + 1;
            v9 = *a1;
            ++v11;
          }
          ++a1;
          *result = v9;
          result = ++v11;
          v9 = *a1;
        }
        while ( *a1 );
      }
      *result = 0;
      return v10;
    }
  }
  else
  {
LABEL_15:
    AslStringDuplicate(&v12, a1);
    return (_WORD *)v12;
  }
  return result;
}
