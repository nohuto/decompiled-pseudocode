/*
 * XREFs of WheapAddErrorSource @ 0x140380F5C
 * Callers:
 *     WheaAddErrorSource @ 0x14081EDF0 (WheaAddErrorSource.c)
 *     WheapInitializeErrorSourceTable @ 0x140B48FA0 (WheapInitializeErrorSourceTable.c)
 * Callees:
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x140243DB0 (KeWaitForSingleObject.c)
 */

LONG __fastcall WheapAddErrorSource(__int64 a1, __int64 a2)
{
  __int64 *v3; // rax

  KeWaitForSingleObject(&stru_140CF7A78, Executive, 0, 0, 0LL);
  *(_DWORD *)(a2 + 124) = dword_140CF7A60;
  v3 = (__int64 *)qword_140CF7A70;
  if ( *(__int64 **)qword_140CF7A70 != &qword_140CF7A68 )
    __fastfail(3u);
  *(_QWORD *)a2 = &qword_140CF7A68;
  *(_QWORD *)(a2 + 8) = v3;
  *v3 = a2;
  qword_140CF7A70 = a2;
  _InterlockedIncrement(&dword_140CF7A5C);
  _InterlockedIncrement(&dword_140CF7A60);
  return KeSetEvent(&stru_140CF7A78, 0, 0);
}
