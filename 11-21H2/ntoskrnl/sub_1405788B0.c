/*
 * XREFs of sub_1405788B0 @ 0x1405788B0
 * Callers:
 *     sub_1405660A0 @ 0x1405660A0 (sub_1405660A0.c)
 * Callees:
 *     DbgPrintEx @ 0x140369B90 (DbgPrintEx.c)
 *     sub_140552B10 @ 0x140552B10 (sub_140552B10.c)
 *     sub_1405672C0 @ 0x1405672C0 (sub_1405672C0.c)
 *     sub_1405674E0 @ 0x1405674E0 (sub_1405674E0.c)
 *     sub_140567F5C @ 0x140567F5C (sub_140567F5C.c)
 *     sub_140579060 @ 0x140579060 (sub_140579060.c)
 *     sub_1405792C0 @ 0x1405792C0 (sub_1405792C0.c)
 *     sub_140579444 @ 0x140579444 (sub_140579444.c)
 *     sub_14057958C @ 0x14057958C (sub_14057958C.c)
 *     sub_140579620 @ 0x140579620 (sub_140579620.c)
 *     sub_1405796A4 @ 0x1405796A4 (sub_1405796A4.c)
 *     sub_140579750 @ 0x140579750 (sub_140579750.c)
 *     sub_140579780 @ 0x140579780 (sub_140579780.c)
 *     sub_140579878 @ 0x140579878 (sub_140579878.c)
 */

void sub_1405788B0()
{
  __int64 v0; // rcx
  __int64 v1; // rcx
  char *v2; // rdx
  __int64 v3; // rcx
  char v4; // [rsp+50h] [rbp+8h] BYREF
  char v5; // [rsp+58h] [rbp+10h] BYREF

  v5 = 0;
  v4 = 0;
  if ( !byte_140C2A958 && dword_140C2A954 > 0 )
  {
    if ( byte_140C31E24 )
      __fastfail(5u);
    if ( !(unsigned __int8)sub_140579444() )
    {
      v0 = 1LL;
LABEL_26:
      sub_14057958C(v0);
      goto LABEL_27;
    }
    if ( (int)sub_140579878(0x8000LL) < 0
      || (sub_1405792C0(&dword_140C2AA00),
          (int)sub_140579620(KeGetCurrentIrql(), (unsigned int)dword_140C2AA24, qword_140C2AA28) < 0)
      || (sub_140567F5C(0x3FFu), LOBYTE(v1) = byte_140C2AA07, (int)sub_1405796A4(v1, (unsigned int)dword_140C2AA48) < 0) )
    {
      v0 = 5LL;
      goto LABEL_26;
    }
    if ( !byte_140C2AA07 )
    {
      v0 = 2LL;
      goto LABEL_26;
    }
    v2 = &v5;
    byte_140C2A958 = 1;
    word_140C021C6 |= 2u;
    if ( !byte_140C2AA15 )
      v2 = 0LL;
    dword_140C2A948 = 1;
    dword_140D0195C = dword_140C2AA48;
    if ( sub_1405674E0(dword_140C2AA24, (__int64)v2) )
    {
      DbgPrintEx(
        0x65u,
        0,
        "\n"
        "*******************************************************************************\n"
        "                           Bugcheck Recovery\n"
        "*******************************************************************************\n");
      DbgPrintEx(
        0x65u,
        0,
        " You are seeing this message because the system has bugchecked and\n is attempting a bugcheck recovery.\n");
      DbgPrintEx(
        0x65u,
        0,
        "\n"
        " System Error Info:\n"
        "     Bugcheck Code: 0x%08lx\n"
        "     Parameter 1: 0x%p\n"
        "     Parameter 2: 0x%p\n"
        "     Parameter 3: 0x%p\n"
        "     Parameter 4: 0x%p\n",
        dword_140C2AA24,
        (const void *)qword_140C2AA28,
        (const void *)qword_140C2AA30,
        (const void *)qword_140C2AA38,
        (const void *)qword_140C2AA40);
      DbgPrintEx(
        0x65u,
        0,
        "\n"
        " Bugcheck Recovery Info Location: 0x%p\n"
        "*******************************************************************************\n"
        "\n",
        &dword_140C2AA00);
      if ( (_BYTE)KdDebuggerEnabled )
      {
        if ( !(_BYTE)KdDebuggerNotPresent )
          sub_1405672C0(3u);
      }
    }
    if ( (int)sub_140579060(v3, &v4) < 0 )
      dword_140D0195C = 0;
    if ( (int)sub_140579750(194LL) < 0 || (sub_140579780(), (int)sub_140579750(195LL) < 0) )
      sub_14057958C(5LL);
    if ( v4 )
      sub_140552B10();
  }
LABEL_27:
  dword_140C2A948 = 1;
}
