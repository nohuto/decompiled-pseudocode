/*
 * XREFs of ?_Move_assign@?$_Hash@V?$_Umap_traits@VCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@VCAudioSessionInstanceId@@U?$hash@VCAudioSessionInstanceId@@@std@@U?$equal_to@VCAudioSessionInstanceId@@@3@@std@@V?$allocator@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@AEAAXAEAV12@U_Equal_allocators@2@@Z @ 0x1800E8F14
 * Callers:
 *     ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x18003B160 (-Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ??1CAudioSessionManager@@QEAA@XZ @ 0x1800E78D8 (--1CAudioSessionManager@@QEAA@XZ.c)
 * Callees:
 *     ?clear@?$_Hash@V?$_Umap_traits@VCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@VCAudioSessionInstanceId@@U?$hash@VCAudioSessionInstanceId@@@std@@U?$equal_to@VCAudioSessionInstanceId@@@3@@std@@V?$allocator@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAAXXZ @ 0x1800E92D4 (-clear@-$_Hash@V-$_Umap_traits@VCAudioSessionInstanceId@@V-$com_ptr_t@VCAudioSession@@Uerr_retur.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>,std::_Uhash_compare<CAudioSessionInstanceId,std::hash<CAudioSessionInstanceId>,std::equal_to<CAudioSessionInstanceId>>,std::allocator<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>>,0>>::_Move_assign(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // r8
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 result; // rax
  __int64 v16; // rcx

  std::_Hash<std::_Umap_traits<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>,std::_Uhash_compare<CAudioSessionInstanceId,std::hash<CAudioSessionInstanceId>,std::equal_to<CAudioSessionInstanceId>>,std::allocator<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>>,0>>::clear();
  *(_DWORD *)a1 = *(_DWORD *)a2;
  v4 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  v5 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 8) = v4;
  v6 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 16) = v5;
  v7 = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a2 + 16) = v6;
  v8 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 24) = v7;
  v9 = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(a2 + 24) = v8;
  v10 = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(a1 + 32) = v9;
  v11 = *(_QWORD *)(a2 + 40);
  *(_QWORD *)(a2 + 32) = v10;
  v12 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 40) = v11;
  v13 = *(_QWORD *)(a2 + 48);
  *(_QWORD *)(a2 + 40) = v12;
  v14 = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 48) = v13;
  result = *(_QWORD *)(a2 + 56);
  *(_QWORD *)(a2 + 48) = v14;
  v16 = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(a1 + 56) = result;
  *(_QWORD *)(a2 + 56) = v16;
  return result;
}
