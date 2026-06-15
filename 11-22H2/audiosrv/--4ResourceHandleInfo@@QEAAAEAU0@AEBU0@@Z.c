/*
 * XREFs of ??4ResourceHandleInfo@@QEAAAEAU0@AEBU0@@Z @ 0x1800FEB54
 * Callers:
 *     ?DoReacquireSaDeviceResource@CConstraintModelResourceManager@@AEAAJKPEAUReacquireResourceHandleInfo@@@Z @ 0x180014D6C (-DoReacquireSaDeviceResource@CConstraintModelResourceManager@@AEAAJKPEAUReacquireResourceHandleI.c)
 *     ?AssignResourceGroup@CConstraintModelResourceManager@@AEAAJPEAUIMMDevice@@PEBG1KPEAU_ResourceInfo@@KKHPEAUResourceHandleInfo@@@Z @ 0x1800FF204 (-AssignResourceGroup@CConstraintModelResourceManager@@AEAAJPEAUIMMDevice@@PEBG1KPEAU_ResourceInf.c)
 *     ?SetAt@?$CAtlList@UResourceHandleInfo@@V?$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@AEBUResourceHandleInfo@@@Z @ 0x1801022F0 (-SetAt@-$CAtlList@UResourceHandleInfo@@V-$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAXP.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ResourceHandleInfo::operator=(__int64 a1, __int64 a2)
{
  _WORD *v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  _WORD *v6; // rcx
  __int64 v7; // r9
  _WORD *v8; // rcx
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // rdi

  *(_QWORD *)a1 = *(_QWORD *)a2;
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
  v3 = (_WORD *)(a1 + 12);
  v4 = a2 - a1;
  v5 = 128LL;
  do
  {
    *v3 = *(_WORD *)((char *)v3 + v4);
    ++v3;
    --v5;
  }
  while ( v5 );
  *(_OWORD *)(a1 + 268) = *(_OWORD *)(a2 + 268);
  *(_DWORD *)(a1 + 284) = *(_DWORD *)(a2 + 284);
  *(_DWORD *)(a1 + 288) = *(_DWORD *)(a2 + 288);
  *(_DWORD *)(a1 + 292) = *(_DWORD *)(a2 + 292);
  v6 = (_WORD *)(a1 + 296);
  v7 = 201LL;
  do
  {
    *v6 = *(_WORD *)((char *)v6 + v4);
    ++v6;
    --v7;
  }
  while ( v7 );
  v8 = (_WORD *)(a1 + 698);
  v9 = 261LL;
  do
  {
    *v8 = *(_WORD *)((char *)v8 + v4);
    ++v8;
    --v9;
  }
  while ( v9 );
  *(_DWORD *)(a1 + 1220) = *(_DWORD *)(a2 + 1220);
  *(_DWORD *)(a1 + 1224) = *(_DWORD *)(a2 + 1224);
  *(_DWORD *)(a1 + 1228) = *(_DWORD *)(a2 + 1228);
  *(_DWORD *)(a1 + 1232) = *(_DWORD *)(a2 + 1232);
  v10 = *(_QWORD *)(a2 + 1240);
  v11 = *(_QWORD *)(a1 + 1240);
  *(_QWORD *)(a1 + 1240) = v10;
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  return a1;
}
