/*
 * XREFs of ??$Make@V?$CTaskWrapper@V_lambda_b02690e03f8043e191825a2fb9cefb41_@@@ComTaskPool@Internal@Windows@@V_lambda_b02690e03f8043e191825a2fb9cefb41_@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@V?$CTaskWrapper@V_lambda_b02690e03f8043e191825a2fb9cefb41_@@@ComTaskPool@Internal@Windows@@@12@$$QEAV_lambda_b02690e03f8043e191825a2fb9cefb41_@@@Z @ 0x1800B4924
 * Callers:
 *     ?HandlePackageServicingAsync@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAAJ_N@Z @ 0x1800B4818 (-HandlePackageServicingAsync@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@A.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180087160 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180126630 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::Make<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_b02690e03f8043e191825a2fb9cefb41_>,_lambda_b02690e03f8043e191825a2fb9cefb41_>(
        _QWORD *a1,
        _BYTE *a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx

  *a1 = 0LL;
  v4 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)v4);
    v5[2] = 0LL;
    if ( v5 + 2 != (_QWORD *)a2 )
    {
      v5[2] = *(_QWORD *)a2;
      *(_QWORD *)a2 = 0LL;
    }
    *((_BYTE *)v5 + 24) = a2[8];
    *v5 = &Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_b02690e03f8043e191825a2fb9cefb41_>::`vftable';
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release();
    *a1 = v5;
  }
  return a1;
}
