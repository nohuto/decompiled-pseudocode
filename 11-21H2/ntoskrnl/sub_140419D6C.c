/*
 * XREFs of sub_140419D6C @ 0x140419D6C
 * Callers:
 *     PsUnregisterSyscallProvider @ 0x140659570 (PsUnregisterSyscallProvider.c)
 *     sub_140659708 @ 0x140659708 (sub_140659708.c)
 *     sub_14065994C @ 0x14065994C (sub_14065994C.c)
 *     sub_140659AD4 @ 0x140659AD4 (sub_140659AD4.c)
 * Callees:
 *     sub_1406596A0 @ 0x1406596A0 (sub_1406596A0.c)
 */

__int64 __fastcall sub_140419D6C(volatile signed __int64 *a1)
{
  signed __int64 v1; // rax
  bool v2; // cc
  __int64 result; // rax

  v1 = _InterlockedExchangeAdd64(a1 + 6, 0xFFFFFFFFFFFFFFFFuLL);
  v2 = v1 <= 1;
  result = v1 - 1;
  if ( v2 )
  {
    if ( result )
      __fastfail(0xEu);
    return sub_1406596A0((PVOID)a1);
  }
  return result;
}
