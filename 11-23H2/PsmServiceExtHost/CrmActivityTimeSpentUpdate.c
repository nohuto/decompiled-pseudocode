/*
 * XREFs of CrmActivityTimeSpentUpdate @ 0x18002A904
 * Callers:
 *     CrmActivityUpdate @ 0x180038D64 (CrmActivityUpdate.c)
 *     CrmSrvActivityStop @ 0x18006D108 (CrmSrvActivityStop.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CrmActivityTimeSpentUpdate(__int64 a1, int a2)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_DWORD *)(a1 + 160) )
  {
    result = RtlQueryUnbiasedInterruptTime(&v7);
    v5 = v7;
    v6 = v7 - *(_QWORD *)(a1 + 192);
    if ( a2 && (a2 != 2 || (result = *(unsigned int *)(a1 + 96), *(_DWORD *)(a1 + 100) == (_DWORD)result)) )
      *(_QWORD *)(a1 + 200) += v6;
    else
      *(_QWORD *)(a1 + 208) += v6;
    *(_QWORD *)(a1 + 192) = v5;
  }
  return result;
}
