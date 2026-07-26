/*
 * XREFs of ?Open@ExecutionContextKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z @ 0x1C0119890
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0006690 (WPP_RECORDER_SF_.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1C002B64C (-reset@-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@.c)
 *     WPP_RECORDER_SF_d @ 0x1C00331FC (WPP_RECORDER_SF_d_ea_1C00331FC.c)
 *     __security_check_cookie @ 0x1C0035EF0 (__security_check_cookie.c)
 *     ??1?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAA@XZ @ 0x1C005D6D0 (--1-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAA@XZ.c)
 *     WPP_RECORDER_SF__guid_d @ 0x1C0060BE4 (WPP_RECORDER_SF__guid_d.c)
 *     WPP_RECORDER_SF__guid_Dd @ 0x1C00B7D64 (WPP_RECORDER_SF__guid_Dd.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x1C011290C (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 *     ?QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C0116EB8 (-QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV-$unique_ptr@UKString@Rtl@@U-$default_d.c)
 *     ?Initialize@KString@Rtl@@SAPEAU12@PEBU_UNICODE_STRING@@@Z @ 0x1C01170A4 (-Initialize@KString@Rtl@@SAPEAU12@PEBU_UNICODE_STRING@@@Z.c)
 *     ?Open@RegistryKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z @ 0x1C0118CA0 (-Open@RegistryKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z.c)
 *     ?Open@KRegKey@@QEAAJKPEBU_UNICODE_STRING@@PEAX@Z @ 0x1C0119C54 (-Open@KRegKey@@QEAAJKPEBU_UNICODE_STRING@@PEAX@Z.c)
 *     ?ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C011D8F0 (-ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV-$unique_ptr@UKString@Rtl@@U-$de.c)
 *     ?ReadUint32@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAI@Z @ 0x1C011DAC8 (-ReadUint32@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAI@Z.c)
 *     ?netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetupSubkeyType@@PEA_W@Z @ 0x1C011E124 (-netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetup.c)
 *     ??1KRegKey@@QEAA@XZ @ 0x1C012B7B0 (--1KRegKey@@QEAA@XZ.c)
 */

__int64 __fastcall ExecutionContextKnobCollection::Open(
        ExecutionContextKnobCollection *this,
        unsigned int a2,
        void **a3)
{
  void **v3; // rsi
  __int64 result; // rax
  __int64 v7; // r14
  __int64 v8; // r14
  int v9; // edx
  signed int v10; // ebx
  HANDLE *v11; // r13
  void *v12; // r8
  __int64 v13; // rcx
  const wchar_t *v14; // rax
  HANDLE v15; // r12
  const struct _UNICODE_STRING *v16; // r8
  const wchar_t *v17; // rax
  __int64 v18; // rcx
  signed int v19; // eax
  const wchar_t *v20; // rax
  __int64 v21; // rdx
  struct Rtl::KString *v22; // rax
  struct _UNICODE_STRING *v23; // rcx
  PVOID v24; // rcx
  unsigned __int16 v25; // r9
  HANDLE v26; // r8
  __int64 v27; // rcx
  const wchar_t *v28; // rax
  HANDLE v29; // rdi
  unsigned __int16 v30; // r9
  PVOID P; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING v32; // [rsp+48h] [rbp-B8h] BYREF
  HANDLE KeyHandle; // [rsp+58h] [rbp-A8h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v35; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v36; // [rsp+6Ch] [rbp-94h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-90h] BYREF
  _BYTE *v38; // [rsp+A0h] [rbp-60h]
  wchar_t v39[256]; // [rsp+B0h] [rbp-50h] BYREF

  v3 = a3;
  v36 = a2;
  result = RegistryKnobCollection::Open(this, a2, a3);
  if ( (int)result < 0 )
    return result;
  Handle = 0LL;
  *((_BYTE *)v3 + 16) = 0;
  v7 = *((_QWORD *)this + 3);
  v38 = v3 + 2;
  v8 = v7 + 12;
  netsetupBuildObjectPath(2LL, v8, 0LL, 1LL, v39);
  v10 = KRegKey::Open((KRegKey *)&Handle, 1u, v39, 0LL);
  if ( v10 == -1073741772 )
  {
    netsetupBuildObjectPath(2LL, v8, 1LL, 1LL, v39);
    v10 = KRegKey::Open((KRegKey *)&Handle, 1u, v39, 0LL);
  }
  if ( v10 < 0 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF__guid_Dd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v9,
        1u,
        0xAu,
        (struct _GUID *)&WPP_305c8e6892fe3ae606912da7400a78c3_Traceguids,
        v8,
        1,
        v10);
    goto LABEL_42;
  }
  v35 = 0;
  KeyHandle = &Handle;
  P = 0LL;
  v10 = NetSetupPropertyBag::ReadString(&KeyHandle, &unk_1C00D8DB0, &P);
  if ( v10 < 0 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_41;
    v25 = 11;
LABEL_40:
    WPP_RECORDER_SF__guid_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      3u,
      1u,
      v25,
      (struct _GUID *)&WPP_305c8e6892fe3ae606912da7400a78c3_Traceguids,
      v8,
      v10);
LABEL_41:
    wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::~unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>(&P);
LABEL_42:
    KRegKey::~KRegKey((KRegKey *)&Handle);
    return (unsigned int)v10;
  }
  v10 = NetSetupPropertyBag::ReadUint32(
          (NetSetupPropertyBag *)&KeyHandle,
          (const struct _NETSETUPPROPKEY *)&unk_1C00D8D98,
          &v35);
  if ( v10 < 0 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_41;
    v25 = 12;
    goto LABEL_40;
  }
  if ( v35 && v35 != 3 )
  {
    if ( v35 != 2 || !*(_WORD *)P )
    {
      v10 = -1073741772;
      goto LABEL_41;
    }
    v26 = *v3;
    v32 = 0LL;
    v27 = 0x7FFFLL;
    v28 = L"Reserved\\ExecutionContextProfiles";
    do
    {
      if ( !*v28 )
        break;
      ++v28;
      --v27;
    }
    while ( v27 );
    v10 = v27 == 0 ? 0xC000000D : 0;
    if ( v27 )
    {
      v32.Buffer = L"Reserved\\ExecutionContextProfiles";
      v32.Length = 2 * (0x7FFF - v27);
      v32.MaximumLength = v32.Length + 2;
      ObjectAttributes.RootDirectory = v26;
      ObjectAttributes.ObjectName = &v32;
      KeyHandle = 0LL;
      *(_QWORD *)&ObjectAttributes.Length = 48LL;
      *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v10 = ZwOpenKey(&KeyHandle, a2, &ObjectAttributes);
      v29 = KeyHandle;
      if ( *v3 )
        ZwClose(*v3);
      *v3 = v29;
      if ( v10 >= 0 )
      {
        v10 = KRegKey::Open((KRegKey *)v3, a2, (const struct _UNICODE_STRING *)P, v29);
        if ( v10 < 0 )
        {
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
            goto LABEL_41;
          v25 = 18;
          goto LABEL_40;
        }
        ++v3;
        goto LABEL_32;
      }
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_41;
    v30 = 17;
LABEL_67:
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      3u,
      1u,
      v30,
      (struct _GUID *)&WPP_305c8e6892fe3ae606912da7400a78c3_Traceguids,
      v10);
    goto LABEL_41;
  }
  if ( (a2 & 2) != 0 )
  {
    v10 = -1073741790;
    goto LABEL_41;
  }
  v11 = v3 + 1;
  v12 = v3[1];
  v32 = 0LL;
  v13 = 0x7FFFLL;
  v14 = L"Reserved\\ExecutionContextProfiles";
  do
  {
    if ( !*v14 )
      break;
    ++v14;
    --v13;
  }
  while ( v13 );
  v10 = v13 == 0 ? 0xC000000D : 0;
  if ( !v13 )
    goto LABEL_65;
  v32.Buffer = L"Reserved\\ExecutionContextProfiles";
  v32.Length = 2 * (0x7FFF - v13);
  v32.MaximumLength = v32.Length + 2;
  ObjectAttributes.RootDirectory = v12;
  ObjectAttributes.ObjectName = &v32;
  KeyHandle = 0LL;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v10 = ZwOpenKey(&KeyHandle, a2, &ObjectAttributes);
  v15 = KeyHandle;
  if ( *v11 )
    ZwClose(*v11);
  *v11 = v15;
  if ( v10 < 0 )
  {
LABEL_65:
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_41;
    v30 = 13;
    goto LABEL_67;
  }
  v16 = (const struct _UNICODE_STRING *)P;
  if ( !*(_WORD *)P )
  {
    v32 = 0LL;
    v17 = L"DefaultProfile";
    v18 = 0x7FFFLL;
    do
    {
      if ( !*v17 )
        break;
      ++v17;
      --v18;
    }
    while ( v18 );
    v10 = v18 == 0 ? 0xC000000D : 0;
    if ( v18 )
    {
      v32.Buffer = L"DefaultProfile";
      v32.Length = 2 * (0x7FFF - v18);
      v32.MaximumLength = v32.Length + 2;
      v19 = KRegKey::QueryValueString(v3 + 1, &v32, &P);
      v16 = (const struct _UNICODE_STRING *)P;
      v10 = v19;
    }
    if ( v10 == -1073741772 )
    {
      v32 = 0LL;
      v20 = L"Balanced";
      v21 = 0x7FFFLL;
      do
      {
        if ( !*v20 )
          break;
        ++v20;
        --v21;
      }
      while ( v21 );
      if ( v21 )
      {
        v32.Buffer = L"Balanced";
        v32.Length = 2 * (0x7FFF - v21);
        v32.MaximumLength = v32.Length + 2;
        v22 = Rtl::KString::Initialize(&v32);
        v16 = (const struct _UNICODE_STRING *)P;
      }
      else
      {
        v22 = 0LL;
      }
      v23 = (struct _UNICODE_STRING *)v16;
      P = v22;
      v16 = (const struct _UNICODE_STRING *)v22;
      if ( v23 )
      {
        ExFreePoolWithTag(v23, 0x7274534Bu);
        v16 = (const struct _UNICODE_STRING *)P;
      }
      if ( !v16 )
      {
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            3u,
            1u,
            0xEu,
            (struct _GUID *)&WPP_305c8e6892fe3ae606912da7400a78c3_Traceguids);
        v10 = -1073741670;
        goto LABEL_41;
      }
    }
    else if ( v10 < 0 )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_41;
      v30 = 15;
      goto LABEL_67;
    }
  }
  v10 = KRegKey::Open((KRegKey *)v3 + 1, v36, v16, *v11);
  if ( v10 < 0 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_41;
    v25 = 16;
    goto LABEL_40;
  }
LABEL_32:
  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
    v3,
    0LL);
  v24 = P;
  P = 0LL;
  *v38 = 1;
  if ( v24 )
    ExFreePoolWithTag(v24, 0x7274534Bu);
  if ( Handle )
    ZwClose(Handle);
  return 0LL;
}
