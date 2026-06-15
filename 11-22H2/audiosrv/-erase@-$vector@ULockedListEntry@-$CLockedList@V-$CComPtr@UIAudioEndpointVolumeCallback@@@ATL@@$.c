/*
 * XREFs of ?erase@?$vector@ULockedListEntry@?$CLockedList@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@ULockedListEntry@?$CLockedList@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@ULockedListEntry@?$CLockedList@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@@std@@@std@@@2@0@Z @ 0x18012AC98
 * Callers:
 *     ?DeleteVolumeInternalNotification@CVolumeStrip@@UEAAJPEAUIAudioEndpointVolumeCallback@@@Z @ 0x18012A7E0 (-DeleteVolumeInternalNotification@CVolumeStrip@@UEAAJPEAUIAudioEndpointVolumeCallback@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180028BA8 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 */

struct IUnknown ***__fastcall std::vector<CLockedList<ATL::CComPtr<IAudioEndpointVolumeCallback>,1,0>::LockedListEntry,std::allocator<CLockedList<ATL::CComPtr<IAudioEndpointVolumeCallback>,1,0>::LockedListEntry>>::erase(
        __int64 a1,
        struct IUnknown ***a2,
        struct IUnknown **a3,
        struct IUnknown **a4)
{
  struct IUnknown **v4; // rbx
  struct IUnknown **v8; // r14
  struct IUnknown **v9; // rsi
  signed __int64 v10; // r12
  signed __int64 v11; // r13
  char *v12; // rcx
  int v13; // eax
  __int64 *v14; // r14
  __int64 *v15; // rbx
  struct IUnknown ***result; // rax

  v4 = a4;
  if ( a3 != a4 )
  {
    v8 = *(struct IUnknown ***)(a1 + 8);
    v9 = a3;
    if ( a4 != v8 )
    {
      v10 = (char *)a4 - (char *)a3;
      v11 = (char *)a3 - (char *)a4;
      do
      {
        if ( *v9 != *v4 )
          ATL::AtlComPtrAssign(v9, *v4);
        v12 = (char *)v4 + v11;
        v9 += 2;
        v13 = *(_DWORD *)((char *)v4 + v11 + v10 + 8);
        v4 += 2;
        *((_DWORD *)v12 + 2) = v13;
      }
      while ( v4 != v8 );
    }
    v14 = *(__int64 **)(a1 + 8);
    v15 = (__int64 *)v9;
    if ( v9 != (struct IUnknown **)v14 )
    {
      do
      {
        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(v15);
        v15 += 2;
      }
      while ( v15 != v14 );
    }
    *(_QWORD *)(a1 + 8) = v9;
  }
  result = a2;
  *a2 = a3;
  return result;
}
