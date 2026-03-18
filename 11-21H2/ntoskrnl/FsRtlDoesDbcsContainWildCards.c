/*
 * XREFs of FsRtlDoesDbcsContainWildCards @ 0x1408814B0
 * Callers:
 *     FsRtlIsFatDbcsLegal @ 0x140693FB0 (FsRtlIsFatDbcsLegal.c)
 *     FsRtlIsDbcsInExpression @ 0x14092F040 (FsRtlIsDbcsInExpression.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall FsRtlDoesDbcsContainWildCards(PANSI_STRING Name)
{
  int v1; // edx
  __int64 v2; // r8

  v1 = 0;
  if ( !Name->Length )
    return 0;
  while ( 1 )
  {
    v2 = Name->Buffer[v1];
    if ( (unsigned __int8)v2 < 0x80u
      || !(_BYTE)NlsMbOemCodePageTag
      || !*((_WORD *)NlsOemLeadByteInfo + (unsigned __int8)v2) )
    {
      break;
    }
    ++v1;
LABEL_8:
    if ( ++v1 >= (unsigned int)Name->Length )
      return 0;
  }
  if ( (v2 & 0x80u) != 0LL || (*((_BYTE *)qword_140015C50 + v2) & 8) == 0 )
    goto LABEL_8;
  return 1;
}
