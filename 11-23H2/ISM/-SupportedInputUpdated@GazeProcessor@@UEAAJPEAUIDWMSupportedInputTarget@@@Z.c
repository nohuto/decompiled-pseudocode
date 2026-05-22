/*
 * XREFs of ?SupportedInputUpdated@GazeProcessor@@UEAAJPEAUIDWMSupportedInputTarget@@@Z @ 0x1801D9B90
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001DBCC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x18003E074 (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180096C94 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GazeProcessor::SupportedInputUpdated(GazeProcessor *this, struct IDWMSupportedInputTarget *a2)
{
  int v4; // eax
  __int64 v5; // rsi
  struct IDWMSupportedInputTarget **i; // rcx
  int v7; // eax
  __int64 v8; // rdx
  size_t size_of; // rax
  _QWORD *v10; // rax
  _QWORD *v11; // rcx
  int v13; // [rsp+20h] [rbp-20h] BYREF
  __int128 v14; // [rsp+28h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]

  v13 = 0;
  v4 = (*(__int64 (__fastcall **)(struct IDWMSupportedInputTarget *, int *))(*(_QWORD *)a2 + 40LL))(a2, &v13);
  if ( v4 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x163,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\gaze\\lib\\gazeprocessor.cpp",
      (const char *)(unsigned int)v4,
      v13);
  v5 = *((_QWORD *)this + 42);
  for ( i = *(struct IDWMSupportedInputTarget ***)v5;
        i != (struct IDWMSupportedInputTarget **)v5;
        i = (struct IDWMSupportedInputTarget **)*i )
  {
    if ( i[2] == a2 )
    {
      if ( (v13 & 0x4000) == 0 )
      {
        *(_QWORD *)i[1] = *i;
        *((_QWORD *)*i + 1) = i[1];
        --*((_QWORD *)this + 43);
        std::_Deallocate<16,0>(i, 0x18uLL);
        if ( !*((_QWORD *)this + 43) )
        {
          v14 = 0LL;
          LODWORD(v14) = 3;
          DWORD2(v14) = 0;
          v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int128 *))(**((_QWORD **)this + 5) + 72LL))(
                 *((_QWORD *)this + 5),
                 **((unsigned int **)this + 6),
                 &v14);
          if ( v7 < 0 )
          {
            v8 = 386LL;
LABEL_17:
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              v8,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\gaze\\lib\\gazeprocessor.cpp",
              (const char *)(unsigned int)v7);
            return 0LL;
          }
        }
      }
      return 0LL;
    }
  }
  if ( (v13 & 0x4000) != 0 )
  {
    if ( *((_QWORD *)this + 43) == 0xAAAAAAAAAAAAAAALL )
      std::_Xlength_error("list too long");
    v14 = (unsigned __int64)this + 336;
    size_of = std::_Get_size_of_n<24>(1uLL);
    v10 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    v10[2] = a2;
    ++*((_QWORD *)this + 43);
    v11 = *(_QWORD **)(v5 + 8);
    *v10 = v5;
    v10[1] = v11;
    *(_QWORD *)(v5 + 8) = v10;
    *v11 = v10;
    if ( *((_QWORD *)this + 43) == 1LL )
    {
      v14 = 0LL;
      LODWORD(v14) = 3;
      DWORD2(v14) = 1;
      v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int128 *))(**((_QWORD **)this + 5) + 72LL))(
             *((_QWORD *)this + 5),
             **((unsigned int **)this + 6),
             &v14);
      if ( v7 < 0 )
      {
        v8 = 372LL;
        goto LABEL_17;
      }
    }
  }
  return 0LL;
}
