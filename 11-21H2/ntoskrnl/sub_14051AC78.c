/*
 * XREFs of sub_14051AC78 @ 0x14051AC78
 * Callers:
 *     sub_140528E00 @ 0x140528E00 (sub_140528E00.c)
 *     sub_140528E60 @ 0x140528E60 (sub_140528E60.c)
 * Callees:
 *     sub_14051AEFC @ 0x14051AEFC (sub_14051AEFC.c)
 *     sub_140527BE0 @ 0x140527BE0 (sub_140527BE0.c)
 *     sub_14052A328 @ 0x14052A328 (sub_14052A328.c)
 */

__int64 __fastcall sub_14051AC78(ULONG_PTR a1, __int64 a2, unsigned __int64 a3)
{
  __int64 result; // rax
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rbx
  __int64 i; // rax
  __int64 v10; // rbp
  unsigned __int64 v11; // r14
  __int64 v12; // rcx
  __int64 v13; // r14
  _QWORD v14[5]; // [rsp+20h] [rbp-28h] BYREF

  result = 0LL;
  if ( byte_140C4BCBC )
    return sub_140527BE0(a1);
  v7 = 0LL;
  if ( a3 )
  {
    do
    {
      v8 = v7 + 1;
      for ( i = *(_QWORD *)(a2 + 8 * v7); v8 < a3 && *(_QWORD *)(a2 + 8 * v8) == i + 1; i = *(_QWORD *)(a2 + 8 * v8++) )
        ;
      v10 = *(_QWORD *)(a2 + 8 * v7) << 12;
      v11 = v8 - v7;
      v12 = *(_QWORD *)(a1 + 40);
      v13 = v11 << 12;
      v14[0] = v13;
      result = sub_14052A328(v12, v14, v10);
      if ( (int)result < 0 )
        break;
      result = sub_14051AEFC(a1, v10, v13);
      if ( (int)result < 0 )
        break;
      v7 = v8;
    }
    while ( v8 < a3 );
  }
  return result;
}
