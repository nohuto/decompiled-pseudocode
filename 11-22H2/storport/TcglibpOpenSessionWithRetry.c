/*
 * XREFs of TcglibpOpenSessionWithRetry @ 0x1C007F0A0
 * Callers:
 *     TcglibOpenSession @ 0x1C0079C54 (TcglibOpenSession.c)
 *     TcglibpGetCapabilities @ 0x1C007D1E8 (TcglibpGetCapabilities.c)
 * Callees:
 *     TcglibpCheckError @ 0x1C007AB10 (TcglibpCheckError.c)
 *     TcglibpOpenSession @ 0x1C007EF74 (TcglibpOpenSession.c)
 */

__int64 __fastcall TcglibpOpenSessionWithRetry(__int64 a1, __int64 a2, __int64 a3)
{
  char v6; // di
  __int64 result; // rax

  v6 = 0;
  while ( 1 )
  {
    *(_OWORD *)a2 = 0LL;
    *(_OWORD *)(a2 + 16) = 0LL;
    *(_OWORD *)(a2 + 32) = 0LL;
    *(_QWORD *)(a2 + 48) = 0LL;
    *(_DWORD *)a2 = 1;
    *(_WORD *)(a2 + 24) = *(_WORD *)(a1 + 28);
    *(_DWORD *)(a2 + 4) = *(_DWORD *)(a1 + 24);
    *(_QWORD *)(a2 + 16) = a3;
    *(_QWORD *)(a1 + 16) = a2;
    *(_DWORD *)a2 = 2;
    result = TcglibpOpenSession((int **)a1, a2);
    if ( (int)result >= 0 )
      break;
    result = TcglibpCheckError(a1, (volatile __int32 *)a2, result);
    *(_QWORD *)(a1 + 16) = 0LL;
    if ( (_DWORD)result == -1073741309 )
    {
      if ( v6 )
        return result;
      v6 = 1;
    }
    else if ( !v6 )
    {
      return result;
    }
  }
  return result;
}
