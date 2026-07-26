/*
 * XREFs of ?ndisNblTrackerTransferOneNbl@@YAXPEAU_NET_BUFFER_LIST@@T_NDIS_NBL_TRACKER_OWNER@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1PEAXPEA_J4@Z @ 0x1C00352A8
 * Callers:
 *     ?ndisNblTrackerTransferOwnershipSingleNbl@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1E@Z @ 0x1C006CE6C (-ndisNblTrackerTransferOwnershipSingleNbl@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE_.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C0013B1C (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 *     WPP_RECORDER_SF_qD @ 0x1C001E848 (WPP_RECORDER_SF_qD.c)
 */

void __fastcall ndisNblTrackerTransferOneNbl(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 *a5,
        _QWORD *a6,
        _QWORD *a7)
{
  unsigned __int8 *v9; // rcx

  if ( a2 )
  {
    if ( (a2 & 4) != 0 )
    {
LABEL_8:
      a4 |= 4uLL;
      goto LABEL_9;
    }
  }
  else if ( !a1[15] )
  {
    a1[15] = ndisSourceHandleFromOwner(a3 & 0xFFFFFFFFFFFFFFFDuLL);
  }
  v9 = (unsigned __int8 *)a1[15];
  if ( !v9 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        3u,
        0x1Bu,
        0xBu,
        (struct _GUID *)&WPP_44b390fadec23ba9bcae0cc9320a34b9_Traceguids,
        a1);
    goto LABEL_8;
  }
  if ( *v9 != 5 && (unsigned __int8)(*v9 - 17) > 1u )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        3u,
        0x1Bu,
        0xCu,
        (struct _GUID *)&WPP_44b390fadec23ba9bcae0cc9320a34b9_Traceguids,
        (char)a1,
        *v9);
    goto LABEL_8;
  }
  if ( v9 != a5 || a1[3] )
  {
    ++*a6;
  }
  else
  {
    a4 = 24LL;
    ++*a7;
    ++*a6;
  }
LABEL_9:
  a1[45] = a4;
}
