/*
 * XREFs of sub_140AAE9F4 @ 0x140AAE9F4
 * Callers:
 *     sub_140AAE8DC @ 0x140AAE8DC (sub_140AAE8DC.c)
 *     sub_140AAE918 @ 0x140AAE918 (sub_140AAE918.c)
 * Callees:
 *     sub_1403A8CB4 @ 0x1403A8CB4 (sub_1403A8CB4.c)
 *     sub_140AAB7B4 @ 0x140AAB7B4 (sub_140AAB7B4.c)
 *     sub_140AABB9C @ 0x140AABB9C (sub_140AABB9C.c)
 *     sub_140AACA74 @ 0x140AACA74 (sub_140AACA74.c)
 *     sub_140AAD1C4 @ 0x140AAD1C4 (sub_140AAD1C4.c)
 *     sub_140AADBBC @ 0x140AADBBC (sub_140AADBBC.c)
 *     sub_140AAEAF4 @ 0x140AAEAF4 (sub_140AAEAF4.c)
 *     sub_140AAEBD8 @ 0x140AAEBD8 (sub_140AAEBD8.c)
 */

__int64 sub_140AAE9F4()
{
  __int64 result; // rax

  result = (unsigned int)dword_140C0DF90;
  if ( (dword_140C0DF90 & 2) != 0 )
  {
    if ( (dword_140C0DF90 & 0x4000000) != 0 )
      sub_140AAB7B4();
    sub_140AACA74();
    if ( qword_140C0E058 )
    {
      sub_140AAEAF4(qword_140C0E058);
      if ( qword_140C548B8 == qword_140C0E058 )
        qword_140C548B8 = 0LL;
      qword_140C0E058 = 0LL;
    }
    sub_140AAD1C4(0);
    if ( qword_140C0E050 )
    {
      sub_140AAEAF4(qword_140C0E050);
      if ( qword_140C548C0 == qword_140C0E050 )
        qword_140C548C0 = 0LL;
      qword_140C0E050 = 0LL;
    }
    if ( qword_140C0E038 )
    {
      sub_140AAEBD8(qword_140C0E038);
      if ( *(_QWORD *)qword_140C0E038 )
      {
        if ( (*(_DWORD *)(qword_140C0E038 + 12) & 1) == 0 )
          sub_1403A8CB4(*(_QWORD *)qword_140C0E038);
      }
      sub_1403A8CB4(qword_140C0E038);
      qword_140C0E038 = 0LL;
    }
    sub_140AABB9C();
    sub_140AADBBC(1);
    result = 0LL;
    dword_140C0DF90 &= ~2u;
    xmmword_140C0DF20 = 0LL;
    qword_140C0DF40 = 0LL;
    xmmword_140C0DF30 = 0LL;
  }
  return result;
}
