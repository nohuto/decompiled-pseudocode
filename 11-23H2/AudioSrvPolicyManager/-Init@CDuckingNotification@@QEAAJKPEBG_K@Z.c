/*
 * XREFs of ?Init@CDuckingNotification@@QEAAJKPEBG_K@Z @ 0x180021710
 * Callers:
 *     ?AddDuckingNotification@CDuckingManager@@UEAAJPEBGK_K@Z @ 0x180020F40 (-AddDuckingNotification@CDuckingManager@@UEAAJPEBGK_K@Z.c)
 *     ?DeleteDuckingNotification@CDuckingManager@@UEAAJK_K@Z @ 0x180021220 (-DeleteDuckingNotification@CDuckingManager@@UEAAJK_K@Z.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG@Z @ 0x18000BCC0 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010214 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioStreamPreStartContext@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001DAF0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioStreamPreS.c)
 *     ??$Make@VCSharedNotificationData@CDuckingNotification@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCSharedNotificationData@CDuckingNotification@@@12@XZ @ 0x18001F3E0 (--$Make@VCSharedNotificationData@CDuckingNotification@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@.c)
 */

__int64 __fastcall CDuckingNotification::Init(CDuckingNotification *this, int a2, unsigned __int16 *a3, __int64 a4)
{
  __int64 *v6; // rax
  __int64 v7; // r8
  const char *v8; // r9
  volatile int *v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v14; // [rsp+30h] [rbp+8h] BYREF

  *((_DWORD *)this + 2) = a2;
  *(_QWORD *)this = a4;
  v6 = Microsoft::WRL::Details::Make<CDuckingNotification::CSharedNotificationData,>(&v14);
  v9 = (volatile int *)*v6;
  *v6 = 0LL;
  v10 = *((_QWORD *)this + 6);
  *((_QWORD *)this + 6) = v9;
  if ( v10 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioStreamPreStartContext>::Release(
      v10,
      v9);
  v11 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioStreamPreStartContext>::Release(
      v11,
      v9);
  }
  if ( *((_QWORD *)this + 6) )
  {
    try
    {
      if ( a3 )
        std::wstring::assign((char *)this + 16, a3, v7);
      result = 0LL;
    }
    catch ( ... )
    {
      return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                             retaddr,
                             (void *)0x167,
                             (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\duckingmanager.cpp",
                             v8);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15E,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\duckingmanager.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
  return result;
}
