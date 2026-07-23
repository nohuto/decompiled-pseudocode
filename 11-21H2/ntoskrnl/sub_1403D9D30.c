/*
 * XREFs of sub_1403D9D30 @ 0x1403D9D30
 * Callers:
 *     <none>
 * Callees:
 *     sub_140217454 @ 0x140217454 (sub_140217454.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_1403D9D88 @ 0x1403D9D88 (sub_1403D9D88.c)
 *     sub_1405B2734 @ 0x1405B2734 (sub_1405B2734.c)
 */

__int64 __fastcall sub_1403D9D30(_BYTE *a1)
{
  __int64 result; // rax

  if ( (int)sub_1403D9D88() < 0 )
    a1[16176] = 1;
  KeWaitForSingleObject(a1 + 104, WrFreePage, 0, 0, 0LL);
  result = sub_1405B2734(a1);
  if ( a1[16177] )
    return sub_140217454((__int64)(a1 + 16152), 0);
  return result;
}
