/*
 * XREFs of ?PopulatePointerInputInfo@InjectionRawInputProvider@@AEAAJPEAUDeviceInfo@@AEAV?$vector@UTouchInjectionContact@Input@Internal@UI@Windows@@V?$allocator@UTouchInjectionContact@Input@Internal@UI@Windows@@@std@@@std@@PEAVInputInjectionClientProxy@@PEAUPointerInputInfo@@@Z @ 0x1800F7700
 * Callers:
 *     ?OnInputReport@InjectionRawInputProvider@@QEAAJPEAVInputInjectionClientProxy@@AEAV?$vector@UTouchInjectionContact@Input@Internal@UI@Windows@@V?$allocator@UTouchInjectionContact@Input@Internal@UI@Windows@@@std@@@std@@@Z @ 0x1800F74B8 (-OnInputReport@InjectionRawInputProvider@@QEAAJPEAVInputInjectionClientProxy@@AEAV-$vector@UTouc.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetWorkspaceRelativeCoordinates@InjectionRawInputProvider@@AEAA?AUtagPOINT@@U2@PEAVInputInjectionClientProxy@@@Z @ 0x1800F6FB0 (-GetWorkspaceRelativeCoordinates@InjectionRawInputProvider@@AEAA-AUtagPOINT@@U2@PEAVInputInjecti.c)
 *     ?HitTest@InjectionRawInputProvider@@AEAAJUtagPOINT@@KPEAVInputInjectionClientProxy@@@Z @ 0x1800F70FC (-HitTest@InjectionRawInputProvider@@AEAAJUtagPOINT@@KPEAVInputInjectionClientProxy@@@Z.c)
 */

__int64 __fastcall InjectionRawInputProvider::PopulatePointerInputInfo(
        InjectionRawInputProvider *a1,
        LONG *a2,
        InjectionRawInputProvider **a3,
        struct InputInjectionClientProxy *a4,
        LARGE_INTEGER *a5)
{
  __int64 v8; // rax
  __int64 v9; // rbp
  int v10; // r14d
  __int64 v11; // rcx
  InjectionRawInputProvider *v12; // rcx
  __int32 v13; // esi
  struct tagPOINT v14; // rbx
  int v15; // eax
  unsigned int v16; // r14d
  __int64 v17; // rcx
  int v18; // eax
  LARGE_INTEGER v20; // [rsp+28h] [rbp-60h] BYREF
  struct tagPOINT v21; // [rsp+30h] [rbp-58h] BYREF
  InjectionRawInputProvider *v22; // [rsp+38h] [rbp-50h]
  __int64 v23; // [rsp+40h] [rbp-48h]
  __m128i v24; // [rsp+48h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v22 = a1;
  QueryPerformanceCounter(&v20);
  a5[2] = v20;
  a5->LowPart = a2[1];
  a5->HighPart = *a2;
  a5[1].LowPart = GetTickCount();
  v8 = (*(__int64 (__fastcall **)(_QWORD *))(*((_QWORD *)a4 + 1) + 24LL))((_QWORD *)a4 + 1);
  a5[5].LowPart = v8;
  v9 = 0LL;
  v10 = v8;
  v11 = (a3[1] - *a3) >> 4;
  v23 = v8;
  a5[39].HighPart = v11;
  if ( !(_DWORD)v11 )
    return 0LL;
  while ( 1 )
  {
    v12 = *a3;
    if ( (a3[1] - *a3) >> 4 <= (unsigned __int64)(unsigned int)v9 )
    {
      std::_Xout_of_range("invalid vector subscript");
      __debugbreak();
      JUMPOUT(0x1800F7922LL);
    }
    v24 = *((__m128i *)v12 + (unsigned int)v9);
    v13 = v24.m128i_i32[0];
    InjectionRawInputProvider::GetWorkspaceRelativeCoordinates(
      v12,
      (struct tagPOINT)&v21,
      (struct InputInjectionClientProxy *)__PAIR64__(_mm_cvtsi128_si32(_mm_srli_si128(v24, 8)), v24.m128i_u32[1]),
      (__int64)a4);
    v14 = v21;
    if ( v13 != 65542 && v13 != 131074 )
      goto LABEL_7;
    v15 = InjectionRawInputProvider::HitTest(v22, v21, v10, a4);
    v16 = v15;
    if ( v15 < 0 )
      break;
    v10 = v23;
LABEL_7:
    v17 = 18 * v9;
    a5[v17 + 40].HighPart = v24.m128i_i32[3];
    a5[v17 + 40].LowPart = 2;
    a5[v17 + 44] = (LARGE_INTEGER)v14;
    a5[v17 + 46] = (LARGE_INTEGER)v14;
    a5[v17 + 48].LowPart = a5[1].LowPart;
    a5[v17 + 50] = a5[2];
    v18 = 0x4000;
    if ( !(_DWORD)v9 )
    {
      v18 = 24576;
      if ( (v13 & 4) != 0 )
        v18 = 24592;
    }
    v9 = (unsigned int)(v9 + 1);
    a5[v17 + 41].HighPart = v13 | v18;
    if ( (unsigned int)v9 >= a5[39].HighPart )
      return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xE9,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\injection\\lib\\injectionrawinputprovider.cpp",
    (const char *)(unsigned int)v15);
  return v16;
}
