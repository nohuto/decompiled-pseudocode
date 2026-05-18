/*
 * XREFs of sub_18000FF54 @ 0x18000FF54
 * Callers:
 *     sub_18000D20C @ 0x18000D20C (sub_18000D20C.c)
 *     sub_18000D280 @ 0x18000D280 (sub_18000D280.c)
 *     sub_18000E218 @ 0x18000E218 (sub_18000E218.c)
 *     sub_18000FCBC @ 0x18000FCBC (sub_18000FCBC.c)
 *     sub_180055EA0 @ 0x180055EA0 (sub_180055EA0.c)
 *     sub_180088674 @ 0x180088674 (sub_180088674.c)
 *     sub_180088DF8 @ 0x180088DF8 (sub_180088DF8.c)
 *     sub_1800D11F0 @ 0x1800D11F0 (sub_1800D11F0.c)
 *     sub_1800D2AA0 @ 0x1800D2AA0 (sub_1800D2AA0.c)
 *     sub_1800D2FD0 @ 0x1800D2FD0 (sub_1800D2FD0.c)
 *     sub_1800D35E0 @ 0x1800D35E0 (sub_1800D35E0.c)
 * Callees:
 *     _o__invalid_parameter_noinfo @ 0x18000BF9A (_o__invalid_parameter_noinfo.c)
 *     memset @ 0x18000C0BC (memset.c)
 *     memcpy @ 0x18000CA61 (memcpy.c)
 */

__int64 __fastcall sub_18000FF54(void *a1, size_t a2, const void *a3, size_t a4)
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
