/*
 * XREFs of sub_14069FC64 @ 0x14069FC64
 * Callers:
 *     sub_14069E98C @ 0x14069E98C (sub_14069E98C.c)
 *     sub_14069FC10 @ 0x14069FC10 (sub_14069FC10.c)
 *     sub_14090BC6C @ 0x14090BC6C (sub_14090BC6C.c)
 *     sub_14090C34C @ 0x14090C34C (sub_14090C34C.c)
 *     sub_140912608 @ 0x140912608 (sub_140912608.c)
 *     sub_140913964 @ 0x140913964 (sub_140913964.c)
 *     sub_140913E28 @ 0x140913E28 (sub_140913E28.c)
 * Callees:
 *     sub_14069FCD0 @ 0x14069FCD0 (sub_14069FCD0.c)
 */

__int64 __fastcall sub_14069FC64(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v6; // eax
  __int64 v7; // rdx
  int v8; // esi
  __int64 result; // rax

  v6 = sub_14069FCD0(a1 + 248, a2, a4);
  LOBYTE(v7) = 1;
  v8 = v6;
  result = sub_14069FCD0(a1 + 264, v7, a4);
  if ( v8 < 0 )
  {
    if ( v8 != -1073741267 )
      return (unsigned int)v8;
    if ( (int)result >= 0 )
      return 3221226029LL;
  }
  else if ( (int)result >= 0 )
  {
    return 0LL;
  }
  if ( (_DWORD)result == -1073741267 )
    return 3221226029LL;
  return result;
}
