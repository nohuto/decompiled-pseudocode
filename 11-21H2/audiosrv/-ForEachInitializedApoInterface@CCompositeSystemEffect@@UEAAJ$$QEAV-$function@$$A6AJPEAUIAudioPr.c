/*
 * XREFs of ?ForEachInitializedApoInterface@CCompositeSystemEffect@@UEAAJ$$QEAV?$function@$$A6AJPEAUIAudioProcessingObject@@U_GUID@@I@Z@std@@@Z @ 0x18000A8E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800C5F24 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 */

__int64 __fastcall CCompositeSystemEffect::ForEachInitializedApoInterface(__int64 a1, __int64 a2)
{
  int v2; // r8d
  int v3; // ebx
  __int64 v6; // r14
  __int64 i; // rsi
  __int128 v8; // xmm0
  __int64 v9; // rax
  __int64 v10; // rcx
  int v11; // eax
  unsigned int v12; // r15d
  int v14; // [rsp+20h] [rbp-48h]
  _OWORD v15[3]; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  int v17; // [rsp+70h] [rbp+8h] BYREF
  __int64 v18; // [rsp+80h] [rbp+18h] BYREF

  v2 = *(_DWORD *)(a1 + 72);
  v3 = 0;
  if ( v2 <= 0 )
    return 0LL;
  v6 = 0LL;
  for ( i = 0LL; ; i += 16LL )
  {
    if ( i < 0 || v3 >= *(_DWORD *)(a1 + 72) )
    {
      ATL::_AtlRaiseException(0xC000008C, a2);
      __debugbreak();
    }
    v8 = *(_OWORD *)(i + *(_QWORD *)(a1 + 64));
    if ( v3 >= *(_DWORD *)(a1 + 88) )
      goto LABEL_12;
    v9 = *(_QWORD *)(a1 + 80);
    v17 = v2 - v3 - 1;
    v18 = *(_QWORD *)(v6 + v9);
    v10 = *(_QWORD *)(a2 + 56);
    v15[0] = v8;
    if ( !v10 )
    {
      std::_Xbad_function_call();
      __debugbreak();
LABEL_12:
      ATL::_AtlRaiseException(0xC000008C, a2);
      __debugbreak();
    }
    v11 = (*(__int64 (__fastcall **)(__int64, __int64 *, _OWORD *, int *))(*(_QWORD *)v10 + 16LL))(v10, &v18, v15, &v17);
    v12 = v11;
    if ( v11 < 0 )
      break;
    v2 = *(_DWORD *)(a1 + 72);
    ++v3;
    v6 += 8LL;
    if ( v3 >= v2 )
      return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x329,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
    (const char *)(unsigned int)v11,
    v14);
  return v12;
}
