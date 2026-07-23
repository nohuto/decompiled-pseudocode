/*
 * XREFs of HvlQueryStartedProcessors @ 0x140543D70
 * Callers:
 *     sub_1402E1C80 @ 0x1402E1C80 (sub_1402E1C80.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvlQueryStartedProcessors(unsigned int *a1, int *a2)
{
  __int64 result; // rax
  unsigned int v5; // edx
  unsigned int v6; // ecx
  unsigned int v7; // r10d
  int *v8; // rcx
  __int64 v9; // rdx
  int v10; // eax

  if ( (dword_140D0688C & 2) == 0 )
    return 3221225506LL;
  v5 = 0;
  if ( !a1 )
    return 3221225485LL;
  if ( a2 )
  {
    v6 = *a1;
    v7 = v6;
    if ( (unsigned int)NumOfElements < v6 )
      v7 = NumOfElements;
    if ( v7 )
    {
      v8 = dword_140D125E4;
      v9 = v7;
      do
      {
        v10 = *v8;
        v8 += 30;
        *a2++ = v10;
        --v9;
      }
      while ( v9 );
      v6 = *a1;
    }
    v5 = v6 < (unsigned int)NumOfElements ? 0xC0000023 : 0;
  }
  result = v5;
  *a1 = NumOfElements;
  return result;
}
