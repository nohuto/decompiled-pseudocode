/*
 * XREFs of ?SetCellularEnable@PhoneTopology@@UEAAJPEAU_TelephonyInstanceData@@H@Z @ 0x180165970
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180026620 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x180067A54 (memset_0.c)
 *     ?AddWorkItemToQueue@PhoneTopology@@AEAAJPEAVPhoneTopologyWorkItem@@@Z @ 0x180163DF4 (-AddWorkItemToQueue@PhoneTopology@@AEAAJPEAVPhoneTopologyWorkItem@@@Z.c)
 */

__int64 __fastcall PhoneTopology::SetCellularEnable(PhoneTopology *this, struct _TelephonyInstanceData *a2, int a3)
{
  unsigned int v3; // ebx
  char *v7; // rax
  struct PhoneTopologyWorkItem *v8; // rdi
  int v9; // eax
  char *v10; // rax
  struct PhoneTopologyWorkItem *v11; // rdi
  char *v12; // rax
  struct PhoneTopologyWorkItem *v13; // rdi
  int v14; // eax

  v3 = 0;
  if ( !a2 )
    return (unsigned int)-2147467261;
  if ( *(int *)a2 >= 3 )
    return (unsigned int)-2147024809;
  v7 = (char *)operator new(0x438uLL);
  v8 = (struct PhoneTopologyWorkItem *)v7;
  if ( !v7 )
    return (unsigned int)-2147024882;
  *(_QWORD *)v7 = &PhoneTopologyWorkItem::`vftable';
  *((_QWORD *)v7 + 1) = *(_QWORD *)a2;
  *((_DWORD *)v7 + 4) = a3;
  *((_DWORD *)v7 + 5) = 0;
  *((_DWORD *)v7 + 268) = 0;
  memset_0(v7 + 24, 0, 0x418uLL);
  *(_QWORD *)v8 = &CallEnableWorkItem::`vftable';
  v9 = PhoneTopology::AddWorkItemToQueue(this, v8);
  if ( v9 < 0 )
    return (unsigned int)v9;
  if ( !a3 )
    return v3;
  v10 = (char *)operator new(0x438uLL);
  v11 = (struct PhoneTopologyWorkItem *)v10;
  if ( !v10 )
    return (unsigned int)-2147024882;
  *(_QWORD *)v10 = &PhoneTopologyWorkItem::`vftable';
  *((_QWORD *)v10 + 1) = *(_QWORD *)a2;
  *((_QWORD *)v10 + 2) = 0LL;
  *((_DWORD *)v10 + 268) = 3;
  memset_0(v10 + 24, 0, 0x418uLL);
  *(_QWORD *)v11 = &CallTxMuteWorkItem::`vftable';
  v9 = PhoneTopology::AddWorkItemToQueue(this, v11);
  if ( v9 < 0 )
    return (unsigned int)v9;
  v12 = (char *)operator new(0x438uLL);
  v13 = (struct PhoneTopologyWorkItem *)v12;
  if ( !v12 )
    return (unsigned int)-2147024882;
  *(_QWORD *)v12 = &PhoneTopologyWorkItem::`vftable';
  *((_QWORD *)v12 + 1) = *(_QWORD *)a2;
  *((_QWORD *)v12 + 2) = 0LL;
  *((_DWORD *)v12 + 268) = 2;
  memset_0(v12 + 24, 0, 0x418uLL);
  *(_QWORD *)v13 = &CallHoldWorkItem::`vftable';
  v14 = PhoneTopology::AddWorkItemToQueue(this, v13);
  if ( v14 < 0 )
    return (unsigned int)v14;
  return v3;
}
