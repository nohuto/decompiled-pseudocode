/*
 * XREFs of ?StartGuidedSnapAssist@CSnapAssistControllerBase@@UEAAJIPEAURect@Foundation@Windows@@@Z @ 0x18066C180
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x1801105A4 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?_Tidy@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ @ 0x1802D2954 (-_Tidy@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ.c)
 *     ?_Buy_raw@?$vector@URect@Foundation@Windows@@V?$allocator@URect@Foundation@Windows@@@std@@@std@@AEAAX_K@Z @ 0x18051C344 (-_Buy_raw@-$vector@URect@Foundation@Windows@@V-$allocator@URect@Foundation@Windows@@@std@@@std@@.c)
 *     ??$SetGuidedSnapAssistRegions@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UCRect@Geometry@@@std@@@std@@@std@@@CSnapAssistControllerBase@@IEAAXV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UCRect@Geometry@@@std@@@std@@@std@@0@Z @ 0x180669060 (--$SetGuidedSnapAssistRegions@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@UCRect@Geometr.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSnapAssistControllerBase::StartGuidedSnapAssist(
        CSnapAssistControllerBase *this,
        unsigned int a2,
        struct Windows::Foundation::Rect *a3)
{
  unsigned __int64 v4; // rdi
  _DWORD *v6; // rcx
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rax
  ULONGLONG Ptr; // rdx
  _DWORD *v10; // r8
  float *v11; // rdi
  float v12; // xmm0_4
  int v13; // r10d
  int v14; // ecx
  char *v15; // r9
  int v17; // [rsp+30h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+38h] [rbp-38h] BYREF
  __int64 v19; // [rsp+48h] [rbp-28h]
  int *v20; // [rsp+58h] [rbp-18h]
  int v21; // [rsp+60h] [rbp-10h]
  int v22; // [rsp+64h] [rbp-Ch]

  v4 = a2;
  v6 = (_DWORD *)wil::details::static_lazy<WindowManagementLogging>::get(
                   (__int64)this,
                   (void (__cdecl *)())_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_)[1];
  if ( *v6 > 5u )
  {
    v17 = v4;
    v20 = &v17;
    v21 = 4;
    v22 = 0;
    tlgWriteTransfer_EventWriteTransfer((__int64)v6, (unsigned __int8 *)dword_18087399D, 0LL, 0LL, 3u, &v18);
  }
  v7 = v4;
  v18 = 0LL;
  v19 = 0LL;
  if ( (_DWORD)v4 )
  {
    std::vector<Windows::Foundation::Rect>::_Buy_raw(&v18, v4);
    v8 = v4;
    Ptr = v18.Ptr;
    v10 = (_DWORD *)v18.Ptr;
    do
    {
      *v10 = 0;
      v10[1] = 0;
      v10[2] = 0;
      v10[3] = 0;
      v10 += 4;
      --v8;
    }
    while ( v8 );
    *(_QWORD *)&v18.Size = v10;
  }
  else
  {
    v10 = *(_DWORD **)&v18.Size;
    Ptr = v18.Ptr;
  }
  if ( (_DWORD)v4 )
  {
    v11 = (float *)((char *)a3 + 4);
    do
    {
      v12 = *v11 + v11[2];
      v13 = (int)(float)(*(v11 - 1) + v11[1]);
      v14 = (int)*v11;
      v15 = (char *)v11 - 4LL - (_QWORD)a3;
      *(_DWORD *)&v15[Ptr] = (int)*(v11 - 1);
      *(_DWORD *)&v15[Ptr + 4] = v14;
      *(_DWORD *)&v15[Ptr + 8] = v13;
      *(_DWORD *)&v15[Ptr + 12] = (int)v12;
      v11 += 4;
      --v7;
    }
    while ( v7 );
  }
  CSnapAssistControllerBase::SetGuidedSnapAssistRegions<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Geometry::CRect>>>>(
    (__int64)this - 40,
    Ptr,
    (__int64)v10);
  *((_DWORD *)this + 60) = 0;
  std::vector<Geometry::CRect>::_Tidy((__int64)&v18);
  return 0LL;
}
