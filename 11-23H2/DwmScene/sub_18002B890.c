/*
 * XREFs of sub_18002B890 @ 0x18002B890
 * Callers:
 *     sub_18002B35C @ 0x18002B35C (sub_18002B35C.c)
 *     sub_1800E505C @ 0x1800E505C (sub_1800E505C.c)
 * Callees:
 *     sub_18002AE4C @ 0x18002AE4C (sub_18002AE4C.c)
 */

__int64 __fastcall sub_18002B890(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 8) )
    return sub_18002AE4C(*(void ***)(a1 + 8), *(_QWORD *)a1);
  return result;
}
