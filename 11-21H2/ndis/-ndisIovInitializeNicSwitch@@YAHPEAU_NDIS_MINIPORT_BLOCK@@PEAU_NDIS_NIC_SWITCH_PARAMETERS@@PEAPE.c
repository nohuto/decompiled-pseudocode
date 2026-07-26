/*
 * XREFs of ?ndisIovInitializeNicSwitch@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_NIC_SWITCH_PARAMETERS@@PEAPEAU_NDIS_NIC_SWITCH_BLOCK@@PEAPEAU_NDIS_PF_BLOCK@@PEAPEAU_NDIS_VPORT_BLOCK@@@Z @ 0x1C0071074
 * Callers:
 *     ?ndisIovCreateDefaultNicSwitch@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002EDFC (-ndisIovCreateDefaultNicSwitch@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisOidPostIovCreateNicSwitch@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0071870 (-ndisOidPostIovCreateNicSwitch@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisIovInitializeNicSwitch(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_NIC_SWITCH_PARAMETERS *a2,
        struct _NDIS_NIC_SWITCH_BLOCK **a3,
        struct _NDIS_PF_BLOCK **a4,
        struct _NDIS_VPORT_BLOCK **a5)
{
  unsigned int v5; // ebx
  _QWORD *Pool2; // rax
  _QWORD *v11; // rdi
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  struct _NDIS_PF_BLOCK *v14; // rsi
  _QWORD *v15; // rax
  __int64 v16; // rax
  unsigned __int8 Number; // cl

  v5 = 0;
  if ( !a3 || !a4 || !a5 )
    return (unsigned int)-1073741811;
  Pool2 = (_QWORD *)ExAllocatePool2(64LL, 672LL, 1869169742);
  v11 = Pool2;
  if ( Pool2 )
  {
    Pool2[1] = Pool2;
    *Pool2 = Pool2;
    v12 = Pool2 + 10;
    v11[2] = a1;
    *((_DWORD *)v11 + 8) = 1;
    v12[1] = v12;
    *v12 = v12;
    v11[8] = v11 + 7;
    v11[7] = v11 + 7;
    *((_DWORD *)v11 + 9) = *((_DWORD *)a2 + 3);
    v13 = (_QWORD *)ExAllocatePool2(64LL, 48LL, 1869169742);
    v14 = (struct _NDIS_PF_BLOCK *)v13;
    if ( v13 )
    {
      *v13 = a1;
      v13[2] = v11;
      v15 = v13 + 4;
      v11[5] = v14;
      v15[1] = v15;
      *v15 = v15;
      v16 = ExAllocatePool2(64LL, 904LL, 1869169742);
      if ( v16 )
      {
        *(_DWORD *)(v16 + 64) |= 1u;
        Number = a1->RssBaseProcessor.Number;
        *(_QWORD *)(v16 + 72) = a1;
        *(_QWORD *)(v16 + 80) = 0LL;
        *(_QWORD *)(v16 + 88) = v11;
        *(_QWORD *)(v16 + 96) = v14;
        *(_WORD *)(v16 + 112) = 384;
        *(_WORD *)(v16 + 114) = 752;
        *(_DWORD *)(v16 + 120) = *((_DWORD *)v11 + 9);
        *(_WORD *)(v16 + 644) = -1;
        *(_DWORD *)(v16 + 656) = 1;
        *(_DWORD *)(v16 + 116) = 0;
        *(_DWORD *)(v16 + 648) = *((_DWORD *)a2 + 137);
        *(_WORD *)(v16 + 672) = a1->RssBaseProcessor.Group;
        *(_QWORD *)(v16 + 880) = v16 + 872;
        *(_QWORD *)(v16 + 872) = v16 + 872;
        *(_DWORD *)(v16 + 124) = 0;
        *(_DWORD *)(v16 + 652) = 0;
        *(_QWORD *)(v16 + 664) = 1LL << Number;
        *(_QWORD *)(v16 + 896) = 0LL;
        *(_QWORD *)(v16 + 888) = 0LL;
        *a3 = (struct _NDIS_NIC_SWITCH_BLOCK *)v11;
        *a4 = v14;
        *a5 = (struct _NDIS_VPORT_BLOCK *)v16;
        return v5;
      }
      ExFreePoolWithTag(v14, 0);
    }
    ExFreePoolWithTag(v11, 0);
  }
  return (unsigned int)-1073741670;
}
