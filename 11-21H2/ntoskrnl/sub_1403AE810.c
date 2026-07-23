/*
 * XREFs of sub_1403AE810 @ 0x1403AE810
 * Callers:
 *     <none>
 * Callees:
 *     sub_140303720 @ 0x140303720 (sub_140303720.c)
 *     sub_1403AE88C @ 0x1403AE88C (sub_1403AE88C.c)
 *     sub_1403AEF08 @ 0x1403AEF08 (sub_1403AEF08.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1403AE810(char a1)
{
  __int64 result; // rax
  __int64 v2; // rax
  int v3; // r8d
  int v4; // r9d
  __int16 v5; // [rsp+30h] [rbp-8h]

  if ( a1 )
  {
    sub_1403AE88C();
    _disable();
    LOBYTE(v3) = 13;
    result = sub_1403AEF08(209, (unsigned int)sub_140303240, v3, v4, -3LL);
    if ( (v5 & 0x200) != 0 )
      _enable();
  }
  else
  {
    result = *(unsigned int *)(qword_140C4E4B0 + 224);
    if ( (result & 1) != 0 && (result & 0x800) != 0 )
    {
      v2 = sub_140303720(qword_140C4E4B0);
      return sub_14042A5E0(v2, 209LL);
    }
  }
  return result;
}
