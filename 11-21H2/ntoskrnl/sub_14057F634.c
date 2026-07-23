/*
 * XREFs of sub_14057F634 @ 0x14057F634
 * Callers:
 *     sub_14062F0B8 @ 0x14062F0B8 (sub_14062F0B8.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_14057F634(unsigned __int16 **a1, __int64 a2, unsigned int a3, _DWORD *a4)
{
  unsigned int v4; // esi
  unsigned __int16 *v5; // rbp
  unsigned int v7; // edi
  __int64 v8; // r15
  _QWORD *v9; // r14
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 result; // rax

  v4 = a3;
  v5 = *a1;
  if ( a3 > (unsigned __int16)word_140D05000 )
    v4 = (unsigned __int16)word_140D05000;
  v7 = 0;
  if ( v4 )
  {
    v8 = 0LL;
    v9 = (_QWORD *)(a2 + 20);
    do
    {
      memset((char *)v9 - 20, 0, 0x4CuLL);
      v10 = *((_QWORD *)v5 + 2);
      *((_DWORD *)v9 - 5) = ++v7;
      *(v9 - 2) = *(_QWORD *)(v8 + v10 + 22608);
      *v9 = *(_QWORD *)(v8 + v10 + 22560);
      v9 = (_QWORD *)((char *)v9 + 76);
      *(_QWORD *)((char *)v9 - 84) = *(_QWORD *)(v8 + v10 + 22568);
      *(_QWORD *)((char *)v9 - 60) = *(_QWORD *)(v8 + v10 + 2144);
      *(_QWORD *)((char *)v9 - 68) = *(_QWORD *)(v8 + v10 + 2152);
      *(_QWORD *)((char *)v9 - 44) = *(_QWORD *)(v8 + v10 + 1072);
      *(_QWORD *)((char *)v9 - 52) = *(_QWORD *)(v8 + v10 + 1080);
      v11 = *(_QWORD *)(v8 + v10);
      v8 += 24512LL;
      *(_QWORD *)((char *)v9 - 28) = v11;
      *(_QWORD *)((char *)v9 - 36) = *(_QWORD *)(v8 + v10 - 24504);
    }
    while ( v7 < v4 );
  }
  result = v7;
  *a4 = *v5;
  return result;
}
