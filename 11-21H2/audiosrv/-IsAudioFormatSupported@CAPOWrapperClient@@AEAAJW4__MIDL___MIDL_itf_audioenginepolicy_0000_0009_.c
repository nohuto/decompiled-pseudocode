/*
 * XREFs of ?IsAudioFormatSupported@CAPOWrapperClient@@AEAAJW4__MIDL___MIDL_itf_audioenginepolicy_0000_0009_0001@@PEAUIAudioMediaType@@1PEAPEAU3@@Z @ 0x18000B120
 * Callers:
 *     ?IsInputFormatSupported@CAPOWrapperClient@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z @ 0x18000B0F0 (-IsInputFormatSupported@CAPOWrapperClient@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z.c)
 *     ?IsOutputFormatSupported@CAPOWrapperClient@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z @ 0x180118D80 (-IsOutputFormatSupported@CAPOWrapperClient@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z.c)
 * Callees:
 *     CreateAudioMediaType_Unsafe @ 0x180061630 (CreateAudioMediaType_Unsafe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAPOWrapperClient::IsAudioFormatSupported(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ebp
  __int64 v7; // rdi
  __int64 v8; // r9
  __int64 *v9; // rcx
  __int64 v10; // rax
  int v11; // edi
  unsigned int v13; // ebx
  int v14; // [rsp+20h] [rbp-48h]
  int v15[2]; // [rsp+38h] [rbp-30h] BYREF
  char v16; // [rsp+40h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v5 = a2;
  if ( *(_QWORD *)(a1 + 72) )
  {
    v7 = 0LL;
    if ( a3 && (v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 40LL))(a3)) == 0 )
    {
      v13 = -2004287480;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xF4,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\apowrapperclient.cpp",
        (const char *)0x88890008LL,
        v14);
    }
    else
    {
      v8 = 0LL;
      if ( a4
        && (v8 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)a4 + 40LL))(a4, a2, a3, 0LL)) == 0 )
      {
        v13 = -2004287480;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xFB,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\apowrapperclient.cpp",
          (const char *)0x88890008LL,
          v14);
      }
      else
      {
        v9 = *(__int64 **)(a1 + 72);
        v10 = *v9;
        *(_QWORD *)v15 = 0LL;
        v16 = 1;
        v11 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64, __int64))(v10 + 40))(v9, v5, v7, v8);
        if ( v11 < 0 )
        {
          v13 = -2005073917;
          if ( v11 != -2005073917 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x101,
              (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\apowrapperclient.cpp",
              (const char *)(unsigned int)v11,
              (int)v15);
            return (unsigned int)v11;
          }
        }
        else
        {
          v13 = -2004287480;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x103,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\apowrapperclient.cpp",
            (const char *)0x88890008LL,
            (int)v15);
        }
      }
    }
    return v13;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xEE,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\apowrapperclient.cpp",
      (const char *)0x80070057LL,
      v14);
    return 2147942487LL;
  }
}
