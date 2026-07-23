/*
 * XREFs of sub_140A808A8 @ 0x140A808A8
 * Callers:
 *     IoInitializeIrp @ 0x140229D70 (IoInitializeIrp.c)
 * Callees:
 *     sub_140A8D070 @ 0x140A8D070 (sub_140A8D070.c)
 */

__int64 __fastcall sub_140A808A8(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  result = (unsigned int)dword_140D4E000;
  if ( !dword_140D4E000 )
    return sub_140A8D070(a1, a4, 0LL);
  return result;
}
