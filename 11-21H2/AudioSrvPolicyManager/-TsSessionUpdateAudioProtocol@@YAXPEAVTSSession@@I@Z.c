/*
 * XREFs of ?TsSessionUpdateAudioProtocol@@YAXPEAVTSSession@@I@Z @ 0x180030AB4
 * Callers:
 *     ?TS_SessionChanged@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z @ 0x18002D4C0 (-TS_SessionChanged@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z.c)
 *     ?TsSessionIdConnect@@YAXK@Z @ 0x18002E564 (-TsSessionIdConnect@@YAXK@Z.c)
 *     ?TsSessionIdTerminate@@YAJK@Z @ 0x18002F99C (-TsSessionIdTerminate@@YAJK@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180002430 (__security_check_cookie.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@KV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@2@$0A@@std@@@std@@QEAA_KAEBK@Z @ 0x18003181C (-erase@-$_Hash@V-$_Umap_traits@KV-$unique_ptr@VTSSession@@U-$default_delete@VTSSession@@@std@@@s.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall TsSessionUpdateAudioProtocol(struct TSSession *a1, int a2)
{
  int v4; // esi
  __int64 **i; // rbx
  __int64 v6; // rcx
  _DWORD v7[8]; // [rsp+20h] [rbp-48h] BYREF

  v4 = 0;
  if ( a2 != 0xFFFF && a2 )
    v4 = ++dword_18005C684;
  if ( *((_DWORD *)a1 + 1) != a2 || *((_DWORD *)a1 + 2) != v4 )
  {
    *((_DWORD *)a1 + 1) = a2;
    *((_DWORD *)a1 + 2) = v4;
    for ( i = (__int64 **)*((_QWORD *)a1 + 2); i; i = (__int64 **)*i )
    {
      v7[0] = 32;
      v7[1] = 0x2000;
      v7[6] = a2;
      v7[7] = v4;
      GenerateMediaEvent(v7, *(unsigned int *)i[1]);
    }
  }
  if ( *((_DWORD *)a1 + 8) && *((_DWORD *)a1 + 1) == 0xFFFF && !*((_QWORD *)a1 + 2) && !*((_QWORD *)a1 + 5) )
  {
    EnterCriticalSection(&stru_18005C5D8);
    std::_Hash<std::_Umap_traits<unsigned long,std::unique_ptr<TSSession>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unique_ptr<TSSession>>>,0>>::erase(
      v6,
      a1);
    LeaveCriticalSection(&stru_18005C5D8);
  }
}
