/*
 * XREFs of ?Initialize@PhoneTopology@@MEAAJPEAUIMMDevice@@@Z @ 0x18004D1E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CreateInstance@TelephonyController@@SAJPEAPEAUITelephonyController@@@Z @ 0x1801603B8 (-CreateInstance@TelephonyController@@SAJPEAPEAUITelephonyController@@@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall PhoneTopology::Initialize(char *pv, struct IMMDevice *a2)
{
  HANDLE EventW; // rax
  struct _TP_WAIT *ThreadpoolWait; // rax
  signed int Instance; // ebx
  __int64 v7; // rax
  signed int LastError; // eax
  int v10; // eax
  __int64 v11; // [rsp+30h] [rbp-40h] BYREF
  __int64 (__fastcall ***v12)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp-38h] BYREF
  __int64 v13; // [rsp+40h] [rbp-30h] BYREF
  __int64 v14; // [rsp+48h] [rbp-28h] BYREF
  __int64 v15; // [rsp+50h] [rbp-20h] BYREF
  GUID v16; // [rsp+58h] [rbp-18h] BYREF

  v14 = 0LL;
  v13 = 0LL;
  v12 = 0LL;
  v11 = 0LL;
  v15 = 0LL;
  v16 = GUID_00000000_0000_0000_0000_000000000000;
  if ( a2 )
  {
    EventW = CreateEventW(0LL, 0, 0, 0LL);
    *((_QWORD *)pv + 5) = EventW;
    if ( (((unsigned __int64)EventW + 1) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      goto LABEL_3;
    LastError = GetLastError();
    Instance = LastError;
    if ( LastError > 0 )
      Instance = (unsigned __int16)LastError | 0x80070000;
    if ( Instance >= 0 )
    {
LABEL_3:
      ThreadpoolWait = CreateThreadpoolWait(PhoneTopology::s_WorkerThreadProc, pv, 0LL);
      *((_QWORD *)pv + 4) = ThreadpoolWait;
      if ( ThreadpoolWait )
      {
        SetThreadpoolWait(ThreadpoolWait, *((HANDLE *)pv + 5), 0LL);
        Instance = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64))a2->lpVtbl->Activate)(
                     a2,
                     &GUID_2a07407e_6497_4a18_9787_32f79bd0d98f,
                     23LL);
        if ( Instance >= 0 )
        {
          Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v14 + 32LL))(v14, 0LL, &v13);
          if ( Instance >= 0 )
          {
            Instance = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v13 + 64LL))(
                         v13,
                         &v12);
            if ( Instance >= 0 )
            {
              Instance = (**v12)(v12, &GUID_ae2de0e4_5bca_4f2d_aa46_5d13f8fdb3a9, &v11);
              if ( Instance >= 0 )
              {
                Instance = (*(__int64 (__fastcall **)(__int64, GUID *))(*(_QWORD *)v11 + 56LL))(v11, &v16);
                if ( Instance >= 0 )
                {
                  Instance = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v11 + 96LL))(v11, &v15);
                  if ( Instance >= 0 )
                  {
                    v7 = *(_QWORD *)&v16.Data1 - *(_QWORD *)&GUID_686d7cc0_d903_4258_b443_3a3d3580741c.Data1;
                    if ( *(_QWORD *)&v16.Data1 == *(_QWORD *)&GUID_686d7cc0_d903_4258_b443_3a3d3580741c.Data1 )
                      v7 = *(_QWORD *)v16.Data4 - *(_QWORD *)GUID_686d7cc0_d903_4258_b443_3a3d3580741c.Data4;
                    if ( v7 )
                    {
                      Instance = -2147467259;
                    }
                    else
                    {
                      Instance = TelephonyController::CreateInstance((struct ITelephonyController **)pv + 3);
                      if ( Instance >= 0 )
                      {
                        v10 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)pv + 3) + 56LL))(
                                *((_QWORD *)pv + 3),
                                pv + 256);
                        Instance = 0;
                        if ( v10 < 0 )
                          Instance = v10;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      else
      {
        Instance = -2147024882;
      }
    }
  }
  else
  {
    Instance = -2147024809;
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v15);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v11);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v12);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v13);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v14);
  return (unsigned int)Instance;
}
