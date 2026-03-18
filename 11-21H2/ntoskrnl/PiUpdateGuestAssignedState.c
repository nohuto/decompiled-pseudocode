/*
 * XREFs of PiUpdateGuestAssignedState @ 0x140749ECC
 * Callers:
 *     PiProcessQueryDeviceState @ 0x140749F30 (PiProcessQueryDeviceState.c)
 *     PnpDeleteLockedDeviceNodes @ 0x14076651C (PnpDeleteLockedDeviceNodes.c)
 * Callees:
 *     McTemplateK0z_EtwWriteTransfer @ 0x140561048 (McTemplateK0z_EtwWriteTransfer.c)
 *     PnpRequestDeviceRemoval @ 0x140765430 (PnpRequestDeviceRemoval.c)
 *     PipSendGuestAssignedNotification @ 0x14095A544 (PipSendGuestAssignedNotification.c)
 *     PipSetGuestAssignedProperty @ 0x14095A5E8 (PipSetGuestAssignedProperty.c)
 */

__int64 __fastcall PiUpdateGuestAssignedState(__int64 a1, __int64 a2)
{
  unsigned int v2; // r9d
  __int64 v3; // rdi
  __int64 v4; // r8
  unsigned int v5; // eax
  char v6; // si
  int v7; // ebx
  const wchar_t *v9; // r9
  __int64 *v10; // rdx
  __int64 v11; // rdx

  v2 = *(_DWORD *)(a1 + 704);
  v3 = a1;
  v4 = v2;
  LODWORD(v4) = v2 & 0xFFFFDFFF;
  v5 = v2 | 0x2000;
  v6 = a2;
  if ( !(_BYTE)a2 )
    v5 = v2 & 0xFFFFDFFF;
  *(_DWORD *)(a1 + 704) = v5;
  LOBYTE(a1) = 1;
  if ( ((v2 & 0x2000) != 0) == (_BYTE)a2 )
    return 0;
  v9 = *(const wchar_t **)(v3 + 48);
  if ( (_BYTE)a2 )
  {
    if ( (byte_140C0DD4C & 1) != 0 )
    {
      v10 = KMPnPEvt_Guest_Assigned;
LABEL_11:
      McTemplateK0z_EtwWriteTransfer(a1, (const EVENT_DESCRIPTOR *)v10, v4, v9);
    }
  }
  else if ( (byte_140C0DD4C & 1) != 0 )
  {
    v10 = KMPnPEvt_Guest_Unassigned;
    goto LABEL_11;
  }
  LOBYTE(a2) = v6;
  v7 = PipSetGuestAssignedProperty(v3, a2, v4, v9);
  if ( v7 < 0 || (LOBYTE(v11) = v6, v7 = PipSendGuestAssignedNotification(v3, v11), v7 < 0) )
    PnpRequestDeviceRemoval(v3, 0LL, 57LL, (unsigned int)v7);
  return (unsigned int)v7;
}
