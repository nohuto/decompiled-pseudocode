/*
 * XREFs of sub_1409613DC @ 0x1409613DC
 * Callers:
 *     sub_140246B70 @ 0x140246B70 (sub_140246B70.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_1409613DC(unsigned __int64 *a1, __int64 a2)
{
  unsigned __int64 result; // rax

  _RAX = *a1;
  __asm { rdsspq  r8 }
  _R8 = _R8 & 0xFFFFFFFFFFFFFFF8uLL;
  __asm
  {
    rstorssp qword ptr [rax]
    saveprevssp
  }
  _RDX = (a2 - _RAX) >> 3;
  if ( _RDX )
  {
    _R9 = 255LL;
    while ( _RDX > 0xFF )
    {
      _RDX -= 255LL;
      __asm { incsspq r9 }
      if ( !_RDX )
        goto LABEL_7;
    }
    __asm { incsspq rdx }
  }
LABEL_7:
  __asm { rdsspq  rax }
  result = (_RAX & 0xFFFFFFFFFFFFFFF8uLL) - 8;
  __asm { rstorssp qword ptr [r8-8] }
  *a1 = result;
  __asm { saveprevssp }
  return result;
}
