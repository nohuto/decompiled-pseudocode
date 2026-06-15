/*
 * XREFs of ??1?$forward_list@V?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x18002B0D4
 * Callers:
 *     _TSSession::TSSession_::_1_::dtor$2 @ 0x180045E42 (_TSSession--TSSession_--_1_--dtor$2.c)
 *     _SetNotificationData_::_1_::dtor$0 @ 0x180045FDE (_SetNotificationData_--_1_--dtor$0.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180008290 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@UIAudioProcessInternal@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000BCA0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@U.c)
 */

void __fastcall std::forward_list<wil::com_ptr_t<CProcess,wil::err_returncode_policy>>::~forward_list<wil::com_ptr_t<CProcess,wil::err_returncode_policy>>(
        char **a1)
{
  char *v1; // rbx
  volatile signed __int32 *v2; // rcx
  char *v3; // rdi

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
  {
    do
    {
      v2 = (volatile signed __int32 *)*((_QWORD *)v1 + 1);
      v3 = *(char **)v1;
      if ( v2 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioProcess,IAudioProcessInternal>::Release(v2);
      std::_Deallocate<16,0>(v1, 0x10uLL);
      v1 = v3;
    }
    while ( v3 );
  }
}
