/*
 * XREFs of ?OnMessage@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@UEAAJPEBXI@Z @ 0x18001F980
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall BamoImpl::ISMBamos_AutoBamos::BamoPeerImpl::OnMessage(
        BamoImpl::ISMBamos_AutoBamos::BamoPeerImpl *this,
        const void *a2)
{
  __int64 result; // rax
  int v3; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = (int)this;
  result = CoreUICallReceive(
             *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 32LL) + 80LL),
             &IBamoPeer_ISMBamos_AutoBamos_Receive<BamoImpl::ISMBamos_AutoBamos::BamoPeerImpl>::Type,
             &Microsoft::CoreUI::MessageCall::ISMBamos_g_parameters_sfSWchWQ2wB0kDqja$1PW4lxWHE_BamoGroup$2bd08a48,
             12LL);
  if ( (int)(result + 0x80000000) >= 0 && (_DWORD)result != -2018375668 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1656,
      (unsigned int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.Common.bamo.h",
      (const char *)(unsigned int)result,
      v3);
  return result;
}
