/*
 * XREFs of sub_1402D749C @ 0x1402D749C
 * Callers:
 *     sub_14025C690 @ 0x14025C690 (sub_14025C690.c)
 *     sub_1402D72FC @ 0x1402D72FC (sub_1402D72FC.c)
 *     sub_1402D7A40 @ 0x1402D7A40 (sub_1402D7A40.c)
 *     sub_1403D525C @ 0x1403D525C (sub_1403D525C.c)
 * Callees:
 *     sub_140261ADC @ 0x140261ADC (sub_140261ADC.c)
 *     sub_14073A240 @ 0x14073A240 (sub_14073A240.c)
 */

__int64 sub_1402D749C()
{
  __int64 result; // rax
  __int64 v1; // [rsp+38h] [rbp+10h] BYREF

  v1 = -1000000LL;
  while ( 1 )
  {
    result = (unsigned int)_InterlockedCompareExchange(&dword_140C1BC5C, 1, 0);
    if ( !(_DWORD)result )
      break;
    if ( dword_140C1BC5C == 1 )
      result = sub_14073A240(0LL, &v1);
    if ( dword_140C1BC5C == 2 )
      return result;
  }
  result = sub_140261ADC((__int64)&Mutant, 0, 1, 0);
  dword_140C1BC5C = 2;
  return result;
}
