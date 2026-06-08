/*
 * XREFs of PepPerfControlHandler @ 0x1C000D120
 * Callers:
 *     <none>
 * Callees:
 *     PepNotifyPerfSet @ 0x1C000CFCC (PepNotifyPerfSet.c)
 *     PepPerformanceFromPercentage @ 0x1C000D3E4 (PepPerformanceFromPercentage.c)
 */

void __fastcall PepPerfControlHandler(__int64 a1, int *a2, char a3, char a4)
{
  __int64 v6; // r8
  unsigned int v7; // ebx
  unsigned int v8; // edi
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // eax
  int v14; // r10d
  int v15; // r11d

  if ( a3 )
  {
    if ( !a4 )
    {
      v6 = (unsigned int)(255 * a2[7]);
      v7 = a2[4];
      v8 = (unsigned int)v6 / 0x64;
      PepPerformanceFromPercentage(a1, (unsigned int)a2[6], v6, (unsigned int)a2[5]);
      PepPerformanceFromPercentage(a1, (unsigned int)v9, v10, v9);
      v13 = PepPerformanceFromPercentage(a1, v7, v11, v12);
      PepNotifyPerfSet(*(_QWORD *)(a1 + 48), v13, v14, *a2, v15, *(_DWORD *)(a1 + 60), v8);
    }
  }
}
