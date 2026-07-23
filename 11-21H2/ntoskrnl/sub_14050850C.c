/*
 * XREFs of sub_14050850C @ 0x14050850C
 * Callers:
 *     sub_1403BACF8 @ 0x1403BACF8 (sub_1403BACF8.c)
 * Callees:
 *     sub_140252134 @ 0x140252134 (sub_140252134.c)
 *     sub_1403D59D4 @ 0x1403D59D4 (sub_1403D59D4.c)
 *     sub_14051E038 @ 0x14051E038 (sub_14051E038.c)
 */

__int64 __fastcall sub_14050850C(int *a1)
{
  ULONG_PTR *v1; // rax
  unsigned int *v2; // r9
  __int64 v3; // r10

  v1 = sub_140252134(*a1);
  if ( v1 )
    return sub_1403D59D4((__int64)v1, v2, v3);
  sub_14051E038(0, 17, 1, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 3282);
  return 3221225485LL;
}
