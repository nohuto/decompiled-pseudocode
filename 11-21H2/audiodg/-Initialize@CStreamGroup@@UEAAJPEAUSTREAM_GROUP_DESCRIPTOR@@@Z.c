/*
 * XREFs of ?Initialize@CStreamGroup@@UEAAJPEAUSTREAM_GROUP_DESCRIPTOR@@@Z @ 0x140006B60
 * Callers:
 *     <none>
 * Callees:
 *     ?SubMixDescriptorFromStreamGroupDescriptor@@YAJPEAUSTREAM_GROUP_DESCRIPTOR@@W4PIPE_TYPE@@PEAUSUBMIX_DESCRIPTOR@@@Z @ 0x140006A8C (-SubMixDescriptorFromStreamGroupDescriptor@@YAJPEAUSTREAM_GROUP_DESCRIPTOR@@W4PIPE_TYPE@@PEAUSUB.c)
 *     ?Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@@Z @ 0x1400089B0 (-Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x14002F570 (__security_check_cookie.c)
 *     memset_0 @ 0x1400309B4 (memset_0.c)
 */

__int64 __fastcall CStreamGroup::Initialize(CStreamGroup *this, struct STREAM_GROUP_DESCRIPTOR *a2)
{
  unsigned int v4; // eax
  _WORD *v5; // rcx
  enum PIPE_TYPE v6; // edx
  int v7; // ebx
  __int64 v9; // rdx
  int v10[44]; // [rsp+20h] [rbp-C8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+0h]

  *((_BYTE *)this + 337) = *((_DWORD *)a2 + 1) != 0;
  if ( *(_DWORD *)a2 > 2u
    || (v4 = *((_DWORD *)a2 + 3)) == 0 && *((_DWORD *)a2 + 19)
    || *(_DWORD *)a2 == 2 && (*((_DWORD *)a2 + 19) || *((_QWORD *)a2 + 2))
    || (v5 = (_WORD *)*((_QWORD *)a2 + 2)) != 0LL && (v4 < 0x12 || v4 < 0x28 && *v5 == 0xFFFE)
    || *((_DWORD *)a2 + 9) < 0x12u
    || **((_WORD **)a2 + 5) == 0xFFFE && *((_DWORD *)a2 + 9) < 0x28u )
  {
    v7 = -2147024809;
    v9 = 57LL;
  }
  else
  {
    memset_0(v10, 0, sizeof(v10));
    v7 = SubMixDescriptorFromStreamGroupDescriptor(a2, v6, (struct SUBMIX_DESCRIPTOR *)v10);
    if ( v7 < 0 )
    {
      v9 = 61LL;
    }
    else
    {
      v7 = CSubmixImpl::Initialize((CStreamGroup *)((char *)this + 24), (struct SUBMIX_DESCRIPTOR *)v10);
      if ( v7 >= 0 )
        return 0LL;
      v9 = 64LL;
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\streamgroup.cpp",
    (const char *)(unsigned int)v7,
    v10[0]);
  return (unsigned int)v7;
}
