/*
 * XREFs of ?GetMaxArrangingRect@SpanningSmartFillSolverBase@AdvancedSmartFill@SnapLayoutHelpers@@QEAA?AUCRect@Geometry@@AEBU45@IHKAEBV?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@@Z @ 0x1805A3B88
 * Callers:
 *     ?GetRectForColumn@AdvancedSmartFill@SnapLayoutHelpers@@YA?AUCRect@Geometry@@W4SpanningLayoutRegion@12@AEBU34@IHKAEBV?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@@Z @ 0x1805A4D44 (-GetRectForColumn@AdvancedSmartFill@SnapLayoutHelpers@@YA-AUCRect@Geometry@@W4SpanningLayoutRegi.c)
 *     ?GetRectForRow@AdvancedSmartFill@SnapLayoutHelpers@@YA?AUCRect@Geometry@@W4SpanningLayoutRegion@12@AEBU34@IHKAEBV?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@@Z @ 0x1805A5AF8 (-GetRectForRow@AdvancedSmartFill@SnapLayoutHelpers@@YA-AUCRect@Geometry@@W4SpanningLayoutRegion@.c)
 * Callees:
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

_DWORD *__fastcall SnapLayoutHelpers::AdvancedSmartFill::SpanningSmartFillSolverBase::GetMaxArrangingRect(
        __int64 a1,
        _DWORD *a2,
        __int64 a3,
        int a4,
        signed int a5,
        __int64 a6,
        __int64 a7)
{
  unsigned int v10; // esi
  _QWORD *v11; // r14
  unsigned int v12; // ecx
  int v13; // edi
  __int64 v14; // r13
  unsigned int v15; // ebx
  int v16; // r9d
  int v17; // r8d
  int v18; // eax
  int v19; // ecx
  _DWORD *v20; // rax
  int v21; // ecx
  _DWORD *result; // rax
  unsigned int v23; // [rsp+40h] [rbp-41h] BYREF
  int v24; // [rsp+44h] [rbp-3Dh]
  int v25; // [rsp+48h] [rbp-39h] BYREF
  int v26; // [rsp+4Ch] [rbp-35h]
  int v27; // [rsp+50h] [rbp-31h] BYREF
  _BYTE v28[8]; // [rsp+58h] [rbp-29h] BYREF
  _BYTE v29[16]; // [rsp+60h] [rbp-21h] BYREF

  v10 = MulDiv(616, a4, 96);
  (**(void (__fastcall ***)(__int64, int *, __int64))a1)(a1, (int *)&v23, a3);
  (*(void (__fastcall **)(__int64, int *, __int64))(*(_QWORD *)a1 + 8LL))(a1, &v27, a3);
  v11 = *(_QWORD **)a7;
  v12 = v23;
  v13 = v23;
  v14 = *(_QWORD *)a7 + 8LL * *(_QWORD *)(a7 + 8);
  if ( *(_QWORD *)a7 == v14 )
  {
    v16 = v24;
    goto LABEL_20;
  }
  v15 = v23;
  do
  {
    (*(void (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*v11 + 48LL))(*v11, v29);
    (**(void (__fastcall ***)(__int64, int *, _BYTE *))a1)(a1, &v25, v29);
    (*(void (__fastcall **)(__int64, _BYTE *, _BYTE *))(*(_QWORD *)a1 + 8LL))(a1, v28, v29);
    v12 = v23;
    v16 = v24;
    v17 = v26;
    if ( (int)abs32(v25 - v23) > a5 || v24 - v26 < v10 )
    {
      if ( (int)abs32(v26 - v24) > a5 && v26 - v24 >= v10 )
      {
        if ( v26 < v13 )
          v17 = v13;
        v13 = v17;
      }
    }
    else
    {
      if ( v26 < (int)v15 )
        v17 = v15;
      v15 = v17;
    }
    ++v11;
  }
  while ( v11 != (_QWORD *)v14 );
  if ( v13 != v23 )
  {
    v15 = v13;
    goto LABEL_22;
  }
  if ( v15 == v23 )
  {
LABEL_20:
    v18 = v16 - v12;
    v19 = 3 - (v16 - v12 < 3 * v10);
    goto LABEL_21;
  }
  if ( v24 - v15 > 2 * v10 )
  {
    v18 = v24 - v15;
    v19 = 2;
LABEL_21:
    v15 = v16 - v18 / v19;
  }
LABEL_22:
  v20 = (_DWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *, _QWORD))(*(_QWORD *)a1 + 16LL))(a1, v29, v15);
  *a2 = *v20;
  a2[1] = v20[1];
  a2[2] = v20[2];
  v21 = v20[3];
  result = a2;
  a2[3] = v21;
  return result;
}
