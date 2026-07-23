/*
 * XREFs of sub_140925070 @ 0x140925070
 * Callers:
 *     sub_1409246D8 @ 0x1409246D8 (sub_1409246D8.c)
 * Callees:
 *     sub_140925338 @ 0x140925338 (sub_140925338.c)
 */

__int64 __fastcall sub_140925070(__int64 a1, int a2, _DWORD *a3, unsigned int *a4, _DWORD *a5)
{
  __int64 v5; // rax
  int v6; // edi
  int v7; // ebp
  int v8; // r14d
  unsigned int v11; // ebx
  unsigned int v12; // esi
  __int64 result; // rax
  _DWORD *v14; // rax
  _DWORD v15[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v16; // [rsp+28h] [rbp-40h]
  __int64 v17; // [rsp+30h] [rbp-38h]
  __int64 v18; // [rsp+70h] [rbp+8h] BYREF

  v5 = *(_QWORD *)(a1 + 8);
  v6 = 0;
  v18 = 0LL;
  v7 = 0;
  v16 = v5;
  v8 = 0;
  v17 = *(_QWORD *)(a1 + 16);
  v15[0] = 512;
  v11 = 0;
  v15[1] = a2;
  while ( 1 )
  {
    v12 = v11;
    result = sub_140925338(v15, &v18);
    if ( (_DWORD)result == -2147483622 )
      break;
    if ( (int)result < 0 )
      return result;
    ++v6;
    v8 = v15[0];
    v11 = *(_DWORD *)(v18 + 16);
    v7 = *(_DWORD *)(v18 + 12);
    if ( v11 <= v12 )
      v11 = v12;
  }
  if ( !v6 )
    return 2147483682LL;
  v14 = a5;
  *a4 = v11;
  *a3 = v7;
  *v14 = v8;
  return 0LL;
}
