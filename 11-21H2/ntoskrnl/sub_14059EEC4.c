/*
 * XREFs of sub_14059EEC4 @ 0x14059EEC4
 * Callers:
 *     sub_14059F6F4 @ 0x14059F6F4 (sub_14059F6F4.c)
 *     sub_14059FC8C @ 0x14059FC8C (sub_14059FC8C.c)
 * Callees:
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 */

unsigned int *__fastcall sub_14059EEC4(__int64 a1, unsigned int a2)
{
  unsigned int *result; // rax
  __int64 v5; // r9
  unsigned int *v6; // rdx
  unsigned int v7; // eax
  unsigned int v8; // r10d
  _QWORD *v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rax

  result = (unsigned int *)sub_1402828F0(64, 48LL * (unsigned int)(*(_DWORD *)(a1 + 4) - 1) + 56, 0x3346694Du);
  v5 = 0LL;
  v6 = result;
  if ( result )
  {
    v7 = *(_DWORD *)(a1 + 4);
    v8 = 0;
    *v6 = v7;
    if ( v7 )
    {
      v9 = v6 + 12;
      do
      {
        v10 = v8++;
        v10 *= 2LL;
        *(v9 - 1) = *(_QWORD *)(a1 + 8 * v10 + 8);
        v11 = *(_QWORD *)(a1 + 8 * v10 + 16);
        *((_DWORD *)v9 - 4) = v5;
        v5 += v11;
        *v9 = v11;
        v9 += 6;
      }
      while ( v8 < *v6 );
    }
    v6[1] = a2;
    return v6;
  }
  return result;
}
