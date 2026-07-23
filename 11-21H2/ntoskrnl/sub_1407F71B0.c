/*
 * XREFs of sub_1407F71B0 @ 0x1407F71B0
 * Callers:
 *     sub_140260144 @ 0x140260144 (sub_140260144.c)
 *     sub_140375974 @ 0x140375974 (sub_140375974.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406EC288 @ 0x1406EC288 (sub_1406EC288.c)
 *     sub_1407F7238 @ 0x1407F7238 (sub_1407F7238.c)
 */

__int64 __fastcall sub_1407F71B0(__int64 a1, void *a2, __int64 a3, unsigned int a4, unsigned int a5, int a6)
{
  unsigned int v6; // edi
  unsigned int *i; // r8
  unsigned int v10; // r9d
  int v11; // r9d
  __int64 result; // rax

  v6 = a4;
  for ( i = *(unsigned int **)(a1 + 8LL * a4 + 16736); ; i = *(unsigned int **)(a1 + 8LL * a5 + 16736) )
  {
    if ( v6 == a5 || a5 == 16 )
    {
      v11 = 1;
    }
    else
    {
      v10 = *i;
      v11 = (i[51] & 0x20) != 0 ? v10 >> 1 : v10 - (v10 >> 6);
    }
    result = sub_1407F7238(a1, a6, v6, v11, (__int64)a2);
    if ( !result )
      break;
    sub_1406EC288(a1, (unsigned __int64)a2);
    memset(a2, 0, 0x50uLL);
    if ( v6 == a5 || a5 >= 0x10 )
      return 3221226021LL;
    v6 = a5;
  }
  return result;
}
