/*
 * XREFs of ?erase@?$vector@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAVSessionInfoItem@GamingAudio@@P6AXPEAV12@@Z$1?SessionInfoItemDeleter@2@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAV12@PEAV12@$0A@$$T@details@wil@@@details@wil@@@wil@@V?$allocator@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAVSessionInfoItem@GamingAudio@@P6AXPEAV12@@Z$1?SessionInfoItemDeleter@2@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAV12@PEAV12@$0A@$$T@details@wil@@@details@wil@@@wil@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAVSessionInfoItem@GamingAudio@@P6AXPEAV12@@Z$1?SessionInfoItemDeleter@2@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAV12@PEAV12@$0A@$$T@details@wil@@@details@wil@@@wil@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAVSessionInfoItem@GamingAudio@@P6AXPEAV12@@Z$1?SessionInfoItemDeleter@2@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAV12@PEAV12@$0A@$$T@details@wil@@@details@wil@@@wil@@@std@@@std@@@2@@Z @ 0x180340CA8
 * Callers:
 *     ?ClearInvalidSessions@AppList@GamingAudio@@AEAA_NXZ @ 0x18033ED58 (-ClearInvalidSessions@AppList@GamingAudio@@AEAA_NXZ.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAVSessionInfoItem@GamingAudio@@P6AXPEAV12@@Z$1?SessionInfoItemDeleter@2@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAV12@PEAV12@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18032C168 (--1-$unique_storage@U-$resource_policy@PEAVSessionInfoItem@GamingAudio@@P6AXPEAV12@@Z$1-SessionI.c)
 *     ?SessionInfoItemDeleter@GamingAudio@@YAXPEAVSessionInfoItem@1@@Z @ 0x18034077C (-SessionInfoItemDeleter@GamingAudio@@YAXPEAVSessionInfoItem@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
struct GamingAudio::SessionInfoItem *__fastcall std::vector<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<GamingAudio::SessionInfoItem *,void (*)(GamingAudio::SessionInfoItem *),&void GamingAudio::SessionInfoItemDeleter(GamingAudio::SessionInfoItem *),wistd::integral_constant<unsigned __int64,0>,GamingAudio::SessionInfoItem *,GamingAudio::SessionInfoItem *,0,std::nullptr_t>>>>::erase(
        __int64 a1,
        struct GamingAudio::SessionInfoItem *a2,
        GamingAudio **a3)
{
  GamingAudio **v6; // r15
  GamingAudio **v7; // rsi
  GamingAudio **v8; // r14
  GamingAudio *v9; // rax
  GamingAudio *v10; // r13
  DWORD LastError; // edi
  struct GamingAudio::SessionInfoItem *v12; // rdx
  GamingAudio *v14; // [rsp+50h] [rbp+8h]

  v6 = *(GamingAudio ***)(a1 + 8);
  v7 = a3 + 1;
  if ( a3 + 1 != v6 )
  {
    v8 = a3;
    do
    {
      if ( v8 != v7 )
      {
        v9 = *v7;
        v14 = *v7;
        v10 = *v8;
        if ( *v8 )
        {
          LastError = GetLastError();
          GamingAudio::SessionInfoItemDeleter(v10, v12);
          SetLastError(LastError);
          v9 = v14;
        }
        *v8 = v9;
        *v7 = 0LL;
      }
      ++v7;
      ++v8;
    }
    while ( v7 != v6 );
    v6 = *(GamingAudio ***)(a1 + 8);
  }
  wil::details::unique_storage<wil::details::resource_policy<GamingAudio::SessionInfoItem *,void (*)(GamingAudio::SessionInfoItem *),&void GamingAudio::SessionInfoItemDeleter(GamingAudio::SessionInfoItem *),wistd::integral_constant<unsigned __int64,0>,GamingAudio::SessionInfoItem *,GamingAudio::SessionInfoItem *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<GamingAudio::SessionInfoItem *,void (*)(GamingAudio::SessionInfoItem *),&void GamingAudio::SessionInfoItemDeleter(GamingAudio::SessionInfoItem *),wistd::integral_constant<unsigned __int64,0>,GamingAudio::SessionInfoItem *,GamingAudio::SessionInfoItem *,0,std::nullptr_t>>(
    v6 - 1,
    a2);
  *(_QWORD *)(a1 + 8) -= 8LL;
  *(_QWORD *)a2 = a3;
  return a2;
}
