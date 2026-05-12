/*
 * XREFs of sub_1C0038530 @ 0x1C0038530
 * Callers:
 *     sub_1C0008E14 @ 0x1C0008E14 (sub_1C0008E14.c)
 *     sub_1C0009130 @ 0x1C0009130 (sub_1C0009130.c)
 * Callees:
 *     sub_1C000B7F8 @ 0x1C000B7F8 (sub_1C000B7F8.c)
 *     sub_1C003F964 @ 0x1C003F964 (sub_1C003F964.c)
 *     sub_1C0050448 @ 0x1C0050448 (sub_1C0050448.c)
 */

__int64 __fastcall sub_1C0038530(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbp
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rbx
  unsigned int v9; // ebx
  __int64 result; // rax

  v2 = a2[21];
  v5 = sub_1C0050448(v2);
  v7 = *(unsigned int *)(a1 + 564);
  v8 = v5;
  if ( (v7 & 8) == 0 && (*(_BYTE *)(a1 + 108) & 4) == 0 )
  {
    LOBYTE(v7) = 1;
    LOBYTE(v6) = 1;
    KeFlushIoBuffers(a2[17], v6, v7);
  }
  v9 = *(_DWORD *)(v8 + 8);
  if ( *(_DWORD *)(v2 + 20) == 23 && *(_DWORD *)(a2[17] + 40LL) > v9 )
    v9 = *(_DWORD *)(a2[17] + 40LL);
  result = sub_1C000B7F8((__int64 *)(a1 + 760), *(_QWORD *)(a1 + 8));
  if ( (_DWORD)result == -1073741789 )
    return sub_1C003F964((int)a1 + 760, *(_QWORD *)(a1 + 8), a2[17], a2[24], v9, (__int64)sub_1C003DD30, (__int64)a2, 0);
  return result;
}
