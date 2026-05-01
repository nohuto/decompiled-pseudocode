/*
 * XREFs of RmpClientSubscriptionDeliverPayload @ 0x1800086B0
 * Callers:
 *     <none>
 * Callees:
 *     RmpClientCallbackGenerateLastMessage @ 0x180008764 (RmpClientCallbackGenerateLastMessage.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180015750 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall RmpClientSubscriptionDeliverPayload(__int64 a1, _QWORD *a2, _BYTE *a3)
{
  _BYTE *v5; // r10
  int v6; // eax
  __int64 (__fastcall *v7)(_BYTE *); // rax
  __int64 (__fastcall *v8)(_BYTE *); // rax
  _BYTE v10[72]; // [rsp+20h] [rbp-48h] BYREF

  if ( a3 )
  {
    v5 = a3;
  }
  else
  {
    RmpClientCallbackGenerateLastMessage(a2, v10);
    v5 = v10;
  }
  v6 = *(_DWORD *)v5;
  if ( *(_DWORD *)v5 )
  {
    if ( v6 == 1 )
    {
      v7 = (__int64 (__fastcall *)(_BYTE *))a2[9];
      *((_QWORD *)v5 + 3) = a2[10];
      LOBYTE(v6) = v7(v5 + 8);
    }
  }
  else
  {
    v8 = (__int64 (__fastcall *)(_BYTE *))a2[9];
    *((_QWORD *)v5 + 2) = a2[10];
    LOBYTE(v6) = v8(v5 + 8);
  }
  if ( !a3 )
    LOBYTE(v6) = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a2);
  return v6;
}
