/*
 * XREFs of ?RegisterFor3DCompositorRunningChanged@MPC3DStateHelper@@QEAAXV?$function@$$A6AX_N@Z@std@@PEAI@Z @ 0x18002D4B4
 * Callers:
 *     ?Initialize@SpatialRimDeviceCollection@@IEAAJPEAPEAX@Z @ 0x18002B630 (-Initialize@SpatialRimDeviceCollection@@IEAAJPEAPEAX@Z.c)
 *     ?Initialize@MPCInputRouter@@AEAAJXZ @ 0x18002BDC0 (-Initialize@MPCInputRouter@@AEAAJXZ.c)
 *     ?RuntimeClassInitialize@MPCRawInputProvider@@QEAAJPEAUIRawInputClient@@@Z @ 0x18002C0A0 (-RuntimeClassInitialize@MPCRawInputProvider@@QEAAJPEAUIRawInputClient@@@Z.c)
 *     ?Initialize@MPCHeadUpdateListener@@AEAAXXZ @ 0x1800B9320 (-Initialize@MPCHeadUpdateListener@@AEAAXXZ.c)
 * Callees:
 *     ??$_Try_emplace@AEBI$$V@?$map@IV?$function@$$A6AX_N@Z@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x1800403B8 (--$_Try_emplace@AEBI$$V@-$map@IV-$function@$$A6AX_N@Z@std@@U-$less@I@2@V-$allocator@U-$pair@$$CB.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x1800469A4 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall MPC3DStateHelper::RegisterFor3DCompositorRunningChanged(PSRWLOCK SRWLock, __int64 a2, _DWORD *a3)
{
  int Ptr; // ecx
  __int64 v7; // rbx
  __int64 v8; // rdi
  _BYTE *v9; // rcx
  __int64 (__fastcall ***v10)(_QWORD, _BYTE *); // r8
  _BYTE *v11; // r8
  _BYTE *v12; // rdx
  __int64 v13; // r9
  _BYTE *v14; // rdx
  _BYTE *v16; // rax
  _BYTE *v17; // rdx
  _BYTE v18[16]; // [rsp+28h] [rbp-71h] BYREF
  __int64 v19; // [rsp+38h] [rbp-61h]
  _BYTE v20[56]; // [rsp+40h] [rbp-59h] BYREF
  _BYTE *v21; // [rsp+78h] [rbp-21h]
  _BYTE v22[56]; // [rsp+80h] [rbp-19h] BYREF
  _BYTE *v23; // [rsp+B8h] [rbp+1Fh]

  v19 = a2;
  AcquireSRWLockExclusive(SRWLock);
  Ptr = (int)SRWLock[2].Ptr;
  LODWORD(SRWLock[2].Ptr) = Ptr + 1;
  *a3 = Ptr;
  v7 = *(_QWORD *)std::map<unsigned int,std::function<void (bool)>>::_Try_emplace<unsigned int const &,>(
                    &SRWLock[4],
                    v18,
                    a3);
  v8 = v7 + 40;
  v9 = 0LL;
  v21 = 0LL;
  v10 = *(__int64 (__fastcall ****)(_QWORD, _BYTE *))(a2 + 56);
  if ( v10 )
  {
    v9 = (_BYTE *)(**v10)(*(_QWORD *)(a2 + 56), v20);
    v21 = v9;
  }
  if ( v9 != v20 && *(_QWORD *)(v7 + 96) != v8 )
  {
    v16 = v9;
    v9 = *(_BYTE **)(v7 + 96);
    v21 = v9;
    *(_QWORD *)(v7 + 96) = v16;
    goto LABEL_15;
  }
  v11 = 0LL;
  v23 = 0LL;
  if ( v9 )
  {
    if ( v9 != v20 )
    {
      v11 = v9;
      v23 = v9;
      goto LABEL_8;
    }
    v11 = (_BYTE *)(*(__int64 (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v9 + 8LL))(v9, v22);
    v23 = v11;
    v9 = v21;
    if ( v21 )
    {
      v12 = v20;
      LOBYTE(v12) = v21 != v20;
      (*(void (__fastcall **)(_BYTE *, _BYTE *, _BYTE *))(*(_QWORD *)v21 + 32LL))(v21, v12, v11);
      v11 = v23;
LABEL_8:
      v9 = 0LL;
      v21 = 0LL;
    }
  }
  v13 = *(_QWORD *)(v7 + 96);
  if ( v13 )
  {
    if ( v13 == v8 )
    {
      v21 = (_BYTE *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)v13 + 8LL))(*(_QWORD *)(v7 + 96), v20);
      std::_Func_class<void,>::_Tidy(v8);
      v9 = v21;
      v11 = v23;
    }
    else
    {
      v9 = *(_BYTE **)(v7 + 96);
      v21 = v9;
      *(_QWORD *)(v7 + 96) = 0LL;
    }
  }
  if ( v11 )
  {
    if ( v11 == v22 )
    {
      *(_QWORD *)(v7 + 96) = (*(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v11 + 8LL))(v11, v8);
      if ( v23 )
      {
        v14 = v22;
        LOBYTE(v14) = v23 != v22;
        (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v23 + 32LL))(v23, v14);
      }
      v9 = v21;
    }
    else
    {
      *(_QWORD *)(v7 + 96) = v11;
    }
  }
LABEL_15:
  if ( v9 )
  {
    v17 = v20;
    LOBYTE(v17) = v9 != v20;
    (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v9 + 32LL))(v9, v17);
  }
  ReleaseSRWLockExclusive(SRWLock);
  return std::_Func_class<void,>::_Tidy(a2);
}
