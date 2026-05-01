/*
 * XREFs of ?reserve@?$vector_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tip2@@QEAA_N_K@Z @ 0x1801F11CC
 * Callers:
 *     ??$load_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tson@@YAXAEAVinput_archive@0@AEAV?$vector_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tip2@@@Z @ 0x1804630CC (--$load_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEADP6AXPEAX@Z$1-CoTaskMemF.c)
 * Callees:
 *     ??_G?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAXI@Z @ 0x180466CAC (--_G-$unique_any_t@V-$unique_storage@U-$resource_policy@PEADP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-.c)
 */

char __fastcall tip2::vector_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<char *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,char *,char *,0,std::nullptr_t>>>>::reserve(
        _QWORD *a1,
        unsigned __int64 a2)
{
  SIZE_T v4; // rbx
  HANDLE ProcessHeap; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // r14
  unsigned __int64 i; // rbx
  _QWORD *v9; // rcx
  _QWORD *v10; // rbx
  HANDLE v11; // rax

  if ( a2 <= a1[1] )
  {
LABEL_8:
    LOBYTE(v6) = 1;
    return (char)v6;
  }
  v4 = 8 * a2;
  ProcessHeap = GetProcessHeap();
  v6 = HeapAlloc(ProcessHeap, 0, v4);
  v7 = v6;
  if ( v6 )
  {
    if ( *a1 )
    {
      for ( i = 0LL; i < a1[2]; ++i )
      {
        v9 = (_QWORD *)*a1;
        v7[i] = *(_QWORD *)(*a1 + 8 * i);
        v9[i] = 0LL;
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<char *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,char *,char *,0,std::nullptr_t>>>::`scalar deleting destructor'(*a1 + 8 * i);
      }
      v10 = (_QWORD *)*a1;
      v11 = GetProcessHeap();
      HeapFree(v11, 0, v10);
    }
    *a1 = v7;
    a1[1] = a2;
    goto LABEL_8;
  }
  return (char)v6;
}
