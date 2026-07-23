/*
 * XREFs of sub_1403D8A98 @ 0x1403D8A98
 * Callers:
 *     sub_1403AEA08 @ 0x1403AEA08 (sub_1403AEA08.c)
 *     HalGetInterruptTargetInformation @ 0x1403D8950 (HalGetInterruptTargetInformation.c)
 *     sub_140517DCC @ 0x140517DCC (sub_140517DCC.c)
 * Callees:
 *     sub_1403AAE80 @ 0x1403AAE80 (sub_1403AAE80.c)
 *     EmClientQueryRuleState @ 0x140A47D40 (EmClientQueryRuleState.c)
 */

char __fastcall sub_1403D8A98(char a1)
{
  char result; // al
  char v3; // al
  char v4; // cl
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int8 v6; // dl
  bool v7; // cc
  int v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0;
  if ( byte_140C54A99 )
  {
    result = byte_140C54A98;
    goto LABEL_3;
  }
  if ( qword_140C54A88 && !*(_QWORD *)(qword_140C54A88 + 136) )
  {
    result = 0;
    goto LABEL_3;
  }
  if ( a1 || (int)EmClientQueryRuleState(qword_140012F50, &v8) >= 0 && v8 != 2 )
  {
    LOBYTE(v8) = 0;
    v3 = sub_1403AAE80(0LL, 0LL, 0LL, &v8);
    v4 = v3 != 0 ? v8 : 0;
    if ( v4 != 2 && v4 != 1 )
    {
      result = 0;
      if ( v4 != 3 )
        goto LABEL_13;
      CurrentPrcb = KeGetCurrentPrcb();
      v6 = *((_BYTE *)CurrentPrcb + 64);
      v7 = v6 <= 6u;
      if ( v6 != 6 )
        goto LABEL_25;
      if ( *((_BYTE *)CurrentPrcb + 67) < 0xAu )
      {
        v7 = 1;
LABEL_25:
        if ( v7 )
          goto LABEL_13;
      }
    }
    result = 1;
LABEL_13:
    if ( (dword_140D014C4 & 1) != 0 )
      result = 1;
    if ( (dword_140D014C4 & 2) != 0 )
      result = 0;
LABEL_3:
    if ( a1 )
      return result;
    goto LABEL_4;
  }
  result = 0;
LABEL_4:
  byte_140C54A98 = result;
  byte_140C54A99 = 1;
  return result;
}
