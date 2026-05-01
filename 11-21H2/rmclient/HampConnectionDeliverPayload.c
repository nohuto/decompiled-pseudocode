/*
 * XREFs of HampConnectionDeliverPayload @ 0x180008970
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180015750 (_guard_xfg_dispatch_icall_nop.c)
 */

BOOLEAN __fastcall HampConnectionDeliverPayload(__int64 a1, _QWORD *a2, __int64 a3)
{
  _QWORD v5[2]; // [rsp+20h] [rbp-48h] BYREF
  int v6; // [rsp+30h] [rbp-38h]
  __int64 v7; // [rsp+34h] [rbp-34h]
  __int64 v8; // [rsp+3Ch] [rbp-2Ch]
  __int64 v9; // [rsp+44h] [rbp-24h]
  __int64 v10; // [rsp+4Ch] [rbp-1Ch]
  __int64 v11; // [rsp+54h] [rbp-14h]
  int v12; // [rsp+5Ch] [rbp-Ch]

  if ( a3 )
  {
    *(_QWORD *)(a3 + 8) = a2[7];
    return (*(__int64 (__fastcall **)(__int64))(a1 + 80))(a3);
  }
  else
  {
    v5[1] = a2[7];
    v7 = 0LL;
    v8 = 0LL;
    v9 = 0LL;
    v10 = 0LL;
    v11 = 0LL;
    v12 = 0;
    v5[0] = a2[6];
    v6 = 3;
    (*(void (__fastcall **)(_QWORD *))(a1 + 80))(v5);
    a2[6] = -1LL;
    return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a2);
  }
}
