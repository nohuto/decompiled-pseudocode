/*
 * XREFs of ?AddComponent@SpectreNode@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180014C10
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000F024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Initialize@SpectreMeshComponent@@IEAAXXZ @ 0x1800143FC (-Initialize@SpectreMeshComponent@@IEAAXXZ.c)
 */

__int64 __fastcall SpectreNode::AddComponent(SpectreNode *this, const struct _GUID *a2, void **a3)
{
  __int64 v4; // rax
  unsigned __int64 v6; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_7052b94f_cd63_4bd1_b7b2_84716b126ddb.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_7052b94f_cd63_4bd1_b7b2_84716b126ddb.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_7052b94f_cd63_4bd1_b7b2_84716b126ddb.Data4;
  if ( v4 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x71,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectrenode.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  else
  {
    v6 = (unsigned __int64)this + 16;
    SpectreMeshComponent::Initialize((SpectreNode *)((char *)this + 16));
    *a3 = (void *)(v6 & -(__int64)(this != 0LL));
    return 0LL;
  }
}
