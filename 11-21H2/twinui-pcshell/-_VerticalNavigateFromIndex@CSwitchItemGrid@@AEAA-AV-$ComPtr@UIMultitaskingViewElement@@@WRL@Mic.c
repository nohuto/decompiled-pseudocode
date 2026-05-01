/*
 * XREFs of ?_VerticalNavigateFromIndex@CSwitchItemGrid@@AEAA?AV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@_KI@Z @ 0x1804BFE7C
 * Callers:
 *     ?v_NavigateFromChildIndex@CSwitchItemGrid@@MEAA?AV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@_KIW4NavigationType@@@Z @ 0x1804C0320 (-v_NavigateFromChildIndex@CSwitchItemGrid@@MEAA-AV-$ComPtr@UIMultitaskingViewElement@@@WRL@Micro.c)
 * Callees:
 *     ??4?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800727D8 (--4-$ComPtr@UISnappedWindow@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall CSwitchItemGrid::_VerticalNavigateFromIndex(__int64 a1, __int64 *a2, __int64 a3, int a4)
{
  __int64 v7; // rcx
  _DWORD *v8; // r8
  int v9; // edi
  int v10; // r15d
  int v11; // ecx
  int v12; // edi
  unsigned __int64 v13; // rcx
  int v14; // rax^4
  int v15; // r14d
  __int64 *v16; // rbx
  __int64 *v17; // rbp
  signed int v18; // eax
  __int128 v20; // [rsp+30h] [rbp-58h] BYREF

  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8 * a3);
  v8 = (_DWORD *)(*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v7 + 88LL))(v7, &v20);
  v9 = (v8[3] - v8[1]) / 2 + v8[1];
  v10 = *v8 + (v8[2] - *v8) / 2;
  v20 = *(_OWORD *)(a1 + 800);
  v11 = *(_DWORD *)(a1 + 776);
  if ( a4 == 1 )
  {
    v12 = v9 - v11;
    v13 = DWORD1(v20);
    if ( v12 < SDWORD1(v20) )
    {
      v14 = HIDWORD(v20);
LABEL_6:
      v12 += v14 - v13;
    }
  }
  else
  {
    v12 = v11 + v9;
    v13 = HIDWORD(*((_QWORD *)&v20 + 1));
    if ( v12 >= SHIDWORD(v20) )
    {
      v14 = DWORD1(v20);
      goto LABEL_6;
    }
  }
  v15 = 0x7FFFFFFF;
  *a2 = 0LL;
  v16 = *(__int64 **)(a1 + 16);
  v17 = &v16[*(_QWORD *)(a1 + 24)];
  while ( v16 != v17 )
  {
    (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)*v16 + 88LL))(*v16, &v20);
    if ( v12 >= SDWORD1(v20) && v12 <= SHIDWORD(v20) )
    {
      v18 = abs32(v20 + (DWORD2(v20) - (int)v20) / 2 - v10);
      if ( v18 < v15 )
      {
        v15 = v18;
        Microsoft::WRL::ComPtr<ISnappedWindow>::operator=(a2, v16);
      }
    }
    ++v16;
  }
  return a2;
}
