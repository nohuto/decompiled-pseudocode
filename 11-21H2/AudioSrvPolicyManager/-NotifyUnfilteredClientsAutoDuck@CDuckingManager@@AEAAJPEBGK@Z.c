/*
 * XREFs of ?NotifyUnfilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBGK@Z @ 0x18001153C
 * Callers:
 *     _lambda_aa732a8a991b7eb0f1632fe44cffa677_::operator() @ 0x18000FDD0 (_lambda_aa732a8a991b7eb0f1632fe44cffa677_--operator().c)
 * Callees:
 *     ?ForEachEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x180010ABC (-ForEachEntry@-$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJ$$QEAVCListWorker@1@@Z.c)
 *     WPP_SF_S @ 0x180013550 (WPP_SF_S.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDuckingManager::NotifyUnfilteredClientsAutoDuck(CDuckingManager *this, char *a2, int a3)
{
  struct _RTL_CRITICAL_SECTION *v5; // r14
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rbx
  struct _RTL_CRITICAL_SECTION_DEBUG *v7; // rdi
  __int64 v8; // rbx
  unsigned __int64 v9; // rbx
  HANDLE ProcessHeap; // rax
  char *v11; // rax
  void (__fastcall **v12)(_QWORD, __int64 *); // rdi
  char *v13; // rcx
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rdx
  signed __int64 v16; // rsi
  __int16 v17; // ax
  char *v18; // rax
  HANDLE v19; // rax
  ATL::CAtlException *v21; // [rsp+20h] [rbp-58h] BYREF
  void (__fastcall **v22[3])(_QWORD, __int64 *); // [rsp+28h] [rbp-50h] BYREF
  __int16 v23; // [rsp+40h] [rbp-38h]
  void (__fastcall **v24)(_QWORD, __int64 *); // [rsp+80h] [rbp+8h]

  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 72);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 72));
  DebugInfo = v5[1].DebugInfo;
  v7 = *(struct _RTL_CRITICAL_SECTION_DEBUG **)&v5[1].LockCount;
  if ( v5 )
    LeaveCriticalSection(v5);
  if ( DebugInfo != v7 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 27LL, &WPP_e74777e2ae65337d95908bedb110e863_Traceguids, a2);
    }
    v8 = -1LL;
    do
      ++v8;
    while ( *(_WORD *)&a2[2 * v8] );
    v9 = 2 * v8 + 2;
    ProcessHeap = GetProcessHeap();
    v11 = (char *)HeapAlloc(ProcessHeap, 0, v9 + 72);
    v12 = (void (__fastcall **)(_QWORD, __int64 *))v11;
    v24 = (void (__fastcall **)(_QWORD, __int64 *))v11;
    if ( v11 )
    {
      *(_DWORD *)v11 = v9 + 72;
      *((_DWORD *)v11 + 1) = 512;
      *((_DWORD *)v11 + 6) = v9;
      v11[60] = 1;
      *((_DWORD *)v11 + 14) = a3;
      v13 = v11 + 72;
      v14 = v9 >> 1;
      if ( v14 - 1 > 0x7FFFFFFE )
      {
        if ( v14 )
          *(_WORD *)v13 = 0;
      }
      else
      {
        v15 = 2147483646 - v14;
        v16 = a2 - v13;
        do
        {
          if ( !(v15 + v14) )
            break;
          v17 = *(_WORD *)&v13[v16];
          if ( !v17 )
            break;
          *(_WORD *)v13 = v17;
          v13 += 2;
          --v14;
        }
        while ( v14 );
        v18 = v13 - 2;
        if ( v14 )
          v18 = v13;
        *(_WORD *)v18 = 0;
      }
      try
      {
        v22[0] = (void (__fastcall **)(_QWORD, __int64 *))&CGenerateDuckingNotification::`vftable';
        v22[1] = v12;
        v22[2] = 0LL;
        v23 = 1;
        CLockedList<CDuckingNotification,1,0>::ForEachEntry(v5, v22);
      }
      catch ( ATL::CAtlException *v21 )
      {
        if ( *(_DWORD *)v21 == -1073741571 )
          _o__resetstkoflw();
        v12 = v24;
      }
    }
    v19 = GetProcessHeap();
    HeapFree(v19, 0, v12);
  }
  return 0LL;
}
