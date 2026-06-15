/*
 * XREFs of ?NotifyFilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z @ 0x180021FDC
 * Callers:
 *     _lambda_1e03ffd0b3816784b19a9acf2aab20e8_::operator() @ 0x1800206B0 (_lambda_1e03ffd0b3816784b19a9acf2aab20e8_--operator().c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000CCF0 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18000D380 (--3@YAXPEAX@Z.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800113F0 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     WPP_SF_d @ 0x18001F3E8 (WPP_SF_d.c)
 *     ?ForEachEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x180021790 (-ForEachEntry@-$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJ$$QEAVCListWorker@1@@Z.c)
 *     ?IsListEmpty@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAHXZ @ 0x180021DE4 (-IsListEmpty@-$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAHXZ.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x180022D24 (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     WPP_SF_S @ 0x180023988 (WPP_SF_S.c)
 */

__int64 __fastcall CDuckingManager::NotifyFilteredClientsAutoUnduck(CDuckingManager *this, const unsigned __int16 *a2)
{
  int v3; // esi
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  int v6; // r12d
  LPVOID v7; // rax
  void (__fastcall **v8)(_QWORD, CDuckingNotification *); // rdi
  int *v11; // rbx
  ATL::CAtlException *v12; // [rsp+20h] [rbp-58h] BYREF
  void (__fastcall **v13[3])(_QWORD, CDuckingNotification *); // [rsp+28h] [rbp-50h] BYREF
  __int16 v14; // [rsp+40h] [rbp-38h]
  char *v15; // [rsp+80h] [rbp+8h]
  void (__fastcall **v16)(_QWORD, CDuckingNotification *); // [rsp+90h] [rbp+18h]

  v3 = 0;
  v15 = (char *)this + 72;
  if ( !CLockedList<CDuckingNotification,1,0>::IsListEmpty((__int64)this + 72) )
  {
    if ( WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 25LL, &WPP_53f29f244fa932abd536e394721a76e7_Traceguids, a2);
    }
    v4 = -1LL;
    do
      ++v4;
    while ( a2[v4] );
    v5 = 2 * v4 + 2;
    v6 = 2 * v4 + 74;
    v7 = operator new(2 * v4 + 74);
    v8 = (void (__fastcall **)(_QWORD, CDuckingNotification *))v7;
    v16 = (void (__fastcall **)(_QWORD, CDuckingNotification *))v7;
    if ( v7 )
    {
      *(_DWORD *)v7 = v6;
      *((_DWORD *)v7 + 1) = 512;
      *((_DWORD *)v7 + 6) = v5;
      *((_BYTE *)v7 + 60) = 0;
      *((_DWORD *)v7 + 14) = 0;
      StringCbCopyW((unsigned __int16 *)v7 + 36, v5, a2);
      try
      {
        v13[0] = (void (__fastcall **)(_QWORD, CDuckingNotification *))&CGenerateDuckingNotification::`vftable';
        v13[1] = v8;
        v13[2] = 0LL;
        v14 = 256;
        CLockedList<CDuckingNotification,1,0>::ForEachEntry((__int64)v15, v13);
      }
      catch ( ATL::CAtlException *v12 )
      {
        v11 = (int *)v12;
        if ( *(_DWORD *)v12 == -1073741571 )
          _o__resetstkoflw();
        v3 = *v11;
        v8 = v16;
      }
    }
    operator delete(v8);
    if ( v3 < 0 )
    {
      if ( WPP_GLOBAL_Control != &WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Au, &WPP_53f29f244fa932abd536e394721a76e7_Traceguids, v3);
      }
      AudPolicyLogError("CDuckingManager::NotifyFilteredClientsAutoUnduck", 743, v3);
    }
  }
  return 0LL;
}
