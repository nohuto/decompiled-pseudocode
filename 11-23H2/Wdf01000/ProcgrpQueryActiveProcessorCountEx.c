/*
 * XREFs of ProcgrpQueryActiveProcessorCountEx @ 0x1C008A520
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ProcgrpQueryActiveProcessorCountEx(unsigned __int16 GroupNumber)
{
  unsigned __int8 *v2; // rax

  if ( (unsigned __int16)(GroupNumber - 1) <= 0xFFFDu )
    return 0LL;
  v2 = *(unsigned __int8 **)&KeNumberProcessors;
  return *v2;
}
