/*
 * XREFs of SdbpEscapeQuoteInMsg @ 0x180091DAC
 * Callers:
 *     SdbShouldBlockPackageLaunch @ 0x1800336CC (SdbShouldBlockPackageLaunch.c)
 * Callees:
 *     AslStringDuplicate @ 0x180099128 (AslStringDuplicate.c)
 */

_WORD *__fastcall SdbpEscapeQuoteInMsg(__int16 *a1)
{
  __int64 v2; // rcx
  __int64 v3; // r9
  __int16 v5; // dx
  __int16 *v6; // r8
  __int64 v7; // rax
  bool v8; // zf
  _WORD *Heap; // rax
  _WORD *v10; // rcx
  _WORD *v11; // rdx
  __int16 v12; // ax
  _WORD *v13; // r9
  _WORD *v14; // r8
  __int16 v15; // ax
  __int64 v16; // [rsp+30h] [rbp+8h] BYREF

  v16 = 0LL;
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
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 2 * (v3 + v7) + 2);
    v10 = Heap;
    if ( Heap )
    {
      v11 = Heap;
      v12 = *a1;
      if ( *a1 )
      {
        v13 = v11;
        v14 = v11;
        do
        {
          if ( v12 == 34 )
          {
            *v10 = 92;
            v10 = v13 + 1;
            v14 = v13 + 1;
          }
          v15 = *a1++;
          *v10 = v15;
          v10 = v14 + 1;
          v13 = ++v14;
          v12 = *a1;
        }
        while ( *a1 );
      }
      *v10 = 0;
      return v11;
    }
  }
  else
  {
LABEL_15:
    AslStringDuplicate(&v16, a1);
    return (_WORD *)v16;
  }
  return v10;
}
