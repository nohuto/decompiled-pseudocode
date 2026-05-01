/*
 * XREFs of ?ClearInvalidSessions@AppList@GamingAudio@@AEAA_NXZ @ 0x18040C978
 * Callers:
 *     ?UpdateMasterListBasedOnSessionMap@AppList@GamingAudio@@AEAAJXZ @ 0x18040E6A0 (-UpdateMasterListBasedOnSessionMap@AppList@GamingAudio@@AEAAJXZ.c)
 * Callees:
 *     ?erase@?$vector@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAVSessionInfoItem@GamingAudio@@P6AXPEAV12@@Z$1?SessionInfoItemDeleter@2@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAV12@PEAV12@$0A@$$T@details@wil@@@details@wil@@@wil@@V?$allocator@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAVSessionInfoItem@GamingAudio@@P6AXPEAV12@@Z$1?SessionInfoItemDeleter@2@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAV12@PEAV12@$0A@$$T@details@wil@@@details@wil@@@wil@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAVSessionInfoItem@GamingAudio@@P6AXPEAV12@@Z$1?SessionInfoItemDeleter@2@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAV12@PEAV12@$0A@$$T@details@wil@@@details@wil@@@wil@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAVSessionInfoItem@GamingAudio@@P6AXPEAV12@@Z$1?SessionInfoItemDeleter@2@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAV12@PEAV12@$0A@$$T@details@wil@@@details@wil@@@wil@@@std@@@std@@@2@@Z @ 0x18040E910 (-erase@-$vector@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAVSessionInfoItem@GamingA.c)
 */

bool __fastcall GamingAudio::AppList::ClearInvalidSessions(GamingAudio::AppList *this)
{
  __int64 *v1; // rdi
  char v2; // r8
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rax
  unsigned int v6; // ebx
  __int64 v7; // r9
  __int64 v8; // rax
  char v10; // [rsp+30h] [rbp+8h] BYREF

  v1 = (__int64 *)((char *)this + 160);
  v2 = 0;
  v3 = *((_QWORD *)this + 21);
  v4 = *((_QWORD *)this + 20);
  v5 = (v3 - v4) >> 3;
  if ( (_DWORD)v5 )
  {
    v6 = v5 - 1;
    if ( (_DWORD)v5 != 1 )
    {
      do
      {
        if ( (v3 - v4) >> 3 <= (unsigned __int64)v6 )
        {
          std::_Xout_of_range("invalid vector subscript");
          __debugbreak();
          JUMPOUT(0x18040CA1CLL);
        }
        v7 = 8LL * v6;
        v8 = *(_QWORD *)(v7 + v4);
        if ( v8 && (*(_DWORD *)(v8 + 84) == 2 || !*(_DWORD *)(v8 + 80)) )
        {
          *(_DWORD *)(v8 + 80) = 0;
          std::vector<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<GamingAudio::SessionInfoItem *,void (*)(GamingAudio::SessionInfoItem *),&void GamingAudio::SessionInfoItemDeleter(GamingAudio::SessionInfoItem *),wistd::integral_constant<unsigned __int64,0>,GamingAudio::SessionInfoItem *,GamingAudio::SessionInfoItem *,0,std::nullptr_t>>>>::erase(
            v1,
            &v10,
            v7 + *v1);
          v3 = v1[1];
          v2 = 1;
          v4 = *v1;
        }
        --v6;
      }
      while ( v6 );
    }
    LOBYTE(v5) = v2;
  }
  return v5;
}
