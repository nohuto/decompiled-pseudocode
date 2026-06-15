/*
 * XREFs of _lambda_e72ea104e27d0cd9bc9cee0aa5c76822_::operator() @ 0x180073680
 * Callers:
 *     ?CreateSaDevice@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3_J4PEBUtWAVEFORMATEX@@53PEBU4@6PEAPEAUIAudioDeviceGraph@@@Z @ 0x1800154C4 (-CreateSaDevice@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MID.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall lambda_e72ea104e27d0cd9bc9cee0aa5c76822_::operator()(__int64 a1, char a2)
{
  unsigned int *v2; // r10
  unsigned int v3; // r11d
  __int64 *v6; // r8
  unsigned int v7; // ecx
  __int64 v8; // rdx
  __int64 v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *(unsigned int **)a1;
  v3 = 0;
  if ( !**(_DWORD **)a1 )
    return 0LL;
  v6 = *(__int64 **)(a1 + 8);
  while ( 1 )
  {
    v7 = *(_DWORD *)(*v6 + 96);
    if ( v7 > 0x1F )
      break;
    *(_DWORD *)(*v6 + 80) |= 1 << v7;
    *(_DWORD *)(*v6 + 92) |= 1 << *(_DWORD *)(*v6 + 96);
    if ( a2 )
      *(_DWORD *)(*v6 + 88) = *(_DWORD *)(*v6 + 96);
    v8 = v3++;
    v9 = *v6;
    *(_OWORD *)(v9 + 16LL * *(unsigned int *)(*v6 + 96) + 196) = *(_OWORD *)(**(_QWORD **)(a1 + 16) + 16 * v8);
    ++*(_DWORD *)(v9 + 96);
    if ( v3 >= *v2 )
      return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xA5C,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
    (const char *)0x887C0073LL);
  return 2289827955LL;
}
