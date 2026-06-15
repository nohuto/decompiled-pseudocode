/*
 * XREFs of ?NotifyUnfilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z @ 0x180011700
 * Callers:
 *     _lambda_1e03ffd0b3816784b19a9acf2aab20e8_::operator() @ 0x18000FAB0 (_lambda_1e03ffd0b3816784b19a9acf2aab20e8_--operator().c)
 * Callees:
 *     ?ForEachEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x180010ABC (-ForEachEntry@-$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJ$$QEAVCListWorker@1@@Z.c)
 *     WPP_SF_S @ 0x180013550 (WPP_SF_S.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDuckingManager::NotifyUnfilteredClientsAutoUnduck(CDuckingManager *this, char *a2)
{
  struct _RTL_CRITICAL_SECTION *v3; // rsi
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rbx
  struct _RTL_CRITICAL_SECTION_DEBUG *v5; // rdi
  __int64 v6; // rbx
  unsigned __int64 v7; // rbx
  HANDLE ProcessHeap; // rax
  char *v9; // rax
  void (__fastcall **v10)(_QWORD, __int64 *); // rdi
  char *v11; // rdx
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // r8
  signed __int64 v14; // r14
  __int16 v15; // ax
  char *v16; // rax
  HANDLE v17; // rax
  ATL::CAtlException *v19; // [rsp+20h] [rbp-48h] BYREF
  void (__fastcall **v20[3])(_QWORD, __int64 *); // [rsp+28h] [rbp-40h] BYREF
  __int16 v21; // [rsp+40h] [rbp-28h]
  void (__fastcall **v22)(_QWORD, __int64 *); // [rsp+70h] [rbp+8h]

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 72);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 72));
  DebugInfo = v3[1].DebugInfo;
  v5 = *(struct _RTL_CRITICAL_SECTION_DEBUG **)&v3[1].LockCount;
  if ( v3 )
    LeaveCriticalSection(v3);
  if ( DebugInfo != v5 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 28LL, &WPP_e74777e2ae65337d95908bedb110e863_Traceguids, a2);
    }
    v6 = -1LL;
    do
      ++v6;
    while ( *(_WORD *)&a2[2 * v6] );
    v7 = 2 * v6 + 2;
    ProcessHeap = GetProcessHeap();
    v9 = (char *)HeapAlloc(ProcessHeap, 0, v7 + 72);
    v10 = (void (__fastcall **)(_QWORD, __int64 *))v9;
    v22 = (void (__fastcall **)(_QWORD, __int64 *))v9;
    if ( v9 )
    {
      *(_DWORD *)v9 = v7 + 72;
      *((_DWORD *)v9 + 1) = 512;
      *((_DWORD *)v9 + 6) = v7;
      v9[60] = 0;
      *((_DWORD *)v9 + 14) = 0;
      v11 = v9 + 72;
      v12 = v7 >> 1;
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
        v20[0] = (void (__fastcall **)(_QWORD, __int64 *))&CGenerateDuckingNotification::`vftable';
        v20[1] = v10;
        v20[2] = 0LL;
        v21 = 0;
        CLockedList<CDuckingNotification,1,0>::ForEachEntry(v3, v20);
      }
      catch ( ATL::CAtlException *v19 )
      {
        if ( *(_DWORD *)v19 == -1073741571 )
          _o__resetstkoflw();
        v10 = v22;
      }
    }
    v17 = GetProcessHeap();
    HeapFree(v17, 0, v10);
  }
  return 0LL;
}
