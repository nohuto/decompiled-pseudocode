/*
 * XREFs of sub_1402D990C @ 0x1402D990C
 * Callers:
 *     sub_1402D9830 @ 0x1402D9830 (sub_1402D9830.c)
 *     sub_140343BA0 @ 0x140343BA0 (sub_140343BA0.c)
 *     sub_1403A1620 @ 0x1403A1620 (sub_1403A1620.c)
 *     sub_1408331DC @ 0x1408331DC (sub_1408331DC.c)
 *     sub_14099D834 @ 0x14099D834 (sub_14099D834.c)
 * Callees:
 *     sub_140354698 @ 0x140354698 (sub_140354698.c)
 *     memset @ 0x140435E00 (memset.c)
 */

unsigned __int64 __fastcall sub_1402D990C(unsigned __int16 *a1)
{
  size_t v2; // r8
  unsigned __int64 result; // rax
  bool v4; // cf
  unsigned int v5; // r10d
  int v6; // r10d
  int v7; // r11d
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // [rsp+20h] [rbp-18h] BYREF
  int v11; // [rsp+28h] [rbp-10h]
  int v12; // [rsp+2Ch] [rbp-Ch]
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  v2 = 8LL * *a1;
  v13 = 0LL;
  result = (unsigned __int64)memset(a1 + 4, 0, v2);
  v4 = word_140D05000 != 0;
  *a1 = 1;
  v5 = 0;
  if ( v4 )
  {
    do
    {
      v12 = 0;
      v10 = qword_140D31700[v5];
      v11 = *(_DWORD *)(v10 + 16);
      while ( !(unsigned int)sub_140354698(&v10, &v13) )
      {
        v8 = *(unsigned __int16 *)(v13 + 136);
        v9 = *(_QWORD *)(v13 + 64);
        if ( *a1 > (unsigned __int16)v8 )
          goto LABEL_7;
        if ( a1[1] > (unsigned __int16)v8 )
        {
          *a1 = v7 + v8;
LABEL_7:
          *(_QWORD *)&a1[4 * v8 + 4] |= v9;
        }
      }
      result = (unsigned __int16)word_140D05000;
      v5 = v7 + v6;
    }
    while ( v5 < (unsigned __int16)word_140D05000 );
  }
  return result;
}
