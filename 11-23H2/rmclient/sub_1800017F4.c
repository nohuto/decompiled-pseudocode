/*
 * XREFs of sub_1800017F4 @ 0x1800017F4
 * Callers:
 *     sub_180001848 @ 0x180001848 (sub_180001848.c)
 *     sub_180003C70 @ 0x180003C70 (sub_180003C70.c)
 *     sub_18001A920 @ 0x18001A920 (sub_18001A920.c)
 *     sub_18001A9C4 @ 0x18001A9C4 (sub_18001A9C4.c)
 * Callees:
 *     sub_180004900 @ 0x180004900 (sub_180004900.c)
 */

__int64 __fastcall sub_1800017F4(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  _QWORD *v3; // r8
  __int64 v4; // r10
  _QWORD *v5; // r8
  unsigned int v6; // r9d
  __int64 v7; // r10

  if ( (unsigned int)sub_180004900(a2, &unk_1800261C0) )
  {
    *v3 = v4;
    return 0LL;
  }
  else
  {
    if ( (unsigned int)sub_180004900(v2, &unk_1800261D0) )
      *v5 = v7;
    else
      return (unsigned int)-2147467262;
    return v6;
  }
}
