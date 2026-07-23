/*
 * XREFs of sub_1406527A8 @ 0x1406527A8
 * Callers:
 *     sub_140910800 @ 0x140910800 (sub_140910800.c)
 *     sub_140911208 @ 0x140911208 (sub_140911208.c)
 * Callees:
 *     sub_140389CB0 @ 0x140389CB0 (sub_140389CB0.c)
 *     sub_14085D380 @ 0x14085D380 (sub_14085D380.c)
 */

void __fastcall sub_1406527A8(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rdx

  if ( *(__int64 (__fastcall **)(int, int, int, int, __int64, __int64, __int64))(a1 + 40) == sub_14085D310 )
  {
    v1 = *(_QWORD *)(a1 + 48);
    if ( KeGetCurrentIrql() >= 2u || (KeGetPcr()[36].Unused0[2] & 0x10001) != 0 )
    {
      v2 = *(_QWORD *)(v1 + 264);
      *(_BYTE *)(v1 + 372) = 1;
      sub_140389CB0(*(_QWORD *)(v1 + 360), v2);
    }
    else
    {
      sub_14085D380(v1);
    }
  }
}
