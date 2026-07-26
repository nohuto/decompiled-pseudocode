/*
 * XREFs of ?ndisNsiSetAllCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z @ 0x1C00B4120
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000C8B0 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     ndisIfCreateCompartment @ 0x1C00B300C (ndisIfCreateCompartment.c)
 *     ndisIfDeleteCompartment @ 0x1C00B34A8 (ndisIfDeleteCompartment.c)
 */

__int64 __fastcall ndisNsiSetAllCompartment(struct _NM_REQUEST_SET_ALL_PARAMETERS *a1)
{
  int v2; // ecx
  unsigned int v3; // eax
  unsigned int v4; // ebx
  char v6[4]; // [rsp+30h] [rbp-18h]
  struct _NDIS_IF_COMPARTMENT_BLOCK *v7; // [rsp+50h] [rbp+8h] BYREF

  v7 = 0LL;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x13u,
      (struct _GUID *)&WPP_6eeb5a11cab83be2fdb1380eb0b7c4ac_Traceguids,
      a1);
  KeEnterCriticalRegion();
  if ( *((_DWORD *)a1 + 6) == 4 )
  {
    v2 = *((_DWORD *)a1 + 12);
    if ( ((unsigned int)(v2 - 1) > 1 || *((_QWORD *)a1 + 4) && *((_DWORD *)a1 + 10) == 1640) && v2 > 0 )
    {
      if ( v2 <= 2 )
      {
        v3 = ndisIfCreateCompartment((__int64)a1, &v7);
        goto LABEL_12;
      }
      if ( v2 == 3 )
      {
        v3 = ndisIfDeleteCompartment(**((_DWORD **)a1 + 2));
LABEL_12:
        v4 = v3;
        goto LABEL_14;
      }
    }
  }
  v4 = -1073741811;
LABEL_14:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v6 = v4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x14u,
      (struct _GUID *)&WPP_6eeb5a11cab83be2fdb1380eb0b7c4ac_Traceguids,
      (char)a1,
      *(_DWORD *)v6);
  }
  KeLeaveCriticalRegion();
  return v4;
}
