/*
 * XREFs of sub_1406ADA90 @ 0x1406ADA90
 * Callers:
 *     sub_1406AD6BC @ 0x1406AD6BC (sub_1406AD6BC.c)
 * Callees:
 *     sub_14023662C @ 0x14023662C (sub_14023662C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1406ADB5C @ 0x1406ADB5C (sub_1406ADB5C.c)
 *     sub_1406ADD48 @ 0x1406ADD48 (sub_1406ADD48.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1406ADA90(__int64 a1, char a2)
{
  int v2; // ebx
  __int128 v4; // [rsp+38h] [rbp-40h]
  __int128 v5; // [rsp+48h] [rbp-30h]
  __int64 v6; // [rsp+58h] [rbp-20h]

  v4 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  if ( (dword_140C54630 & 1) != 0 )
  {
    if ( *(_DWORD *)(a1 + 24) < 0x18u )
    {
      return (unsigned int)-1073741306;
    }
    else
    {
      v2 = sub_1406ADD48(*(void **)(a1 + 16), a2);
      if ( v2 >= 0 )
      {
        if ( (unsigned int)sub_14023662C(0LL) )
          return (unsigned int)-1073741701;
        else
          return (unsigned int)sub_1406ADB5C(&unk_140C54598, 0LL);
      }
    }
  }
  else
  {
    return (unsigned int)-1073741696;
  }
  return (unsigned int)v2;
}
