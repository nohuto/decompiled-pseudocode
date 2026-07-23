/*
 * XREFs of sub_140A67C14 @ 0x140A67C14
 * Callers:
 *     sub_140562F00 @ 0x140562F00 (sub_140562F00.c)
 *     sub_1405635D0 @ 0x1405635D0 (sub_1405635D0.c)
 *     sub_140950E30 @ 0x140950E30 (sub_140950E30.c)
 *     sub_140A68674 @ 0x140A68674 (sub_140A68674.c)
 *     sub_140A68BE8 @ 0x140A68BE8 (sub_140A68BE8.c)
 *     sub_140A6927C @ 0x140A6927C (sub_140A6927C.c)
 *     sub_140A692FC @ 0x140A692FC (sub_140A692FC.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 */

__int64 __fastcall sub_140A67C14(char a1)
{
  unsigned int v2; // edi
  LONGLONG v3; // rax
  __int128 v4; // rtt
  __int64 result; // rax
  LARGE_INTEGER PerformanceFrequency; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  PerformanceFrequency.QuadPart = 0LL;
  v4 = 1000LL * *(_QWORD *)&KeQueryPerformanceCounter(&PerformanceFrequency);
  v3 = v4 / PerformanceFrequency.QuadPart;
  if ( !a1 )
    v2 = v3 + dword_140D01924 - dword_140D01920;
  dword_140D01920 = v3;
  result = v2;
  dword_140D01924 = v2;
  return result;
}
