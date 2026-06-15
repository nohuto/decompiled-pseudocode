/*
 * XREFs of ?InitializeMatrixInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@@Z @ 0x1400169B8
 * Callers:
 *     ?InitializeAPOInterfaces@CPipeInstance@@AEAAJXZ @ 0x140016320 (-InitializeAPOInterfaces@CPipeInstance@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x14002F570 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x140051934 (WPP_SF_d.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140060EC4 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CPipeInstance::InitializeMatrixInterface(
        CPipeInstance *this,
        struct CProcessNode *a2,
        struct IAudioProcessingObject *a3)
{
  int v5; // ebx
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rbx
  float v10; // xmm6_4
  __int64 v11; // [rsp+20h] [rbp-50h] BYREF
  __int64 v12; // [rsp+28h] [rbp-48h] BYREF
  __int64 v13; // [rsp+30h] [rbp-40h] BYREF
  _OWORD v14[2]; // [rsp+38h] [rbp-38h] BYREF

  v13 = 0LL;
  memset(v14, 0, sizeof(v14));
  v11 = 0LL;
  v12 = 0LL;
  if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, __int64 *))a3->lpVtbl->QueryInterface)(
         a3,
         &GUID_bb8b2f5d_2af0_473f_bd94_f55a77587d3f,
         &v13) < 0 )
  {
    v5 = 0;
    goto LABEL_3;
  }
  v7 = *(_QWORD *)a2;
  if ( *((_DWORD *)a2 + 6) )
  {
    v5 = (*(__int64 (__fastcall **)(struct CProcessNode *, __int64 *))(v7 + 16))(a2, &v11);
    if ( v5 >= 0 )
    {
      v8 = (*(__int64 (__fastcall **)(struct CProcessNode *, __int64 *))(*(_QWORD *)a2 + 8LL))(a2, &v12);
      goto LABEL_15;
    }
  }
  else
  {
    v5 = (*(__int64 (__fastcall **)(struct CProcessNode *, __int64 *))(v7 + 8))(a2, &v11);
    if ( v5 >= 0 )
    {
      v8 = (*(__int64 (__fastcall **)(struct CProcessNode *, __int64 *))(*(_QWORD *)a2 + 16LL))(a2, &v12);
LABEL_15:
      v5 = v8;
      if ( v8 >= 0 )
      {
        LODWORD(v14[0]) = 32;
        *(GUID *)((char *)v14 + 4) = GUID_541987ee_0e02_411e_9a85_1fc6156e7f4b;
        DWORD1(v14[1]) = *(unsigned __int16 *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 40LL))(v11) + 2);
        DWORD2(v14[1]) = *(unsigned __int16 *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 40LL))(v12) + 2);
        v9 = v11;
        v10 = (float)*(int *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 40LL))(v11) + 8);
        *((float *)&v14[1] + 3) = v10
                                / (float)*(unsigned __int16 *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 40LL))(v9)
                                                             + 12);
        v5 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, __int64, _OWORD *))a3->lpVtbl->Initialize)(
               a3,
               32LL,
               v14);
        if ( v5 >= 0 )
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
      47LL,
      &WPP_172580f3b5c1328999f73b4a59bce9a9_Traceguids,
      (unsigned int)v5);
  }
  AudDGTraceLoggingErrorHelper("CPipeInstance::InitializeMatrixInterface", 0xE32u, v5);
LABEL_3:
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  return (unsigned int)v5;
}
