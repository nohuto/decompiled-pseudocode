/*
 * XREFs of ?NotifyFilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z @ 0x18001131C
 * Callers:
 *     _lambda_1e03ffd0b3816784b19a9acf2aab20e8_::operator() @ 0x18000FAB0 (_lambda_1e03ffd0b3816784b19a9acf2aab20e8_--operator().c)
 * Callees:
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800095B4 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     WPP_SF_d @ 0x18000E914 (WPP_SF_d.c)
 *     ?ForEachEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x180010ABC (-ForEachEntry@-$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJ$$QEAVCListWorker@1@@Z.c)
 *     WPP_SF_S @ 0x180013550 (WPP_SF_S.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDuckingManager::NotifyFilteredClientsAutoUnduck(CDuckingManager *this, char *a2)
{
  int v3; // r14d
  struct _RTL_CRITICAL_SECTION *v4; // r15
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rdi
  struct _RTL_CRITICAL_SECTION_DEBUG *v6; // rsi
  __int64 v7; // rdi
  unsigned __int64 v8; // rdi
  HANDLE ProcessHeap; // rax
  char *v10; // rsi
  char *v11; // rdx
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // r8
  signed __int64 v14; // r12
  __int16 v15; // ax
  char *v16; // rax
  HANDLE v18; // rax
  int *v20; // rbx
  ATL::CAtlException *v21; // [rsp+20h] [rbp-58h] BYREF
  void (__fastcall **v22[3])(_QWORD, __int64 *); // [rsp+28h] [rbp-50h] BYREF
  __int16 v23; // [rsp+40h] [rbp-38h]

  v3 = 0;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 72);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 72));
  DebugInfo = v4[1].DebugInfo;
  v6 = *(struct _RTL_CRITICAL_SECTION_DEBUG **)&v4[1].LockCount;
  if ( v4 )
    LeaveCriticalSection(v4);
  if ( DebugInfo != v6 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 25LL, &WPP_e74777e2ae65337d95908bedb110e863_Traceguids, a2);
    }
    v7 = -1LL;
    do
      ++v7;
    while ( *(_WORD *)&a2[2 * v7] );
    v8 = 2 * v7 + 2;
    ProcessHeap = GetProcessHeap();
    v10 = (char *)HeapAlloc(ProcessHeap, 0, v8 + 72);
    if ( v10 )
    {
      *(_DWORD *)v10 = v8 + 72;
      *((_DWORD *)v10 + 1) = 512;
      *((_DWORD *)v10 + 6) = v8;
      v10[60] = 0;
      *((_DWORD *)v10 + 14) = 0;
      v11 = v10 + 72;
      v12 = v8 >> 1;
      if ( v12 - 1 > 0x7FFFFFFE )
      {
        if ( v12 )
          *(_WORD *)v11 = 0;
      }
      else
      {
        v13 = 2147483646 - v12;
        v14 = a2 - v11;
        do
        {
          if ( !(v13 + v12) )
            break;
          v15 = *(_WORD *)&v11[v14];
          if ( !v15 )
            break;
          *(_WORD *)v11 = v15;
          v11 += 2;
          --v12;
        }
        while ( v12 );
        v16 = v11 - 2;
        if ( v12 )
          v16 = v11;
        *(_WORD *)v16 = 0;
      }
      try
      {
        v3 = 0;
        v22[0] = (void (__fastcall **)(_QWORD, __int64 *))&CGenerateDuckingNotification::`vftable';
        v22[1] = (void (__fastcall **)(_QWORD, __int64 *))v10;
        v22[2] = 0LL;
        v23 = 256;
        CLockedList<CDuckingNotification,1,0>::ForEachEntry(v4, v22);
      }
      catch ( ATL::CAtlException *v21 )
      {
        v20 = (int *)v21;
        if ( *(_DWORD *)v21 == -1073741571 )
          _o__resetstkoflw();
        v3 = *v20;
      }
    }
    v18 = GetProcessHeap();
    HeapFree(v18, 0, v10);
    if ( v3 < 0 )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Au, &WPP_e74777e2ae65337d95908bedb110e863_Traceguids, v3);
      }
      AudPolicyLogError("CDuckingManager::NotifyFilteredClientsAutoUnduck", 732, v3);
    }
  }
  return 0LL;
}
