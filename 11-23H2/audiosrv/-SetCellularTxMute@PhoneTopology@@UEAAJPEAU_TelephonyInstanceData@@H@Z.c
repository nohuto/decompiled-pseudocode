/*
 * XREFs of ?SetCellularTxMute@PhoneTopology@@UEAAJPEAU_TelephonyInstanceData@@H@Z @ 0x180165D60
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180026620 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x180067A64 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AddWorkItemToQueue@PhoneTopology@@AEAAJPEAVPhoneTopologyWorkItem@@@Z @ 0x180163DA4 (-AddWorkItemToQueue@PhoneTopology@@AEAAJPEAVPhoneTopologyWorkItem@@@Z.c)
 */

__int64 __fastcall PhoneTopology::SetCellularTxMute(PhoneTopology *this, struct _TelephonyInstanceData *a2, int a3)
{
  int v6; // ecx
  _QWORD *v7; // rax
  _QWORD *v8; // rbx
  void *v9; // rcx
  __int64 v10; // rax
  int v11; // eax
  int v13; // [rsp+48h] [rbp+10h] BYREF
  _QWORD *v14; // [rsp+58h] [rbp+20h]

  v13 = 0;
  if ( a2 )
  {
    if ( *(int *)a2 < 3 )
    {
      v6 = (*(__int64 (__fastcall **)(PhoneTopology *, struct _TelephonyInstanceData *, int *))(*(_QWORD *)this + 72LL))(
             this,
             a2,
             &v13);
      if ( v6 >= 0 )
      {
        v7 = operator new(0x438uLL);
        v14 = v7;
        v8 = v7;
        if ( v7 )
        {
          *v7 = &PhoneTopologyWorkItem::`vftable';
          v9 = v7 + 3;
          v10 = *(_QWORD *)a2;
          *((_DWORD *)v8 + 5) = 0;
          v8[1] = v10;
          *((_DWORD *)v8 + 4) = a3;
          *((_DWORD *)v8 + 268) = 3;
          memset_0(v9, 0, 0x418uLL);
          *v8 = &CallTxMuteWorkItem::`vftable';
          v11 = PhoneTopology::AddWorkItemToQueue(this, (struct PhoneTopologyWorkItem *)v8);
          v6 = 0;
          if ( v11 < 0 )
            return (unsigned int)v11;
        }
        else
        {
          return (unsigned int)-2147024882;
        }
      }
    }
    else
    {
      return (unsigned int)-2147024809;
    }
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return (unsigned int)v6;
}
