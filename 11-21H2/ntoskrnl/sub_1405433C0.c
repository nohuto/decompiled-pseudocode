/*
 * XREFs of sub_1405433C0 @ 0x1405433C0
 * Callers:
 *     sub_1403078A0 @ 0x1403078A0 (sub_1403078A0.c)
 * Callees:
 *     HvlInvokeHypercall @ 0x14039DF00 (HvlInvokeHypercall.c)
 */

__int64 sub_1405433C0()
{
  __int64 result; // rax

  result = dword_140D0688C;
  if ( (dword_140D0688C & 2) == 0 || (result = dword_140D068B8, (dword_140D068B8 & 1) != 0) )
  {
    if ( byte_140D0688B )
      return HvlInvokeHypercall(65546);
  }
  return result;
}
