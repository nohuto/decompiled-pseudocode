/*
 * XREFs of sub_180001848 @ 0x180001848
 * Callers:
 *     sub_1800018C0 @ 0x1800018C0 (sub_1800018C0.c)
 *     sub_18001B8F0 @ 0x18001B8F0 (sub_18001B8F0.c)
 * Callees:
 *     sub_1800017F4 @ 0x1800017F4 (sub_1800017F4.c)
 *     sub_180004900 @ 0x180004900 (sub_180004900.c)
 */

__int64 __fastcall sub_180001848(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  _QWORD *v3; // r8
  __int64 v4; // r10
  _QWORD *v6; // r8
  unsigned int v7; // r9d
  __int64 v8; // r10
  __int64 v9; // r11

  if ( (unsigned int)sub_180004900(a2, &xmmword_180026160) )
  {
    *v3 = v4;
    return 0LL;
  }
  else
  {
    if ( (unsigned int)sub_180004900(v2, &xmmword_180026150) )
    {
      *v6 = v8;
    }
    else
    {
      v7 = sub_1800017F4(v8 + 8, v9);
      if ( v7 == -2147467262 )
        return (unsigned int)-2147467262;
    }
    return v7;
  }
}
