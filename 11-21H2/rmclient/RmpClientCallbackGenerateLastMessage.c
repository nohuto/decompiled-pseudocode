/*
 * XREFs of RmpClientCallbackGenerateLastMessage @ 0x180008764
 * Callers:
 *     RmpClientSubscriptionDeliverPayload @ 0x1800086B0 (RmpClientSubscriptionDeliverPayload.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpClientCallbackGenerateLastMessage(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v5; // ecx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx

  result = 0LL;
  *(_OWORD *)a2 = 0LL;
  *(_OWORD *)(a2 + 16) = 0LL;
  *(_OWORD *)(a2 + 32) = 0LL;
  *(_QWORD *)(a2 + 48) = 0LL;
  v5 = *(_DWORD *)(a1 + 56);
  *(_DWORD *)a2 = v5;
  if ( v5 )
  {
    if ( v5 == 1 )
    {
      v6 = *(_QWORD *)(a1 + 80);
      v7 = *(_QWORD *)(a1 + 48);
      result = *(_QWORD *)(a1 + 64);
      *(_DWORD *)(a2 + 32) = 0;
      *(_QWORD *)(a2 + 8) = result;
      *(_QWORD *)(a2 + 16) = v7;
      *(_QWORD *)(a2 + 24) = v6;
    }
  }
  else
  {
    v8 = *(_QWORD *)(a1 + 80);
    result = *(_QWORD *)(a1 + 48);
    *(_DWORD *)(a2 + 24) = 0;
    *(_QWORD *)(a2 + 8) = result;
    *(_QWORD *)(a2 + 16) = v8;
  }
  return result;
}
