/*
 * XREFs of ??$_Try_emplace@AEB_K$$V@?$map@_KUProfileDataBase@TelemetryTraceLogger@Utils@Spectre@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUProfileDataBase@TelemetryTraceLogger@Utils@Spectre@@@std@@@6@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CB_KUProfileDataBase@TelemetryTraceLogger@Utils@Spectre@@@std@@PEAX@std@@_N@1@AEB_K@Z @ 0x18002FA6C
 * Callers:
 *     ?UpdateGPUPerformanceStats@Engine@1Spectre@@IEAAXV?$weak_ptr@$$CBVIRenderOutput@Engine@Spectre@@@std@@@Z @ 0x18003725C (-UpdateGPUPerformanceStats@Engine@1Spectre@@IEAAXV-$weak_ptr@$$CBVIRenderOutput@Engine@Spectre@@.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VCommandList@Engine@Spectre@@@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VCommandList@Engine@Spectre@@@std@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VCommandList@Engine@Spectre@@@std@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x18001DB7C (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V-$.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x18001DD7C (-_Throw_tree_length_error@std@@YAXXZ.c)
 *     ??0ProfileDataBase@TelemetryTraceLogger@Utils@Spectre@@QEAA@XZ @ 0x18003158C (--0ProfileDataBase@TelemetryTraceLogger@Utils@Spectre@@QEAA@XZ.c)
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CB_KUProfileDataBase@TelemetryTraceLogger@Utils@Spectre@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18003195C (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CB_KUProfileDataBase@TelemetryTraceLog.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::map<unsigned __int64,Spectre::Utils::TelemetryTraceLogger::ProfileDataBase>::_Try_emplace<unsigned __int64 const &,>(
        _QWORD *a1,
        __int64 a2,
        unsigned __int64 *a3)
{
  __int64 *v6; // rbp
  __int64 *v7; // rax
  __int64 *v8; // r9
  unsigned __int64 v9; // rcx
  char *v10; // rbx
  __int128 v12; // [rsp+20h] [rbp-38h] BYREF
  __int128 v13; // [rsp+30h] [rbp-28h]

  v6 = (__int64 *)*a1;
  v7 = *(__int64 **)(*a1 + 8LL);
  *(_QWORD *)&v13 = v7;
  DWORD2(v13) = 0;
  v8 = v6;
  if ( !*((_BYTE *)v7 + 25) )
  {
    v9 = *a3;
    do
    {
      *(_QWORD *)&v13 = v7;
      if ( v7[4] >= v9 )
      {
        DWORD2(v13) = 1;
        v8 = v7;
        v7 = (__int64 *)*v7;
      }
      else
      {
        DWORD2(v13) = 0;
        v7 = (__int64 *)v7[2];
      }
    }
    while ( !*((_BYTE *)v7 + 25) );
  }
  if ( *((_BYTE *)v8 + 25) || *a3 < v8[4] )
  {
    if ( a1[1] == 0x2AAAAAAAAAAAAAALL )
      std::_Throw_tree_length_error();
    *(_QWORD *)&v12 = a1;
    v10 = (char *)operator new(0x60uLL);
    *((_QWORD *)&v12 + 1) = v10;
    *((_QWORD *)v10 + 4) = *a3;
    *(_OWORD *)(v10 + 40) = 0LL;
    *(_OWORD *)(v10 + 56) = 0LL;
    *(_OWORD *)(v10 + 72) = 0LL;
    *((_QWORD *)v10 + 11) = 0LL;
    Spectre::Utils::TelemetryTraceLogger::ProfileDataBase::ProfileDataBase((Spectre::Utils::TelemetryTraceLogger::ProfileDataBase *)(v10 + 40));
    *(_QWORD *)v10 = v6;
    *((_QWORD *)v10 + 1) = v6;
    *((_QWORD *)v10 + 2) = v6;
    *((_WORD *)v10 + 12) = 0;
    *((_QWORD *)&v12 + 1) = 0LL;
    std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned __int64 const,Spectre::Utils::TelemetryTraceLogger::ProfileDataBase>,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned __int64 const,Spectre::Utils::TelemetryTraceLogger::ProfileDataBase>,void *>>>(&v12);
    v12 = v13;
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::CommandList>>>>::_Insert_node(
                      (__int64)a1,
                      (__int64)&v12,
                      (__int64)v10);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v8;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
