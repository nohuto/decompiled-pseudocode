/*
 * XREFs of ?GetAuxiliaryInputDescriptor@CSharedStreamGroupProxy@@UEAAJPEAUAuxiliaryInputDescriptor@@@Z @ 0x18000F910
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004A9F0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCurrentLoopbackEndpointId@CAecAttributes@@QEAAJPEAPEAG@Z @ 0x18010581C (-GetCurrentLoopbackEndpointId@CAecAttributes@@QEAAJPEAPEAG@Z.c)
 */

__int64 __fastcall CSharedStreamGroupProxy::GetAuxiliaryInputDescriptor(
        CSharedStreamGroupProxy *this,
        struct AuxiliaryInputDescriptor *a2)
{
  int v2; // ebx
  CAecAttributes *v4; // rdi
  unsigned __int16 **v6; // rbp
  int CurrentLoopbackEndpointId; // eax
  unsigned int v8; // edi
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = 0;
  *(_DWORD *)a2 = 0;
  v4 = (CAecAttributes *)*((_QWORD *)this + 8);
  if ( !v4 || *((_DWORD *)v4 + 2) )
    return 0LL;
  v6 = (unsigned __int16 **)((char *)a2 + 8);
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    (char *)a2 + 8,
    0LL);
  CurrentLoopbackEndpointId = CAecAttributes::GetCurrentLoopbackEndpointId(v4, v6);
  v8 = CurrentLoopbackEndpointId;
  if ( CurrentLoopbackEndpointId >= 0 )
  {
    LOBYTE(v2) = *v6 != 0LL;
    *(_DWORD *)a2 = v2;
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x41D,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
    (const char *)(unsigned int)CurrentLoopbackEndpointId,
    v9);
  return v8;
}
