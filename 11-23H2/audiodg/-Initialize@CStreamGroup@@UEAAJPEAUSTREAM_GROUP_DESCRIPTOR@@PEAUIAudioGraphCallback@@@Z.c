/*
 * XREFs of ?Initialize@CStreamGroup@@UEAAJPEAUSTREAM_GROUP_DESCRIPTOR@@PEAUIAudioGraphCallback@@@Z @ 0x140023BE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@PEAUIAudioGraphCallback@@@Z @ 0x1400074C0 (-Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@PEAUIAudioGraphCallback@@@Z.c)
 *     ?SubMixDescriptorFromStreamGroupDescriptor@@YAJPEAUSTREAM_GROUP_DESCRIPTOR@@W4PIPE_TYPE@@PEAUSUBMIX_DESCRIPTOR@@@Z @ 0x140023CD8 (-SubMixDescriptorFromStreamGroupDescriptor@@YAJPEAUSTREAM_GROUP_DESCRIPTOR@@W4PIPE_TYPE@@PEAUSUB.c)
 *     __security_check_cookie @ 0x140027DF0 (__security_check_cookie.c)
 *     memset_0 @ 0x140029234 (memset_0.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CStreamGroup::Initialize(
        CStreamGroup *this,
        struct STREAM_GROUP_DESCRIPTOR *a2,
        struct IAudioGraphCallback *a3)
{
  unsigned int v6; // eax
  _WORD *v7; // rcx
  enum PIPE_TYPE v8; // edx
  int v9; // ebx
  __int64 v11; // rdx
  int v12[44]; // [rsp+20h] [rbp-D8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+0h]

  *((_BYTE *)this + 337) = *((_DWORD *)a2 + 1) != 0;
  if ( *(_DWORD *)a2 > 2u
    || (v6 = *((_DWORD *)a2 + 3)) == 0 && *((_DWORD *)a2 + 20)
    || *(_DWORD *)a2 == 2 && (*((_DWORD *)a2 + 20) || *((_QWORD *)a2 + 2))
    || (v7 = (_WORD *)*((_QWORD *)a2 + 2)) != 0LL && (v6 < 0x12 || v6 < 0x28 && *v7 == 0xFFFE)
    || *((_DWORD *)a2 + 9) < 0x12u
    || **((_WORD **)a2 + 5) == 0xFFFE && *((_DWORD *)a2 + 9) < 0x28u )
  {
    v9 = -2147024809;
    v11 = 58LL;
  }
  else
  {
    memset_0(v12, 0, sizeof(v12));
    v9 = SubMixDescriptorFromStreamGroupDescriptor(a2, v8, (struct SUBMIX_DESCRIPTOR *)v12);
    if ( v9 < 0 )
    {
      v11 = 62LL;
    }
    else
    {
      v9 = CSubmixImpl::Initialize((CStreamGroup *)((char *)this + 24), (struct SUBMIX_DESCRIPTOR *)v12, a3);
      if ( v9 >= 0 )
        return 0LL;
      v11 = 65LL;
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\streamgroup.cpp",
    (const char *)(unsigned int)v9,
    v12[0]);
  return (unsigned int)v9;
}
