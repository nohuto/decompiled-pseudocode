/*
 * XREFs of sub_140232528 @ 0x140232528
 * Callers:
 *     sub_1403497C0 @ 0x1403497C0 (sub_1403497C0.c)
 * Callees:
 *     sub_14034BBF0 @ 0x14034BBF0 (sub_14034BBF0.c)
 *     sub_14034F7F0 @ 0x14034F7F0 (sub_14034F7F0.c)
 */

__int64 __fastcall sub_140232528(__int64 a1, int a2, unsigned int a3, int a4, _QWORD *a5, _QWORD *a6)
{
  _QWORD *v6; // rsi
  _QWORD *v7; // rbx
  unsigned int v8; // edi
  _QWORD *v13; // rax
  __int64 result; // rax
  __int128 v15; // [rsp+30h] [rbp-48h] BYREF
  __int64 v16; // [rsp+40h] [rbp-38h]
  int v17; // [rsp+90h] [rbp+18h] BYREF

  v17 = 0;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0;
  v16 = 0LL;
  v15 = 0LL;
  if ( a3 )
  {
    do
    {
      v13 = (_QWORD *)sub_14034BBF0(a1, a2, a2, a4, (__int64)&v15, (__int64)&v17);
      if ( !v13 )
        break;
      *v13 = v6;
      v6 = v13;
      if ( !v7 )
        v7 = v13;
      ++v8;
    }
    while ( v8 < a3 );
    if ( v17 && (a4 & 1) == 0 )
      sub_14034F7F0(*(unsigned int *)(a1 + 8), &v15);
  }
  result = v8;
  *a5 = v6;
  *a6 = v7;
  return result;
}
