/*
 * XREFs of ?RawCategory@CApplication@@QEAA?AW4_APPLICATION_CATEGORY@@XZ @ 0x1800196E8
 * Callers:
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x180020BE8 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplication::RawCategory(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  int v3; // edi
  _QWORD *v4; // rdx
  _DWORD *v5; // rcx
  int v6; // eax
  int v7; // r8d

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  v3 = 4;
  v4 = *(_QWORD **)(a1 + 72);
  while ( v4 )
  {
    v5 = (_DWORD *)v4[2];
    v4 = (_QWORD *)*v4;
    if ( !v5[104] )
    {
      v6 = v5[120];
      if ( v6 && v5[119] == 4 )
        v7 = v5[121];
      else
        v7 = v5[78];
      if ( v7 < v3 )
      {
        if ( v6 && v5[119] == 4 )
          v3 = v5[121];
        else
          v3 = v5[78];
      }
    }
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return (unsigned int)v3;
}
