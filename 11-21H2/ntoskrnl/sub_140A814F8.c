/*
 * XREFs of sub_140A814F8 @ 0x140A814F8
 * Callers:
 *     sub_140AA08D8 @ 0x140AA08D8 (sub_140AA08D8.c)
 * Callees:
 *     sub_1402B2E00 @ 0x1402B2E00 (sub_1402B2E00.c)
 *     sub_140A8C924 @ 0x140A8C924 (sub_140A8C924.c)
 */

__int64 __fastcall sub_140A814F8(ULONG_PTR BugCheckParameter2)
{
  unsigned __int64 *v1; // rbx
  __int16 v2; // r14
  ULONG_PTR v3; // rbp
  ULONG_PTR v5; // r15
  ULONG_PTR v6; // rdi
  __int64 result; // rax

  v1 = (unsigned __int64 *)(BugCheckParameter2 + 48);
  v2 = *(_WORD *)(BugCheckParameter2 + 10) & 0x800;
  v3 = (((*(_DWORD *)(BugCheckParameter2 + 32) + *(_DWORD *)(BugCheckParameter2 + 44)) & 0xFFF)
      + (unsigned __int64)*(unsigned int *)(BugCheckParameter2 + 40)
      + 4095) >> 12;
  v5 = BugCheckParameter2 + 48 + 8 * v3;
  do
  {
    v6 = *v1;
    result = sub_1402B2E00(*v1);
    if ( v2 )
    {
      if ( !(_DWORD)result )
        goto LABEL_8;
    }
    else if ( !(_DWORD)result )
    {
      sub_140A8C924(0xC4u, 0x89uLL, BugCheckParameter2, (ULONG_PTR)v1, v6);
      v6 = *v1;
    }
    result = 48 * v6;
    if ( !*(_WORD *)(48 * v6 - 0x21FFFFFFFFE0LL) )
      result = sub_140A8C924(0xC4u, 0x85uLL, BugCheckParameter2, v3, 0xAAAAAAAAAAAAAAABuLL * (result >> 4));
LABEL_8:
    ++v1;
  }
  while ( (unsigned __int64)v1 < v5 );
  return result;
}
