/*
 * XREFs of ?ndisSendCompleteWithPause@@YAXPEAXPEAU_NDIS_PACKET@@H@Z @ 0x1C00CAC00
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0024DC4 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C0031788 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038370 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ndisSendCompleteWithPause(__int64 a1, struct _NDIS_PACKET *a2, unsigned int a3)
{
  bool v6; // di
  struct _NDIS_STACK_RESERVED *v7; // rax
  KIRQL v8; // al
  int v9; // ecx
  struct _NDIS_STACK_RESERVED *v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = 0LL;
  v6 = 0;
  NDIS_STACK_RESERVED_FROM_PACKET(a2, &v10);
  v7 = v10;
  --*(_DWORD *)&a2[-1].ProtocolReserved[4];
  *((_DWORD *)v7 + 2) = 0;
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 624));
  v9 = *(_DWORD *)(a1 + 644) - 1;
  *(_BYTE *)(a1 + 632) = v8;
  *(_DWORD *)(a1 + 644) = v9;
  if ( *(_DWORD *)(a1 + 640) == 1 )
    v6 = v9 == 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 624), v8);
  (*(void (__fastcall **)(_QWORD, struct _NDIS_PACKET *, _QWORD))(a1 + 680))(*(_QWORD *)(a1 + 528), a2, a3);
  if ( v6 )
    KeSetEvent((PRKEVENT)(a1 + 648), 0, 0);
  ndisMDereferenceOpenUnlocked(a1, 9u);
}
