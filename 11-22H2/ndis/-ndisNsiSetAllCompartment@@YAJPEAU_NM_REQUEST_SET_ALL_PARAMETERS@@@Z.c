/*
 * XREFs of ?ndisNsiSetAllCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z @ 0x1C00B9100
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C160 (WPP_RECORDER_SF_qL.c)
 *     ndisIfCreateCompartment @ 0x1C00B823C (ndisIfCreateCompartment.c)
 *     ndisIfDeleteCompartment @ 0x1C00B865C (ndisIfDeleteCompartment.c)
 */

__int64 __fastcall ndisNsiSetAllCompartment(struct _NM_REQUEST_SET_ALL_PARAMETERS *a1)
{
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  unsigned int v5; // eax
  unsigned int v6; // ebx
  char v8[4]; // [rsp+30h] [rbp-18h]
  struct _NDIS_IF_COMPARTMENT_BLOCK *v9; // [rsp+50h] [rbp+8h] BYREF

  v9 = 0LL;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x13u,
      (struct _GUID *)&WPP_44cacc4423dd306c9dbb65f5b8fbc273_Traceguids,
      a1);
  KeEnterCriticalRegion();
  if ( *((_DWORD *)a1 + 6) == 4 )
  {
    v2 = *((_DWORD *)a1 + 12);
    if ( (unsigned int)(v2 - 1) > 1 || *((_QWORD *)a1 + 4) && *((_DWORD *)a1 + 10) == 1640 )
    {
      if ( v2 )
      {
        v3 = v2 - 1;
        if ( !v3 || (v4 = v3 - 1) == 0 )
        {
          v5 = ndisIfCreateCompartment((__int64)a1, &v9);
          goto LABEL_13;
        }
        if ( v4 == 1 )
        {
          v5 = ndisIfDeleteCompartment(**((_DWORD **)a1 + 2));
LABEL_13:
          v6 = v5;
          goto LABEL_15;
        }
      }
    }
  }
  v6 = -1073741811;
LABEL_15:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v8 = v6;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x14u,
      (struct _GUID *)&WPP_44cacc4423dd306c9dbb65f5b8fbc273_Traceguids,
      (char)a1,
      *(_DWORD *)v8);
  }
  KeLeaveCriticalRegion();
  return v6;
}
