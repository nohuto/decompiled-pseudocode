/*
 * XREFs of ?AllocateAnyBit@IfIndexRange@@QEAAJPEAK@Z @ 0x1C0022188
 * Callers:
 *     ndisIfRegisterInterfaceEx @ 0x1C0021AA4 (ndisIfRegisterInterfaceEx.c)
 * Callees:
 *     ?Grow@IfIndexRange@@AEAAJK@Z @ 0x1C0033C44 (-Grow@IfIndexRange@@AEAAJK@Z.c)
 */

__int64 __fastcall IfIndexRange::AllocateAnyBit(IfIndexRange *this, unsigned int *a2)
{
  __int64 ClearBitsAndSet; // rax
  int v4; // ecx
  __int64 result; // rax

  *a2 = 0;
  ClearBitsAndSet = RtlFindClearBitsAndSetEx(&xmmword_1C00EC640, 1LL);
  v4 = ClearBitsAndSet;
  if ( ClearBitsAndSet != -1 )
    goto LABEL_2;
  result = IfIndexRange::Grow((IfIndexRange *)&dword_1C00EC638, (int)xmmword_1C00EC640 + 64);
  if ( !(_DWORD)result )
  {
    v4 = RtlFindClearBitsAndSetEx(&xmmword_1C00EC640, 1LL);
LABEL_2:
    *a2 = dword_1C00EC638 + v4;
    return 0LL;
  }
  return result;
}
