/*
 * XREFs of ?StartGuidedSnapAssist@CSnapAssistControllerBase@@UEAAJIPEAURect@Foundation@Windows@@@Z @ 0x18059D2F0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180087484 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x180091D44 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x18012166C (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?_Tidy@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ @ 0x18022B92C (-_Tidy@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ.c)
 *     ??$SetGuidedSnapAssistRegions@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UCRect@Geometry@@@std@@@std@@@std@@@CSnapAssistControllerBase@@IEAAXV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UCRect@Geometry@@@std@@@std@@@std@@0@Z @ 0x18059A7B4 (--$SetGuidedSnapAssistRegions@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@UCRect@Geometr.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSnapAssistControllerBase::StartGuidedSnapAssist(
        RTL_SRWLOCK *this,
        unsigned int a2,
        struct Windows::Foundation::Rect *a3)
{
  unsigned __int64 v4; // rdi
  _DWORD *v6; // rcx
  unsigned __int64 v7; // rbx
  size_t size_of; // rax
  char *Ptr; // rdx
  unsigned __int64 v10; // rax
  char *v11; // r8
  float *v12; // r11
  int v13; // r10d
  float v14; // xmm1_4
  int v15; // ecx
  int v17; // [rsp+30h] [rbp-50h] BYREF
  __int128 v18; // [rsp+38h] [rbp-48h]
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+48h] [rbp-38h] BYREF
  char *v20; // [rsp+58h] [rbp-28h]
  int *v21; // [rsp+68h] [rbp-18h]
  int v22; // [rsp+70h] [rbp-10h]
  int v23; // [rsp+74h] [rbp-Ch]

  v4 = a2;
  v6 = (_DWORD *)wil::details::static_lazy<WindowManagementLogging>::get(
                   (__int64)this,
                   _lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_)[1];
  if ( *v6 > 5u )
  {
    v17 = v4;
    v21 = &v17;
    v22 = 4;
    v23 = 0;
    tlgWriteTransfer_EventWriteTransfer((__int64)v6, (unsigned __int8 *)dword_1806CA682, 0LL, 0LL, 3u, &v19);
  }
  v7 = v4;
  v19 = 0LL;
  v20 = 0LL;
  if ( (_DWORD)v4 )
  {
    size_of = std::_Get_size_of_n<16>(v4);
    Ptr = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    v19.Ptr = (ULONGLONG)Ptr;
    v20 = &Ptr[16 * v4];
    v10 = v4;
    v11 = Ptr;
    do
    {
      *(_DWORD *)v11 = 0;
      *((_DWORD *)v11 + 1) = 0;
      *((_DWORD *)v11 + 2) = 0;
      *((_DWORD *)v11 + 3) = 0;
      v11 += 16;
      --v10;
    }
    while ( v10 );
    *(_QWORD *)&v19.Size = v11;
  }
  else
  {
    v11 = *(char **)&v19.Size;
    Ptr = (char *)v19.Ptr;
  }
  if ( (_DWORD)v4 )
  {
    v12 = (float *)((char *)a3 + 4);
    do
    {
      v13 = (int)(float)(*v12 + v12[2]);
      v14 = *(v12 - 1) + v12[1];
      v15 = (int)*v12;
      LODWORD(v18) = (int)*(v12 - 1);
      DWORD1(v18) = v15;
      DWORD2(v18) = (int)v14;
      HIDWORD(v18) = v13;
      *(_OWORD *)((char *)v12 + Ptr - (char *)a3 - 4) = v18;
      v12 += 4;
      --v7;
    }
    while ( v7 );
  }
  CSnapAssistControllerBase::SetGuidedSnapAssistRegions<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Geometry::CRect>>>>(
    this - 5,
    Ptr,
    v11);
  LODWORD(this[29].Ptr) = 0;
  std::vector<Geometry::CRect>::_Tidy((__int64)&v19);
  return 0LL;
}
