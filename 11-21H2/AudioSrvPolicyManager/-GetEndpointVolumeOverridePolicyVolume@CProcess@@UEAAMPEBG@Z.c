/*
 * XREFs of ?GetEndpointVolumeOverridePolicyVolume@CProcess@@UEAAMPEBG@Z @ 0x1800175A0
 * Callers:
 *     <none>
 * Callees:
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z @ 0x18002DF74 (-TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
float __fastcall CProcess::GetEndpointVolumeOverridePolicyVolume(CProcess *this, const unsigned __int16 *a2)
{
  DWORD v3; // ebx
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  double v5; // xmm0_8
  float v6; // xmm6_4
  struct TSSession *v8; // [rsp+40h] [rbp+8h] BYREF

  v3 = *((_DWORD *)this + 41);
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  if ( (int)TsSessionFromSessionId(v3, 1, &v8) < 0 )
  {
    if ( v4 )
      LeaveCriticalSection(v4);
    return FLOAT_1_0;
  }
  else
  {
    v5 = (*(double (__fastcall **)(_QWORD, const unsigned __int16 *))(**((_QWORD **)v8 + 130) + 24LL))(
           *((_QWORD *)v8 + 130),
           a2);
    v6 = *(float *)&v5;
    if ( v4 )
      LeaveCriticalSection(v4);
  }
  return v6;
}
