/*
 * XREFs of _lambda_7bc44750849f411daf11246e0ad82942_::operator() @ 0x1801301A8
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_cd700f2a7d541494bae9b45ccb614160___::Run @ 0x180130120 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_cd700f2a7d541494bae9b45ccb614160___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_7bc44750849f411daf11246e0ad82942_::operator()(__int64 a1)
{
  char v2; // si
  char v3; // di
  int (__fastcall ***v4)(_QWORD, GUID *, __int64 *); // r15
  int (__fastcall *v5)(_QWORD, GUID *, __int64 *); // rbx
  PVOID Ptr; // rdi
  void (__fastcall *v8)(PVOID, _QWORD, __int64); // rbx
  int v9; // [rsp+40h] [rbp-30h] BYREF
  __int64 v10; // [rsp+48h] [rbp-28h] BYREF
  int v11; // [rsp+50h] [rbp-20h] BYREF
  int v12; // [rsp+54h] [rbp-1Ch] BYREF
  RECT rc; // [rsp+58h] [rbp-18h] BYREF

  rc = 0LL;
  v12 = 0;
  v9 = 0;
  v2 = 0;
  v3 = 0;
  v10 = 0LL;
  v4 = *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))a1;
  v5 = ***(int (__fastcall ****)(_QWORD, GUID *, __int64 *))a1;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v10);
  if ( v5(v4, &GUID_3fc0257d_21c2_4ad3_8fb0_fd481cd204e2, &v10) >= 0 )
  {
    (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v10 + 32LL))(v10, &v11);
    (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v10 + 48LL))(v10, &v9);
    if ( v11 == 4 )
    {
      v2 = 1;
      v3 = 0;
      (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v10 + 40LL))(v10, &v12);
    }
    else
    {
      v2 = 0;
      if ( v11 != 3 || (v9 & 1) == 0 )
      {
        v3 = 0;
        goto LABEL_2;
      }
      v3 = 1;
    }
    (*(void (__fastcall **)(__int64, RECT *))(*(_QWORD *)v10 + 24LL))(v10, &rc);
  }
LABEL_2:
  if ( (v9 & 1) == 0 )
    (*(void (__fastcall **)(_QWORD, int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(**(_QWORD **)(*(_QWORD *)(a1 + 8)
                                                                                                  + 120LL)
                                                                                    + 32LL))(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 120LL),
      v4);
  if ( v2 )
  {
    (*(void (__fastcall **)(PVOID, _QWORD, _QWORD, RECT *, int, int, int))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[22].Ptr
                                                                         + 24LL))(
      CApplicationManagerUtility::g_pIAMGlobals[22].Ptr,
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 128LL),
      0LL,
      &rc,
      3,
      (v12 & 1) != 0 ? 1 : 16,
      v12 & 2 | 1);
  }
  else if ( v3 )
  {
    Ptr = CApplicationManagerUtility::g_pIAMGlobals[20].Ptr;
    v8 = *(void (__fastcall **)(PVOID, _QWORD, __int64))(*(_QWORD *)Ptr + 32LL);
    IsRectEmpty(&rc);
    v8(Ptr, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 128LL), 5LL);
  }
  return Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v10);
}
