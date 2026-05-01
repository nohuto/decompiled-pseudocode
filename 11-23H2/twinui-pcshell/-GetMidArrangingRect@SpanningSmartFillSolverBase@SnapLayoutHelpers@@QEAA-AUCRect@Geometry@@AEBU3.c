/*
 * XREFs of ?GetMidArrangingRect@SpanningSmartFillSolverBase@SnapLayoutHelpers@@QEAA?AUCRect@Geometry@@AEBU34@IHKAEBV?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@@Z @ 0x1806719B0
 * Callers:
 *     ?GetRectForColumn@SnapLayoutHelpers@@YA?AUCRect@Geometry@@W4SpanningLayoutRegion@1@AEBU23@IHKAEBV?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@@Z @ 0x180672948 (-GetRectForColumn@SnapLayoutHelpers@@YA-AUCRect@Geometry@@W4SpanningLayoutRegion@1@AEBU23@IHKAEB.c)
 *     ?GetRectForRow@SnapLayoutHelpers@@YA?AUCRect@Geometry@@W4SpanningLayoutRegion@1@AEBU23@IHKAEBV?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@@Z @ 0x180673064 (-GetRectForRow@SnapLayoutHelpers@@YA-AUCRect@Geometry@@W4SpanningLayoutRegion@1@AEBU23@IHKAEBV-$.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

_DWORD *__fastcall SnapLayoutHelpers::SpanningSmartFillSolverBase::GetMidArrangingRect(
        __int64 a1,
        _DWORD *a2,
        __int64 a3,
        int a4,
        signed int a5,
        __int64 a6,
        __int64 a7)
{
  unsigned int v10; // esi
  _QWORD *v11; // rdi
  __int64 v12; // r12
  int v13; // eax
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rbx
  _DWORD *v17; // rax
  int v18; // ecx
  _DWORD *result; // rax
  __int64 v20; // [rsp+40h] [rbp-51h]
  __int64 v21; // [rsp+48h] [rbp-49h]
  int v22; // [rsp+50h] [rbp-41h] BYREF
  int v23; // [rsp+54h] [rbp-3Dh]
  int v24; // [rsp+58h] [rbp-39h] BYREF
  int v25; // [rsp+5Ch] [rbp-35h]
  __int64 v26; // [rsp+60h] [rbp-31h]
  __int64 v27; // [rsp+68h] [rbp-29h]
  __int64 v28; // [rsp+70h] [rbp-21h]
  __int64 v29; // [rsp+78h] [rbp-19h]
  int v30; // [rsp+80h] [rbp-11h] BYREF
  _BYTE v31[16]; // [rsp+88h] [rbp-9h] BYREF

  v10 = MulDiv(616, a4, 96);
  (**(void (__fastcall ***)(__int64, int *, __int64))a1)(a1, &v22, a3);
  (*(void (__fastcall **)(__int64, int *, __int64))(*(_QWORD *)a1 + 8LL))(a1, &v30, a3);
  v11 = *(_QWORD **)a7;
  BYTE4(v20) = 0;
  BYTE4(v21) = 0;
  v12 = *(_QWORD *)a7 + 8LL * *(_QWORD *)(a7 + 8);
  if ( *(_QWORD *)a7 != v12 )
  {
    do
    {
      (*(void (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*v11 + 48LL))(*v11, v31);
      (**(void (__fastcall ***)(__int64, int *, _BYTE *))a1)(a1, &v24, v31);
      if ( (int)abs32(v24 - v22) <= a5 && v23 - v25 >= v10 )
      {
        if ( BYTE4(v21) )
        {
          v13 = v21;
          BYTE4(v26) = 1;
          if ( (int)v21 < v25 )
            v13 = v25;
          LODWORD(v26) = v13;
          v14 = v26;
        }
        else
        {
          LODWORD(v27) = v25;
          BYTE4(v27) = 1;
          v14 = v27;
        }
        v21 = v14;
      }
      if ( (int)abs32(v25 - v23) <= a5 && v24 - v22 >= v10 )
      {
        if ( BYTE4(v20) )
        {
          v15 = v20;
          BYTE4(v28) = 1;
          if ( v24 < (int)v20 )
            v15 = v24;
          LODWORD(v28) = v15;
          v16 = v28;
        }
        else
        {
          LODWORD(v29) = v24;
          BYTE4(v29) = 1;
          v16 = v29;
        }
        v20 = v16;
      }
      ++v11;
    }
    while ( v11 != (_QWORD *)v12 );
  }
  v17 = (_DWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a1 + 16LL))(a1, v31);
  *a2 = *v17;
  a2[1] = v17[1];
  a2[2] = v17[2];
  v18 = v17[3];
  result = a2;
  a2[3] = v18;
  return result;
}
