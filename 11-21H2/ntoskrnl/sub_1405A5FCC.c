/*
 * XREFs of sub_1405A5FCC @ 0x1405A5FCC
 * Callers:
 *     sub_1402E67E8 @ 0x1402E67E8 (sub_1402E67E8.c)
 *     sub_140318330 @ 0x140318330 (sub_140318330.c)
 *     sub_140319160 @ 0x140319160 (sub_140319160.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

ULONG_PTR __fastcall sub_1405A5FCC(ULONG_PTR BugCheckParameter2, signed __int64 BugCheckParameter3)
{
  unsigned int v2; // ecx
  ULONG_PTR result; // rax
  unsigned int v4; // ecx

  if ( (BugCheckParameter3 & 1) != 0 )
  {
    v2 = *(_DWORD *)(BugCheckParameter2 + 48);
    result = ((BugCheckParameter3 & 0x800) != 0 ? 4 : 1) | 2u;
    if ( BugCheckParameter3 < 0 )
      result = (BugCheckParameter3 & 0x800) != 0 ? 4 : 1;
    v4 = (v2 >> 7) & 0x1F;
    if ( v4 >> 3 == 3 && (v4 & 7) != 0 )
    {
      return (unsigned int)result | 0x18;
    }
    else if ( v4 >> 3 == 1 )
    {
      return (unsigned int)result | 8;
    }
  }
  else
  {
    if ( (BugCheckParameter3 & 0x400) != 0 )
      KeBugCheckEx(0x1Au, 0x8700uLL, BugCheckParameter2, BugCheckParameter3, 0LL);
    return ((unsigned __int64)BugCheckParameter3 >> 8) & 8 | 0x10;
  }
  return result;
}
