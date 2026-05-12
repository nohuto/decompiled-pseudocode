/*
 * XREFs of sub_1C00A010C @ 0x1C00A010C
 * Callers:
 *     sub_1C00A034C @ 0x1C00A034C (sub_1C00A034C.c)
 *     sub_1C00B5114 @ 0x1C00B5114 (sub_1C00B5114.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1C00A010C(int a1, __int64 a2, _QWORD *a3)
{
  __int64 result; // rax
  int v4; // edx

  if ( a1 == -2147483614 || a1 == -1073741275 )
  {
    result = 0LL;
    *a3 = 0LL;
    goto LABEL_8;
  }
  result = 0LL;
  *a3 = 0LL;
  if ( !a1 )
  {
    result = *(_DWORD *)(a2 + 4) & 0xB0;
    v4 = (8 * (result | (4 * (*(_DWORD *)(a2 + 4) & 0x40)))) | 0x206;
    goto LABEL_9;
  }
  if ( a1 != 279 )
  {
LABEL_8:
    v4 = 518;
    goto LABEL_9;
  }
  result = 8 * (*(_DWORD *)(a2 + 4) & 0x80u);
  v4 = result | 0x206;
LABEL_9:
  *(_DWORD *)a3 = v4;
  return result;
}
