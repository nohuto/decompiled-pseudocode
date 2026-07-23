/*
 * XREFs of sub_140573408 @ 0x140573408
 * Callers:
 *     sub_140573374 @ 0x140573374 (sub_140573374.c)
 * Callees:
 *     sub_14028F978 @ 0x14028F978 (sub_14028F978.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14057352C @ 0x14057352C (sub_14057352C.c)
 *     sub_140A6F7A0 @ 0x140A6F7A0 (sub_140A6F7A0.c)
 *     sub_140A6F900 @ 0x140A6F900 (sub_140A6F900.c)
 */

__int64 __fastcall sub_140573408(ULONG_PTR a1, char a2, char *a3, __int64 a4)
{
  int v8; // ebx
  char v9; // r14
  __int64 v10; // rcx
  _OWORD v12[3]; // [rsp+30h] [rbp-68h] BYREF

  memset(v12, 0, sizeof(v12));
  if ( a1 )
    sub_14030D5C0(a1, 0LL, (__int64)v12, a4);
  if ( a2 == 1 )
  {
    v8 = sub_14057352C(a1, a3, a4, 1LL);
  }
  else if ( (dword_140D069BC & 4) != 0 )
  {
    v8 = sub_14028F978(a3, a4, 1u, 1u, 1);
    if ( v8 < 0 )
    {
      v9 = sub_140A6F7A0(0LL, 0LL);
      v8 = sub_14028F978(a3, a4, 1u, 1u, 5);
      if ( v8 < 0 )
        v8 = sub_14028F978(a3, a4, 1u, 1u, 69);
      LOBYTE(v10) = v9;
      sub_140A6F900(v10);
    }
  }
  else
  {
    v8 = -1073741790;
  }
  if ( a1 )
    sub_1402D0930((__int64)v12, 0LL);
  return (unsigned int)v8;
}
