/*
 * XREFs of KiAbThreadBoostIoPriority @ 0x140319588
 * Callers:
 *     KiAbSetMinimumThreadPriority @ 0x1403190B8 (KiAbSetMinimumThreadPriority.c)
 * Callees:
 *     PsBoostThreadIoEx @ 0x140230040 (PsBoostThreadIoEx.c)
 *     KiAbQueueAutoBoostDpc @ 0x140307FD8 (KiAbQueueAutoBoostDpc.c)
 *     PsBoostThreadIoQoS @ 0x14031A99C (PsBoostThreadIoQoS.c)
 *     KiAbThreadInsertList @ 0x1403601C0 (KiAbThreadInsertList.c)
 */

__int64 __fastcall KiAbThreadBoostIoPriority(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  int v6; // edi
  __int64 v8; // r8
  __int64 v9; // r10
  unsigned int v10; // ecx
  signed __int32 v12[10]; // [rsp+0h] [rbp-28h] BYREF

  v6 = a3;
  if ( (_DWORD)a3 )
  {
    PsBoostThreadIoQoS(a1, 0LL, a3);
    v9 = 864LL;
  }
  else
  {
    PsBoostThreadIoEx(a1, 0, 0, 0LL);
    v9 = 860LL;
  }
  _InterlockedOr(v12, 0);
  if ( *(_DWORD *)(v9 + a1) )
  {
    v10 = 1;
    goto LABEL_12;
  }
  if ( !a2 )
  {
    v10 = 1;
    *a4 |= (v6 != 0) + 1;
LABEL_12:
    _InterlockedAdd((volatile signed __int32 *)(v9 + a1), 1u);
    return v10;
  }
  if ( v6 )
    PsBoostThreadIoQoS(a1, 1LL, v8);
  else
    PsBoostThreadIoEx(a1, 1, 0, 0LL);
  if ( (unsigned int)KiAbThreadInsertList(a1, a2, a1 + 816) )
    KiAbQueueAutoBoostDpc(a2 - 35696);
  return 0;
}
