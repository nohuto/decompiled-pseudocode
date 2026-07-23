/*
 * XREFs of sub_140A07BFC @ 0x140A07BFC
 * Callers:
 *     sub_140A02B00 @ 0x140A02B00 (sub_140A02B00.c)
 * Callees:
 *     sub_1403614E0 @ 0x1403614E0 (sub_1403614E0.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140A07EC0 @ 0x140A07EC0 (sub_140A07EC0.c)
 */

__int64 __fastcall sub_140A07BFC(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  struct _EX_RUNDOWN_REF *v6; // [rsp+48h] [rbp+20h] BYREF

  v6 = 0LL;
  if ( sub_140A07EC0(a1, &v6) )
  {
    v4 = sub_14042A5E0(a1, a2);
    sub_1403614E0(v6);
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return v4;
}
