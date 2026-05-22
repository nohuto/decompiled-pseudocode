/*
 * XREFs of ?OnTargetWithFocusChanged@LampArrayRawInputProvider@@UEAAJPEAUIInputTarget@@0@Z @ 0x180014390
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002474 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetActiveViewClient@LampArrayRawInputProvider@@AEAAJPEAVLampArrayDevice@@PEAULampArrayEndpoint@@@Z @ 0x1800CFDE4 (-SetActiveViewClient@LampArrayRawInputProvider@@AEAAJPEAVLampArrayDevice@@PEAULampArrayEndpoint@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall LampArrayRawInputProvider::OnTargetWithFocusChanged(
        LampArrayRawInputProvider *this,
        struct IInputTarget *a2,
        struct IInputTarget *a3)
{
  __int32 v4; // edx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rcx
  struct LampArrayEndpoint *v8; // r14
  _DWORD *i; // rax
  struct LampArrayDevice **j; // rbx
  __int64 v12; // rdx
  int active; // eax
  unsigned int v14; // r15d
  ULONG UserDataCount; // [rsp+20h] [rbp-69h]
  __int32 v16; // [rsp+30h] [rbp-59h] BYREF
  __int64 v17; // [rsp+38h] [rbp-51h] BYREF
  __int32 v18; // [rsp+40h] [rbp-49h] BYREF
  _DWORD v19[3]; // [rsp+44h] [rbp-45h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-29h] BYREF
  void *v22; // [rsp+70h] [rbp-19h]
  int v23; // [rsp+78h] [rbp-11h]
  int v24; // [rsp+7Ch] [rbp-Dh]
  const char *v25; // [rsp+80h] [rbp-9h]
  __int64 v26; // [rsp+88h] [rbp-1h]
  _DWORD *v27; // [rsp+90h] [rbp+7h]
  __int64 v28; // [rsp+98h] [rbp+Fh]
  __int32 *v29; // [rsp+A0h] [rbp+17h]
  __int64 v30; // [rsp+A8h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  v4 = 0;
  v16 = 0;
  if ( !a3 )
    goto LABEL_7;
  v17 = 0LL;
  v5 = (**(__int64 (__fastcall ***)(struct IInputTarget *, GUID *, __int64 *))a3)(
         a3,
         &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59,
         &v17);
  v6 = v5;
  if ( v5 < 0 )
  {
    v12 = 269LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparrayrawinputprovider.cpp",
      (const char *)(unsigned int)v5,
      UserDataCount);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v17);
    return v6;
  }
  v5 = (*(__int64 (__fastcall **)(__int64, __int32 *))(*(_QWORD *)v17 + 32LL))(v17, &v16);
  v6 = v5;
  if ( v5 < 0 )
  {
    v12 = 271LL;
    goto LABEL_16;
  }
  v7 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v4 = v16;
LABEL_7:
  v8 = 0LL;
  for ( i = (_DWORD *)*((_QWORD *)this + 8); i != (_DWORD *)((char *)this + 64); i = *(_DWORD **)i )
  {
    if ( i[6] == v4 )
    {
      v8 = (struct LampArrayEndpoint *)(i + 4);
      break;
    }
  }
  if ( (unsigned int)dword_180240410 > 5 )
  {
    v18 = v4;
    v19[0] = *((_DWORD *)this + 8);
    v29 = &v18;
    v30 = 4LL;
    v27 = v19;
    v28 = 4LL;
    v25 = "FocusChanged";
    v26 = 13LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    *(_DWORD *)&EventDescriptor.Level = 5;
    EventDescriptor.Keyword = 0LL;
    UserData.Ptr = (ULONGLONG)off_180240418;
    UserData.Size = *(unsigned __int16 *)off_180240418;
    UserData.Reserved = 2;
    v22 = &unk_180202935;
    v23 = 91;
    v24 = 1;
    v19[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 5u, &UserData);
    v4 = v16;
  }
  _InterlockedExchange((volatile __int32 *)this + 8, v4);
  for ( j = (struct LampArrayDevice **)*((_QWORD *)this + 5); ; j = (struct LampArrayDevice **)*j )
  {
    if ( j == (struct LampArrayDevice **)((char *)this + 40) )
      return 0LL;
    active = LampArrayRawInputProvider::SetActiveViewClient((LampArrayRawInputProvider *)((char *)this - 8), j[2], v8);
    v14 = active;
    if ( active < 0 )
      break;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x122,
    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparrayrawinputprovider.cpp",
    (const char *)(unsigned int)active,
    UserDataCount);
  return v14;
}
