/*
 * XREFs of sub_140718AE8 @ 0x140718AE8
 * Callers:
 *     sub_14065DBC8 @ 0x14065DBC8 (sub_14065DBC8.c)
 *     sub_1406E137C @ 0x1406E137C (sub_1406E137C.c)
 *     sub_140715A2C @ 0x140715A2C (sub_140715A2C.c)
 *     sub_14071784C @ 0x14071784C (sub_14071784C.c)
 *     sub_1407185B4 @ 0x1407185B4 (sub_1407185B4.c)
 *     sub_1407C5730 @ 0x1407C5730 (sub_1407C5730.c)
 *     sub_1407C8830 @ 0x1407C8830 (sub_1407C8830.c)
 *     sub_14090D4E8 @ 0x14090D4E8 (sub_14090D4E8.c)
 *     sub_14091F960 @ 0x14091F960 (sub_14091F960.c)
 *     sub_140924594 @ 0x140924594 (sub_140924594.c)
 *     sub_140B14558 @ 0x140B14558 (sub_140B14558.c)
 *     sub_140B146C4 @ 0x140B146C4 (sub_140B146C4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140718AE8(_WORD *a1, unsigned int a2, unsigned __int8 *a3, unsigned int a4)
{
  unsigned int v4; // edx
  __int64 v5; // rdx
  __int64 result; // rax

  v4 = a2 >> 1;
  if ( v4 < a4 )
    a4 = v4;
  if ( a4 )
  {
    v5 = a4;
    do
    {
      result = *a3++;
      *a1++ = result;
      --v5;
    }
    while ( v5 );
  }
  return result;
}
