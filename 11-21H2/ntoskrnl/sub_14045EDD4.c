/*
 * XREFs of sub_14045EDD4 @ 0x14045EDD4
 * Callers:
 *     RtlUpcaseUnicodeToOemN @ 0x1407598D0 (RtlUpcaseUnicodeToOemN.c)
 *     RtlUpcaseUnicodeToMultiByteN @ 0x140759990 (RtlUpcaseUnicodeToMultiByteN.c)
 * Callees:
 *     PsGetThreadServerSilo @ 0x140347690 (PsGetThreadServerSilo.c)
 *     sub_1403477B0 @ 0x1403477B0 (sub_1403477B0.c)
 */

__int64 __fastcall sub_14045EDD4(_BYTE *a1, unsigned int a2, _DWORD *a3, unsigned __int16 *a4, unsigned int a5)
{
  _BYTE *v5; // rbx
  int v6; // r15d
  _DWORD *v8; // rsi
  __int64 ThreadServerSilo; // rax
  _QWORD *v11; // r10
  unsigned int v12; // r11d
  __int64 v13; // r12
  __int64 v14; // r14
  __int64 v15; // r13
  __int64 v16; // rsi
  __int64 v17; // rax
  unsigned __int16 v18; // dx
  __int64 v19; // rcx
  unsigned __int16 v20; // dx
  __int16 v21; // r8
  unsigned int v22; // eax
  int v24; // [rsp+20h] [rbp-48h]

  v5 = a1;
  v24 = (int)a1;
  v6 = (int)a1;
  v8 = a3;
  ThreadServerSilo = PsGetThreadServerSilo((__int64)KeGetCurrentThread());
  v11 = &unk_140D32580;
  if ( ThreadServerSilo )
    v11 = *(_QWORD **)(ThreadServerSilo + 1464);
  v12 = a5;
  v13 = v11[137];
  v14 = v11[138];
  v15 = v11[151];
  if ( a5 )
  {
    v16 = v11[154];
    do
    {
      if ( !a2 )
        break;
      v17 = *a4++;
      v18 = *(_WORD *)(v14 + 2 * v17);
      v19 = *(unsigned __int16 *)(v15 + 2 * ((unsigned __int64)v18 >> 8));
      if ( (_WORD)v19 )
        v20 = *(_WORD *)(v11[140] + 2 * ((unsigned __int8)v18 + v19));
      else
        v20 = *(_WORD *)(v13 + 2LL * (unsigned __int8)v18);
      v21 = *(_WORD *)(v14 + 2LL * sub_1403477B0(v16, v20));
      if ( HIBYTE(v21) )
      {
        v22 = a2--;
        if ( v22 < 2 )
          break;
        *v5++ = HIBYTE(v21);
      }
      *v5 = v21;
      --a2;
      ++v5;
      --v12;
    }
    while ( v12 );
    v8 = a3;
    v6 = v24;
  }
  if ( v8 )
    *v8 = (_DWORD)v5 - v6;
  return a2 < v12 ? 0x80000005 : 0;
}
