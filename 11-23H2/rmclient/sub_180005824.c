/*
 * XREFs of sub_180005824 @ 0x180005824
 * Callers:
 *     HamConnectToServerEx @ 0x180003150 (HamConnectToServerEx.c)
 *     HamConnectForExtendedExecution @ 0x1800036B0 (HamConnectForExtendedExecution.c)
 *     HamConnectForStateChangeNotifications @ 0x180009FF0 (HamConnectForStateChangeNotifications.c)
 *     HamConnectForDebugging @ 0x18000A3A0 (HamConnectForDebugging.c)
 *     HamConnectForSessionState @ 0x18000A430 (HamConnectForSessionState.c)
 *     HamConnectForServicing @ 0x18000A4A0 (HamConnectForServicing.c)
 *     HamConnectForFullTrust @ 0x18001D420 (HamConnectForFullTrust.c)
 * Callees:
 *     sub_180005900 @ 0x180005900 (sub_180005900.c)
 *     sub_1800060F8 @ 0x1800060F8 (sub_1800060F8.c)
 *     sub_1800061F0 @ 0x1800061F0 (sub_1800061F0.c)
 *     sub_180008C00 @ 0x180008C00 (sub_180008C00.c)
 */

__int64 __fastcall sub_180005824(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, _QWORD *a5)
{
  _BYTE *Heap; // rax
  _BYTE *v10; // rbx
  int v11; // edi

  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0xA0uLL);
  v10 = Heap;
  if ( Heap )
  {
    sub_1800060F8(a1, a2, Heap);
    v11 = sub_180005900(v10, a2, a3, a4);
    if ( v11 < 0 || v10[156] == 6 && (v11 = sub_1800061F0(v10 + 16, sub_1800089E0, v10, v10 + 24), v11 < 0) )
    {
      sub_180008C00(v10);
    }
    else
    {
      v11 = 0;
      *a5 = v10;
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v11;
}
