/*
 * XREFs of sub_180032650 @ 0x180032650
 * Callers:
 *     sub_18002E2EC @ 0x18002E2EC (sub_18002E2EC.c)
 *     sub_180039FF4 @ 0x180039FF4 (sub_180039FF4.c)
 *     sub_18003A100 @ 0x18003A100 (sub_18003A100.c)
 *     sub_18003A528 @ 0x18003A528 (sub_18003A528.c)
 *     sub_18003A644 @ 0x18003A644 (sub_18003A644.c)
 *     sub_18003B3AC @ 0x18003B3AC (sub_18003B3AC.c)
 *     sub_18003D19C @ 0x18003D19C (sub_18003D19C.c)
 *     sub_180057AF0 @ 0x180057AF0 (sub_180057AF0.c)
 *     sub_18005F2F0 @ 0x18005F2F0 (sub_18005F2F0.c)
 *     sub_18005FAE8 @ 0x18005FAE8 (sub_18005FAE8.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 */

__int64 __fastcall sub_180032650(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    sub_180010530(v2);
  return a1;
}
