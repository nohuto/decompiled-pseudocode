/*
 * XREFs of ?ClearInvalidSessions@AppList@GamingAudio@@AEAA_NXZ @ 0x18033ED58
 * Callers:
 *     ?UpdateMasterListBasedOnSessionMap@AppList@GamingAudio@@AEAAJXZ @ 0x180340A2C (-UpdateMasterListBasedOnSessionMap@AppList@GamingAudio@@AEAAJXZ.c)
 * Callees:
 *     ?erase@?$vector@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAVSessionInfoItem@GamingAudio@@P6AXPEAV12@@Z$1?SessionInfoItemDeleter@2@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAV12@PEAV12@$0A@$$T@details@wil@@@details@wil@@@wil@@V?$allocator@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAVSessionInfoItem@GamingAudio@@P6AXPEAV12@@Z$1?SessionInfoItemDeleter@2@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAV12@PEAV12@$0A@$$T@details@wil@@@details@wil@@@wil@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAVSessionInfoItem@GamingAudio@@P6AXPEAV12@@Z$1?SessionInfoItemDeleter@2@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAV12@PEAV12@$0A@$$T@details@wil@@@details@wil@@@wil@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAVSessionInfoItem@GamingAudio@@P6AXPEAV12@@Z$1?SessionInfoItemDeleter@2@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAV12@PEAV12@$0A@$$T@details@wil@@@details@wil@@@wil@@@std@@@std@@@2@@Z @ 0x180340CA8 (-erase@-$vector@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAVSessionInfoItem@GamingA.c)
 */

bool __fastcall GamingAudio::AppList::ClearInvalidSessions(GamingAudio::AppList *this)
{
  _QWORD *v1; // rdi
  char v2; // r8
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rax
  bool v6; // zf
  char v8; // [rsp+30h] [rbp+8h] BYREF

  v1 = (_QWORD *)((char *)this + 160);
  v2 = 0;
  v3 = (__int64)(*((_QWORD *)this + 21) - *((_QWORD *)this + 20)) >> 3;
  if ( (_DWORD)v3 )
  {
    v4 = (unsigned int)(v3 - 1);
    if ( (_DWORD)v3 != 1 )
    {
      do
      {
        if ( (__int64)(v1[1] - *v1) >> 3 <= (unsigned __int64)(unsigned int)v4 )
        {
          std::_Xout_of_range("invalid vector subscript");
          __debugbreak();
          JUMPOUT(0x18033EDEFLL);
        }
        v5 = *(_QWORD *)(*v1 + 8 * v4);
        if ( v5 && (*(_DWORD *)(v5 + 84) == 2 || !*(_DWORD *)(v5 + 80)) )
        {
          *(_DWORD *)(v5 + 80) = 0;
          std::vector<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<GamingAudio::SessionInfoItem *,void (*)(GamingAudio::SessionInfoItem *),&void GamingAudio::SessionInfoItemDeleter(GamingAudio::SessionInfoItem *),wistd::integral_constant<unsigned __int64,0>,GamingAudio::SessionInfoItem *,GamingAudio::SessionInfoItem *,0,std::nullptr_t>>>>::erase(
            v1,
            &v8,
            *v1 + 8 * v4);
          v2 = 1;
        }
        v6 = (_DWORD)v4 == 1;
        v4 = (unsigned int)(v4 - 1);
      }
      while ( !v6 );
    }
    LOBYTE(v3) = v2;
  }
  return v3;
}
