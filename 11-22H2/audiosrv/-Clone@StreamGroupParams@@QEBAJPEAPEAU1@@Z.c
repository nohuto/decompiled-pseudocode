/*
 * XREFs of ?Clone@StreamGroupParams@@QEBAJPEAPEAU1@@Z @ 0x180010C64
 * Callers:
 *     ?SaveStreamGroupCreationParameters@CAudioStream@@UEAAJPEAUStreamGroupParams@@PEAUMODE_PARAMS@@@Z @ 0x18000FFF0 (-SaveStreamGroupCreationParameters@CAudioStream@@UEAAJPEAUStreamGroupParams@@PEAUMODE_PARAMS@@@Z.c)
 * Callees:
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x180010608 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ??4CProcessingModeParameters@@QEAAAEAV0@AEBV0@@Z @ 0x180011ADC (--4CProcessingModeParameters@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180067078 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180067A54 (memset_0.c)
 *     memcpy_0 @ 0x18006A809 (memcpy_0.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall StreamGroupParams::Clone(
        StreamGroupParams *this,
        struct StreamGroupParams **a2,
        __int64 a3,
        const char *a4)
{
  void *v6; // rsi
  __int64 v7; // rbx
  void *v8; // rax
  void *v9; // r14
  char *v10; // rax
  char *v11; // rbx
  int v13; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  LPVOID pv; // [rsp+50h] [rbp+8h] BYREF
  char *v16; // [rsp+60h] [rbp+18h]
  __int64 v17; // [rsp+68h] [rbp+20h]

  wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
    &pv,
    *(char **)this,
    0xFFFFFFFFFFFFFFFFuLL,
    a4);
  v6 = pv;
  if ( pv )
  {
    v7 = *(unsigned __int16 *)(*((_QWORD *)this + 2) + 16LL);
    v8 = CoTaskMemAlloc(v7 + 18);
    v9 = v8;
    if ( v8 )
    {
      memcpy_0(v8, *((const void **)this + 2), v7 + 18);
      v10 = (char *)operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
      v11 = v10;
      pv = v10;
      if ( v10 )
      {
        memset_0(v10, 0, 0x58uLL);
        *(_QWORD *)v11 = 0LL;
        *((_QWORD *)v11 + 2) = 0LL;
        *((_QWORD *)v11 + 7) = 0LL;
        *((_QWORD *)v11 + 8) = 0LL;
        *((_QWORD *)v11 + 9) = 0LL;
        *((_QWORD *)v11 + 10) = 0LL;
      }
      else
      {
        v11 = 0LL;
      }
      v16 = v11;
      if ( v11 )
      {
        pv = 0LL;
        CoTaskMemFree(*(LPVOID *)v11);
        *(_QWORD *)v11 = v6;
        v11[49] = *((_BYTE *)this + 49);
        v17 = 0LL;
        CoTaskMemFree(*((LPVOID *)v11 + 2));
        *((_QWORD *)v11 + 2) = v9;
        *((_QWORD *)v11 + 3) = *((_QWORD *)this + 3);
        *((_OWORD *)v11 + 2) = *((_OWORD *)this + 2);
        v11[48] = *((_BYTE *)this + 48);
        v11[50] = *((_BYTE *)this + 50);
        *((_DWORD *)v11 + 2) = *((_DWORD *)this + 2);
        CProcessingModeParameters::operator=(v11 + 56);
        *a2 = (struct StreamGroupParams *)v11;
        return 0LL;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xBB,
          (unsigned int)"avcore\\audiocore\\server\\AudioSrv\\inc\\CoreAudioInterfacesP.h",
          (const char *)0x8007000ELL,
          v13);
        CoTaskMemFree(v9);
        CoTaskMemFree(v6);
        return 2147942414LL;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB7,
        (unsigned int)"avcore\\audiocore\\server\\AudioSrv\\inc\\CoreAudioInterfacesP.h",
        (const char *)0x8007000ELL,
        v13);
      CoTaskMemFree(v6);
      return 2147942414LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB3,
      (unsigned int)"avcore\\audiocore\\server\\AudioSrv\\inc\\CoreAudioInterfacesP.h",
      (const char *)0x8007000ELL,
      v13);
    return 2147942414LL;
  }
}
