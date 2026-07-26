/*
 * XREFs of ?Open@ExecutionContextKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z @ 0x1C010D8A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00088CC (WPP_RECORDER_SF_.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1C002398C (--1-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K$0.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1C00296A0 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@.c)
 *     WPP_RECORDER_SF_d @ 0x1C002B684 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     ??$invoke@P6AJPEAX@ZAEAPEAX@wistd@@YAJ$$QEAP6AJPEAX@ZAEAPEAX@Z @ 0x1C00346C4 (--$invoke@P6AJPEAX@ZAEAPEAX@wistd@@YAJ$$QEAP6AJPEAX@ZAEAPEAX@Z.c)
 *     WPP_RECORDER_SF__guid_d @ 0x1C005B994 (WPP_RECORDER_SF__guid_d.c)
 *     WPP_RECORDER_SF__guid_Dd @ 0x1C00B2B34 (WPP_RECORDER_SF__guid_Dd.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x1C01065B8 (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 *     ?QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C010B67C (-QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV-$unique_ptr@UKString@Rtl@@U-$default_d.c)
 *     ?Initialize@KString@Rtl@@SAPEAU12@PEBU_UNICODE_STRING@@@Z @ 0x1C010B850 (-Initialize@KString@Rtl@@SAPEAU12@PEBU_UNICODE_STRING@@@Z.c)
 *     ?Open@KRegKey@@QEAAJKPEBU_UNICODE_STRING@@PEAX@Z @ 0x1C010E4E8 (-Open@KRegKey@@QEAAJKPEBU_UNICODE_STRING@@PEAX@Z.c)
 *     ?Open@RegistryKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z @ 0x1C010E560 (-Open@RegistryKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z.c)
 *     ?ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C0110158 (-ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV-$unique_ptr@UKString@Rtl@@U-$de.c)
 *     ?ReadUint32@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAI@Z @ 0x1C0110388 (-ReadUint32@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAI@Z.c)
 *     ?netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetupSubkeyType@@PEA_W@Z @ 0x1C011095C (-netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetup.c)
 */

__int64 __fastcall ExecutionContextKnobCollection::Open(
        ExecutionContextKnobCollection *this,
        unsigned int a2,
        struct KnobTransaction *a3)
{
  struct KnobTransaction *v3; // r14
  char v4; // si
  __int64 result; // rax
  __int64 v7; // r13
  __int64 v8; // r13
  int v9; // edx
  signed int v10; // ebx
  void **v11; // r12
  void *v12; // r8
  __int64 v13; // rdi
  const wchar_t *v14; // rax
  __int64 v15; // rcx
  __int16 v16; // cx
  const wchar_t *v17; // rax
  __int64 v18; // rcx
  __int16 v19; // cx
  const wchar_t *v20; // rax
  signed int v21; // ecx
  __int16 v22; // di
  struct Rtl::KString *v23; // rax
  PVOID v24; // rcx
  PVOID v25; // rcx
  unsigned __int16 v26; // r9
  void *v27; // rcx
  const wchar_t *v28; // rax
  __int64 v29; // rdi
  unsigned int v30; // esi
  NTSTATUS v31; // eax
  HANDLE v32; // rdi
  unsigned __int16 v33; // r9
  PVOID P; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-B8h] BYREF
  struct _UNICODE_STRING v36; // [rsp+50h] [rbp-B0h] BYREF
  ACCESS_MASK DesiredAccess[2]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v38; // [rsp+68h] [rbp-98h] BYREF
  KRegKey v39; // [rsp+70h] [rbp-90h] BYREF
  NTSTATUS (__stdcall *v40)(HANDLE); // [rsp+78h] [rbp-88h] BYREF
  __int128 v41; // [rsp+80h] [rbp-80h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-70h] BYREF
  NTSTATUS (__stdcall *v43)(HANDLE); // [rsp+C0h] [rbp-40h] BYREF
  _BYTE *v44; // [rsp+C8h] [rbp-38h]
  wchar_t v45[256]; // [rsp+D0h] [rbp-30h] BYREF

  v3 = a3;
  DesiredAccess[0] = a2;
  v4 = a2;
  result = RegistryKnobCollection::Open(this, a2, a3);
  if ( (int)result >= 0 )
  {
    v39.m_ptr = 0LL;
    *((_BYTE *)v3 + 16) = 0;
    v7 = *((_QWORD *)this + 3);
    v44 = (char *)v3 + 16;
    v8 = v7 + 12;
    netsetupBuildObjectPath(2LL, v8, 0LL, 1LL, v45);
    v10 = KRegKey::Open(&v39, 1u, v45, 0LL);
    if ( v10 == -1073741772 )
    {
      netsetupBuildObjectPath(2LL, v8, 1LL, 1LL, v45);
      v10 = KRegKey::Open(&v39, 1u, v45, 0LL);
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
      goto LABEL_41;
    }
    v38 = 0;
    KeyHandle = &v39;
    P = 0LL;
    v10 = NetSetupPropertyBag::ReadString(&KeyHandle, &unk_1C00D1200, &P);
    if ( v10 < 0 )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_39;
      v26 = 11;
    }
    else
    {
      v10 = NetSetupPropertyBag::ReadUint32(
              (NetSetupPropertyBag *)&KeyHandle,
              (const struct _NETSETUPPROPKEY *)&unk_1C00D11E8,
              &v38);
      if ( v10 < 0 )
      {
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          goto LABEL_39;
        v26 = 12;
      }
      else
      {
        if ( v38 && v38 != 3 )
        {
          if ( v38 != 2 )
          {
            v10 = -1073741772;
            goto LABEL_39;
          }
          if ( !*(_WORD *)P )
          {
            v10 = -1073741772;
            goto LABEL_39;
          }
          v27 = *(void **)v3;
          v28 = L"Reserved\\ExecutionContextProfiles";
          v41 = 0LL;
          v29 = 0x7FFFLL;
          do
          {
            if ( !*v28 )
              break;
            ++v28;
            --v29;
          }
          while ( v29 );
          v10 = v29 == 0 ? 0xC000000D : 0;
          if ( v29 )
          {
            *((_QWORD *)&v41 + 1) = L"Reserved\\ExecutionContextProfiles";
            LOWORD(v41) = -2 - 2 * v29;
            WORD1(v41) = -2 * v29;
            v30 = DesiredAccess[0];
            ObjectAttributes.RootDirectory = v27;
            ObjectAttributes.ObjectName = (PUNICODE_STRING)&v41;
            KeyHandle = 0LL;
            *(_QWORD *)&ObjectAttributes.Length = 48LL;
            *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            v31 = ZwOpenKey(&KeyHandle, DesiredAccess[0], &ObjectAttributes);
            v32 = KeyHandle;
            v10 = v31;
            if ( *(_QWORD *)v3 )
            {
              *(_QWORD *)DesiredAccess = *(_QWORD *)v3;
              v40 = ZwClose;
              wistd::invoke<long (*)(void *),void * &>((__int64 (__fastcall **)(_QWORD))&v40, DesiredAccess);
            }
            *(_QWORD *)v3 = v32;
            if ( v10 >= 0 )
            {
              v10 = KRegKey::Open((KRegKey *)v3, v30, (const struct _UNICODE_STRING *)P, v32);
              if ( v10 < 0 )
              {
                if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
                  goto LABEL_39;
                v26 = 18;
                goto LABEL_80;
              }
              v3 = (struct KnobTransaction *)((char *)v3 + 8);
LABEL_38:
              wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
                (void **)v3,
                0LL);
              v10 = 0;
              *v44 = 1;
              goto LABEL_39;
            }
          }
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
            goto LABEL_39;
          v33 = 17;
LABEL_65:
          WPP_RECORDER_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            3u,
            1u,
            v33,
            (struct _GUID *)&WPP_305c8e6892fe3ae606912da7400a78c3_Traceguids,
            v10);
          goto LABEL_39;
        }
        if ( (v4 & 2) != 0 )
        {
          v10 = -1073741790;
          goto LABEL_39;
        }
        v11 = (void **)((char *)v3 + 8);
        v12 = (void *)*((_QWORD *)v3 + 1);
        v13 = 0x7FFFLL;
        v14 = L"Reserved\\ExecutionContextProfiles";
        v36 = 0LL;
        v15 = 0x7FFFLL;
        do
        {
          if ( !*v14 )
            break;
          ++v14;
          --v15;
        }
        while ( v15 );
        v10 = v15 == 0 ? 0xC000000D : 0;
        if ( v15 )
        {
          v16 = 2 * v15;
          v36.Buffer = L"Reserved\\ExecutionContextProfiles";
          v36.Length = -2 - v16;
          v36.MaximumLength = -v16;
        }
        if ( v10 < 0 )
          goto LABEL_69;
        ObjectAttributes.RootDirectory = v12;
        ObjectAttributes.ObjectName = &v36;
        KeyHandle = 0LL;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        *(_QWORD *)&ObjectAttributes.Length = 48LL;
        *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
        v10 = ZwOpenKey(&KeyHandle, DesiredAccess[0], &ObjectAttributes);
        *(_QWORD *)&v41 = KeyHandle;
        if ( *v11 )
        {
          v40 = (NTSTATUS (__stdcall *)(HANDLE))*v11;
          v43 = ZwClose;
          wistd::invoke<long (*)(void *),void * &>((__int64 (__fastcall **)(_QWORD))&v43, &v40);
        }
        *v11 = (void *)v41;
        if ( v10 < 0 )
        {
LABEL_69:
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
            goto LABEL_39;
          v33 = 13;
          goto LABEL_65;
        }
        if ( !*(_WORD *)P )
        {
          v36 = 0LL;
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
            v19 = 2 * v18;
            v36.Buffer = L"DefaultProfile";
            v36.Length = -2 - v19;
            v36.MaximumLength = -v19;
          }
          if ( v10 >= 0 )
            v10 = KRegKey::QueryValueString((HANDLE *)v3 + 1, &v36, &P);
          if ( v10 == -1073741772 )
          {
            v36 = 0LL;
            v20 = L"Balanced";
            do
            {
              if ( !*v20 )
                break;
              ++v20;
              --v13;
            }
            while ( v13 );
            v21 = v13 == 0 ? 0xC000000D : 0;
            if ( v13 )
            {
              v22 = 2 * v13;
              v36.Buffer = L"Balanced";
              v36.Length = -2 - v22;
              v36.MaximumLength = -v22;
            }
            if ( v21 < 0 )
              v23 = 0LL;
            else
              v23 = Rtl::KString::Initialize(&v36);
            v24 = P;
            P = v23;
            if ( v24 )
              ExFreePoolWithTag(v24, 0x7274534Bu);
            if ( !P )
            {
              if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  3u,
                  1u,
                  0xEu,
                  (struct _GUID *)&WPP_305c8e6892fe3ae606912da7400a78c3_Traceguids);
              v10 = -1073741670;
              goto LABEL_39;
            }
          }
          else if ( v10 < 0 )
          {
            if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
              goto LABEL_39;
            v33 = 15;
            goto LABEL_65;
          }
        }
        v10 = KRegKey::Open((KRegKey *)v3 + 1, DesiredAccess[0], (const struct _UNICODE_STRING *)P, *v11);
        if ( v10 >= 0 )
          goto LABEL_38;
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          goto LABEL_39;
        v26 = 16;
      }
    }
LABEL_80:
    WPP_RECORDER_SF__guid_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      3u,
      1u,
      v26,
      (struct _GUID *)&WPP_305c8e6892fe3ae606912da7400a78c3_Traceguids,
      v8,
      v10);
LABEL_39:
    v25 = P;
    P = 0LL;
    if ( v25 )
      ExFreePoolWithTag(v25, 0x7274534Bu);
LABEL_41:
    wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v39.m_ptr);
    return (unsigned int)v10;
  }
  return result;
}
