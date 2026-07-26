/*
 * XREFs of ?ndisFAllocateFilterOffload@@YAHPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0090F7C
 * Callers:
 *     ?ndisIndicateInitialStateToFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C001D650 (-ndisIndicateInitialStateToFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisFIndicateOffloadChange@@YAEPEAU_NDIS_FILTER_BLOCK@@PEAXK@Z @ 0x1C0091048 (-ndisFIndicateOffloadChange@@YAEPEAU_NDIS_FILTER_BLOCK@@PEAXK@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall ndisFAllocateFilterOffload(struct _NDIS_FILTER_BLOCK *a1)
{
  _NDIS_FILTER_TASK_OFFLOAD *Pool2; // rax
  unsigned int v3; // ebx

  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xEu,
      (struct _GUID *)&WPP_ff9c29c8cd06316dbc9d020b9b7a81a2_Traceguids,
      a1);
  Pool2 = (_NDIS_FILTER_TASK_OFFLOAD *)ExAllocatePool2(64LL, 216LL, 1718568014);
  a1->Offload = Pool2;
  v3 = Pool2 == 0LL ? 0xC000009A : 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xFu,
      (struct _GUID *)&WPP_ff9c29c8cd06316dbc9d020b9b7a81a2_Traceguids,
      Pool2);
  return v3;
}
