/*
 * XREFs of ?AllocateAnyBit@IfIndexRange@@QEAAJPEAK@Z @ 0x1C001C028
 * Callers:
 *     ndisIfRegisterInterfaceEx @ 0x1C001B90C (ndisIfRegisterInterfaceEx.c)
 * Callees:
 *     ?Grow@IfIndexRange@@AEAAJK@Z @ 0x1C0035640 (-Grow@IfIndexRange@@AEAAJK@Z.c)
 */

__int64 __fastcall IfIndexRange::AllocateAnyBit(IfIndexRange *this, unsigned int *a2)
{
  __int64 ClearBitsAndSet; // rax
  int v4; // ecx
  __int64 result; // rax

  *a2 = 0;
  ClearBitsAndSet = RtlFindClearBitsAndSetEx(&BitMapHeader, 1LL);
  v4 = ClearBitsAndSet;
  if ( ClearBitsAndSet != -1 )
    goto LABEL_2;
  result = IfIndexRange::Grow((IfIndexRange *)&dword_1C00F5668, LODWORD(BitMapHeader.SizeOfBitMap) + 64);
  if ( !(_DWORD)result )
  {
    v4 = RtlFindClearBitsAndSetEx(&BitMapHeader, 1LL);
LABEL_2:
    *a2 = dword_1C00F5668 + v4;
    return 0LL;
  }
  return result;
}
