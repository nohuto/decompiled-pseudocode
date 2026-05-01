/*
 * XREFs of ?IsBetterFillCandidate@AdvancedSmartFill@SnapLayoutHelpers@@YA_NAEBUFillCandidate@12@0PEBW4FillRule@2@I@Z @ 0x1805A6B78
 * Callers:
 *     ?DetermineFillWindow@AdvancedSmartFill@SnapLayoutHelpers@@YAJW4SnapRegionAnchorLocations@12@AEBV?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@P6A_NW4Edge@2@@ZP6A_N00PEAW452@@ZAEBUCRect@Geometry@@HPEAUFillCandidate@12@@Z @ 0x1805A29A8 (-DetermineFillWindow@AdvancedSmartFill@SnapLayoutHelpers@@YAJW4SnapRegionAnchorLocations@12@AEBV.c)
 * Callees:
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall SnapLayoutHelpers::AdvancedSmartFill::IsBetterFillCandidate(
        SnapLayoutHelpers::AdvancedSmartFill *this,
        const struct SnapLayoutHelpers::AdvancedSmartFill::FillCandidate *a2,
        const struct SnapLayoutHelpers::AdvancedSmartFill::FillCandidate *a3,
        const enum SnapLayoutHelpers::FillRule *a4)
{
  char v5; // bl
  __int64 v6; // rcx
  int v8; // edx
  __int64 v9; // r8
  bool v10; // zf
  bool v11; // sf
  bool v12; // of
  bool v13; // sf
  bool v14; // of
  unsigned int v15; // eax
  _DWORD *v16; // rcx
  int v18; // [rsp+20h] [rbp-38h] BYREF
  int v19; // [rsp+24h] [rbp-34h]
  int v20; // [rsp+28h] [rbp-30h]
  int v21; // [rsp+2Ch] [rbp-2Ch]
  int v22; // [rsp+30h] [rbp-28h] BYREF
  int v23; // [rsp+34h] [rbp-24h]
  int v24; // [rsp+38h] [rbp-20h]
  int v25; // [rsp+3Ch] [rbp-1Ch]

  v5 = 0;
  v6 = *(_QWORD *)this;
  if ( !v6 || !*(_QWORD *)a2 )
    return 1;
  v8 = *((_DWORD *)this + 2);
  v9 = *((unsigned int *)a2 + 2);
  if ( v8 != (_DWORD)v9 )
  {
    v15 = 0;
    v16 = &unk_1806EF260;
    while ( v8 != *v16 )
    {
      if ( (_DWORD)v9 != *v16 )
      {
        ++v15;
        ++v16;
        if ( v15 < 5 )
          continue;
      }
      return v5;
    }
    return 1;
  }
  (*(void (__fastcall **)(__int64, int *, __int64, const enum SnapLayoutHelpers::FillRule *))(*(_QWORD *)v6 + 48LL))(
    v6,
    &v22,
    v9,
    a4);
  (*(void (__fastcall **)(_QWORD, int *))(**(_QWORD **)a2 + 48LL))(*(_QWORD *)a2, &v18);
  if ( v22 >= v24 || v23 >= v25 || v18 >= v20 || v19 >= v21 )
    return v5;
  switch ( *((_DWORD *)this + 3) )
  {
    case 1:
      v14 = __OFSUB__(v23, v19);
      v13 = v23 - v19 < 0;
      return v13 ^ v14;
    case 2:
      v14 = __OFSUB__(v22, v18);
      v13 = v22 - v18 < 0;
      return v13 ^ v14;
    case 3:
      v12 = __OFSUB__(v24, v20);
      v10 = v24 == v20;
      v11 = v24 - v20 < 0;
      return !(v11 ^ v12 | v10);
    case 4:
      v12 = __OFSUB__(v25, v21);
      v10 = v25 == v21;
      v11 = v25 - v21 < 0;
      return !(v11 ^ v12 | v10);
  }
  return v5;
}
