/*
 * XREFs of _lambda_e2c0853faeb8110aeaae9508528948ac_::operator() @ 0x1802364D2
 * Callers:
 *     ??$LambdaEnumWindowsProc@V_lambda_e2c0853faeb8110aeaae9508528948ac_@@@EnumWindowsHelpers@@YAHPEAUHWND__@@_J@Z @ 0x1802364B0 (--$LambdaEnumWindowsProc@V_lambda_e2c0853faeb8110aeaae9508528948ac_@@@EnumWindowsHelpers@@YAHPEA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800727D8 (--4-$ComPtr@UISnappedWindow@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?s_LookupEntry@?$CSimpleHashTable@PEAUHWND__@@V?$ComPtr@UISwitchItemElement@@@WRL@Microsoft@@V?$CDefaultHashPolicy@PEAUHWND__@@@@V?$CDefaultKeyCompare@PEAUHWND__@@@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@CAAEAVHashBucket@1@PEAV21@IAEBQEAUHWND__@@@Z @ 0x1802366F8 (-s_LookupEntry@-$CSimpleHashTable@PEAUHWND__@@V-$ComPtr@UISwitchItemElement@@@WRL@Microsoft@@V-$.c)
 *     ??8Geometry@@YA_NAEBUCRect@0@0@Z @ 0x180311C94 (--8Geometry@@YA_NAEBUCRect@0@0@Z.c)
 *     ?AnimateVisibleSwitchItem@MultitaskingViewAnimationCoordinatorBase@@IEAAJPEAUISwitchItemElement@@PEAUIDCompBatchAnimationCallback@@_N@Z @ 0x1804C931C (-AnimateVisibleSwitchItem@MultitaskingViewAnimationCoordinatorBase@@IEAAJPEAUISwitchItemElement@.c)
 *     ?GetSourceRect@MultitaskingViewAnimationCoordinatorBase@@IEAAJPEAUISwitchItemElement@@PEAUtagRECT@@@Z @ 0x1804CA1A8 (-GetSourceRect@MultitaskingViewAnimationCoordinatorBase@@IEAAJPEAUISwitchItemElement@@PEAUtagREC.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall lambda_e2c0853faeb8110aeaae9508528948ac_::operator()(__int64 *a1, HWND a2)
{
  char v4; // r14
  struct ISwitchItemElement *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  _QWORD *v9; // rax
  bool v10; // di
  struct IDCompBatchAnimationCallback **v11; // rdi
  _BYTE *v12; // r14
  bool v13; // r9
  MultitaskingViewAnimationCoordinatorBase *v14; // rcx
  struct ISwitchItemElement *v16; // [rsp+28h] [rbp-28h] BYREF
  HWND v17; // [rsp+30h] [rbp-20h] BYREF
  struct tagRECT rcDst; // [rsp+38h] [rbp-18h] BYREF

  v17 = a2;
  v4 = 0;
  v5 = 0LL;
  v16 = 0LL;
  v6 = *a1;
  v7 = *(_QWORD *)(*a1 + 16);
  v10 = 0;
  if ( v7 )
  {
    v8 = CSimpleHashTable<HWND__ *,Microsoft::WRL::ComPtr<ISwitchItemElement>,CDefaultHashPolicy<HWND__ *>,CDefaultKeyCompare<HWND__ *>,CDefaultResizePolicy,CDefaultRehashPolicy>::s_LookupEntry(
           v7,
           *(unsigned int *)(v6 + 4),
           &v17);
    if ( *(_DWORD *)v8 == 1 )
    {
      Microsoft::WRL::ComPtr<ISnappedWindow>::operator=((__int64 *)&v16, (__int64 *)(v8 + 16));
      v5 = v16;
      v9 = (_QWORD *)(*(__int64 (__fastcall **)(struct ISwitchItemElement *, struct tagRECT *))(*(_QWORD *)v16 + 24LL))(
                       v16,
                       &rcDst);
      v4 = 1;
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*v9 + 152LL))(*v9) )
        v10 = 1;
    }
  }
  if ( (v4 & 1) != 0 )
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&rcDst.left);
  if ( v10 )
  {
    if ( !IsWindowVisible(a2)
      || (v11 = (struct IDCompBatchAnimationCallback **)a1[1],
          (*((unsigned __int8 (__fastcall **)(struct IDCompBatchAnimationCallback **, struct ISwitchItemElement *))*v11
           + 14))(
            v11,
            v5)) )
    {
      (*(void (__fastcall **)(__int64, struct ISwitchItemElement *, _QWORD))(*(_QWORD *)a1[1] + 120LL))(
        a1[1],
        v5,
        *(_QWORD *)(a1[1] + 64));
    }
    else
    {
      v12 = (_BYTE *)a1[2];
      v13 = *v12
         && !(*((unsigned __int8 (__fastcall **)(struct IDCompBatchAnimationCallback **, struct ISwitchItemElement *))*v11
              + 13))(
               v11,
               v5);
      MultitaskingViewAnimationCoordinatorBase::AnimateVisibleSwitchItem(
        (MultitaskingViewAnimationCoordinatorBase *)v11,
        v5,
        v11[8],
        v13);
      if ( !*v12 )
      {
        rcDst = 0LL;
        MultitaskingViewAnimationCoordinatorBase::GetSourceRect(v14, v5, &rcDst);
        if ( IntersectRect(&rcDst, &rcDst, (const RECT *)a1[3]) )
        {
          if ( (unsigned __int8)Geometry::operator==(&rcDst, a1[3]) )
            *v12 = 1;
        }
      }
    }
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v16);
  return 1;
}
