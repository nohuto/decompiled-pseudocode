/*
 * XREFs of sub_18000D508 @ 0x18000D508
 * Callers:
 *     sub_18000D45C @ 0x18000D45C (sub_18000D45C.c)
 * Callees:
 *     sub_18000D89C @ 0x18000D89C (sub_18000D89C.c)
 */

void __fastcall sub_18000D508(char **a1)
{
  char **v1; // rbp
  char **v2; // rdi
  char *v3; // rsi
  char *v4; // rbx
  HANDLE ProcessHeap; // rax

  v1 = a1 + 10;
  v2 = a1;
  do
  {
    v3 = *v2;
    while ( v3 )
    {
      v4 = v3;
      v3 = (char *)*((_QWORD *)v3 + 1);
      sub_18000D89C(v4 + 16);
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v4);
    }
    *v2++ = 0LL;
  }
  while ( v2 != v1 );
}
