/*
 * XREFs of ?_CommitGutters@CAppLayout@@AEAAJXZ @ 0x1806183AC
 * Callers:
 *     ?Commit@CAppLayout@@UEAAJXZ @ 0x1806163A0 (-Commit@CAppLayout@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x18003FC5C (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800759C4 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ??$_InsertAt@$$QEAV?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@?$CTSimpleArray@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@@@QEAAJ$$QEAV?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@_K@Z @ 0x1801697C4 (--$_InsertAt@$$QEAV-$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@-$CTSimpleArray@V-$ComPtr@UIAppLay.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1802E15DC (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??8Geometry@@YA_NAEBUCRect@0@0@Z @ 0x180311C94 (--8Geometry@@YA_NAEBUCRect@0@0@Z.c)
 *     ?ComputeGutterWidth@ImmersiveApplicationLayout@@YAHPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x1805EF8A0 (-ComputeGutterWidth@ImmersiveApplicationLayout@@YAHPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z.c)
 *     ?s_CreateInstance_Gutter@CAppLayoutItem@@SAJPEAUtagRECT@@0AEBU_GUID@@PEAPEAX@Z @ 0x1806199D4 (-s_CreateInstance_Gutter@CAppLayoutItem@@SAJPEAUtagRECT@@0AEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall CAppLayout::_CommitGutters(
        CAppLayout *this,
        const struct LAYOUT_ENVIRONMENT_DETAILS *a2,
        enum DEVICE_SCALE_FACTOR a3)
{
  LONG v3; // esi
  LONG v5; // edi
  ImmersiveApplicationLayout *v6; // rcx
  int v7; // r14d
  LONG v8; // r12d
  LONG v9; // ebx
  int v10; // r13d
  __int64 *v11; // rdi
  __int64 *v12; // rbx
  const struct _GUID *v13; // r8
  __int128 v15; // [rsp+28h] [rbp-49h] BYREF
  struct tagRECT v16; // [rsp+38h] [rbp-39h] BYREF
  struct tagRECT v17; // [rsp+48h] [rbp-29h] BYREF
  __int128 v18; // [rsp+58h] [rbp-19h] BYREF
  LONG v19[4]; // [rsp+68h] [rbp-9h] BYREF
  __int128 v20; // [rsp+78h] [rbp+7h] BYREF
  _BYTE v21[8]; // [rsp+88h] [rbp+17h] BYREF
  LONG v22; // [rsp+90h] [rbp+1Fh]

  v3 = *((_DWORD *)this + 17);
  v5 = *((_DWORD *)this + 18);
  v6 = (CAppLayout *)((char *)this + 64);
  *(_QWORD *)((char *)&v18 + 4) = __PAIR64__(v5, v3);
  v7 = 0;
  v9 = *((_DWORD *)v6 + 3);
  LODWORD(v18) = *(_DWORD *)v6;
  v8 = v18;
  HIDWORD(v18) = v9;
  v10 = ImmersiveApplicationLayout::ComputeGutterWidth(v6, a2, a3);
  `vector constructor iterator'((char *)&v16, 16LL, 2LL, (void (__fastcall *)(char *))Geometry::CRect::CRect);
  v16.top = v3;
  v16.left = v8;
  v17 = (struct tagRECT)v18;
  v16.right = v5;
  v16.bottom = v9;
  if ( *((_QWORD *)this + 14) == 1LL )
  {
    v11 = (__int64 *)((char *)this + 104);
    (*(void (__fastcall **)(_QWORD, _QWORD, __int128 *))(***((_QWORD ***)this + 13) + 56LL))(
      **((_QWORD **)this + 13),
      0LL,
      &v15);
    v20 = v15;
    if ( Geometry::operator==(&v20, &v18) )
      return (unsigned int)v7;
    (*(void (__fastcall **)(_QWORD, _QWORD, __int128 *))(**(_QWORD **)*v11 + 56LL))(*(_QWORD *)*v11, 0LL, &v18);
    if ( (_DWORD)v18 == v8 )
    {
      v16.left = DWORD2(v18);
      v16.right = v10 + DWORD2(v18);
    }
    else
    {
      v16.right = v18;
      v16.left = v18 - v10;
    }
    v17 = v16;
  }
  else
  {
    if ( *((_QWORD *)this + 14) != 2LL )
      return (unsigned int)-2147418113;
    v11 = (__int64 *)((char *)this + 104);
    (*(void (__fastcall **)(_QWORD, _QWORD, __int128 *))(***((_QWORD ***)this + 13) + 56LL))(
      **((_QWORD **)this + 13),
      0LL,
      &v20);
    (*(void (__fastcall **)(_QWORD, __int64, _BYTE *))(**(_QWORD **)*v11 + 56LL))(*(_QWORD *)*v11, 1LL, v21);
    (*(void (__fastcall **)(_QWORD, _QWORD, __int128 *))(**(_QWORD **)(*v11 + 8) + 56LL))(
      *(_QWORD *)(*v11 + 8),
      0LL,
      &v18);
    (*(void (__fastcall **)(_QWORD, __int64, LONG *))(**(_QWORD **)(*v11 + 8) + 56LL))(*(_QWORD *)(*v11 + 8), 1LL, v19);
    v16.right = v19[0];
    v16.left = v22;
    v17.left = v22 + ((unsigned int)(v19[0] - v22 - v10) >> 1);
    v17.right = v10 + v17.left;
  }
  *(_QWORD *)&v18 = 0LL;
  v12 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v18, &v15);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v12);
  v7 = CAppLayoutItem::s_CreateInstance_Gutter(&v16, &v17, v13, (void **)v12);
  if ( v7 >= 0 )
  {
    *(_QWORD *)&v15 = v18;
    Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)&v15);
    v7 = CTSimpleArray<Microsoft::WRL::ComPtr<IAppLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IAppLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IAppLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IAppLayoutItem>>>::_InsertAt<Microsoft::WRL::ComPtr<IAppLayoutItem> &&>(
           v11,
           &v15,
           1uLL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v15);
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v18);
  return (unsigned int)v7;
}
