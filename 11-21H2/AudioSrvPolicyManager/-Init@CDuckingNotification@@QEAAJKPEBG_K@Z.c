/*
 * XREFs of ?Init@CDuckingNotification@@QEAAJKPEBG_K@Z @ 0x180010C50
 * Callers:
 *     ?AddDuckingNotification@CDuckingManager@@UEAAJPEBGK_K@Z @ 0x180010330 (-AddDuckingNotification@CDuckingManager@@UEAAJPEBGK_K@Z.c)
 *     ?DeleteDuckingNotification@CDuckingManager@@UEAAJK_K@Z @ 0x180010760 (-DeleteDuckingNotification@CDuckingManager@@UEAAJK_K@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180002B0C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioStreamPreStartContext@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000BF70 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioStreamPreS.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18000E4A8 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDuckingNotification::Init(CDuckingNotification *this, int a2, unsigned __int16 *a3, __int64 a4)
{
  _QWORD *v6; // rax
  const char *v7; // r9
  _QWORD *v8; // rbx
  _QWORD *v9; // rax
  volatile signed __int32 *v10; // rcx
  __int64 result; // rax
  unsigned __int64 v12; // r8
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *((_DWORD *)this + 2) = a2;
  *(_QWORD *)this = a4;
  v6 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  try
  {
    v8 = v6;
    if ( v6 )
    {
      *(_OWORD *)v6 = 0LL;
      v6[2] = 0LL;
      *((_DWORD *)v6 + 3) = 1;
      *v6 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::`vftable';
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL))();
      *v8 = &CDuckingNotification::CSharedNotificationData::`vftable';
      *((_DWORD *)v8 + 4) = 0;
      v9 = v8;
    }
    else
    {
      v9 = 0LL;
      v8 = 0LL;
    }
    v10 = (volatile signed __int32 *)*((_QWORD *)this + 6);
    *((_QWORD *)this + 6) = v8;
    if ( v10 )
    {
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioStreamPreStartContext>::Release(v10);
      v9 = (_QWORD *)*((_QWORD *)this + 6);
    }
    if ( v9 )
    {
      if ( a3 )
      {
        v12 = -1LL;
        do
          ++v12;
        while ( a3[v12] );
        std::wstring::assign((char **)this + 2, a3, v12);
      }
      result = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x153,
        (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\duckingmanager.cpp",
        (const char *)0x8007000ELL);
      result = 2147942414LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x15C,
                           (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\duckingmanager.cpp",
                           v7);
  }
  return result;
}
