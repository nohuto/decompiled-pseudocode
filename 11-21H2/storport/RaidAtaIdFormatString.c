/*
 * XREFs of RaidAtaIdFormatString @ 0x1C003C88C
 * Callers:
 *     RaidBusEnumeratorProcessAtaInformation @ 0x1C003C9E0 (RaidBusEnumeratorProcessAtaInformation.c)
 * Callees:
 *     RaidRemoveTrailingBlanks @ 0x1C000BA78 (RaidRemoveTrailingBlanks.c)
 */

void __fastcall RaidAtaIdFormatString(char *a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r9
  char v6; // di
  unsigned int v7; // ebx
  char *v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rsi
  char v11; // cl
  char v12; // dl
  __int64 v13; // rcx

  v3 = 0LL;
  *a1 = 0;
  v6 = 0;
  v7 = 0;
  if ( a3 )
  {
    v8 = a1;
    v9 = a2 - (_QWORD)a1;
    v10 = a3;
    v7 = a3;
    do
    {
      if ( !v6 )
      {
        v11 = v8[v9];
        if ( v11 )
        {
          if ( (unsigned __int8)(v11 - 33) <= 0x5Eu && v11 != 44 )
            goto LABEL_9;
        }
        else
        {
          v6 = 1;
        }
      }
      v11 = 32;
LABEL_9:
      *v8++ = v11;
      --v10;
    }
    while ( v10 );
  }
  a1[v7] = 0;
  if ( a3 && (a3 & 1) == 0 && a3 != 1 )
  {
    do
    {
      v12 = a1[v3];
      v13 = (unsigned int)(v3 + 1);
      a1[v3] = a1[v13];
      v3 = (unsigned int)(v3 + 2);
      a1[v13] = v12;
    }
    while ( (unsigned int)v3 < a3 - 1 );
  }
  RaidRemoveTrailingBlanks((__int64)a1, a3 + 1);
}
