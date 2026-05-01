/*
 * XREFs of ?SetProperty@LightweightPropertySet@@QEAAJPEBGKPEAUHWND__@@@Z @ 0x18005CA90
 * Callers:
 *     ?SetLightweightProperty@WindowWrapperBase@@UEAAJPEBGK@Z @ 0x18005CA00 (-SetLightweightProperty@WindowWrapperBase@@UEAAJPEBGK@Z.c)
 *     ?SetRegistration@WindowWrapperBase@@UEAAXV?$shared_ptr@UViewEventRegistration@@@std@@W4ViewInitializationScenario@@@Z @ 0x18009AD50 (-SetRegistration@WindowWrapperBase@@UEAAXV-$shared_ptr@UViewEventRegistration@@@std@@W4ViewIniti.c)
 *     ?SetLightweightProperty@UwpWindowWrapperBase@@UEAAJPEBGK@Z @ 0x180417610 (-SetLightweightProperty@UwpWindowWrapperBase@@UEAAJPEBGK@Z.c)
 *     ?SetRegistration@UwpWindowWrapperBase@@UEAAXV?$shared_ptr@UViewEventRegistration@@@std@@W4ViewInitializationScenario@@@Z @ 0x1804179A0 (-SetRegistration@UwpWindowWrapperBase@@UEAAXV-$shared_ptr@UViewEventRegistration@@@std@@W4ViewIn.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$CreateRefCountedObj@ULightweightProperty@LightweightPropertySet@@$$V@@YA?AV?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@XZ @ 0x18005CCE8 (--$CreateRefCountedObj@ULightweightProperty@LightweightPropertySet@@$$V@@YA-AV-$ComPtr@V-$CRefCo.c)
 *     ?IsName@LightweightProperty@LightweightPropertySet@@QEAA_NPEBG@Z @ 0x18005CD5C (-IsName@LightweightProperty@LightweightPropertySet@@QEAA_NPEBG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_InitializeHelper@String@Internal@Windows@@AEAAJPEBG@Z @ 0x18009C284 (-_InitializeHelper@String@Internal@Windows@@AEAAJPEBG@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x18012789C (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@V-$CRefCountedObject@ULightweightProperty@Lightweight.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall LightweightPropertySet::SetProperty(
        LightweightPropertySet *this,
        const unsigned __int16 *a2,
        unsigned int a3,
        HWND a4)
{
  unsigned __int64 v5; // r15
  __int64 v8; // rdi
  HSTRING **v9; // rax
  HSTRING *v10; // rbx
  __int64 v11; // rcx
  int v12; // eax
  int v13; // esi
  HSTRING *v14; // rdi
  __int64 v15; // rdx
  HSTRING *v16; // rax
  int *v17; // rdx
  const WCHAR *StringRawBuffer; // rax
  __int64 v20; // rdx
  int v21[2]; // [rsp+20h] [rbp-E0h] BYREF
  HSTRING *v22; // [rsp+28h] [rbp-D8h] BYREF
  unsigned __int16 v23[256]; // [rsp+30h] [rbp-D0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+278h] [rbp+178h]

  v5 = a3;
  v8 = 0LL;
  if ( !*((_QWORD *)this + 1) )
    goto LABEL_4;
  while ( !LightweightPropertySet::LightweightProperty::IsName(
             (LightweightPropertySet::LightweightProperty *)(*(_QWORD *)(*(_QWORD *)this + 8 * v8) + 8LL),
             a2) )
  {
    if ( (unsigned __int64)++v8 >= *((_QWORD *)this + 1) )
      goto LABEL_4;
  }
  v10 = *(HSTRING **)(*(_QWORD *)this + 8 * v8);
  if ( !v10 )
  {
LABEL_4:
    v9 = (HSTRING **)CreateRefCountedObj<LightweightPropertySet::LightweightProperty,>(v21);
    v10 = 0LL;
    if ( &v22 != v9 )
    {
      v10 = *v9;
      *v9 = 0LL;
    }
    v22 = v10;
    v11 = *(_QWORD *)v21;
    if ( *(_QWORD *)v21 )
    {
      *(_QWORD *)v21 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    if ( v10 )
    {
      _o_wcscpy_s(v23, 256LL, L"LightweightProperty_");
      _o_wcscat_s(v23, 256LL, a2);
      v12 = Windows::Internal::String::_InitializeHelper((Windows::Internal::String *)(v10 + 1), v23);
      v13 = v12;
      if ( v12 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x8A,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\lightweightproperties.cpp",
          (const char *)(unsigned int)v12,
          v21[0]);
        v20 = 59LL;
      }
      else
      {
        v14 = v10;
        *(_QWORD *)v21 = v10;
        (*((void (__fastcall **)(HSTRING *))*v10 + 1))(v10);
        v13 = 0;
        v15 = *((_QWORD *)this + 1);
        if ( v15 != *((_QWORD *)this + 3)
          || (v13 = CTSimpleArray<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>>>::_EnsureCapacity(
                      this,
                      v15 + 1),
              v16 = v10,
              v13 >= 0) )
        {
          ++*((_QWORD *)this + 1);
          v17 = (int *)(*(_QWORD *)this - 8LL + 8LL * *((_QWORD *)this + 1));
          v16 = v10;
          if ( v17 )
          {
            *(_QWORD *)v17 = 0LL;
            if ( v17 != v21 )
            {
              *(_QWORD *)v17 = v10;
              v14 = 0LL;
              v16 = 0LL;
            }
          }
        }
        if ( v16 )
          (*((void (__fastcall **)(HSTRING *))*v14 + 2))(v14);
        if ( v13 >= 0 )
          goto LABEL_18;
        v20 = 60LL;
      }
    }
    else
    {
      v13 = -2147024882;
      v20 = 57LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v20,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\lightweightproperties.cpp",
      (const char *)(unsigned int)v13,
      v21[0]);
    goto LABEL_21;
  }
  *(_QWORD *)v21 = *(_QWORD *)(*(_QWORD *)this + 8 * v8);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)v21);
LABEL_18:
  *((_DWORD *)v10 + 4) = v5;
  if ( a4 )
  {
    StringRawBuffer = WindowsGetStringRawBuffer(v10[1], 0LL);
    SetPropW(a4, StringRawBuffer, (HANDLE)v5);
  }
  v13 = 0;
LABEL_21:
  if ( v10 )
    (*((void (__fastcall **)(HSTRING *))*v10 + 2))(v10);
  return (unsigned int)v13;
}
