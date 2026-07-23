/*
 * XREFs of sub_14039AF3C @ 0x14039AF3C
 * Callers:
 *     sub_140304A20 @ 0x140304A20 (sub_140304A20.c)
 *     sub_14039AEA4 @ 0x14039AEA4 (sub_14039AEA4.c)
 *     sub_1405DC4F8 @ 0x1405DC4F8 (sub_1405DC4F8.c)
 * Callees:
 *     sub_14039AF70 @ 0x14039AF70 (sub_14039AF70.c)
 *     sub_14054BFF0 @ 0x14054BFF0 (sub_14054BFF0.c)
 */

__int64 sub_14039AF3C()
{
  __int64 v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0LL;
  if ( (dword_140D0689C & 0x100) != 0 )
    return sub_14039AF70(0LL);
  sub_14054BFF0(589828LL, &v1);
  return v1;
}
