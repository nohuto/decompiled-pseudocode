/*
 * XREFs of sub_1402F3510 @ 0x1402F3510
 * Callers:
 *     ObSetHandleAttributes @ 0x1407A1B10 (ObSetHandleAttributes.c)
 *     sub_1407A1CE8 @ 0x1407A1CE8 (sub_1407A1CE8.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1402F3510(__int64 a1, unsigned int a2, char a3)
{
  int v3; // eax
  unsigned int v4; // eax

  if ( (a3 & 7) != 0 )
    *(_QWORD *)a1 = *(_QWORD *)a1 & ~((unsigned __int64)(a3 & 7) << 17) | ((unsigned __int64)(a3 & 7) << 17) & ((unsigned __int64)a2 << 17);
  if ( (a3 & 8) != 0 )
  {
    v3 = *(_DWORD *)(a1 + 8);
    if ( (a2 & 8) != 0 )
      v4 = v3 | 0x2000000;
    else
      v4 = v3 & 0xFDFFFFFF;
    *(_DWORD *)(a1 + 8) = v4;
  }
}
