/*
 * XREFs of ?GetAuxiliaryInputDescriptor@CSharedStreamGroupProxy@@UEAAJPEAUAuxiliaryInputDescriptor@@@Z @ 0x18000D590
 * Callers:
 *     ?ConfigureAuxiliaryInputStream@CSharedStreamGroupProxy@@IEAAJXZ @ 0x18000D4B8 (-ConfigureAuxiliaryInputStream@CSharedStreamGroupProxy@@IEAAJXZ.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18002AA60 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCurrentLoopbackEndpointIdInternal@@YAJPEAGPEAPEAG@Z @ 0x180107520 (-GetCurrentLoopbackEndpointIdInternal@@YAJPEAGPEAPEAG@Z.c)
 */

__int64 __fastcall CSharedStreamGroupProxy::GetAuxiliaryInputDescriptor(
        CSharedStreamGroupProxy *this,
        struct AuxiliaryInputDescriptor *a2)
{
  int v2; // ebx
  unsigned __int16 **v6; // rsi
  int CurrentLoopbackEndpointIdInternal; // eax
  unsigned int v8; // ebp
  int v9; // [rsp+20h] [rbp-8h]
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = 0;
  *(_DWORD *)a2 = 0;
  if ( !*((_QWORD *)this + 36) )
    return 0LL;
  v6 = (unsigned __int16 **)((char *)a2 + 8);
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    (char *)a2 + 8,
    0LL);
  CurrentLoopbackEndpointIdInternal = GetCurrentLoopbackEndpointIdInternal(*((unsigned __int16 **)this + 36), v6);
  v8 = CurrentLoopbackEndpointIdInternal;
  if ( CurrentLoopbackEndpointIdInternal >= 0 )
  {
    LOBYTE(v2) = *v6 != 0LL;
    *(_DWORD *)a2 = v2;
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x80D,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
    (const char *)(unsigned int)CurrentLoopbackEndpointIdInternal,
    v9);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x51D,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
    (const char *)v8,
    v10);
  return v8;
}
