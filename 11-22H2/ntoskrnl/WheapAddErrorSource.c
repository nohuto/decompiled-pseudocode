/*
 * XREFs of WheapAddErrorSource @ 0x14038140C
 * Callers:
 *     WheaAddErrorSource @ 0x1408210A0 (WheaAddErrorSource.c)
 *     WheapInitializeErrorSourceTable @ 0x140B4C6A0 (WheapInitializeErrorSourceTable.c)
 * Callees:
 *     KeSetEvent @ 0x14023C5C0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x140243CC0 (KeWaitForSingleObject.c)
 */

LONG __fastcall WheapAddErrorSource(__int64 a1, __int64 a2)
{
  __int64 *v3; // rax

  KeWaitForSingleObject(&stru_140CF7B38, Executive, 0, 0, 0LL);
  *(_DWORD *)(a2 + 124) = dword_140CF7B20;
  v3 = (__int64 *)qword_140CF7B30;
  if ( *(__int64 **)qword_140CF7B30 != &qword_140CF7B28 )
    __fastfail(3u);
  *(_QWORD *)a2 = &qword_140CF7B28;
  *(_QWORD *)(a2 + 8) = v3;
  *v3 = a2;
  qword_140CF7B30 = a2;
  _InterlockedIncrement(&dword_140CF7B1C);
  _InterlockedIncrement(&dword_140CF7B20);
  return KeSetEvent(&stru_140CF7B38, 0, 0);
}
