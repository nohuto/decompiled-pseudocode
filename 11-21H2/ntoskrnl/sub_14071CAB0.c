/*
 * XREFs of sub_14071CAB0 @ 0x14071CAB0
 * Callers:
 *     sub_1402A2490 @ 0x1402A2490 (sub_1402A2490.c)
 *     sub_1403857EC @ 0x1403857EC (sub_1403857EC.c)
 *     sub_14039F3B0 @ 0x14039F3B0 (sub_14039F3B0.c)
 *     sub_140542458 @ 0x140542458 (sub_140542458.c)
 *     FsRtlCheckUpperOplock @ 0x14092E2F0 (FsRtlCheckUpperOplock.c)
 *     FsRtlUpperOplockFsctrl @ 0x14092E730 (FsRtlUpperOplockFsctrl.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_14071CAB0(int a1, int a2)
{
  int v2; // ecx
  char result; // al

  v2 = a1 & 0x1701E;
  result = 1;
  if ( (v2 & 0xFFFEFFFF) == 0 )
    return result;
  switch ( a2 )
  {
    case 0:
      return 0;
    case 4096:
      goto LABEL_13;
    case 12288:
      if ( v2 == 12288 )
        return result;
LABEL_13:
      if ( v2 != 4096 && v2 != 16 )
        return 0;
      return result;
  }
  if ( a2 == 20480 && (v2 == 28672 || v2 == 12288 || v2 == 4) )
    return 0;
  return result;
}
