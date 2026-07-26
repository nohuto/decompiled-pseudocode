/*
 * XREFs of ndisPktMonMiniportRegister @ 0x1C011B78C
 * Callers:
 *     ?ndisPktMonRegisterAllMiniports@@YAXXZ @ 0x1C009261C (-ndisPktMonRegisterAllMiniports@@YAXXZ.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x1C014C7DC (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     PktMonClientComponentRegister @ 0x1C001C4E4 (PktMonClientComponentRegister.c)
 *     PktMonClientComponentUnregister @ 0x1C001C568 (PktMonClientComponentUnregister.c)
 *     WPP_RECORDER_SF_qd @ 0x1C0020254 (WPP_RECORDER_SF_qd_ea_1C0020254.c)
 *     ?ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C0021450 (-ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ?ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C00214DC (-ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 *     PktMonClientAddEdge @ 0x1C00D2FC4 (PktMonClientAddEdge.c)
 *     PktMonClientSetCompProperty @ 0x1C00D328C (PktMonClientSetCompProperty.c)
 */

__int64 __fastcall ndisPktMonMiniportRegister(struct _NDIS_MINIPORT_BLOCK *a1)
{
  int *p_MiniportMediaType; // r14
  _NDIS_MEDIUM MiniportMediaType; // ecx
  _UNICODE_STRING *pAdapterInstanceName; // r8
  unsigned int Flags; // eax
  _UNICODE_STRING *p_ImageName; // rdx
  unsigned int v7; // eax
  unsigned int v8; // ebx
  unsigned __int16 v9; // r9
  __int64 v11; // r8
  __int64 v12; // r9
  _NDIS_IF_BLOCK *IfBlock; // r8
  unsigned __int16 Length; // r9
  char v15[4]; // [rsp+30h] [rbp-50h]
  char v16[8]; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v17[2]; // [rsp+48h] [rbp-38h] BYREF
  _QWORD v18[2]; // [rsp+58h] [rbp-28h] BYREF
  __int64 v19; // [rsp+68h] [rbp-18h] BYREF
  int v20; // [rsp+70h] [rbp-10h]

  p_MiniportMediaType = (int *)&a1->MiniportMediaType;
  MiniportMediaType = a1->MiniportMediaType;
  v20 = *(_DWORD *)L"r";
  v18[1] = &v19;
  pAdapterInstanceName = a1->pAdapterInstanceName;
  v17[1] = L"netadaptercx.sys";
  Flags = a1->Flags;
  v19 = *(_QWORD *)L"Upper";
  v18[0] = 786442LL;
  v17[0] = 2228256LL;
  v16[0] = 1;
  if ( (Flags & 0x80u) != 0 )
    p_ImageName = (_UNICODE_STRING *)v17;
  else
    p_ImageName = &a1->DriverHandle->ImageName;
  v7 = PktMonClientComponentRegister(
         (__int64)&a1->PktMonComp,
         (__int64)p_ImageName,
         (__int64)pAdapterInstanceName,
         2u,
         MiniportMediaType);
  v8 = v7;
  if ( v7 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v9 = 15;
LABEL_6:
      *(_DWORD *)v15 = v7;
LABEL_7:
      WPP_RECORDER_SF_qd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        1u,
        v9,
        (struct _GUID *)&WPP_b2cca5c6588f3b2dc2e7cb6c7c071de2_Traceguids,
        (char)a1,
        *(_DWORD *)v15);
    }
  }
  else
  {
    v7 = PktMonClientSetCompProperty((__int64)&a1->PktMonComp, 9, (__int64)v16, 1u);
    v8 = v7;
    if ( v7 )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_8;
      v9 = 16;
      goto LABEL_6;
    }
    v7 = PktMonClientSetCompProperty((__int64)&a1->PktMonComp, 1, (__int64)&a1->IfIndex, 4u);
    v8 = v7;
    if ( v7 )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_8;
      v9 = 17;
      goto LABEL_6;
    }
    v7 = PktMonClientSetCompProperty((__int64)&a1->PktMonComp, 4, (__int64)&a1->InterfaceGuid, 0x10u);
    v8 = v7;
    if ( v7 )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_8;
      v9 = 18;
      goto LABEL_6;
    }
    v7 = PktMonClientSetCompProperty((__int64)&a1->PktMonComp, 5, (__int64)p_MiniportMediaType, 4u);
    v8 = v7;
    if ( v7 )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_8;
      v9 = 19;
      goto LABEL_6;
    }
    if ( ndisMReferenceIfBlock(a1, 0x1Bu) )
    {
      IfBlock = a1->IfBlock;
      Length = IfBlock->ifPhysAddress.Length;
      if ( Length )
        v8 = PktMonClientSetCompProperty((__int64)&a1->PktMonComp, 6, (__int64)IfBlock->ifPhysAddress.Address, Length);
      ndisMDereferenceIfBlock(a1, MPIFREF_PKTMON);
      if ( v8 )
      {
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          goto LABEL_8;
        v9 = 20;
        *(_DWORD *)v15 = v8;
        goto LABEL_7;
      }
    }
    v7 = PktMonClientAddEdge(
           (__int64)&a1->PktMonComp,
           (__int64)v18,
           v11,
           v12,
           *p_MiniportMediaType,
           (__int64)&a1->PktMonEdge);
    v8 = v7;
    if ( !v7 )
      return v8;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v9 = 21;
      goto LABEL_6;
    }
  }
LABEL_8:
  PktMonClientComponentUnregister(&a1->PktMonComp.ListLink.Flink);
  return v8;
}
