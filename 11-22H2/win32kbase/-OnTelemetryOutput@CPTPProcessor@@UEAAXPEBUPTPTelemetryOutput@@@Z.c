/*
 * XREFs of ?OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z @ 0x1C01DFD20
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x1C0053E90 (_tlgKeywordOn.c)
 *     HMValidateHandleNoSecure @ 0x1C00590FC (HMValidateHandleNoSecure.c)
 *     ?HandlePTPTelemetry@Usage@PTPTelemetry@@SAXXZ @ 0x1C00CC8E0 (-HandlePTPTelemetry@Usage@PTPTelemetry@@SAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 *     EtwTraceTouchPadAAP @ 0x1C00DF240 (EtwTraceTouchPadAAP.c)
 *     EtwTracePTPElasticDragModeStart @ 0x1C013ABB0 (EtwTracePTPElasticDragModeStart.c)
 *     EtwTracePTPElasticDragModeStop @ 0x1C013ABE0 (EtwTracePTPElasticDragModeStop.c)
 *     EtwTraceTouchPadCurtainState @ 0x1C013B370 (EtwTraceTouchPadCurtainState.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$01@@U2@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$01@@4AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1C01DDE54 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$01@@U2@U-$_tlgWrapBuffer@U_UNICODE_STRING.c)
 *     ?IncrementTotalTime@Usage@PTPTelemetry@@SAXW4tagPTP_TELEM_TOTALTIME@@_K@Z @ 0x1C01DF400 (-IncrementTotalTime@Usage@PTPTelemetry@@SAXW4tagPTP_TELEM_TOTALTIME@@_K@Z.c)
 *     ?OnEndSession@Usage@PTPTelemetry@@SAX_J@Z @ 0x1C01DF504 (-OnEndSession@Usage@PTPTelemetry@@SAX_J@Z.c)
 *     ?OnNewContact@Usage@PTPTelemetry@@SAX_J@Z @ 0x1C01DFBD8 (-OnNewContact@Usage@PTPTelemetry@@SAX_J@Z.c)
 *     ?OnNewSession@Usage@PTPTelemetry@@SAX_J@Z @ 0x1C01DFC2C (-OnNewSession@Usage@PTPTelemetry@@SAX_J@Z.c)
 *     ?SetLastAction@Usage@PTPTelemetry@@SAXW4tagPTP_ACTION@@@Z @ 0x1C01E071C (-SetLastAction@Usage@PTPTelemetry@@SAXW4tagPTP_ACTION@@@Z.c)
 */

void __fastcall CPTPProcessor::OnTelemetryOutput(
        CPTPProcessor *this,
        const struct PTPTelemetryOutput *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rdx
  int v11; // edx
  int v12; // edx
  __int64 v13; // rdx
  int v14; // edx
  __int16 v15; // bx
  __int16 v16; // di
  unsigned __int16 *v17; // r14
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned int v23; // r14d
  __int64 v24; // rbx
  __int64 v25; // rdi
  unsigned int v26; // esi
  __int64 v27; // rbx
  int v28; // edi
  __int64 v29; // rax
  int v30; // ecx
  int v31; // ecx
  __int64 v32; // rcx
  __int64 v33; // [rsp+50h] [rbp-38h] BYREF
  unsigned __int16 *v34; // [rsp+58h] [rbp-30h] BYREF
  int v35; // [rsp+98h] [rbp+10h] BYREF
  __int16 v36; // [rsp+A0h] [rbp+18h] BYREF
  int v37; // [rsp+A8h] [rbp+20h] BYREF

  v6 = (unsigned int)(*(_DWORD *)a2 - 1);
  if ( (_DWORD)v6 )
  {
    if ( (_DWORD)v6 == 1 )
    {
      v7 = *((unsigned int *)a2 + 1);
      if ( (_DWORD)v7 )
      {
        v8 = (unsigned int)(v7 - 1);
        if ( (_DWORD)v8 )
        {
          v9 = (unsigned int)(v8 - 1);
          if ( (_DWORD)v9 )
          {
            v10 = (unsigned int)(v9 - 1);
            if ( (_DWORD)v10 )
            {
              v11 = v10 - 1;
              if ( v11 )
              {
                v12 = v11 - 1;
                if ( v12 )
                {
                  v13 = (unsigned int)(v12 - 1);
                  if ( (_DWORD)v13 )
                  {
                    v14 = v13 - 1;
                    if ( v14 )
                    {
                      if ( v14 == 4 )
                      {
                        v35 = 0x20000;
                        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 706);
                        v15 = 0;
                        v16 = 0;
                        v17 = 0LL;
                        v18 = HMValidateHandleNoSecure(*((_QWORD *)this + 45), 19);
                        if ( v18 )
                        {
                          if ( *(_QWORD *)(v18 + 472) )
                          {
                            v19 = *(_QWORD *)(v18 + 456);
                            if ( v19 )
                            {
                              v15 = *(_WORD *)(v19 + 110);
                              v17 = (unsigned __int16 *)(v18 + 208);
                              v16 = *(_WORD *)(v19 + 112);
                            }
                          }
                        }
                        if ( (unsigned int)dword_1C02883D8 > 5
                          && tlgKeywordOn((__int64)&dword_1C02883D8, 0x400000000000LL) )
                        {
                          v37 = *((_DWORD *)a2 + 2);
                          v33 = 0x1000000LL;
                          v34 = v17;
                          LOWORD(v35) = v16;
                          v36 = v15;
                          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<8>>(
                            v20,
                            byte_1C025D6DB,
                            v21,
                            v22,
                            (__int64)&v37,
                            (__int64)&v36,
                            (__int64)&v35,
                            &v34,
                            (__int64)&v33);
                        }
                      }
                    }
                    else
                    {
                      v23 = *((_DWORD *)a2 + 7);
                      v24 = *(_QWORD *)((char *)a2 + 20);
                      v25 = *(_QWORD *)((char *)a2 + 12);
                      v26 = *((_DWORD *)a2 + 2);
                      if ( qword_1C0296D20 && (int)qword_1C0296D20() >= 0 && qword_1C0296D28 )
                        qword_1C0296D28(v26, v25, v24, v23);
                    }
                  }
                  else
                  {
                    v27 = *(_QWORD *)((char *)a2 + 12);
                    v28 = *((_DWORD *)a2 + 2);
                    v29 = SGDGetUserSessionState(this, v13, a3, a4);
                    if ( v28 )
                    {
                      if ( v28 == 1 )
                        *(_QWORD *)(v29 + 11960) = v27;
                    }
                    else
                    {
                      *(_QWORD *)(v29 + 11952) = v27;
                    }
                  }
                }
                else
                {
                  PTPTelemetry::Usage::IncrementTotalTime(
                    *((unsigned int *)a2 + 2),
                    *(_QWORD *)((char *)a2 + 12),
                    a3,
                    a4);
                }
              }
              else
              {
                PTPTelemetry::Usage::SetLastAction(*((unsigned int *)a2 + 2));
              }
            }
            else
            {
              PTPTelemetry::Usage::OnNewContact(*((_QWORD *)a2 + 1), v10, a3, a4);
            }
          }
          else
          {
            PTPTelemetry::Usage::HandlePTPTelemetry((__int64)this, v9, a3, a4);
          }
        }
        else
        {
          PTPTelemetry::Usage::OnEndSession(*((_QWORD *)a2 + 1), v8, a3, a4);
        }
      }
      else
      {
        PTPTelemetry::Usage::OnNewSession(*(LARGE_INTEGER *)((char *)a2 + 8), v7, a3, a4);
      }
    }
  }
  else
  {
    v30 = *((_DWORD *)a2 + 1);
    if ( v30 )
    {
      v31 = v30 - 1;
      if ( v31 )
      {
        v32 = (unsigned int)(v31 - 1);
        if ( (_DWORD)v32 )
        {
          if ( (_DWORD)v32 == 1 )
            EtwTracePTPElasticDragModeStop(v32);
        }
        else
        {
          EtwTracePTPElasticDragModeStart(v32);
        }
      }
      else
      {
        EtwTraceTouchPadCurtainState(*((unsigned int *)a2 + 2), v6, a3);
      }
    }
    else
    {
      EtwTraceTouchPadAAP(
        *((_DWORD *)a2 + 2),
        *((_DWORD *)a2 + 3),
        *((_DWORD *)a2 + 4),
        *((_DWORD *)a2 + 5),
        *((_DWORD *)a2 + 6));
    }
  }
}
