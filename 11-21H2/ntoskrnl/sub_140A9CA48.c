/*
 * XREFs of sub_140A9CA48 @ 0x140A9CA48
 * Callers:
 *     sub_1407D6120 @ 0x1407D6120 (sub_1407D6120.c)
 * Callees:
 *     sub_140A812D0 @ 0x140A812D0 (sub_140A812D0.c)
 *     sub_140A9A540 @ 0x140A9A540 (sub_140A9A540.c)
 *     sub_140A9A588 @ 0x140A9A588 (sub_140A9A588.c)
 */

__int64 __fastcall sub_140A9CA48(const void **a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rax
  int v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0;
  if ( (_DWORD)InitSafeBootMode )
  {
    return (unsigned int)-1073738742;
  }
  else
  {
    v3 = sub_140A9A588(a1);
    if ( v3 )
    {
      v2 = sub_140A812D0(v3, &v5, 2);
      if ( !v5 )
        sub_140A9A540((const UNICODE_STRING *)a1);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v2;
}
