/*
 * XREFs of ?ndisMProcessSGList@@YAXPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAU_SCATTER_GATHER_LIST@@PEAX@Z @ 0x1C00C8A60
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C002DDD8 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 *     ?ndisMSendCompleteX@@YAXPEAXPEAU_NDIS_PACKET@@H@Z @ 0x1C00C3450 (-ndisMSendCompleteX@@YAXPEAXPEAU_NDIS_PACKET@@H@Z.c)
 */

void __fastcall ndisMProcessSGList(
        struct _DEVICE_OBJECT *a1,
        struct _IRP *a2,
        struct _SCATTER_GATHER_LIST *a3,
        struct _NDIS_PACKET *a4)
{
  __int64 v4; // rcx
  struct _NDIS_STACK_RESERVED *v5; // rdx
  _BYTE *v6; // rbx
  __int64 v7; // rbx
  __int64 v8; // rcx
  unsigned int v9; // eax
  struct _NDIS_PACKET *v10; // [rsp+40h] [rbp+18h] BYREF
  struct _NDIS_STACK_RESERVED *v11; // [rsp+48h] [rbp+20h] BYREF

  v11 = 0LL;
  v10 = a4;
  *(unsigned __int64 *)((char *)a4->Reserved + a4->Private.NdisPacketOobOffset) = (unsigned __int64)a3;
  NDIS_STACK_RESERVED_FROM_PACKET(v10, &v11);
  v5 = v11;
  v6 = *(_BYTE **)v11;
  if ( **(_BYTE **)v11 == 5 )
    v7 = *((_QWORD *)v6 + 4);
  else
    v7 = *((_QWORD *)v6 + 2);
  *(_BYTE *)(v4 + 41) |= 0x10u;
  if ( (*(_DWORD *)(v7 + 120) & 0x20000) != 0 )
  {
    (*(void (__fastcall **)(_QWORD, struct _NDIS_PACKET **, __int64))(*((_QWORD *)v5 + 1) + 208LL))(
      *(_QWORD *)(*((_QWORD *)v5 + 1) + 200LL),
      &v10,
      1LL);
  }
  else
  {
    v8 = *(_QWORD *)(v7 + 24);
    if ( (*(_BYTE *)(v7 + 928) & 1) != 0 )
    {
      (*(void (__fastcall **)(__int64, struct _NDIS_PACKET **, __int64))(v7 + 1808))(v8, &v10, 1LL);
    }
    else
    {
      v9 = (*(__int64 (__fastcall **)(__int64, struct _NDIS_PACKET *, _QWORD))(*(_QWORD *)(v7 + 3760) + 200LL))(
             v8,
             v10,
             v10->Private.Flags);
      if ( v9 != 259 )
        ndisMSendCompleteX((struct _NDIS_MINIPORT_BLOCK *)v7, v10, v9);
    }
  }
}
