/*
 * XREFs of sub_140601CA0 @ 0x140601CA0
 * Callers:
 *     sub_140601C10 @ 0x140601C10 (sub_140601C10.c)
 *     sub_140601C30 @ 0x140601C30 (sub_140601C30.c)
 *     sub_140A9B6C0 @ 0x140A9B6C0 (sub_140A9B6C0.c)
 * Callees:
 *     sub_140A9C124 @ 0x140A9C124 (sub_140A9C124.c)
 *     sub_140A9C190 @ 0x140A9C190 (sub_140A9C190.c)
 */

__int64 __fastcall sub_140601CA0(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rdx

  result = sub_140A9C124();
  v3 = result;
  if ( result )
  {
    *(_DWORD *)(result + 56) |= 0x1000u;
    v4 = *(_DWORD *)(a1 + 16);
    if ( (v4 & 0x10) != 0 && (v4 & 0x40) != 0 && (v4 & 0x20) != 0 )
    {
      v5 = *(_QWORD *)(a1 + 184);
      if ( (unsigned __int8)(*(_BYTE *)(v5 - 72) - 14) <= 1u )
      {
        *(_QWORD *)(v3 + 200) = *(_QWORD *)(a1 + 24);
        *(_DWORD *)(v3 + 208) = *(_DWORD *)(v5 - 64);
      }
    }
    return sub_140A9C190(v3);
  }
  return result;
}
