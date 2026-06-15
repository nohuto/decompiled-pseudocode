/*
 * XREFs of ?InitializeAPOs@CVolumeStrip@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x180049BB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1800E3F20 (WPP_SF_q.c)
 */

__int64 __fastcall CVolumeStrip::InitializeAPOs(
        CVolumeStrip *this,
        __int64 a2,
        unsigned int a3,
        struct IAudioProcessingObject **a4)
{
  __int64 v8; // rcx
  int v9; // edi
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // ebx
  __int64 v14; // rdx
  __int64 v15; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( !a4 && a3 )
  {
    v12 = -2147467261;
    v14 = 607LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumestrip.cpp",
      (const char *)(unsigned int)v12);
    return (unsigned int)v12;
  }
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 18LL, &WPP_3a53c1b98d243e7fdf5f1bbdfd5ff184_Traceguids, this);
  }
  v8 = *((_QWORD *)this + 21);
  if ( v8
    && (v9 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, struct IAudioProcessingObject **))(*(_QWORD *)v8 + 72LL))(
               v8,
               a2,
               a3,
               a4),
        v9 < 0) )
  {
    v15 = 617LL;
  }
  else
  {
    v10 = *((_QWORD *)this + 23);
    if ( !v10
      || (v9 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, struct IAudioProcessingObject **))(*(_QWORD *)v10 + 64LL))(
                 v10,
                 a2,
                 a3,
                 a4),
          v9 >= 0) )
    {
      v11 = *((_QWORD *)this + 22);
      if ( !v11 )
        return 0LL;
      v12 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, struct IAudioProcessingObject **))(*(_QWORD *)v11 + 64LL))(
              v11,
              a2,
              a3,
              a4);
      if ( v12 >= 0 )
        return 0LL;
      v14 = 626LL;
      goto LABEL_14;
    }
    v15 = 621LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v15,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumestrip.cpp",
    (const char *)(unsigned int)v9);
  return (unsigned int)v9;
}
