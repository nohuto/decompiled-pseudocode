/*
 * XREFs of sub_14096324C @ 0x14096324C
 * Callers:
 *     sub_140963330 @ 0x140963330 (sub_140963330.c)
 * Callees:
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 */

__int64 __fastcall sub_14096324C(ULONG_PTR a1, char a2, const void *a3, void *a4, unsigned int Size)
{
  unsigned __int64 v9; // r8
  _OWORD v11[3]; // [rsp+30h] [rbp-58h] BYREF

  memset(v11, 0, sizeof(v11));
  if ( a1 )
    sub_14030D5C0(a1, 0LL, (__int64)v11, (__int64)a4);
  if ( a2 )
  {
    if ( Size )
    {
      v9 = (unsigned __int64)a3 + Size;
      if ( v9 > 0x7FFFFFFF0000LL || v9 < (unsigned __int64)a3 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  memmove(a4, a3, Size);
  if ( a1 )
    sub_1402D0930((__int64)v11, 0LL);
  return 0LL;
}
