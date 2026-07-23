/*
 * XREFs of sub_140A938A4 @ 0x140A938A4
 * Callers:
 *     sub_140A9FE30 @ 0x140A9FE30 (sub_140A9FE30.c)
 * Callees:
 *     sub_140A94030 @ 0x140A94030 (sub_140A94030.c)
 */

__int64 __fastcall sub_140A938A4(__int64 a1, __int64 a2)
{
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = a1;
  if ( !(unsigned int)sub_140A94030(&v4, a2, &off_140D4F470)
    && !(unsigned int)sub_140A94030(&v4, a2, &off_140D4E190)
    && !(unsigned int)sub_140A94030(&v4, a2, &off_140D4E690) )
  {
    sub_140A94030(&v4, a2, &off_140D50040);
  }
  return v4;
}
