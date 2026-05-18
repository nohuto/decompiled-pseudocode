/*
 * XREFs of sub_18001060C @ 0x18001060C
 * Callers:
 *     sub_18000D3DC @ 0x18000D3DC (sub_18000D3DC.c)
 *     sub_18000E4E8 @ 0x18000E4E8 (sub_18000E4E8.c)
 *     sub_18000F4B0 @ 0x18000F4B0 (sub_18000F4B0.c)
 *     sub_18000F6D0 @ 0x18000F6D0 (sub_18000F6D0.c)
 *     sub_1800103F0 @ 0x1800103F0 (sub_1800103F0.c)
 *     sub_18005D70C @ 0x18005D70C (sub_18005D70C.c)
 *     sub_180097128 @ 0x180097128 (sub_180097128.c)
 *     sub_1800E8560 @ 0x1800E8560 (sub_1800E8560.c)
 *     sub_1800EA210 @ 0x1800EA210 (sub_1800EA210.c)
 *     sub_1800EA840 @ 0x1800EA840 (sub_1800EA840.c)
 *     sub_1800EAF60 @ 0x1800EAF60 (sub_1800EAF60.c)
 * Callees:
 *     _o__invalid_parameter_noinfo @ 0x18000BFAA (_o__invalid_parameter_noinfo.c)
 *     memset @ 0x18000C0CC (memset.c)
 *     memcpy @ 0x18000CA6D (memcpy.c)
 */

__int64 __fastcall sub_18001060C(void *a1, size_t a2, const void *a3, size_t a4)
{
  unsigned int *v8; // rax
  unsigned int v9; // ebx

  if ( !a4 )
    return 0LL;
  if ( !a1 )
    goto LABEL_4;
  if ( a3 && a2 >= a4 )
  {
    memcpy(a1, a3, a4);
    return 0LL;
  }
  memset(a1, 0, a2);
  if ( !a3 )
  {
LABEL_4:
    v8 = (unsigned int *)o__errno();
    v9 = 22;
LABEL_5:
    *v8 = v9;
    o__invalid_parameter_noinfo();
    return v9;
  }
  if ( a2 < a4 )
  {
    v8 = (unsigned int *)o__errno();
    v9 = 34;
    goto LABEL_5;
  }
  return 22LL;
}
