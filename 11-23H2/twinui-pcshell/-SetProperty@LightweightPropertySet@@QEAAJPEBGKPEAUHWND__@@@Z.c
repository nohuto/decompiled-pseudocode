/*
 * XREFs of ?SetProperty@LightweightPropertySet@@QEAAJPEBGKPEAUHWND__@@@Z @ 0x180049E2C
 * Callers:
 *     ?SetLightweightProperty@UwpWindowWrapperBase@@UEAAJPEBGK@Z @ 0x180049D90 (-SetLightweightProperty@UwpWindowWrapperBase@@UEAAJPEBGK@Z.c)
 *     ?SetRegistration@UwpWindowWrapperBase@@UEAAXV?$shared_ptr@UViewEventRegistration@@@std@@W4ViewInitializationScenario@@@Z @ 0x1800A0C80 (-SetRegistration@UwpWindowWrapperBase@@UEAAXV-$shared_ptr@UViewEventRegistration@@@std@@W4ViewIn.c)
 *     ?SetLightweightProperty@WindowWrapperBase@@UEAAJPEBGK@Z @ 0x1804EC810 (-SetLightweightProperty@WindowWrapperBase@@UEAAJPEBGK@Z.c)
 *     ?SetRegistration@WindowWrapperBase@@UEAAXV?$shared_ptr@UViewEventRegistration@@@std@@W4ViewInitializationScenario@@@Z @ 0x1804ECAF0 (-SetRegistration@WindowWrapperBase@@UEAAXV-$shared_ptr@UViewEventRegistration@@@std@@W4ViewIniti.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$CreateRefCountedObj@ULightweightProperty@LightweightPropertySet@@$$V@@YA?AV?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@XZ @ 0x180049FCC (--$CreateRefCountedObj@ULightweightProperty@LightweightPropertySet@@$$V@@YA-AV-$ComPtr@V-$CRefCo.c)
 *     ?MangleAndInitializeName@LightweightProperty@LightweightPropertySet@@QEAAJPEBG@Z @ 0x18004A028 (-MangleAndInitializeName@LightweightProperty@LightweightPropertySet@@QEAAJPEBG@Z.c)
 *     ?IsName@LightweightProperty@LightweightPropertySet@@QEAA_NPEBG@Z @ 0x18004A0C4 (-IsName@LightweightProperty@LightweightPropertySet@@QEAA_NPEBG@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1800EE794 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@V-$CRefCountedObject@ULightweightProperty@Lightweight.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
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
  int *v9; // rax
  HSTRING *v10; // rbx
  __int64 v11; // rcx
  int v12; // eax
  int v13; // esi
  HSTRING *v14; // rdi
  __int64 v15; // rdx
  HSTRING *v16; // rax
  __int64 v17; // rcx
  __int64 *v18; // rdx
  __int64 v20; // rdx
  unsigned __int64 v21; // r9
  const WCHAR *StringRawBuffer; // rax
  int v23[10]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  HSTRING *v25; // [rsp+50h] [rbp+8h] BYREF

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
    v9 = (int *)CreateRefCountedObj<LightweightPropertySet::LightweightProperty,>(&v25);
    v10 = 0LL;
    if ( v23 != v9 )
    {
      v10 = *(HSTRING **)v9;
      *(_QWORD *)v9 = 0LL;
    }
    *(_QWORD *)v23 = v10;
    v11 = (__int64)v25;
    if ( v25 )
    {
      v25 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    if ( v10 )
    {
      v12 = LightweightPropertySet::LightweightProperty::MangleAndInitializeName(
              (LightweightPropertySet::LightweightProperty *)(v10 + 1),
              a2);
      v13 = v12;
      if ( v12 < 0 )
      {
        v21 = (unsigned int)v12;
        v20 = 59LL;
LABEL_30:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v20,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\lightweightproperties.cpp",
          (const char *)v21,
          v23[0]);
        goto LABEL_21;
      }
      v14 = v10;
      v25 = v10;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v25);
      v13 = 0;
      v15 = *((_QWORD *)this + 1);
      if ( v15 != *((_QWORD *)this + 3)
        || (v13 = CTSimpleArray<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>>>::_EnsureCapacity(
                    this,
                    v15 + 1),
            v16 = v10,
            v13 >= 0) )
      {
        v17 = *((_QWORD *)this + 1);
        *((_QWORD *)this + 1) = v17 + 1;
        v18 = (__int64 *)(*(_QWORD *)this + 8 * v17);
        v16 = v10;
        if ( v18 )
        {
          *v18 = 0LL;
          if ( v18 != (__int64 *)&v25 )
          {
            *v18 = (__int64)v10;
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
    else
    {
      v13 = -2147024882;
      v20 = 57LL;
    }
    v21 = (unsigned int)v13;
    goto LABEL_30;
  }
  v25 = *(HSTRING **)(*(_QWORD *)this + 8 * v8);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v25);
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
