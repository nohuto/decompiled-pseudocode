/*
 * XREFs of EtwpValidateEnableNotification @ 0x140780818
 * Callers:
 *     EtwpEnableGuid @ 0x14077FEF0 (EtwpEnableGuid.c)
 * Callees:
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1406BECFC (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpValidateFilterDescriptors @ 0x14077D9E4 (EtwpValidateFilterDescriptors.c)
 *     EtwpCheckNotificationAccess @ 0x140781CE8 (EtwpCheckNotificationAccess.c)
 */

__int64 __fastcall EtwpValidateEnableNotification(
        __int64 a1,
        __int64 a2,
        char a3,
        __int64 a4,
        unsigned int **a5,
        __int64 a6)
{
  unsigned int v6; // ebx
  bool v7; // cf
  unsigned int v12; // edx
  __int64 v13; // rcx
  unsigned int *v14; // rax
  bool v15; // zf
  int v16; // eax
  unsigned int v17; // eax
  int v19; // eax

  v6 = 0;
  v7 = *(_DWORD *)(a2 + 4) < 0x78u;
  *a5 = 0LL;
  if ( v7
    || *(_DWORD *)(a2 + 116) && (unsigned int)EtwpValidateFilterDescriptors((_DWORD *)a2, a6)
    || *(_DWORD *)(a2 + 72) > 2u )
  {
    return 3221225485LL;
  }
  v12 = *(unsigned __int16 *)(a2 + 78);
  *(_BYTE *)(a4 + 18) = (v12 & 0x8000) != 0;
  if ( (v12 & 0x8000) != 0 )
  {
    v19 = *(_DWORD *)(a2 + 80);
    if ( (v19 & 0x20) != 0 || (v19 & 0x400) != 0 )
      return 3221225485LL;
  }
  else
  {
    if ( v12 == 3 )
      return 3221225506LL;
    v13 = *(_QWORD *)&PrivateLoggerNotificationGuid.Data1 - *(_QWORD *)(a2 + 40);
    if ( *(_QWORD *)&PrivateLoggerNotificationGuid.Data1 == *(_QWORD *)(a2 + 40) )
      v13 = *(_QWORD *)PrivateLoggerNotificationGuid.Data4 - *(_QWORD *)(a2 + 48);
    if ( !v13 )
      return 3221225485LL;
    v14 = EtwpAcquireLoggerContextByLoggerId(a1, v12, 0);
    if ( !v14 )
      goto LABEL_30;
    v15 = a1 == EtwpHostSiloState;
    *a5 = v14;
    if ( !v15 && (*(_DWORD *)(a2 + 80) & 0x400) != 0 || (*(_DWORD *)(a2 + 80) & 0x20) != 0 && (v14[3] & 0x1030800) != 0 )
      return 3221225485LL;
    if ( (v14[204] & 0x40) != 0 )
    {
LABEL_30:
      v6 = -1073741162;
    }
    else
    {
      *(_OWORD *)a4 = *(_OWORD *)(v14 + 69);
      if ( (v14[3] & 0x80u) != 0 )
        *(_BYTE *)(a4 + 16) = 1;
      if ( (v14[3] & 0x1000000) != 0 )
        *(_BYTE *)(a4 + 17) = 1;
      if ( a3 )
        v6 = EtwpCheckNotificationAccess(a2 + 40, a4);
    }
  }
  v16 = *(_DWORD *)(a2 + 80);
  if ( (v16 & 0x10) != 0 )
    v17 = v16 & 0xFFFFFFEF;
  else
    v17 = v16 | 0x40;
  *(_DWORD *)(a2 + 80) = v17;
  return v6;
}
