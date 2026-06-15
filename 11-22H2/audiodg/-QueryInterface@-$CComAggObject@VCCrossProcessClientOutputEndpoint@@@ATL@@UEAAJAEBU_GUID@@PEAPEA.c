/*
 * XREFs of ?QueryInterface@?$CComAggObject@VCCrossProcessClientOutputEndpoint@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400928C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ?InlineIsEqualUnknown@ATL@@YAHAEBU_GUID@@@Z @ 0x14004CD10 (-InlineIsEqualUnknown@ATL@@YAHAEBU_GUID@@@Z.c)
 */

__int64 __fastcall ATL::CComAggObject<CCrossProcessClientOutputEndpoint>::QueryInterface(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  unsigned int v3; // edi
  __int64 v7; // rdx
  _QWORD *v8; // r8
  __int64 v9; // r15
  __int64 v10; // rbx
  _QWORD *v11; // rsi
  _DWORD *v12; // rcx
  int v13; // ebp
  int v14; // eax

  v3 = 0;
  if ( !a3 )
    return 2147500035LL;
  *a3 = 0LL;
  if ( ATL::InlineIsEqualUnknown((const struct _GUID *)a2) )
  {
    *v8 = v7;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    return v3;
  }
  v9 = v7 + 24;
  if ( v7 == -24 )
    return (unsigned int)-2147024809;
  if ( !*(_DWORD *)a2 && !*(_DWORD *)(a2 + 4) && *(_DWORD *)(a2 + 8) == 192 && *(_DWORD *)(a2 + 12) == 1174405120 )
  {
    v10 = v7 + 440;
    goto LABEL_11;
  }
  v11 = &unk_1400DC850;
  while ( 1 )
  {
    v12 = (_DWORD *)*(v11 - 2);
    if ( v12 )
    {
      v13 = 0;
      if ( *v12 != *(_DWORD *)a2
        || v12[1] != *(_DWORD *)(a2 + 4)
        || v12[2] != *(_DWORD *)(a2 + 8)
        || v12[3] != *(_DWORD *)(a2 + 12) )
      {
        goto LABEL_23;
      }
    }
    else
    {
      v13 = 1;
    }
    if ( *v11 == 1LL )
      break;
    v14 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD *, _QWORD))*v11)(v9, a2, a3, *(v11 - 1));
    if ( !v14 || !v13 && v14 < 0 )
      return (unsigned int)v14;
LABEL_23:
    v11 += 3;
    if ( !*v11 )
      return (unsigned int)-2147467262;
  }
  v10 = v9 + *(v11 - 1);
LABEL_11:
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  *a3 = v10;
  return v3;
}
