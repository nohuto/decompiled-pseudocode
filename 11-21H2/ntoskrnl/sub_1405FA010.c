/*
 * XREFs of sub_1405FA010 @ 0x1405FA010
 * Callers:
 *     sub_1405F7EEC @ 0x1405F7EEC (sub_1405F7EEC.c)
 *     sub_1405FA434 @ 0x1405FA434 (sub_1405FA434.c)
 * Callees:
 *     sub_14023814C @ 0x14023814C (sub_14023814C.c)
 *     sub_1405F97E0 @ 0x1405F97E0 (sub_1405F97E0.c)
 *     sub_1405F9C9C @ 0x1405F9C9C (sub_1405F9C9C.c)
 *     sub_1405FA84C @ 0x1405FA84C (sub_1405FA84C.c)
 *     sub_1405FA9B0 @ 0x1405FA9B0 (sub_1405FA9B0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1405FA010(__int64 a1, _DWORD *a2)
{
  _WORD *v4; // rax
  __int64 v5; // r9
  __int64 result; // rax
  __int64 v7; // rdi
  unsigned int v8; // eax
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // r8

  v4 = (_WORD *)sub_1405FA84C(a1, (unsigned int)*a2);
  if ( !v4 )
    return 3221226021LL;
  v7 = ((__int64)v4 - *(_QWORD *)(a1 + 1032)) >> 1;
  if ( (*v4 & 0x1FFF) == 0 )
    goto LABEL_6;
  if ( (*(_DWORD *)(a1 + 832) & 2) != 0 )
    return 3221226021LL;
  result = sub_1405F9C9C(a1, a1 + 936, v7, v5, *(_DWORD *)(a1 + 808) + 1);
  if ( (int)result >= 0 )
  {
LABEL_6:
    v8 = sub_1405F97E0(a1, v7);
    if ( v8 != 8 )
      sub_14023814C(a1, v8, 0xFFFFFFFF);
    v9 = sub_1405FA9B0(a1, (unsigned int)v7);
    v10 = v9;
    if ( v9 )
    {
      if ( *(_DWORD *)v9 != -1 )
      {
        ExFreePoolWithTag(*(PVOID *)(v9 + 8), 0);
        ExFreePoolWithTag(*(PVOID *)(v10 + 16), 0);
      }
      *(_OWORD *)v10 = 0LL;
      *(_QWORD *)(v10 + 16) = 0LL;
      *(_DWORD *)v10 = -1;
    }
    v11 = *(_QWORD *)(a1 + 848);
    *a2 = v7;
    *(_BYTE *)(((unsigned __int64)(unsigned int)v7 >> 3) + v11) &= ~(1 << (v7 & 7));
    --*(_DWORD *)(a1 + 856);
    return 0LL;
  }
  return result;
}
