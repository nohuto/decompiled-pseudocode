/*
 * XREFs of sub_140268AB0 @ 0x140268AB0
 * Callers:
 *     sub_140267E78 @ 0x140267E78 (sub_140267E78.c)
 *     sub_1402680C0 @ 0x1402680C0 (sub_1402680C0.c)
 *     sub_14026873C @ 0x14026873C (sub_14026873C.c)
 *     sub_1405B2400 @ 0x1405B2400 (sub_1405B2400.c)
 *     sub_140B08B40 @ 0x140B08B40 (sub_140B08B40.c)
 * Callees:
 *     KeInvalidateRangeAllCachesNoIpi @ 0x140268B50 (KeInvalidateRangeAllCachesNoIpi.c)
 *     sub_1402BEDD0 @ 0x1402BEDD0 (sub_1402BEDD0.c)
 *     sub_1402CC7C0 @ 0x1402CC7C0 (sub_1402CC7C0.c)
 *     sub_1403D3284 @ 0x1403D3284 (sub_1403D3284.c)
 */

_UNKNOWN **__fastcall sub_140268AB0(__int64 a1, __int64 a2, int a3)
{
  _UNKNOWN **result; // rax
  __int64 v5; // rbp
  unsigned int v7; // esi
  __int64 v8; // rbx
  __int64 v9; // rdx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  v5 = a2;
  if ( a2 )
  {
    v7 = -805306366;
    if ( a3 != 2 )
      v7 = -1073741824;
    do
    {
      v8 = sub_1402CC7C0(a1, 0LL, v7);
      KeInvalidateRangeAllCachesNoIpi(v8, 4096LL);
      LOBYTE(v9) = 17;
      result = (_UNKNOWN **)sub_1402BEDD0(v8, v9, 0x80000000LL);
      ++a1;
      --v5;
    }
    while ( v5 );
  }
  if ( a3 == 3 )
    return (_UNKNOWN **)sub_1403D3284();
  return result;
}
