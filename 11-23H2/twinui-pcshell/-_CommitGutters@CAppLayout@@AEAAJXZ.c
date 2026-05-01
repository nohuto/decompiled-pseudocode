/*
 * XREFs of ?_CommitGutters@CAppLayout@@AEAAJXZ @ 0x180796CE0
 * Callers:
 *     ?Commit@CAppLayout@@UEAAJXZ @ 0x180794BC0 (-Commit@CAppLayout@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIGlobalInterfaceTable@@@WRL@Microsoft@@IEBAXXZ @ 0x18006E0D0 (-InternalAddRef@-$ComPtr@UIGlobalInterfaceTable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800CAB68 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ??$_InsertAt@$$QEAV?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@?$CTSimpleArray@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@@@QEAAJ$$QEAV?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@_K@Z @ 0x1801A098C (--$_InsertAt@$$QEAV-$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@-$CTSimpleArray@V-$ComPtr@UIAppLay.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x180397CBC (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??8Geometry@@YA_NAEBUCRect@0@0@Z @ 0x1803CD4B8 (--8Geometry@@YA_NAEBUCRect@0@0@Z.c)
 *     ?ComputeGutterWidth@ImmersiveApplicationLayout@@YAHPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x18074608C (-ComputeGutterWidth@ImmersiveApplicationLayout@@YAHPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z.c)
 *     ?s_CreateInstance_Gutter@CAppLayoutItem@@SAJPEAUtagRECT@@0AEBU_GUID@@PEAPEAX@Z @ 0x18079838C (-s_CreateInstance_Gutter@CAppLayoutItem@@SAJPEAUtagRECT@@0AEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall CAppLayout::_CommitGutters(
        CAppLayout *this,
        const struct LAYOUT_ENVIRONMENT_DETAILS *a2,
        enum DEVICE_SCALE_FACTOR a3)
{
  LONG v3; // esi
  LONG v5; // edi
  ImmersiveApplicationLayout *v6; // rcx
  LONG v7; // r12d
  LONG v8; // ebx
  int v9; // r15d
  char v10; // r13
  __int64 v11; // rax
  int v12; // ebx
  __int64 *v13; // rbx
  const struct _GUID *v14; // r8
  __int128 v16; // [rsp+28h] [rbp-49h] BYREF
  struct tagRECT v17; // [rsp+38h] [rbp-39h] BYREF
  struct tagRECT v18; // [rsp+48h] [rbp-29h] BYREF
  __int128 v19; // [rsp+58h] [rbp-19h] BYREF
  LONG v20[4]; // [rsp+68h] [rbp-9h] BYREF
  __int128 v21; // [rsp+78h] [rbp+7h] BYREF
  _BYTE v22[8]; // [rsp+88h] [rbp+17h] BYREF
  LONG v23; // [rsp+90h] [rbp+1Fh]

  v3 = *((_DWORD *)this + 17);
  v5 = *((_DWORD *)this + 18);
  v6 = (CAppLayout *)((char *)this + 64);
  *(_QWORD *)((char *)&v19 + 4) = __PAIR64__(v5, v3);
  v8 = *((_DWORD *)v6 + 3);
  LODWORD(v19) = *(_DWORD *)v6;
  v7 = v19;
  HIDWORD(v19) = v8;
  v9 = ImmersiveApplicationLayout::ComputeGutterWidth(v6, a2, a3);
  v10 = 0;
  `vector constructor iterator'((char *)&v17, 16LL, 2LL, (void (__fastcall *)(char *))Geometry::CRect::CRect);
  v11 = *((_QWORD *)this + 14);
  v17.right = v5;
  v17.left = v7;
  v17.top = v3;
  v17.bottom = v8;
  v18 = (struct tagRECT)v19;
  if ( v11 != 1 )
  {
    if ( v11 != 2 )
      return (unsigned int)-2147418113;
    (*(void (__fastcall **)(_QWORD, _QWORD, __int128 *))(***((_QWORD ***)this + 13) + 56LL))(
      **((_QWORD **)this + 13),
      0LL,
      &v21);
    (*(void (__fastcall **)(_QWORD, __int64, _BYTE *))(***((_QWORD ***)this + 13) + 56LL))(
      **((_QWORD **)this + 13),
      1LL,
      v22);
    (*(void (__fastcall **)(_QWORD, _QWORD, __int128 *))(**(_QWORD **)(*((_QWORD *)this + 13) + 8LL) + 56LL))(
      *(_QWORD *)(*((_QWORD *)this + 13) + 8LL),
      0LL,
      &v19);
    (*(void (__fastcall **)(_QWORD, __int64, LONG *))(**(_QWORD **)(*((_QWORD *)this + 13) + 8LL) + 56LL))(
      *(_QWORD *)(*((_QWORD *)this + 13) + 8LL),
      1LL,
      v20);
    v17.right = v20[0];
    v17.left = v23;
    v18.left = v23 + ((unsigned int)(v20[0] - v23 - v9) >> 1);
    v18.right = v9 + v18.left;
    goto LABEL_11;
  }
  (*(void (__fastcall **)(_QWORD, _QWORD, __int128 *))(***((_QWORD ***)this + 13) + 56LL))(
    **((_QWORD **)this + 13),
    0LL,
    &v16);
  v21 = v16;
  if ( !Geometry::operator==(&v21, &v19) )
  {
    v10 = 1;
    (*(void (__fastcall **)(_QWORD, _QWORD, __int128 *))(***((_QWORD ***)this + 13) + 56LL))(
      **((_QWORD **)this + 13),
      0LL,
      &v19);
    if ( (_DWORD)v19 == v7 )
    {
      v17.left = DWORD2(v19);
      v17.right = v9 + DWORD2(v19);
    }
    else
    {
      v17.right = v19;
      v17.left = v19 - v9;
    }
    v18 = v17;
  }
  v12 = 0;
  if ( v10 )
  {
LABEL_11:
    *(_QWORD *)&v19 = 0LL;
    v13 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v19, &v16);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v13);
    v12 = CAppLayoutItem::s_CreateInstance_Gutter(&v17, &v18, v14, (void **)v13);
    if ( v12 >= 0 )
    {
      *(_QWORD *)&v16 = v19;
      Microsoft::WRL::ComPtr<IGlobalInterfaceTable>::InternalAddRef((__int64 *)&v16);
      v12 = CTSimpleArray<Microsoft::WRL::ComPtr<IAppLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IAppLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IAppLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IAppLayoutItem>>>::_InsertAt<Microsoft::WRL::ComPtr<IAppLayoutItem> &&>(
              (_QWORD *)this + 13,
              &v16,
              1uLL);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v16);
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v19);
  }
  return (unsigned int)v12;
}
