/*
 * XREFs of ?ForEachInitializedApoInterface@CCompositeSystemEffect@@UEAAJ$$QEAV?$function@$$A6AJPEAUIAudioProcessingObject@@U_GUID@@I@Z@std@@@Z @ 0x18002D010
 * Callers:
 *     <none>
 * Callees:
 *     ??A?$CSimpleArray@V?$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@V?$CSimpleArrayEqualHelper@V?$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@@ATL@@@ATL@@QEAAAEAV?$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@H@Z @ 0x18002D0E0 (--A-$CSimpleArray@V-$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@V-$CSimpleArrayEqualHelper@.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x18002D110 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositeSystemEffect::ForEachInitializedApoInterface(__int64 a1, __int64 a2)
{
  int v2; // eax
  unsigned int v3; // edi
  __int128 v6; // xmm6
  __int64 v7; // rcx
  int v8; // eax
  unsigned int v9; // esi
  int v11; // [rsp+20h] [rbp-58h]
  __int128 v12; // [rsp+30h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  int v14; // [rsp+80h] [rbp+8h] BYREF
  __int64 v15; // [rsp+90h] [rbp+18h] BYREF

  v2 = *(_DWORD *)(a1 + 96);
  v3 = 0;
  if ( v2 <= 0 )
    return 0LL;
  while ( 1 )
  {
    v14 = v2 - v3 - 1;
    v6 = *(_OWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](a1 + 88, v3);
    v15 = *(_QWORD *)ATL::CSimpleArray<Microsoft::WRL::ComPtr<IAudioProcessingObject>,ATL::CSimpleArrayEqualHelper<Microsoft::WRL::ComPtr<IAudioProcessingObject>>>::operator[](
                       a1 + 104,
                       v3);
    v7 = *(_QWORD *)(a2 + 56);
    v12 = v6;
    if ( !v7 )
    {
      std::_Xbad_function_call();
      __debugbreak();
      JUMPOUT(0x180095929LL);
    }
    v8 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int128 *, int *))(*(_QWORD *)v7 + 16LL))(v7, &v15, &v12, &v14);
    v9 = v8;
    if ( v8 < 0 )
      break;
    v2 = *(_DWORD *)(a1 + 96);
    if ( (int)++v3 >= v2 )
      return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x33B,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
    (const char *)(unsigned int)v8,
    v11);
  return v9;
}
