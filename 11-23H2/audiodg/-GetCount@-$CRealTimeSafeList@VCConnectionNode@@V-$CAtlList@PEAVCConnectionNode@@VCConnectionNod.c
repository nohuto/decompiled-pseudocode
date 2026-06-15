/*
 * XREFs of ?GetCount@?$CRealTimeSafeList@VCConnectionNode@@V?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@@@QEAA_KXZ @ 0x140070D94
 * Callers:
 *     ??1CDeviceGraphObjectCache@@MEAA@XZ @ 0x1400709A8 (--1CDeviceGraphObjectCache@@MEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CRealTimeSafeList<CConnectionNode,ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>>::GetCount(
        __int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v1; // rdi
  __int64 v3; // rbx

  v1 = (struct _RTL_CRITICAL_SECTION *)(a1 + 120);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 120));
  v3 = *(_QWORD *)(a1 + 48LL * *(unsigned __int16 *)(a1 + 112) + 16);
  LeaveCriticalSection(v1);
  return v3;
}
