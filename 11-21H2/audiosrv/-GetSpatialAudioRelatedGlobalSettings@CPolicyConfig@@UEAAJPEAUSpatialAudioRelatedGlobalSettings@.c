/*
 * XREFs of ?GetSpatialAudioRelatedGlobalSettings@CPolicyConfig@@UEAAJPEAUSpatialAudioRelatedGlobalSettings@@@Z @ 0x18005CD90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CPolicyConfig::GetSpatialAudioRelatedGlobalSettings(
        CPolicyConfig *this,
        struct SpatialAudioRelatedGlobalSettings *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0;
  v3 = (*(__int64 (__fastcall **)(char *, int *))(*((_QWORD *)this - 1) + 176LL))((char *)this - 8, &v8);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBDA,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
      (const char *)(unsigned int)v3,
      v6);
    return v4;
  }
  else
  {
    *(_BYTE *)a2 = v8 != 0;
    return 0LL;
  }
}
