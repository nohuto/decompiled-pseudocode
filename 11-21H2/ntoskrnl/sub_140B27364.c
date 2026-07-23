/*
 * XREFs of sub_140B27364 @ 0x140B27364
 * Callers:
 *     sub_140A5B550 @ 0x140A5B550 (sub_140A5B550.c)
 * Callees:
 *     sub_14036FA84 @ 0x14036FA84 (sub_14036FA84.c)
 *     sub_1403B37B0 @ 0x1403B37B0 (sub_1403B37B0.c)
 *     sub_1403B37F0 @ 0x1403B37F0 (sub_1403B37F0.c)
 *     sub_1403B3A6C @ 0x1403B3A6C (sub_1403B3A6C.c)
 *     sub_1403BAEA4 @ 0x1403BAEA4 (sub_1403BAEA4.c)
 *     strstr @ 0x1403E0C40 (strstr.c)
 *     atoi @ 0x1403E0CC0 (atoi.c)
 *     sub_140509464 @ 0x140509464 (sub_140509464.c)
 *     sub_14050E854 @ 0x14050E854 (sub_14050E854.c)
 */

char __fastcall sub_140B27364(__int64 a1)
{
  char *v2; // rax
  const char *v3; // rcx
  const char *v4; // rbx
  char *v5; // rax
  char v6; // cl
  int v7; // eax
  char *v8; // rax
  char v9; // cl
  int v10; // eax
  char v11; // cl
  char v12; // al
  char *v13; // rax
  char v14; // cl

  LODWORD(v2) = sub_14036FA84();
  if ( (_DWORD)v2 == 1 )
    byte_140C4BEF1 = 1;
  if ( a1
    && ((v2 = *(char **)(a1 + 240), (*((_DWORD *)v2 + 873) & 0x2000) != 0) && (LOBYTE(v2) = sub_1403BAEA4(), !(_BYTE)v2)
     || (v3 = *(const char **)(a1 + 216)) != 0LL
     && (v2 = strstr(v3, "SMT=BLOCKED")) != 0LL
     && (LOBYTE(v2) = sub_1403BAEA4(), !(_BYTE)v2)) )
  {
    byte_140C4AD7D = 1;
    v2 = *(char **)(a1 + 240);
    if ( (*((_DWORD *)v2 + 33) & 0x200) == 0 )
      byte_140C4AD7C = 1;
  }
  else
  {
    byte_140C4AD7D = 0;
    if ( !a1 )
      return (char)v2;
  }
  v4 = *(const char **)(a1 + 216);
  if ( !v4 )
    return (char)v2;
  strstr(*(const char **)(a1 + 216), "SAFEBOOT:");
  if ( strstr(v4, "ONECPU") )
    dword_140D014BC = 1;
  if ( strstr(v4, "USEPHYSICALAPIC") )
    byte_140D011A0 = 1;
  if ( strstr(v4, "BREAK") )
    byte_140C4BEF0 = 1;
  v5 = strstr(v4, "MAXPROCSPERCLUSTER");
  if ( v5 )
  {
    while ( 1 )
    {
      v6 = *v5;
      if ( !*v5 || v6 == 32 || (unsigned __int8)(v6 - 48) <= 9u )
        break;
      ++v5;
    }
    v7 = atoi(v5);
    byte_140C4E840 = 1;
    if ( v7 )
      dword_140C4EFC8 = v7;
  }
  v8 = strstr(v4, "MAXAPICCLUSTER");
  if ( v8 )
  {
    while ( 1 )
    {
      v9 = *v8;
      if ( !*v8 || v9 == 32 || (unsigned __int8)(v9 - 48) <= 9u )
        break;
      ++v8;
    }
    v10 = atoi(v8);
    if ( v10 )
      LODWORD(dword_140C4EFC4) = v10;
  }
  if ( strstr(v4, "X2APICPOLICY=ENABLE") )
    byte_140C0C686 = 1;
  if ( strstr(v4, "X2APICPOLICY=DISABLE") )
    byte_140C0C686 = 0;
  if ( strstr(v4, "USELEGACYAPICMODE") )
    byte_140C0C686 = 0;
  if ( strstr(v4, "SYSTEMWATCHDOGPOLICY=DISABLED") )
  {
    byte_140C4C6C0 = 1;
  }
  else if ( strstr(v4, "SYSTEMWATCHDOGPOLICY=PHYSICALONLY") )
  {
    byte_140C4C689 = 1;
  }
  if ( strstr(v4, "CONFIGACCESSPOLICY=DISALLOWMMCONFIG") )
    byte_140C4E848 = 1;
  if ( strstr(v4, "MSIPOLICY=FORCEDISABLE") )
  {
    v11 = 0;
LABEL_51:
    sub_140509464(v11);
    goto LABEL_52;
  }
  if ( strstr(v4, "FORCEMSI") )
  {
    v11 = 1;
    goto LABEL_51;
  }
LABEL_52:
  if ( sub_1403B37F0() )
  {
    byte_140C4C679 = 1;
    if ( sub_1403BAEA4() )
      byte_140C4C678 = 1;
    v12 = sub_14050E854();
  }
  else
  {
    v12 = sub_1403B3A6C();
  }
  if ( v12 )
    byte_140C4C438 = 1;
  if ( strstr(v4, "FIRSTMEGABYTEPOLICY=USEALL") || sub_1403B37B0() && !byte_140C4C678 )
    byte_140C4BEF1 = 0;
  if ( strstr(v4, "USEPLATFORMCLOCK") )
    byte_140C4E410 = 1;
  if ( strstr(v4, "USEPLATFORMTICK") )
    byte_140C4E4B8 = 1;
  v13 = strstr(v4, "GROUPSIZE");
  if ( v13 )
  {
    while ( 1 )
    {
      v14 = *v13;
      if ( !*v13 || v14 == 32 || (unsigned __int8)(v14 - 48) <= 9u )
        break;
      ++v13;
    }
    dword_140C0CAA0 = atoi(v13);
    if ( (unsigned int)(dword_140C0CAA0 - 1) > 0x3F )
      dword_140C0CAA0 = 64;
  }
  byte_140C54BF8 = (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 132LL) & 0x20000) != 0;
  strstr(v4, "HALTPROFILINGPOLICY=BLOCKED");
  strstr(v4, "HALTPROFILINGPOLICY=RELAXED");
  LOBYTE(v2) = (unsigned __int8)strstr(v4, "HALTPROFILINGPOLICY=RESTRICTED");
  return (char)v2;
}
