/*
 * XREFs of ?OnNotify@CMicBoostNotificationsHandler@@UEAAJKPEBU_GUID@@@Z @ 0x1400781D0
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1400280E4 (--2@YAPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1400284DC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x140029234 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1400382FE (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$shared_any_t@V?$shared_storage@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x140064C6C (--1-$shared_any_t@V-$shared_storage@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6A.c)
 *     ?QueueNotification@CAPOProcessingHostObject@@QEAAXAEAV?$shared_ptr@UAPO_NOTIFICATION@@@std@@@Z @ 0x140070030 (-QueueNotification@CAPOProcessingHostObject@@QEAAXAEAV-$shared_ptr@UAPO_NOTIFICATION@@@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CMicBoostNotificationsHandler::OnNotify(
        CMicBoostNotificationsHandler *this,
        __int64 a2,
        const struct _GUID *a3)
{
  struct _GUID *v5; // rdi
  _DWORD *v6; // r14
  unsigned int v7; // ebx
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // eax
  _QWORD *i; // rbx
  _QWORD v14[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v5 = (struct _GUID *)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = operator new(0x18uLL);
  v6[2] = 1;
  v6[3] = 1;
  *(_QWORD *)v6 = off_1400A83B8;
  *((_QWORD *)v6 + 2) = v5;
  v14[0] = v5;
  v14[1] = v6;
  if ( !v5 )
  {
    v7 = -2147024882;
    v8 = 2147942414LL;
    v9 = 137LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\apomicboostnotificationshandler.cpp",
      (const char *)v8);
    wil::shared_any_t<wil::details::shared_storage<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>>::~shared_any_t<wil::details::shared_storage<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>>((__int64)v14);
    return v7;
  }
  memset_0(v5, 0, 0x48uLL);
  v5->Data1 = 6;
  if ( !a3 )
    a3 = &GUID_00000000_0000_0000_0000_000000000000;
  v5[1] = *a3;
  v10 = *((_QWORD *)this + 4);
  *(_QWORD *)v5->Data4 = v10;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  v5[2].Data1 = 1;
  v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int16 *))(**((_QWORD **)this + 7) + 40LL))(
          *((_QWORD *)this + 7),
          0LL,
          &v5[2].Data2);
  v7 = v11;
  if ( v11 < 0 )
  {
    v9 = 145LL;
LABEL_12:
    v8 = (unsigned int)v11;
    goto LABEL_13;
  }
  v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int8 *, unsigned __int8 *, unsigned int *))(**((_QWORD **)this + 7) + 32LL))(
          *((_QWORD *)this + 7),
          0LL,
          v5[2].Data4,
          &v5[2].Data4[4],
          &v5[3].Data1);
  v7 = v11;
  if ( v11 < 0 )
  {
    v9 = 146LL;
    goto LABEL_12;
  }
  if ( *((_QWORD *)this + 6) )
  {
    *(_DWORD *)&v5[3].Data2 = 1;
    v11 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int8 *))(**((_QWORD **)this + 6) + 32LL))(
            *((_QWORD *)this + 6),
            v5[3].Data4);
    v7 = v11;
    if ( v11 < 0 )
    {
      v9 = 150LL;
      goto LABEL_12;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  for ( i = (_QWORD *)*((_QWORD *)this + 14); i; i = (_QWORD *)*i )
    CAPOProcessingHostObject::QueueNotification(i[1], v14);
  if ( this != (CMicBoostNotificationsHandler *)-64LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  std::_Ref_count_base::_Decref((std::_Ref_count_base *)v6);
  return 0LL;
}
