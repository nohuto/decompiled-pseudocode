/*
 * XREFs of ?ToMigratedString@CAudioEndpointId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18001D200
 * Callers:
 *     ?ToPersistedString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@H@Z @ 0x18001C8FC (-ToPersistedString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x18001D4A8 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     ?Empty@?$CSimpleStringT@G$0A@@ATL@@QEAAXXZ @ 0x18001D510 (-Empty@-$CSimpleStringT@G$0A@@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180024758 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180036700 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800CE814 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall CAudioEndpointId::ToMigratedString(_QWORD *a1, _QWORD *a2)
{
  int v4; // edi
  int v5; // r13d
  struct IUnknown *v6; // rcx
  unsigned __int16 *v7; // r15
  unsigned __int16 v8; // ax
  int v9; // ecx
  unsigned __int16 v10; // dx
  __int16 v11; // r12
  __int64 v12; // r14
  int v13; // ebx
  unsigned __int16 i; // ax
  struct IUnknown *v16; // [rsp+30h] [rbp-20h] BYREF
  __int64 v17; // [rsp+38h] [rbp-18h] BYREF
  __int64 v18; // [rsp+40h] [rbp-10h] BYREF
  char v19; // [rsp+90h] [rbp+40h] BYREF
  LPVOID pv; // [rsp+A0h] [rbp+50h] BYREF
  struct IUnknown *v21; // [rsp+A8h] [rbp+58h] BYREF

  ATL::CSimpleStringT<unsigned short,0>::Empty(a2);
  v4 = 0;
  v16 = 0LL;
  v21 = 0LL;
  v18 = 0LL;
  v17 = 0LL;
  pv = 0LL;
  v5 = ((__int64 (__fastcall *)(struct IMMDeviceEnumerator *, _QWORD, struct IUnknown **))g_DeviceEnumerator->lpVtbl->GetDevice)(
         g_DeviceEnumerator,
         *a1,
         &v16);
  if ( v5 >= 0 )
  {
    v6 = v21;
    if ( v21 != v16 )
    {
      ATL::AtlComQIPtrAssign(&v21, v16, &GUID_1be09788_6894_4089_8586_9a2a6c265ac5);
      v6 = v21;
    }
    v5 = ((__int64 (__fastcall *)(struct IUnknown *, char *))v6->lpVtbl[1].QueryInterface)(v6, &v19);
    if ( v5 >= 0 )
    {
      v5 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64))v16->lpVtbl[1].QueryInterface)(
             v16,
             &GUID_2a07407e_6497_4a18_9787_32f79bd0d98f,
             23LL);
      if ( v5 >= 0 )
      {
        v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v18 + 32LL))(v18, 0LL, &v17);
        if ( v5 >= 0 )
        {
          v5 = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v17 + 72LL))(v17, &pv);
          if ( v5 >= 0 )
          {
            v7 = (unsigned __int16 *)pv;
            v8 = *(_WORD *)pv;
            if ( !*(_WORD *)pv )
              goto LABEL_20;
            do
            {
              v9 = v4;
              v10 = v8;
              if ( v8 == 35 )
                v10 = *v7;
              ++v4;
              if ( v8 != 35 )
                v4 = v9;
              if ( v4 == 2 )
              {
                for ( i = *++v7; *v7 != 35; i = *v7 )
                {
                  if ( !i )
                    break;
                  ++v7;
                }
                v4 = 3;
                v10 = *v7;
              }
              v11 = _o_towlower(v10);
              v12 = *(unsigned int *)(*a2 - 16LL);
              v13 = v12 + 1;
              if ( (int)((*(_DWORD *)(*a2 - 12LL) - (v12 + 1)) | (1 - *(_DWORD *)(*a2 - 8LL))) < 0 )
                ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(a2, (unsigned int)v13);
              *(_WORD *)(*a2 + 2 * v12) = v11;
              if ( v13 < 0 || v13 > *(_DWORD *)(*a2 - 12LL) )
                ATL::AtlThrowImpl(-2147024809);
              *(_DWORD *)(*a2 - 16LL) = v13;
              *(_WORD *)(*a2 + 2LL * v13) = 0;
              v8 = *++v7;
            }
            while ( *v7 );
          }
        }
      }
    }
  }
  v7 = (unsigned __int16 *)pv;
LABEL_20:
  if ( v7 )
  {
    CoTaskMemFree(v7);
    pv = 0LL;
  }
  if ( v5 < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioEndpointId::ToMigratedString", 0xFAu, v5);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v17);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v18);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v21);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v16);
  return (unsigned int)v5;
}
