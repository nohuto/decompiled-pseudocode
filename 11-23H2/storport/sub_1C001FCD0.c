/*
 * XREFs of sub_1C001FCD0 @ 0x1C001FCD0
 * Callers:
 *     sub_1C001FA9C @ 0x1C001FA9C (sub_1C001FA9C.c)
 *     sub_1C00557CC @ 0x1C00557CC (sub_1C00557CC.c)
 *     sub_1C005F5A4 @ 0x1C005F5A4 (sub_1C005F5A4.c)
 *     sub_1C005FAB4 @ 0x1C005FAB4 (sub_1C005FAB4.c)
 *     sub_1C0061378 @ 0x1C0061378 (sub_1C0061378.c)
 *     sub_1C0061F7C @ 0x1C0061F7C (sub_1C0061F7C.c)
 *     sub_1C0062A44 @ 0x1C0062A44 (sub_1C0062A44.c)
 *     DoScreenSave_0 @ 0x1C0062D50 (DoScreenSave_0.c)
 *     sub_1C00630BC @ 0x1C00630BC (sub_1C00630BC.c)
 * Callees:
 *     sub_1C001FDE8 @ 0x1C001FDE8 (sub_1C001FDE8.c)
 */

PIRP __fastcall sub_1C001FCD0(__int64 a1, ULONG_PTR a2, __int64 a3, struct _IO_STATUS_BLOCK *a4)
{
  PIRP result; // rax
  IRP *v7; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  int v9; // ecx
  void *v10; // r10
  ULONG v11; // edx
  unsigned int v12; // ebp
  PMDL Mdl; // rax
  __int64 v14; // rdx

  result = IoAllocateIrp(*(_BYTE *)(a1 + 76), 0);
  v7 = result;
  if ( result )
  {
    CurrentStackLocation = result->Tail.Overlay.CurrentStackLocation;
    result->Tail.Overlay.Thread = KeGetCurrentThread();
    *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 15;
    if ( *(_BYTE *)(a2 + 2) == 40 )
    {
      v9 = *(_DWORD *)(a2 + 24);
      v10 = *(void **)(a2 + 64);
      v11 = *(_DWORD *)(a2 + 60);
    }
    else
    {
      v9 = *(_DWORD *)(a2 + 12);
      v10 = *(void **)(a2 + 24);
      v11 = *(_DWORD *)(a2 + 16);
    }
    if ( (v9 & 0xC0) == 0xC0 )
    {
      v12 = 2;
    }
    else if ( (v9 & 0x40) != 0 )
    {
      v12 = 1;
    }
    else
    {
      v12 = ((v9 & 0x80u) != 0) - 1;
    }
    if ( !v11 )
      goto LABEL_10;
    Mdl = IoAllocateMdl(v10, v11, 0, 0, 0LL);
    v7->MdlAddress = Mdl;
    if ( Mdl )
    {
      if ( (int)sub_1C001FDE8(Mdl, v14, v12) >= 0 )
      {
LABEL_10:
        CurrentStackLocation[-1].Parameters.WMI.ProviderId = a2;
        v7->UserEvent = 0LL;
        v7->UserIosb = a4;
        return v7;
      }
      IoFreeMdl(v7->MdlAddress);
      v7->MdlAddress = 0LL;
    }
    IoFreeIrp(v7);
    return 0LL;
  }
  return result;
}
