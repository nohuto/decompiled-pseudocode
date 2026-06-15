/*
 * XREFs of ?InitializeRateConverterInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@@Z @ 0x140016A7C
 * Callers:
 *     ?InitializeAPOInterfaces@CPipeInstance@@AEAAJXZ @ 0x140016320 (-InitializeAPOInterfaces@CPipeInstance@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x14002F570 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x140051934 (WPP_SF_d.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140060EC4 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CPipeInstance::InitializeRateConverterInterface(
        CPipeInstance *this,
        struct CProcessNode *a2,
        struct IAudioProcessingObject *a3)
{
  int v6; // ebx
  __int64 v8; // rax
  int v9; // eax
  __int64 v10; // [rsp+20h] [rbp-60h] BYREF
  __int64 v11; // [rsp+28h] [rbp-58h] BYREF
  __int64 v12; // [rsp+30h] [rbp-50h] BYREF
  _OWORD v13[2]; // [rsp+38h] [rbp-48h] BYREF
  __int128 v14; // [rsp+58h] [rbp-28h]
  __int64 v15; // [rsp+68h] [rbp-18h]
  int v16; // [rsp+70h] [rbp-10h]

  v12 = 0LL;
  memset(v13, 0, sizeof(v13));
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0;
  v10 = 0LL;
  v11 = 0LL;
  if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, __int64 *))a3->lpVtbl->QueryInterface)(
         a3,
         &GUID_788f7be2_9c40_41c0_af05_4393fbf409f9,
         &v12) < 0 )
  {
    v6 = 0;
    goto LABEL_3;
  }
  v8 = *(_QWORD *)a2;
  if ( *((_DWORD *)a2 + 6) )
  {
    v6 = (*(__int64 (__fastcall **)(struct CProcessNode *, __int64 *))(v8 + 16))(a2, &v10);
    if ( v6 >= 0 )
    {
      v9 = (*(__int64 (__fastcall **)(struct CProcessNode *, __int64 *))(*(_QWORD *)a2 + 8LL))(a2, &v11);
      goto LABEL_13;
    }
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(struct CProcessNode *, __int64 *))(v8 + 8))(a2, &v10);
    if ( v6 >= 0 )
    {
      v9 = (*(__int64 (__fastcall **)(struct CProcessNode *, __int64 *))(*(_QWORD *)a2 + 16LL))(a2, &v11);
LABEL_13:
      v6 = v9;
      if ( v9 >= 0 )
      {
        LODWORD(v13[0]) = 60;
        *(GUID *)((char *)v13 + 4) = GUID_27c98999_2895_4829_b080_5a8b65bd3db0;
        *((float *)&v13[1] + 1) = (float)*(int *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 40LL))(v10) + 4);
        *((float *)&v13[1] + 2) = (float)*(int *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 40LL))(v11) + 4);
        if ( (float)((float)(1.0 - *((float *)this + 50))
                   * (float)*(int *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 40LL))(v10) + 4)) < 10.0 )
          HIDWORD(v13[1]) = 1092616192;
        else
          *((float *)&v13[1] + 3) = (float)(1.0 - *((float *)this + 50))
                                  * (float)*(int *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 40LL))(v10) + 4);
        if ( (float)((float)(*((float *)this + 51) + 1.0)
                   * (float)*(int *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 40LL))(v10) + 4)) > 384000.0 )
          LODWORD(v14) = 1220247552;
        else
          *(float *)&v14 = (float)(*((float *)this + 51) + 1.0)
                         * (float)*(int *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 40LL))(v10) + 4);
        *((float *)&v14 + 1) = (float)*(int *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 40LL))(v11) + 4);
        *((float *)&v14 + 2) = (float)*(int *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 40LL))(v11) + 4);
        HIDWORD(v14) = *((_DWORD *)this + 52);
        HIDWORD(v15) = *(unsigned __int16 *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 40LL))(v10) + 2);
        v16 = 0;
        LODWORD(v15) = *((_DWORD *)this + 3) != 0;
        v6 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, __int64, _OWORD *))a3->lpVtbl->Initialize)(
               a3,
               60LL,
               v13);
        if ( v6 >= 0 )
          goto LABEL_3;
      }
    }
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      46LL,
      &WPP_172580f3b5c1328999f73b4a59bce9a9_Traceguids,
      (unsigned int)v6);
  }
  AudDGTraceLoggingErrorHelper("CPipeInstance::InitializeRateConverterInterface", 0xDE2u, v6);
LABEL_3:
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  return (unsigned int)v6;
}
