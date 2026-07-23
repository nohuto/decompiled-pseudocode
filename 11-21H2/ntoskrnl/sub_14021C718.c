/*
 * XREFs of sub_14021C718 @ 0x14021C718
 * Callers:
 *     sub_14021C64C @ 0x14021C64C (sub_14021C64C.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_14021C718(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 result; // rax

  result = __rdtsc();
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 16) + 340LL) == *(_DWORD *)(a1 + 8) )
  {
    result -= *(_QWORD *)a1;
    *a2 = result;
  }
  return result;
}
