/*
 * XREFs of ?_AddOperationItem@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@PEAUIAppLayoutItem@@1@Z @ 0x180613CC0
 * Callers:
 *     ?_GenerateOperationItemList@CAppLayoutOperation@@IEAAJXZ @ 0x1806151A8 (-_GenerateOperationItemList@CAppLayoutOperation@@IEAAJXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x18003FC5C (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180178FD0 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x18031A2A4 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     ?_GetAnimationData@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@PEAW4APP_LAYOUT_ANIMATION_TYPE@@@Z @ 0x18061551C (-_GetAnimationData@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@PEAW4APP_LAYOUT_ANIMATION_TYP.c)
 *     ?s_CreateInstance@CAppLayoutOperationItem@@SAJPEAUIApplicationView@@PEAUAPPLICATION_VIEW_DATA@@1PEBUtagRECT@@222HHW4APP_LAYOUT_ANIMATION_TYPE@@AEBU_GUID@@PEAPEAX@Z @ 0x18061A4C4 (-s_CreateInstance@CAppLayoutOperationItem@@SAJPEAUIApplicationView@@PEAUAPPLICATION_VIEW_DATA@@1.c)
 */

__int64 __fastcall CAppLayoutOperation::_AddOperationItem(
        CAppLayoutOperation *this,
        struct IApplicationView *a2,
        struct IAppLayoutItem *a3,
        struct IAppLayoutItem *a4)
{
  int v4; // r12d
  int v5; // r15d
  int v10; // esi
  __int64 v11; // rbx
  void *v12; // r8
  __int64 v13; // rdx
  __int64 *v14; // rdx
  __int64 v16; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v17; // [rsp+68h] [rbp-98h] BYREF
  struct tagRECT rcDst; // [rsp+70h] [rbp-90h] BYREF
  struct tagRECT v19; // [rsp+80h] [rbp-80h] BYREF
  __int128 v20; // [rsp+90h] [rbp-70h] BYREF
  __int128 v21; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v22; // [rsp+B0h] [rbp-50h] BYREF
  int v23; // [rsp+C0h] [rbp-40h]
  int v24; // [rsp+C4h] [rbp-3Ch]
  __m128i v25; // [rsp+C8h] [rbp-38h]
  int v26; // [rsp+D8h] [rbp-28h]
  __int128 v27; // [rsp+E0h] [rbp-20h] BYREF
  int v28; // [rsp+F0h] [rbp-10h]
  int v29; // [rsp+F4h] [rbp-Ch]
  __m128i si128; // [rsp+F8h] [rbp-8h]
  int v31; // [rsp+108h] [rbp+8h]
  RECT rcSrc; // [rsp+110h] [rbp+10h] BYREF

  v29 = 0;
  v28 = 0;
  v31 = 0;
  v4 = 0;
  v24 = 0;
  v5 = 0;
  v23 = 0;
  v26 = 0;
  v27 = 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v22 = 0LL;
  v25 = si128;
  v21 = 0LL;
  rcDst = 0LL;
  v20 = 0LL;
  v19 = 0LL;
  if ( a3 )
  {
    v4 = 1;
    (*(void (__fastcall **)(struct IAppLayoutItem *, __int128 *))(*(_QWORD *)a3 + 64LL))(a3, &v27);
    (*(void (__fastcall **)(struct IAppLayoutItem *, _QWORD, __int128 *))(*(_QWORD *)a3 + 56LL))(a3, 0LL, &v21);
    (*(void (__fastcall **)(struct IAppLayoutItem *, __int64, __int128 *))(*(_QWORD *)a3 + 56LL))(a3, 1LL, &v20);
  }
  if ( a4 )
  {
    v5 = 1;
    (*(void (__fastcall **)(struct IAppLayoutItem *, __int128 *))(*(_QWORD *)a4 + 64LL))(a4, &v22);
    (*(void (__fastcall **)(struct IAppLayoutItem *, _QWORD, struct tagRECT *))(*(_QWORD *)a4 + 56LL))(a4, 0LL, &rcDst);
    (*(void (__fastcall **)(struct IAppLayoutItem *, __int64, struct tagRECT *))(*(_QWORD *)a4 + 56LL))(a4, 1LL, &v19);
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, RECT *))(**((_QWORD **)this + 5) + 24LL))(*((_QWORD *)this + 5), &rcSrc);
    CopyRect(&rcDst, &rcSrc);
    CopyRect(&v19, &rcDst);
    DWORD2(v22) = 3;
  }
  LODWORD(v16) = 0;
  CAppLayoutOperation::_GetAnimationData(this, a2, (enum APP_LAYOUT_ANIMATION_TYPE *)&v16);
  v17 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v17);
  v10 = CAppLayoutOperationItem::s_CreateInstance(a2, &v27, &v22, &v21, &v20, &rcDst, &v19, v4, v5, v16);
  if ( v10 >= 0 )
  {
    v11 = v17;
    v16 = v17;
    Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(&v16);
    v13 = *((_QWORD *)this + 16);
    v10 = 0;
    if ( v13 != *((_QWORD *)this + 18)
      || (v10 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                  (__int64)this + 120,
                  v13 + 1,
                  v12),
          v10 >= 0) )
    {
      v14 = (__int64 *)(*((_QWORD *)this + 15) + 8 * (*((_QWORD *)this + 16))++);
      if ( v14 )
      {
        *v14 = 0LL;
        if ( v14 != &v16 )
        {
          v16 = 0LL;
          *v14 = v11;
        }
      }
    }
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v16);
  }
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v17);
  return (unsigned int)v10;
}
