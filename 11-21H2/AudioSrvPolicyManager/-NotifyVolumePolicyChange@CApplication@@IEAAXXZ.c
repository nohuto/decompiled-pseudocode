/*
 * XREFs of ?NotifyVolumePolicyChange@CApplication@@IEAAXXZ @ 0x180019068
 * Callers:
 *     ?RecalculateVolume@CApplication@@IEAAJW4AudioVolumeChangeType@@@Z @ 0x1800197A0 (-RecalculateVolume@CApplication@@IEAAJW4AudioVolumeChangeType@@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180008290 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Emplace_reallocate@AEBQEAUIAudioAppVolumePolicyChange@@@?$vector@PEAUIAudioAppVolumePolicyChange@@V?$allocator@PEAUIAudioAppVolumePolicyChange@@@std@@@std@@QEAAPEAPEAUIAudioAppVolumePolicyChange@@QEAPEAU2@AEBQEAU2@@Z @ 0x180014080 (--$_Emplace_reallocate@AEBQEAUIAudioAppVolumePolicyChange@@@-$vector@PEAUIAudioAppVolumePolicyCh.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CApplication::NotifyVolumePolicyChange(CApplication *this)
{
  _BYTE *v2; // rdi
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  const char *v4; // r9
  _QWORD *v5; // r14
  _BYTE *v6; // rsi
  _QWORD *v7; // r8
  _QWORD *v8; // r8
  char *v9; // rbx
  _QWORD *i; // r14
  __int128 v11; // [rsp+20h] [rbp-38h] BYREF
  _BYTE *v12; // [rsp+30h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v11 = 0LL;
  v2 = 0LL;
  v12 = 0LL;
  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v5 = (_QWORD *)*((_QWORD *)this + 15);
  try
  {
LABEL_2:
    v6 = (_BYTE *)*((_QWORD *)&v11 + 1);
    while ( v5 )
    {
      v7 = v5;
      v5 = (_QWORD *)*v5;
      v8 = v7 + 2;
      if ( v6 == v2 )
      {
        std::vector<IAudioAppVolumePolicyChange *>::_Emplace_reallocate<IAudioAppVolumePolicyChange * const &>(
          (__int64)&v11,
          v6,
          v8);
        v2 = v12;
        goto LABEL_2;
      }
      *(_QWORD *)v6 = *v8;
      v6 += 8;
      *((_QWORD *)&v11 + 1) = v6;
    }
    if ( v3 )
      LeaveCriticalSection(v3);
    v9 = (char *)v11;
    for ( i = (_QWORD *)v11; i != (_QWORD *)v6; ++i )
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*i + 24LL))(
        *i,
        *((unsigned int *)this + 4),
        *((_QWORD *)this + 3));
    if ( v9 )
      std::_Deallocate<16,0>(v9, 8 * ((v2 - v9) >> 3));
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x96B,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
      v4);
  }
}
