/*
 * XREFs of LdrpNotifyLoadOfGraph @ 0x18002ED10
 * Callers:
 *     LdrpPrepareModuleForExecution @ 0x18002DAD8 (LdrpPrepareModuleForExecution.c)
 *     LdrpNotifyLoadOfGraph @ 0x18002ED10 (LdrpNotifyLoadOfGraph.c)
 * Callees:
 *     LdrpNotifyLoadOfGraph @ 0x18002ED10 (LdrpNotifyLoadOfGraph.c)
 *     LdrpSendPostSnapNotifications @ 0x18002ED90 (LdrpSendPostSnapNotifications.c)
 */

__int64 __fastcall LdrpNotifyLoadOfGraph(__int64 a1)
{
  _QWORD *v1; // rsi
  _QWORD *v3; // rbx
  __int64 v4; // rcx
  __int64 result; // rax

  v1 = *(_QWORD **)(a1 + 40);
  if ( !v1 )
    goto LABEL_8;
  v3 = *(_QWORD **)(a1 + 40);
  while ( 1 )
  {
    v3 = (_QWORD *)*v3;
    v4 = v3[1];
    if ( *(_DWORD *)(v4 + 56) == 6 )
    {
      result = LdrpNotifyLoadOfGraph(v4);
      if ( (int)result < 0 )
        return result;
      goto LABEL_6;
    }
    if ( *(int *)(v4 + 56) < 7 )
      break;
    result = 0LL;
LABEL_6:
    if ( v3 == v1 )
      goto LABEL_7;
  }
  result = 3221225701LL;
  if ( *(_DWORD *)(v4 + 56) == -4 )
    result = 3221225794LL;
LABEL_7:
  if ( (int)result >= 0 )
  {
LABEL_8:
    *(_DWORD *)(a1 + 56) = 7;
    result = LdrpSendPostSnapNotifications(a1);
    if ( (int)result < 0 )
      *(_DWORD *)(a1 + 56) = 6;
  }
  return result;
}
