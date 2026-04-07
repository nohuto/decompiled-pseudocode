/*
 * XREFs of ??3@YAXPEAX@Z @ 0x1801076D0
 * Callers:
 *     ??_Gtype_info@@UEAAPEAXI@Z @ 0x180060600 (--_Gtype_info@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall operator delete(void *a1)
{
  (*(void (__fastcall **)(WPF::HeapBase *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap, a1);
}
