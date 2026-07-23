/*
 * XREFs of sub_14040CF60 @ 0x14040CF60
 * Callers:
 *     sub_14040CF48 @ 0x14040CF48 (sub_14040CF48.c)
 *     sub_14040D144 @ 0x14040D144 (sub_14040D144.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_14040CF60(__int64 a1, __int64 a2, int a3, char a4)
{
  __int64 v4; // rbx
  unsigned __int64 v5; // r10
  __int64 v6; // r11
  _QWORD *v7; // r9
  unsigned __int64 v8; // r10
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx

  v4 = -(__int64)(a4 & 1);
  v5 = (unsigned __int64)(unsigned int)(a3 << 6) >> 3;
  if ( v5 )
  {
    v6 = a1 - a2;
    v7 = (_QWORD *)(a2 + 8);
    v8 = ((v5 - 1) >> 1) + 1;
    do
    {
      v9 = *(_QWORD *)((char *)v7 + v6 - 8);
      v10 = v4 & (v9 ^ *(v7 - 1));
      v11 = v4 & (*v7 ^ *(_QWORD *)((char *)v7 + v6));
      *(_QWORD *)((char *)v7 + v6 - 8) = v10 ^ v9;
      *(v7 - 1) ^= v10;
      *(_QWORD *)((char *)v7 + v6) ^= v11;
      *v7 ^= v11;
      v7 += 2;
      --v8;
    }
    while ( v8 );
  }
}
