/*
 * XREFs of ?Notify@TrayNotifyCallback@SystemTray@@UEAAJKPEAUtagNOTIFYITEM@@@Z @ 0x180493400
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHICON__@@P6AHPEAU1@@Z$1?DestroyIcon@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHICON__@@@Z @ 0x18003F7B4 (-reset@-$unique_storage@U-$resource_policy@PEAUHICON__@@P6AHPEAU1@@Z$1-DestroyIcon@@YAH0@ZU-$int.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z @ 0x180421750 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z.c)
 */

__int64 __fastcall SystemTray::TrayNotifyCallback::Notify(
        SystemTray::TrayNotifyCallback *this,
        unsigned int a2,
        struct tagNOTIFYITEM *a3)
{
  PCWSTR StringRawBuffer; // rax
  char *v6; // rcx
  signed __int64 v7; // rax
  int v8; // r8d
  int v9; // edx
  const WCHAR *v10; // rdx
  unsigned __int64 v11; // r8
  HICON v12; // rax
  const char *v13; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 <= 1 && *((_QWORD *)a3 + 10) )
  {
    StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)this + 2), 0LL);
    v6 = (char *)*((_QWORD *)a3 + 10);
    v7 = (char *)StringRawBuffer - v6;
    do
    {
      v8 = *(unsigned __int16 *)&v6[v7];
      v9 = *(unsigned __int16 *)v6 - v8;
      if ( v9 )
        break;
      v6 += 2;
    }
    while ( v8 );
    if ( !v9 )
    {
      v10 = &LocaleName;
      if ( *(_QWORD *)a3 )
        v10 = *(const WCHAR **)a3;
      v11 = -1LL;
      do
        ++v11;
      while ( v10[v11] );
      try
      {
        std::wstring::assign((char *)this + 24, v10, v11);
        v12 = CopyIcon(*((HICON *)a3 + 2));
        wil::details::unique_storage<wil::details::resource_policy<HICON__ *,int (*)(HICON__ *),&int DestroyIcon(HICON__ *),wistd::integral_constant<unsigned __int64,0>,HICON__ *,HICON__ *,0,std::nullptr_t>>::reset(
          (HICON *)this + 7,
          v12);
        *((_OWORD *)this + 4) = *(_OWORD *)((char *)a3 + 40);
        *((_BYTE *)this + 80) = *((_DWORD *)a3 + 22) != 0;
      }
      catch ( ... )
      {
        return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                               retaddr,
                               (void *)0x2F,
                               (int)"pcshell\\twinui\\systemtraywpnextension\\lib\\traynotifycallback.cpp",
                               v13);
      }
    }
  }
  return 0LL;
}
