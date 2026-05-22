/*
 * XREFs of ?CheckCapability@ShellGesturesClientProxy@@AEAAJXZ @ 0x18014F354
 * Callers:
 *     ?OnConnected@ShellGesturesClientProxy@@MEAAJXZ @ 0x18014F880 (-OnConnected@ShellGesturesClientProxy@@MEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800B4708 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?ImpersonateCaller@BaseBamoConnection@Bamo@Microsoft@@QEAA?AVImpersonationReverter@123@XZ @ 0x18012E5C8 (-ImpersonateCaller@BaseBamoConnection@Bamo@Microsoft@@QEAA-AVImpersonationReverter@123@XZ.c)
 */

__int64 __fastcall ShellGesturesClientProxy::CheckCapability(ShellGesturesClientProxy *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  unsigned int v4; // edi
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v8; // [rsp+30h] [rbp+8h] BYREF
  char *v9; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL);
  if ( *(int *)(v2 + 8) <= 0 )
    v3 = 0LL;
  else
    v3 = *(_QWORD *)(v2 + 16);
  Microsoft::Bamo::BaseBamoConnection::ImpersonateCaller(v3, &v9);
  if ( (int)v9 >= 0 )
  {
    v8 = 0;
    v5 = CapabilityCheck(-6LL, L"shellExperienceComposer", &v8);
    if ( v5 >= 0 )
    {
      if ( v8 )
      {
        *((_BYTE *)this + 152) = 1;
        v4 = 0;
      }
      else
      {
        v4 = -2147024891;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x42,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\shellgestures\\processor\\she"
               "llgesturesclientproxy.cpp",
          (const char *)0x80070005LL);
      }
    }
    else
    {
      v4 = wil::details::in1diag3::Return_NtStatus(
             retaddr,
             (void *)0x40,
             (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\shellgestures\\processor\\"
                  "shellgesturesclientproxy.cpp",
             (const char *)(unsigned int)v5);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3A,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\shellgestures\\processor\\shellge"
           "sturesclientproxy.cpp",
      (const char *)(unsigned int)v9);
    v4 = (unsigned int)v9;
  }
  if ( !(_DWORD)v9 )
    RevertToSelf();
  return v4;
}
