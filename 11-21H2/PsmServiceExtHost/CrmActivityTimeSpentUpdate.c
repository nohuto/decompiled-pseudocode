/*
 * XREFs of CrmActivityTimeSpentUpdate @ 0x180031564
 * Callers:
 *     CrmActivityListenerCallback @ 0x1800315E0 (CrmActivityListenerCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CrmActivityTimeSpentUpdate(__int64 a1, int a2)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_DWORD *)(a1 + 136) )
  {
    result = RtlQueryUnbiasedInterruptTime(&v7);
    v5 = v7;
    v6 = v7 - *(_QWORD *)(a1 + 168);
    if ( a2 && (a2 != 2 || (result = *(unsigned int *)(a1 + 88), *(_DWORD *)(a1 + 92) == (_DWORD)result)) )
      *(_QWORD *)(a1 + 176) += v6;
    else
      *(_QWORD *)(a1 + 184) += v6;
    *(_QWORD *)(a1 + 168) = v5;
  }
  return result;
}
