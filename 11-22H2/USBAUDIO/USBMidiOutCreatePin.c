/*
 * XREFs of USBMidiOutCreatePin @ 0x1C0037540
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall USBMidiOutCreatePin(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v3; // r8d
  NTSTATUS v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // r10
  __int64 v9; // r9
  unsigned int v10; // ecx
  struct _NPAGED_LOOKASIDE_LIST *Pool2; // rax

  v1 = *(_QWORD *)(a1 + 16);
  v3 = 0;
  v4 = -1073741808;
  v5 = *(_QWORD *)(v1 + 144);
  v6 = *(_QWORD *)(v1 + 152);
  *(_QWORD *)(v6 + 24) = a1;
  *(_DWORD *)(v6 + 16) = *(_DWORD *)(v5 + 208);
  *(_DWORD *)(v6 + 20) = *(_DWORD *)(v5 + 212);
  v7 = *(_QWORD *)(v5 + 200);
  if ( *(_DWORD *)(v7 + 32) )
  {
    while ( v4 < 0 )
    {
      v8 = *(_QWORD *)(v7 + 40);
      v9 = 168LL * v3;
      if ( *(_BYTE *)(*(_QWORD *)(v5 + 168) + 2LL) == *(_BYTE *)(v9 + v8 + 2) )
      {
        *(_QWORD *)(v6 + 56) = *(_QWORD *)(v9 + v8 + 8);
        v10 = *(unsigned __int16 *)(*(_QWORD *)(v5 + 168) + 4LL);
        *(_DWORD *)(v6 + 64) = v10;
        v4 = v10 > 0x400 ? 0xC0000182 : 0;
      }
      v7 = *(_QWORD *)(v5 + 200);
      if ( ++v3 >= *(_DWORD *)(v7 + 32) )
      {
        if ( v4 < 0 )
          return (unsigned int)v4;
        break;
      }
    }
    Pool2 = (struct _NPAGED_LOOKASIDE_LIST *)ExAllocatePool2(64LL, 128LL, 1096972357LL);
    *(_QWORD *)(v6 + 80) = Pool2;
    if ( Pool2 )
    {
      ExInitializeNPagedLookasideList(
        Pool2,
        USBMidiOutLookasideAlloc,
        (PFREE_FUNCTION)USBMidiOutLookasideFree,
        0x200u,
        *(unsigned int *)(v6 + 64),
        0x41627845u,
        0x14u);
      v4 = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(a1 + 8), *(PVOID *)(v6 + 80), ExFreePool);
      if ( v4 < 0 )
        ExFreePool(*(PVOID *)(v6 + 80));
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v4;
}
