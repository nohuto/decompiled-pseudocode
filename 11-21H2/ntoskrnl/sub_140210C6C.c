/*
 * XREFs of sub_140210C6C @ 0x140210C6C
 * Callers:
 *     sub_140210C14 @ 0x140210C14 (sub_140210C14.c)
 *     sub_1402447EC @ 0x1402447EC (sub_1402447EC.c)
 *     sub_14028FFD0 @ 0x14028FFD0 (sub_14028FFD0.c)
 *     sub_14035EE9C @ 0x14035EE9C (sub_14035EE9C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140210C6C(__int64 a1, __int64 a2, char a3)
{
  _QWORD *v3; // r9
  _QWORD *v4; // rax
  __int64 result; // rax

  if ( (*(_DWORD *)(a2 + 120) & 0x400000) != 0 )
    _InterlockedAnd(*(volatile signed __int32 **)(a2 + 968), 0xFFFBFFFF);
  v3 = *(_QWORD **)(a2 + 216);
  v4 = *(_QWORD **)(a2 + 224);
  if ( v3[1] != a2 + 216 || *v4 != a2 + 216 )
    __fastfail(3u);
  *v4 = v3;
  v3[1] = v4;
  if ( v4 == v3 )
    *(_DWORD *)(a1 + 8) ^= 1 << a3;
  --*(_DWORD *)(a1 + 672);
  result = *(unsigned int *)(a2 + 1648);
  *(_QWORD *)(a1 + 680) -= result;
  return result;
}
