/*
 * XREFs of ?ModifyUnpackagedAppInContainer@ApplicationContainerActivation@@UEAAJU_GUID@@PEAUHSTRING__@@W4UnpackageAppModifyAction@ContainerActivation@Activation@ApplicationModel@Internal@Windows@@E@Z @ 0x180630F80
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180098C40 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x1800C02C8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??0?$ActivityBase@VAAMTraceProvider@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18062ECE0 (--0-$ActivityBase@VAAMTraceProvider@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil.c)
 *     ??1ModifyUnpackagedAppInContainer@AAMTraceProvider@@QEAA@XZ @ 0x18062F48C (--1ModifyUnpackagedAppInContainer@AAMTraceProvider@@QEAA@XZ.c)
 *     ?StartActivity@ModifyUnpackagedAppInContainer@AAMTraceProvider@@QEAAXU_GUID@@PEBG1@Z @ 0x18063254C (-StartActivity@ModifyUnpackagedAppInContainer@AAMTraceProvider@@QEAAXU_GUID@@PEBG1@Z.c)
 *     ?Stop@ModifyUnpackagedAppInContainer@AAMTraceProvider@@QEAAXU_GUID@@J@Z @ 0x180632BF0 (-Stop@ModifyUnpackagedAppInContainer@AAMTraceProvider@@QEAAXU_GUID@@J@Z.c)
 *     ?ModifyUnpackagedApp@@YAXV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_N1@Z @ 0x180634138 (-ModifyUnpackagedApp@@YAXV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@_N1@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ApplicationContainerActivation::ModifyUnpackagedAppInContainer(
        __int64 a1,
        struct _GUID *a2,
        HSTRING a3,
        int a4)
{
  struct _GUID *v5; // rsi
  unsigned int Data1; // ebx
  unsigned __int16 *StringRawBuffer; // r15
  const unsigned __int16 *v8; // rdi
  wil *v9; // rcx
  _QWORD *v10; // rax
  struct _GUID v12; // [rsp+20h] [rbp-1B8h] BYREF
  struct _GUID v13; // [rsp+40h] [rbp-198h] BYREF
  _QWORD v14[4]; // [rsp+50h] [rbp-188h] BYREF
  _QWORD v15[40]; // [rsp+70h] [rbp-168h] BYREF

  v5 = a2;
  *(_QWORD *)&v13.Data1 = a2;
  Data1 = 0;
  StringRawBuffer = (unsigned __int16 *)WindowsGetStringRawBuffer(a3, 0LL);
  if ( a4 == 1 )
  {
    v8 = L"Uninstall";
  }
  else
  {
    v8 = L"Modify";
    if ( a4 != 2 )
      v8 = L"None";
  }
  wil::ActivityBase<AAMTraceProvider,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<AAMTraceProvider,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v15,
    (__int64)"ModifyUnpackagedAppInContainer");
  v15[0] = &AAMTraceProvider::ModifyUnpackagedAppInContainer::`vftable';
  v12 = *v5;
  AAMTraceProvider::ModifyUnpackagedAppInContainer::StartActivity(
    (AAMTraceProvider::ModifyUnpackagedAppInContainer *)v15,
    &v12,
    StringRawBuffer,
    v8);
  try
  {
    if ( (unsigned int)(a4 - 1) <= 1 )
    {
      std::wstring::wstring(v14, StringRawBuffer);
      v10 = std::wstring::wstring(&v12, (__int64)v14);
      ModifyUnpackagedApp(v10);
      std::wstring::_Tidy_deallocate((__int64)v14);
    }
    else
    {
      Data1 = -2147024809;
    }
  }
  catch ( ... )
  {
    v12.Data1 = wil::ResultFromCaughtException(v9);
    Data1 = v12.Data1;
    v5 = *(struct _GUID **)&v13.Data1;
  }
  v13 = *v5;
  AAMTraceProvider::ModifyUnpackagedAppInContainer::Stop(
    (AAMTraceProvider::ModifyUnpackagedAppInContainer *)v15,
    &v13,
    Data1);
  AAMTraceProvider::ModifyUnpackagedAppInContainer::~ModifyUnpackagedAppInContainer((AAMTraceProvider::ModifyUnpackagedAppInContainer *)v15);
  return Data1;
}
