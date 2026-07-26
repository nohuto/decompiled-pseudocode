/*
 * XREFs of ?ndisNsiGetCompartmentIdForGuid@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0013B10
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C2F0 (WPP_RECORDER_SF_qL.c)
 */

__int64 __fastcall ndisNsiGetCompartmentIdForGuid(struct _NM_REQUEST_GET_PARAMETER *a1)
{
  unsigned int v2; // ebx
  _QWORD *v3; // rsi
  KIRQL v4; // al
  struct _NDIS_IF_COMPARTMENT_BLOCK *i; // rdx
  __int64 v6; // rcx

  v2 = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x19u,
      (struct _GUID *)&WPP_44cacc4423dd306c9dbb65f5b8fbc273_Traceguids,
      a1);
  v3 = (_QWORD *)*((_QWORD *)a1 + 2);
  if ( v3
    && *((_DWORD *)a1 + 6) == 16
    && *((_DWORD *)a1 + 8) == 2
    && *((_QWORD *)a1 + 5)
    && *((_DWORD *)a1 + 12) == 4
    && !*((_DWORD *)a1 + 13)
    && !*((_DWORD *)a1 + 14) )
  {
    v4 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
    for ( i = qword_1C00F5DA8;
          i != (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_1C00F5DA8;
          i = *(struct _NDIS_IF_COMPARTMENT_BLOCK **)i )
    {
      v6 = *((_QWORD *)i + 143) - *v3;
      if ( !v6 )
        v6 = *((_QWORD *)i + 144) - v3[1];
      if ( !v6 )
      {
        if ( i )
        {
          **((_DWORD **)a1 + 5) = *((_DWORD *)i + 4);
          goto LABEL_17;
        }
        break;
      }
    }
    v2 = -1073741772;
LABEL_17:
    KeReleaseSpinLock(&ndisIfListLock, v4);
  }
  else
  {
    v2 = -1073741811;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x1Au,
      (struct _GUID *)&WPP_44cacc4423dd306c9dbb65f5b8fbc273_Traceguids,
      (char)a1,
      v2);
  return v2;
}
