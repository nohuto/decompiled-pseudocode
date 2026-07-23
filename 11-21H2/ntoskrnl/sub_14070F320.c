/*
 * XREFs of sub_14070F320 @ 0x14070F320
 * Callers:
 *     sub_1403DF48C @ 0x1403DF48C (sub_1403DF48C.c)
 *     sub_14070BD10 @ 0x14070BD10 (sub_14070BD10.c)
 *     sub_1409B01E0 @ 0x1409B01E0 (sub_1409B01E0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14070F320(__int64 a1)
{
  __int64 v1; // rdx

  v1 = *(_QWORD *)(a1 + 1368);
  if ( !v1 || (*(_DWORD *)(a1 + 2172) & 0x1000) != 0 )
    return 0LL;
  else
    return *(_QWORD *)(*(_QWORD *)(v1 + 64) + 32LL);
}
