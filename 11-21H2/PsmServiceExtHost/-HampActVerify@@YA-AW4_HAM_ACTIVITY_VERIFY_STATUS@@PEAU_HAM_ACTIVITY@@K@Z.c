/*
 * XREFs of ?HampActVerify@@YA?AW4_HAM_ACTIVITY_VERIFY_STATUS@@PEAU_HAM_ACTIVITY@@K@Z @ 0x1800782F0
 * Callers:
 *     ?HampActExpirationTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180077760 (-HampActExpirationTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     CempListEntryIsNull @ 0x18000A004 (CempListEntryIsNull.c)
 */

__int64 __fastcall HampActVerify(__int64 a1)
{
  __int64 v1; // r9
  unsigned int v2; // r8d
  __int64 v3; // rax
  __int64 v4; // r11
  __int64 v5; // rcx
  int v6; // r10d
  char v8; // dl
  __int64 v9; // r9
  int v10; // ecx
  int v11; // eax
  __int64 v12; // rdx
  int v13; // ecx
  __int64 v14; // r8
  int v15; // eax
  int v16; // eax

  v1 = a1;
  v2 = 1;
  if ( ((*(_QWORD *)(a1 + 40) >> 57) & 7) != 5 )
    return v2;
  v3 = *(_QWORD *)(a1 + 88);
  v4 = 0LL;
  if ( !v3
    || (v5 = *(_QWORD *)(v3 + 8), (*(_BYTE *)(v5 + 552) & 1) != 0)
    || (*(_QWORD *)(v3 + 16) != -1LL) == (unsigned __int8)(*(_BYTE *)(v5 + 562) - 2) <= 1u )
  {
    v6 = *(_DWORD *)(v1 + 552);
    if ( (v6 & 3) == 2 )
      return 10LL;
    v8 = *(_BYTE *)(v1 + 562);
    if ( v8 )
    {
      switch ( *(_BYTE *)(v1 + 562) )
      {
        case 1:
          if ( (v6 & 0x180) != 0 )
            return 8;
          if ( (v6 & 0x40) != 0 || *(_QWORD *)(v1 + 536) )
            return 9;
          break;
        case 2:
          if ( (v6 & 1) == 0 && !*(_QWORD *)(v1 + 528) )
            return 12;
          break;
        case 3:
          if ( (v6 & 4) == 0 )
            return 6;
          break;
        case 4:
          if ( (v6 & 1) == 0
            && (!(unsigned int)CempListEntryIsNull((_QWORD *)(v1 + 48))
             || !(unsigned int)CempListEntryIsNull((_QWORD *)(v9 + 96))) )
          {
            return 2;
          }
          v8 = *(_BYTE *)(v1 + 562);
          break;
        default:
          return 5;
      }
    }
    else
    {
      v2 = 4;
      if ( (v6 & 4) != 0 )
        return v2;
    }
    v10 = v4;
    v11 = v4;
    LOBYTE(v10) = *(_BYTE *)(v1 + 563) != 6;
    LOBYTE(v11) = v8 == 2;
    if ( v11 == v10 )
    {
      if ( v8 == 2 || *(_QWORD *)(v1 + 528) == v4 )
      {
        v12 = *(_QWORD *)(v1 + 544);
        v13 = v4;
        v14 = *(_QWORD *)(v1 + 536);
        v15 = v4;
        LOBYTE(v13) = v12 == 0;
        LOBYTE(v15) = v14 == 0;
        if ( v15 != v13 )
          return 14;
        v16 = *(_DWORD *)(v1 + 552);
        if ( (v16 & 0x40) != 0 && (v14 || v12) )
        {
          return 14;
        }
        else if ( (v16 & 0x1E00) != 0
               || (v16 & 0x180) == 0 && *(_WORD *)(v1 + 560) == (_WORD)v4 && *(_DWORD *)(v1 + 556) == (_DWORD)v4 )
        {
          return (unsigned int)v4;
        }
        else
        {
          return 15;
        }
      }
      else
      {
        return 13;
      }
    }
    else
    {
      return 7;
    }
  }
  return 3;
}
