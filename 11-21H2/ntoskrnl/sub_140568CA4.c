/*
 * XREFs of sub_140568CA4 @ 0x140568CA4
 * Callers:
 *     sub_1405685CC @ 0x1405685CC (sub_1405685CC.c)
 *     sub_140B03800 @ 0x140B03800 (sub_140B03800.c)
 * Callees:
 *     <none>
 */

__int64 sub_140568CA4()
{
  __int64 result; // rax

  if ( dword_140C1B2A0 )
  {
    dword_140D0501C *= dword_140D05048;
    dword_140D05028 *= dword_140D05048;
    dword_140D05034 *= dword_140D05048;
    dword_140D05030 *= dword_140D05048;
    dword_140D05024 *= dword_140D05048;
    result = (unsigned int)(dword_140D05048 * dword_140D05020);
    dword_140D05020 *= dword_140D05048;
  }
  return result;
}
