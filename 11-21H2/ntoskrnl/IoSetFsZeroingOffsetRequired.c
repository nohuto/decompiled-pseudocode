/*
 * XREFs of IoSetFsZeroingOffsetRequired @ 0x140559460
 * Callers:
 *     <none>
 * Callees:
 *     sub_14020C0F0 @ 0x14020C0F0 (sub_14020C0F0.c)
 *     sub_14020C420 @ 0x14020C420 (sub_14020C420.c)
 *     sub_140459D9C @ 0x140459D9C (sub_140459D9C.c)
 */

__int64 __fastcall IoSetFsZeroingOffsetRequired(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v6; // r8
  __int64 v7; // r9
  _WORD *v8; // rax

  if ( sub_14020C0F0(a1, 4u) )
    return 3221225505LL;
  if ( !sub_140459D9C(v3, v2, v4) )
    return 3221225659LL;
  v8 = sub_14020C420(a1, 4, v6, v7);
  if ( !v8 )
    return 3221225626LL;
  *((_DWORD *)v8 + 10) = 0;
  return 0LL;
}
