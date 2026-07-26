/*
 * XREFs of ?ndisNsiGetIfNameForIfIndex@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C000F3C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C2F0 (WPP_RECORDER_SF_qL.c)
 */

__int64 __fastcall ndisNsiGetIfNameForIfIndex(struct _NM_REQUEST_GET_PARAMETER *a1)
{
  unsigned int v2; // esi
  int v3; // ebx
  KIRQL v4; // r8
  struct _LIST_ENTRY *Flink; // rax
  char v7[4]; // [rsp+30h] [rbp-18h]

  v2 = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x24u,
      (struct _GUID *)&WPP_b26d01b0bab2332eb15f1eb1befd6893_Traceguids,
      a1);
  if ( *((_DWORD *)a1 + 6) == 4
    && *((_DWORD *)a1 + 8) == 2
    && *((_QWORD *)a1 + 5)
    && *((_DWORD *)a1 + 12) == 8
    && !*((_DWORD *)a1 + 13)
    && !*((_DWORD *)a1 + 14) )
  {
    v3 = **((_DWORD **)a1 + 2);
    v4 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
    Flink = ndisIfList.Flink;
    if ( ndisIfList.Flink == &ndisIfList )
      goto LABEL_19;
    while ( HIDWORD(Flink[-77].Flink) != v3 )
    {
      Flink = Flink->Flink;
      if ( Flink == &ndisIfList )
        goto LABEL_19;
    }
    if ( Flink == (struct _LIST_ENTRY *)1232 )
LABEL_19:
      v2 = -1073741772;
    else
      **((_QWORD **)a1 + 5) = Flink[5].Flink;
    KeReleaseSpinLock(&ndisIfListLock, v4);
  }
  else
  {
    v2 = -1073741811;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v7 = v2;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x25u,
      (struct _GUID *)&WPP_b26d01b0bab2332eb15f1eb1befd6893_Traceguids,
      (char)a1,
      *(_DWORD *)v7);
  }
  return v2;
}
