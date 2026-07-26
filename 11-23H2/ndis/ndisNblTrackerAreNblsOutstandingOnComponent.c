/*
 * XREFs of ndisNblTrackerAreNblsOutstandingOnComponent @ 0x1C001739C
 * Callers:
 *     ?ndisNblTrackerVerifyNoNblsHeld@@YAXPEAU_NDIS_NBL_TRACKER@@@Z @ 0x1C0017360 (-ndisNblTrackerVerifyNoNblsHeld@@YAXPEAU_NDIS_NBL_TRACKER@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall ndisNblTrackerAreNblsOutstandingOnComponent(__int64 a1, unsigned int a2)
{
  __int64 v3; // rbx
  ULONG ActiveProcessorCount; // eax
  __int64 v5; // r8
  ULONG i; // edx
  ULONG v7; // ecx

  v3 = 2LL * a2;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  v5 = *(_QWORD *)(a1 + 8 * v3 + 48);
  for ( i = 0; i < ActiveProcessorCount; v5 += *(_QWORD *)((v7 << 12) + *(_QWORD *)(a1 + 8 * v3 + 40)) )
    v7 = i++;
  return v5 != 0;
}
