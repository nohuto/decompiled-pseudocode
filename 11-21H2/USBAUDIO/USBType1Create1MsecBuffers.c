/*
 * XREFs of USBType1Create1MsecBuffers @ 0x1C0039B40
 * Callers:
 *     USBType1RenderCreatePin @ 0x1C003A120 (USBType1RenderCreatePin.c)
 * Callees:
 *     USBHwAllocateAndBag @ 0x1C0033484 (USBHwAllocateAndBag.c)
 */

__int64 __fastcall USBType1Create1MsecBuffers(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // r13
  __int64 v4; // rbp
  unsigned __int64 v5; // rax
  unsigned int v6; // ecx
  __int64 v7; // rsi
  int v8; // edi
  unsigned __int64 v9; // r14
  __int64 v10; // r15
  unsigned int v11; // r12d
  __int64 v12; // rsi
  PIRP Irp; // rax
  unsigned __int64 v14; // rcx
  _QWORD *v15; // rax
  unsigned __int64 v18; // [rsp+68h] [rbp+10h] BYREF
  __int64 v19; // [rsp+70h] [rbp+18h]

  v1 = *(_QWORD *)(a1 + 16);
  v18 = 0LL;
  v19 = v1;
  v3 = *(_QWORD *)(v1 + 152);
  v4 = *(_DWORD *)(*(_QWORD *)(v1 + 144) + 220LL) & 0x3FF;
  v5 = 0x1000uLL / (v4 + 7);
  if ( (_DWORD)v5 )
    v6 = 0xC / (unsigned int)v5 + (0xC % (unsigned int)v5 != 0);
  else
    v6 = 12;
  v7 = v6 << 12;
  v8 = USBHwAllocateAndBag((PVOID *)&v18, (v7 + 6147) & 0xFFFFF000, 64LL, *(void **)(a1 + 8));
  if ( v8 >= 0 )
  {
    v9 = v18;
    v10 = v3 + 136;
    *(_QWORD *)(v3 + 144) = v3 + 136;
    v11 = 0;
    *(_QWORD *)(v3 + 136) = v3 + 136;
    v18 = v7 + v9;
    v12 = v3 + 184;
    while ( v8 >= 0 )
    {
      Irp = IoAllocateIrp(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v19 + 16) + 40LL) + 76LL), 0);
      *(_QWORD *)(v12 + 16) = Irp;
      if ( Irp )
      {
        v8 = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(a1 + 8), Irp, (PFNKSFREE)IoFreeIrp);
        if ( v8 >= 0 )
        {
          v14 = v18;
          *(_QWORD *)(v12 + 48) = v9;
          *(_QWORD *)(v12 + 40) = a1;
          v9 = (v4 + v9 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
          *(_QWORD *)(v12 + 24) = v14;
          if ( ((v9 ^ (v9 + v4)) & 0xFFFFFFFFFFFFF000uLL) != 0 )
            v9 = (v9 & 0xFFFFFFFFFFFFF000uLL) + 4096;
          v15 = *(_QWORD **)(v3 + 144);
          v18 = (v14 + 171) & 0xFFFFFFFFFFFFFFF8uLL;
          if ( *v15 != v10 )
            __fastfail(3u);
          *(_QWORD *)v12 = v10;
          *(_QWORD *)(v12 + 8) = v15;
          *v15 = v12;
          *(_QWORD *)(v3 + 144) = v12;
        }
        else
        {
          IoFreeIrp(*(PIRP *)(v12 + 16));
        }
      }
      else
      {
        v8 = -1073741670;
      }
      ++v11;
      v12 += 56LL;
      if ( v11 >= 0xC )
      {
        if ( v8 >= 0 )
          KeInitializeSemaphore((PRKSEMAPHORE)(v3 + 152), 12, 12);
        return (unsigned int)v8;
      }
    }
  }
  return (unsigned int)v8;
}
