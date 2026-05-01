/*
 * XREFs of ?IsBetterFillCandidate@SnapLayoutHelpers@@YA_NPEAUISnappedWindow@@W4FillRule@1@W4Edge@1@012@Z @ 0x1805A6CAC
 * Callers:
 *     ?DetermineFillWindow@SnapLayoutHelpers@@YAJW4SnapRegion@@AEBV?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@P6A_NW4Edge@1@@ZP6A_N00PEAW441@@ZAEBUCRect@Geometry@@PEAPEAUISnappedWindow@@PEAW4FillRule@1@4@Z @ 0x1805A2EC0 (-DetermineFillWindow@SnapLayoutHelpers@@YAJW4SnapRegion@@AEBV-$CCoSimpleArray@V-$ComPtr@UISnappe.c)
 * Callees:
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsBetterFillRule@SnapLayoutHelpers@@YA_NW4FillRule@1@0@Z @ 0x1805A6DBC (-IsBetterFillRule@SnapLayoutHelpers@@YA_NW4FillRule@1@0@Z.c)
 */

char __fastcall SnapLayoutHelpers::IsBetterFillCandidate(__int64 a1, unsigned int a2, int a3, __int64 a4, int a5)
{
  char v5; // bl
  int v8; // edi
  int v9; // edi
  int v10; // edi
  bool v11; // zf
  bool v12; // sf
  bool v13; // of
  bool v14; // sf
  bool v15; // of
  int v17; // [rsp+20h] [rbp-38h] BYREF
  int v18; // [rsp+24h] [rbp-34h]
  int v19; // [rsp+28h] [rbp-30h]
  int v20; // [rsp+2Ch] [rbp-2Ch]
  int v21; // [rsp+30h] [rbp-28h] BYREF
  int v22; // [rsp+34h] [rbp-24h]
  int v23; // [rsp+38h] [rbp-20h]
  int v24; // [rsp+3Ch] [rbp-1Ch]

  v5 = 0;
  if ( !a1 )
    return 1;
  if ( a2 != a5 )
    return SnapLayoutHelpers::IsBetterFillRule(a2);
  (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)a1 + 48LL))(a1, &v21);
  (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)a4 + 48LL))(a4, &v17);
  if ( v21 < v23 && v22 < v24 && v17 < v19 && v18 < v20 )
  {
    v8 = a3 - 1;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        v10 = v9 - 1;
        if ( v10 )
        {
          if ( v10 != 1 )
            return v5;
          v13 = __OFSUB__(v24, v20);
          v11 = v24 == v20;
          v12 = v24 - v20 < 0;
        }
        else
        {
          v13 = __OFSUB__(v23, v19);
          v11 = v23 == v19;
          v12 = v23 - v19 < 0;
        }
        return !(v12 ^ v13 | v11);
      }
      v15 = __OFSUB__(v21, v17);
      v14 = v21 - v17 < 0;
    }
    else
    {
      v15 = __OFSUB__(v22, v18);
      v14 = v22 - v18 < 0;
    }
    return v14 ^ v15;
  }
  return v5;
}
