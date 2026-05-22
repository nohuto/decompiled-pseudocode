/*
 * XREFs of ?EnsureInitialized@CommentHasher@Composition@UI@Windows@@AEAAXXZ @ 0x1800221F4
 * Callers:
 *     ?HashData@CommentHasher@Composition@UI@Windows@@AEAA?AU_GUID@@PEBE_K@Z @ 0x180024414 (-HashData@CommentHasher@Composition@UI@Windows@@AEAA-AU_GUID@@PEBE_K@Z.c)
 * Callees:
 *     ?HRESULTFromNTSTATUS@CDevice@DirectComposition@@SAJJ@Z @ 0x1800244CC (-HRESULTFromNTSTATUS@CDevice@DirectComposition@@SAJJ@Z.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@EV?$allocator@E@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1800862B4 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@EV-$allocator@E@std@@@std@@AEAAX_KAEBU_Val.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F6E34 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall Windows::UI::Composition::CommentHasher::EnsureInitialized(
        Windows::UI::Composition::CommentHasher *this)
{
  NTSTATUS v2; // eax
  int v3; // eax
  void *v4; // rcx
  NTSTATUS Property; // eax
  int v6; // eax
  __int64 v7; // rbp
  __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  NTSTATUS Hash; // eax
  int v11; // eax
  size_t v12; // rax
  size_t v13; // rbx
  int pcbResult; // [rsp+20h] [rbp-38h]
  int pcbResulta; // [rsp+20h] [rbp-38h]
  int pcbResultb; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  ULONG pbOutput; // [rsp+60h] [rbp+8h] BYREF
  ULONG v19; // [rsp+68h] [rbp+10h] BYREF

  if ( !*((_BYTE *)this + 40) )
  {
    *((_BYTE *)this + 40) = 1;
    v2 = BCryptOpenAlgorithmProvider((BCRYPT_ALG_HANDLE *)this, L"SHA256", 0LL, 0x20u);
    v3 = DirectComposition::CDevice::HRESULTFromNTSTATUS(v2);
    if ( v3 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x35,
        (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\commenthasher.cpp",
        (const char *)(unsigned int)v3,
        pcbResult);
    v4 = *(void **)this;
    pbOutput = 0;
    v19 = 0;
    Property = BCryptGetProperty(v4, L"ObjectLength", (PUCHAR)&pbOutput, 4u, &v19, 0);
    v6 = DirectComposition::CDevice::HRESULTFromNTSTATUS(Property);
    if ( v6 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x40,
        (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\commenthasher.cpp",
        (const char *)(unsigned int)v6,
        pcbResulta);
    v7 = *((_QWORD *)this + 3);
    v8 = *((_QWORD *)this + 2);
    v9 = v7 - v8;
    if ( pbOutput < (unsigned __int64)(v7 - v8) )
    {
      v12 = v8 + pbOutput;
    }
    else
    {
      if ( pbOutput <= v9 )
        goto LABEL_9;
      if ( pbOutput > (unsigned __int64)(*((_QWORD *)this + 4) - v8) )
      {
        std::vector<unsigned char>::_Resize_reallocate<std::_Value_init_tag>((char *)this + 16);
        goto LABEL_9;
      }
      v13 = pbOutput - v9;
      memset_0(*((void **)this + 3), 0, v13);
      v12 = v13 + v7;
    }
    *((_QWORD *)this + 3) = v12;
LABEL_9:
    Hash = BCryptCreateHash(
             *(BCRYPT_ALG_HANDLE *)this,
             (BCRYPT_HASH_HANDLE *)this + 1,
             *((PUCHAR *)this + 2),
             pbOutput,
             0LL,
             0,
             0);
    v11 = DirectComposition::CDevice::HRESULTFromNTSTATUS(Hash);
    if ( v11 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x4D,
        (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\commenthasher.cpp",
        (const char *)(unsigned int)v11,
        pcbResultb);
  }
}
