/*
 * XREFs of sub_18000CD40 @ 0x18000CD40
 * Callers:
 *     sub_18000CCE0 @ 0x18000CCE0 (sub_18000CCE0.c)
 * Callees:
 *     sub_18000D538 @ 0x18000D538 (sub_18000D538.c)
 */

void __fastcall sub_18000CD40(char **a1)
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
      sub_18000D538(v4 + 16);
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v4);
    }
    *v2++ = 0LL;
  }
  while ( v2 != v1 );
}
