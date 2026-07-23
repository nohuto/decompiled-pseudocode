/*
 * XREFs of HalSendSoftwareInterrupt @ 0x140342650
 * Callers:
 *     sub_14022BA48 @ 0x14022BA48 (sub_14022BA48.c)
 *     sub_1402B59D0 @ 0x1402B59D0 (sub_1402B59D0.c)
 *     sub_140340300 @ 0x140340300 (sub_140340300.c)
 *     sub_140340390 @ 0x140340390 (sub_140340390.c)
 * Callees:
 *     sub_1402ADD00 @ 0x1402ADD00 (sub_1402ADD00.c)
 */

__int64 __fastcall HalSendSoftwareInterrupt(int a1, char a2)
{
  unsigned int v3; // edx
  __int64 v5; // [rsp+20h] [rbp-28h] BYREF
  int v6; // [rsp+28h] [rbp-20h]
  __int64 v7; // [rsp+2Ch] [rbp-1Ch]

  v7 = 0LL;
  v3 = 31;
  v6 = a1;
  v5 = 6LL;
  if ( a2 != 1 )
    v3 = 47;
  return sub_1402ADD00((int *)&v5, v3);
}
