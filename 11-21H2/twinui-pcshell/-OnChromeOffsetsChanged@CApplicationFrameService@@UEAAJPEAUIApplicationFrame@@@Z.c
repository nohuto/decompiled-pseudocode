/*
 * XREFs of ?OnChromeOffsetsChanged@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@@Z @ 0x18012C180
 * Callers:
 *     ?SynchronizeFrameInformation@CApplicationFrameService@@UEAAJPEAUIApplicationFrameProxy@@@Z @ 0x18012C0B0 (-SynchronizeFrameInformation@CApplicationFrameService@@UEAAJPEAUIApplicationFrameProxy@@@Z.c)
 * Callees:
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800EEF40 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CApplicationFrameService::OnChromeOffsetsChanged(
        CApplicationFrameService *this,
        struct IApplicationFrame *a2)
{
  unsigned __int64 i; // r9
  __int64 v5; // r10
  __int64 v6; // rdx
  signed __int64 v7; // rax
  signed __int64 v8; // rtt
  __int64 v9; // rcx
  volatile int *v10; // rdx
  __int64 v11; // r11
  signed __int64 v12; // rax
  int v13; // ecx
  signed __int64 v14; // rtt
  signed __int64 v16; // rtt
  __int64 v17; // [rsp+30h] [rbp-40h]
  __int64 v18; // [rsp+38h] [rbp-38h] BYREF
  int v19; // [rsp+40h] [rbp-30h] BYREF
  __int64 v20; // [rsp+48h] [rbp-28h] BYREF
  __int128 v21; // [rsp+50h] [rbp-20h] BYREF

  if ( (*(int (__fastcall **)(struct IApplicationFrame *, __int128 *))(*(_QWORD *)a2 + 120LL))(a2, &v21) >= 0
    && (*(int (__fastcall **)(struct IApplicationFrame *, int *))(*(_QWORD *)a2 + 128LL))(a2, &v19) >= 0
    && (*(int (__fastcall **)(struct IApplicationFrame *, __int64 *))(*(_QWORD *)a2 + 24LL))(a2, &v20) >= 0 )
  {
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v17 = 0LL;
    for ( i = 0LL; i < *((_QWORD *)this + 12); ++i )
    {
      v5 = *((_QWORD *)this + 11);
      v6 = *(_QWORD *)(v5 + 8 * i);
      if ( *(_QWORD *)(v6 + 80) == v20 )
      {
        if ( v6 )
        {
          v7 = *(_QWORD *)(v6 + 64);
          while ( v7 >= 0 )
          {
            if ( (_DWORD)v7 != 0x7FFFFFFF )
            {
              v8 = v7;
              v7 = _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 64), v7 + 1, v7);
              if ( v8 != v7 )
                continue;
            }
            goto LABEL_12;
          }
LABEL_34:
          Microsoft::WRL::Details::SafeUnknownIncrementReference(
            (Microsoft::WRL::Details *)(2 * v7 + 16),
            (volatile int *)v6);
        }
LABEL_12:
        v17 = *(_QWORD *)(v5 + 8 * i);
        v18 = 0LL;
        if ( (*(int (__fastcall **)(_QWORD, __int64, GUID *, __int64 *))(**((_QWORD **)this + 15) + 48LL))(
               *((_QWORD *)this + 15),
               -(__int64)(v17 != 0) & (v17 + 8),
               &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
               &v18) >= 0 )
        {
          *(_OWORD *)(v17 + 88) = v21;
          *(_DWORD *)(v17 + 104) = v19;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 488LL))(v18);
        }
        v9 = v18;
        if ( v18 )
        {
          v18 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
        }
        goto LABEL_16;
      }
    }
    for ( i = 0LL; i < *((_QWORD *)this + 8); ++i )
    {
      v5 = *((_QWORD *)this + 7);
      v6 = *(_QWORD *)(v5 + 8 * i);
      if ( *(_QWORD *)(v6 + 80) == v20 )
      {
        if ( !v6 )
          goto LABEL_12;
        v7 = *(_QWORD *)(v6 + 64);
        while ( v7 >= 0 )
        {
          if ( (_DWORD)v7 != 0x7FFFFFFF )
          {
            v16 = v7;
            v7 = _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 64), v7 + 1, v7);
            if ( v16 != v7 )
              continue;
          }
          goto LABEL_12;
        }
        goto LABEL_34;
      }
    }
LABEL_16:
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v11 = v17;
    if ( v17 )
    {
      v12 = *(_QWORD *)(v17 + 64);
      while ( v12 >= 0 )
      {
        if ( (_DWORD)v12 == 0x7FFFFFFF )
          return 0LL;
        v13 = v12 - 1;
        v14 = v12;
        v12 = _InterlockedCompareExchange64((volatile signed __int64 *)(v17 + 64), v12 - 1, v12);
        if ( v14 == v12 )
          goto LABEL_21;
      }
      v13 = Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(2 * v12 + 16), v10);
LABEL_21:
      if ( !v13 )
      {
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 48LL))(v11, 1LL);
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
      }
    }
  }
  return 0LL;
}
