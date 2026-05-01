/*
 * XREFs of ?PointerUp@CMultitaskingViewElementBase@@UEAA_NW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x180575390
 * Callers:
 *     ?PointerUp@CMultitaskingViewFrameElement@@UEAA_NW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x18057D850 (-PointerUp@CMultitaskingViewFrameElement@@UEAA_NW4PointerButton@@AEBVMultitaskingViewPointerInpu.c)
 *     ?PointerUp@CMultitaskingViewButtonElement@@UEAA_NW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x180582610 (-PointerUp@CMultitaskingViewButtonElement@@UEAA_NW4PointerButton@@AEBVMultitaskingViewPointerInp.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_MapArgumentsToChild@CMultitaskingViewElementBase@@IEAA?AVMultitaskingViewPointerInputArgs@@AEBV2@@Z @ 0x1805761F0 (-_MapArgumentsToChild@CMultitaskingViewElementBase@@IEAA-AVMultitaskingViewPointerInputArgs@@AEB.c)
 *     ?_ResetCapture@CMultitaskingViewElementBase@@IEAAXXZ @ 0x180576758 (-_ResetCapture@CMultitaskingViewElementBase@@IEAAXXZ.c)
 */

char __fastcall CMultitaskingViewElementBase::PointerUp(_DWORD *a1, unsigned int a2, __int64 *a3)
{
  char v6; // bl
  __int64 v7; // rsi
  __int64 (__fastcall *v8)(__int64, _QWORD, __int64); // rbx
  __int64 v9; // rax
  char v10; // al
  __int64 v11; // rax
  _BYTE v13[56]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v14; // [rsp+60h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_DWORD *, __int64 *))(*(_QWORD *)a1 + 200LL))(a1, a3);
  v6 = 0;
  if ( a1[25] == a2 )
  {
    v7 = *((_QWORD *)a1 + 16);
    if ( v7 )
    {
      v8 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v7 + 208LL);
      v9 = CMultitaskingViewElementBase::_MapArgumentsToChild(a1, v13, a3);
      v10 = v8(v7, a2, v9);
    }
    else
    {
      v11 = *(_QWORD *)a1;
      v14 = *a3;
      if ( !(*(unsigned __int8 (__fastcall **)(_DWORD *, __int64 *))(v11 + 112))(a1, &v14) )
      {
LABEL_7:
        CMultitaskingViewElementBase::_ResetCapture((CMultitaskingViewElementBase *)a1);
        return v6;
      }
      v10 = (*(__int64 (__fastcall **)(_DWORD *, _QWORD, __int64 *))(*(_QWORD *)a1 + 552LL))(a1, a2, a3);
    }
    v6 = v10;
    goto LABEL_7;
  }
  return v6;
}
