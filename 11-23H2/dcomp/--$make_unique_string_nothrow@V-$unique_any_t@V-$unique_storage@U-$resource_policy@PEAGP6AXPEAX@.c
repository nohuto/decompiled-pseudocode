/*
 * XREFs of ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?FreeProcessHeap@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?FreeProcessHeap@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x18016A220
 * Callers:
 *     ?Join@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBG_N@Z @ 0x18016CB10 (-Join@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMessagePort@@UMs.c)
 * Callees:
 *     memcpy_s_3 @ 0x18016F1FC (memcpy_s_3.c)
 */

_QWORD *__fastcall wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void wil::details::FreeProcessHeap(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
        _QWORD *a1,
        __int64 a2,
        unsigned __int64 a3)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rsi
  const unsigned __int16 *i; // rbx
  __int64 v7; // rbx
  HANDLE ProcessHeap; // rax
  _WORD *v9; // rax
  const void *v10; // r8
  _WORD *v11; // rdi
  rsize_t v12; // rbx
  _QWORD *result; // rax

  v4 = a3;
  v5 = a3;
  if ( a3 >= 0x7FFFFFFF )
    v4 = 0x7FFFFFFFLL;
  for ( i = L"Microsoft.DiagCallbackConversation"; v4; --v4 )
  {
    if ( !*i )
      break;
    ++i;
  }
  v7 = i - L"Microsoft.DiagCallbackConversation";
  if ( a3 == -1LL )
    v5 = v7;
  ProcessHeap = GetProcessHeap();
  v9 = HeapAlloc(ProcessHeap, 8u, 2 * v5 + 2);
  v11 = v9;
  if ( v9 )
  {
    v12 = v7;
    memcpy_s_3(v9, 2 * v5 + 2, v10, v12 * 2);
    v11[v12] = 0;
    v11[v5] = 0;
  }
  result = a1;
  *a1 = v11;
  return result;
}
