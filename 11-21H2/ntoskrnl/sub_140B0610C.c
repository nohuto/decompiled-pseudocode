/*
 * XREFs of sub_140B0610C @ 0x140B0610C
 * Callers:
 *     sub_140AFBDF4 @ 0x140AFBDF4 (sub_140AFBDF4.c)
 * Callees:
 *     sub_1403C2E24 @ 0x1403C2E24 (sub_1403C2E24.c)
 *     sub_1403C2F24 @ 0x1403C2F24 (sub_1403C2F24.c)
 *     strstr @ 0x1403E0C40 (strstr.c)
 *     sub_140B061BC @ 0x140B061BC (sub_140B061BC.c)
 *     sub_140B06200 @ 0x140B06200 (sub_140B06200.c)
 *     sub_140B06278 @ 0x140B06278 (sub_140B06278.c)
 *     sub_140B064AC @ 0x140B064AC (sub_140B064AC.c)
 *     sub_140B51320 @ 0x140B51320 (sub_140B51320.c)
 */

__int64 __fastcall sub_140B0610C(__int64 a1)
{
  unsigned int v3; // [rsp+38h] [rbp+10h] BYREF
  unsigned int v4; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  v3 = 0;
  sub_140B064AC(&v4, &v3);
  sub_140B06278();
  if ( sub_1403C2F24() )
  {
LABEL_7:
    sub_140B061BC();
    return sub_1403C2E24();
  }
  if ( !(unsigned __int8)sub_140B06200(*(_QWORD *)(*(_QWORD *)(a1 + 240) + 304LL), v3) )
  {
    if ( strstr(*(const char **)(a1 + 216), "MAXGROUP=OFF") )
    {
      byte_140D06993 = 0;
    }
    else if ( strstr(*(const char **)(a1 + 216), "MAXGROUP") )
    {
      byte_140D06993 = 1;
    }
    if ( word_140C2B0F0 != 1 && (byte_140D06993 || v4 > dword_140D0503C) )
    {
      sub_140B51320();
      return sub_1403C2E24();
    }
    goto LABEL_7;
  }
  return sub_1403C2E24();
}
