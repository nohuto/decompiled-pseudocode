/*
 * XREFs of ?Initialize@CPresentationBuffer@@IEAAJPEAUIUnknown@@@Z @ 0x1801AF3A8
 * Callers:
 *     ?Create@CPresentationBuffer@@SAJPEAVCPresentationManager@@PEAUIUnknown@@_KPEAPEAV1@@Z @ 0x1801AF19C (-Create@CPresentationBuffer@@SAJPEAVCPresentationManager@@PEAUIUnknown@@_KPEAPEAV1@@Z.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18006A7EC (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     ?AddBuffer@CPresentationManager@@QEAA_NPEAUIUnknown@@@Z @ 0x1800A733C (-AddBuffer@CPresentationManager@@QEAA_NPEAUIUnknown@@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_P010DisplayableSupport@@@details@wil@@QEAA_NXZ @ 0x1800A7B34 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_P010DisplayableSupport@@@details@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800E76D8 (--1-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH.c)
 *     ??4?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIUnknown@@@Z @ 0x1801AED44 (--4-$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIUnknown@@@Z.c)
 *     ?HRESULTFromNTSTATUS@@YAJJ@Z @ 0x1801B246C (-HRESULTFromNTSTATUS@@YAJJ@Z.c)
 */

__int64 __fastcall CPresentationBuffer::Initialize(CPresentationBuffer *this, struct IUnknown *a2)
{
  int v4; // ecx
  unsigned int v5; // edx
  unsigned int v6; // ebx
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, struct IUnknown *, __int64 *, _BYTE *, void **); // rbx
  int v10; // eax
  int v11; // eax
  int BufferAvailableEvent; // eax
  void *v14; // [rsp+30h] [rbp-40h] BYREF
  __int64 v15; // [rsp+38h] [rbp-38h] BYREF
  _BYTE v16[8]; // [rsp+40h] [rbp-30h] BYREF
  GUID v17; // [rsp+48h] [rbp-28h] BYREF
  int v18; // [rsp+58h] [rbp-18h]
  __int64 *v19; // [rsp+60h] [rbp-10h]

  v14 = 0LL;
  if ( !CPresentationManager::AddBuffer(*((CPresentationManager **)this + 2), a2) )
  {
    v4 = -2147024809;
    v5 = 44;
    v6 = -2147024809;
LABEL_20:
    DoStackCaptureDirect(v4, v5);
    goto LABEL_21;
  }
  *((_BYTE *)this + 48) |= 2u;
  v19 = &v15;
  v7 = *((_QWORD *)this + 2);
  v17 = GUID_2d65776f_bd54_4cd7_9bd2_2232e4fcd974;
  v18 = 8;
  v8 = *(_QWORD *)(v7 + 152);
  v9 = *(__int64 (__fastcall **)(__int64, struct IUnknown *, __int64 *, _BYTE *, void **))(*(_QWORD *)v8 + 16LL);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    &v14,
    0LL);
  v10 = v9(v8, a2, &v15, v16, &v14);
  v6 = v10;
  if ( v10 < 0 )
  {
    v5 = 57;
    goto LABEL_19;
  }
  if ( (_DWORD)v15 != 10 && (_DWORD)v15 != 24 && (_DWORD)v15 != 28 && (_DWORD)v15 != 87 && (_DWORD)v15 != 103 )
  {
    if ( (_DWORD)v15 != 104 )
    {
      if ( (unsigned int)(v15 - 106) <= 1 )
        goto LABEL_11;
LABEL_15:
      v4 = -2147024809;
      v5 = 77;
      v6 = -2147024809;
      goto LABEL_20;
    }
    if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_P010DisplayableSupport>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_P010DisplayableSupport>::GetImpl'::`2'::impl) )
      goto LABEL_15;
  }
LABEL_11:
  v11 = NtFlipObjectAddPoolBuffer(*(_QWORD *)(*((_QWORD *)this + 2) + 104LL), (char *)this + 32, v14, v16, 1, &v17);
  v10 = HRESULTFromNTSTATUS(v11);
  v6 = v10;
  if ( v10 < 0 )
  {
    v5 = 87;
    goto LABEL_19;
  }
  *((_BYTE *)this + 48) |= 1u;
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    (void **)this + 3,
    0LL);
  BufferAvailableEvent = NtFlipObjectQueryBufferAvailableEvent(
                           *(_QWORD *)(*((_QWORD *)this + 2) + 104LL),
                           (char *)this + 32,
                           (char *)this + 24);
  v10 = HRESULTFromNTSTATUS(BufferAvailableEvent);
  v6 = v10;
  if ( v10 < 0 )
  {
    v5 = 94;
LABEL_19:
    v4 = v10;
    goto LABEL_20;
  }
  wil::com_ptr_t<IUnknown,wil::err_returncode_policy>::operator=((__int64 *)this + 5, (__int64)a2);
LABEL_21:
  wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(&v14);
  return v6;
}
