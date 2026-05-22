/*
 * XREFs of ?OnMessage@BamoAsyncResult_string_PrincipalImpl@BamoImpl@@UEAAJPEBXI@Z @ 0x18018EA80
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall BamoImpl::BamoAsyncResult_string_PrincipalImpl::OnMessage(
        BamoImpl::BamoAsyncResult_string_PrincipalImpl *this,
        const void *a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v5; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v5 = (int)this;
  v2 = CoreUICallReceive(
         *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 80LL),
         &IAsyncResult_string_Principal_Receive<BamoImpl::BamoAsyncResult_string_PrincipalImpl>::Type,
         &Microsoft::CoreUI::MessageCall::MPCManagerBamo_g_parameters_gc15dAH_HRGm2aFEmVnIJumkvZI_BamoGroup$3abff530,
         18LL);
  v3 = v2;
  if ( v2 == -2018375668 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB9D,
      (__int64)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCMana"
               "gerBamo.Common.bamo.h",
      (const char *)0x87B2080CLL);
  }
  else if ( v2 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xB9A,
      (int)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCManagerB"
           "amo.Common.bamo.h",
      (const char *)(unsigned int)v2,
      v5);
  }
  return v3;
}
