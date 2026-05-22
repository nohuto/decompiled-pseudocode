/*
 * XREFs of ??1test_state@tip2@@QEAA@XZ @ 0x18006A40C
 * Callers:
 *     ??1?$shared_data@$0A@$0A@$00@details@tip2@@QEAA@XZ @ 0x18006A204 (--1-$shared_data@$0A@$0A@$00@details@tip2@@QEAA@XZ.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18006A268 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ??_GStoredFailureInfo@wil@@QEAAPEAXI@Z @ 0x18006A5FC (--_GStoredFailureInfo@wil@@QEAAPEAXI@Z.c)
 *     ?clear@?$vector_nothrow@Utest_flag@tip2@@@tip2@@QEAAXXZ @ 0x18006B080 (-clear@-$vector_nothrow@Utest_flag@tip2@@@tip2@@QEAAXXZ.c)
 */

void __fastcall tip2::test_state::~test_state(tip2::test_state *this)
{
  unsigned int v2; // edx
  unsigned __int64 *v3; // rsi
  unsigned __int64 i; // rbx
  void *v5; // rbx
  HANDLE ProcessHeap; // rax
  unsigned __int64 *v7; // rsi
  unsigned __int64 v8; // rbp
  __int64 v9; // rbx
  void *v10; // rbx
  HANDLE v11; // rax

  tip2::vector_nothrow<tip2::test_flag>::clear((char *)this + 112);
  v3 = (unsigned __int64 *)((char *)this + 104);
  if ( *((_QWORD *)this + 11) )
  {
    for ( i = 0LL; i < *v3; ++i )
      wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>((void **)(*((_QWORD *)this + 11) + 8 * i));
    v5 = (void *)*((_QWORD *)this + 11);
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v5);
    *((_QWORD *)this + 11) = 0LL;
  }
  *v3 = 0LL;
  v7 = (unsigned __int64 *)((char *)this + 80);
  *((_QWORD *)this + 12) = 0LL;
  if ( *((_QWORD *)this + 8) )
  {
    v8 = 0LL;
    if ( *v7 )
    {
      v9 = 0LL;
      do
      {
        wil::StoredFailureInfo::`scalar deleting destructor'((wil::StoredFailureInfo *)(v9 + *((_QWORD *)this + 8)), v2);
        ++v8;
        v9 += 168LL;
      }
      while ( v8 < *v7 );
    }
    v10 = (void *)*((_QWORD *)this + 8);
    v11 = GetProcessHeap();
    HeapFree(v11, 0, v10);
    *((_QWORD *)this + 8) = 0LL;
  }
  *((_QWORD *)this + 9) = 0LL;
  *v7 = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>((void **)this);
}
