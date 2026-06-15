/*
 * XREFs of ?NotifyUnfilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBGK@Z @ 0x180022164
 * Callers:
 *     _lambda_aa732a8a991b7eb0f1632fe44cffa677_::operator() @ 0x180020C9C (_lambda_aa732a8a991b7eb0f1632fe44cffa677_--operator().c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000CCF0 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18000D380 (--3@YAXPEAX@Z.c)
 *     ?ForEachEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x180021790 (-ForEachEntry@-$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJ$$QEAVCListWorker@1@@Z.c)
 *     ?IsListEmpty@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAHXZ @ 0x180021DE4 (-IsListEmpty@-$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAHXZ.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x180022D24 (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     WPP_SF_S @ 0x180023988 (WPP_SF_S.c)
 */

__int64 __fastcall CDuckingManager::NotifyUnfilteredClientsAutoDuck(
        CDuckingManager *this,
        const unsigned __int16 *a2,
        int a3)
{
  char *v5; // r15
  __int64 v6; // rax
  unsigned __int64 v7; // rsi
  int v8; // r14d
  LPVOID v9; // rax
  void (__fastcall **v10)(_QWORD, CDuckingNotification *); // rbx
  ATL::CAtlException *v12; // [rsp+20h] [rbp-58h] BYREF
  void (__fastcall **v13[3])(_QWORD, CDuckingNotification *); // [rsp+28h] [rbp-50h] BYREF
  __int16 v14; // [rsp+40h] [rbp-38h]
  void (__fastcall **v15)(_QWORD, CDuckingNotification *); // [rsp+80h] [rbp+8h]

  v5 = (char *)this + 72;
  if ( !CLockedList<CDuckingNotification,1,0>::IsListEmpty((__int64)this + 72) )
  {
    if ( WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 27LL, &WPP_53f29f244fa932abd536e394721a76e7_Traceguids, a2);
    }
    v6 = -1LL;
    do
      ++v6;
    while ( a2[v6] );
    v7 = 2 * v6 + 2;
    v8 = 2 * v6 + 74;
    v9 = operator new(2 * v6 + 74);
    v10 = (void (__fastcall **)(_QWORD, CDuckingNotification *))v9;
    v15 = (void (__fastcall **)(_QWORD, CDuckingNotification *))v9;
    if ( v9 )
    {
      *(_DWORD *)v9 = v8;
      *((_DWORD *)v9 + 1) = 512;
      *((_DWORD *)v9 + 6) = v7;
      *((_BYTE *)v9 + 60) = 1;
      *((_DWORD *)v9 + 14) = a3;
      StringCbCopyW((unsigned __int16 *)v9 + 36, v7, a2);
      try
      {
        v13[0] = (void (__fastcall **)(_QWORD, CDuckingNotification *))&CGenerateDuckingNotification::`vftable';
        v13[1] = v10;
        v13[2] = 0LL;
        v14 = 1;
        CLockedList<CDuckingNotification,1,0>::ForEachEntry((__int64)v5, v13);
      }
      catch ( ATL::CAtlException *v12 )
      {
        if ( *(_DWORD *)v12 == -1073741571 )
          _o__resetstkoflw();
        v10 = v15;
      }
    }
    operator delete(v10);
  }
  return 0LL;
}
