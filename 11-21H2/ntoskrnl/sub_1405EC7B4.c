/*
 * XREFs of sub_1405EC7B4 @ 0x1405EC7B4
 * Callers:
 *     sub_1409BC59C @ 0x1409BC59C (sub_1409BC59C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1405EC7B4(unsigned __int16 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( (unsigned __int16)(result + 10240) <= 0x7FFu )
    return (unsigned int)a1[1] + (((_DWORD)result - 55287) << 10);
  return result;
}
