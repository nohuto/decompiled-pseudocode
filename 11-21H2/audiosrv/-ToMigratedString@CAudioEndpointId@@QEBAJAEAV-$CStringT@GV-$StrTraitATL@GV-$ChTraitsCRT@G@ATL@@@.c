/*
 * XREFs of ?ToMigratedString@CAudioEndpointId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18001C260
 * Callers:
 *     ?ToPersistedString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@H@Z @ 0x18001DB80 (-ToPersistedString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@.c)
 * Callees:
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18000C0AC (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18001C8C0 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18001CA60 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1800463D0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800C3178 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioEndpointId::ToMigratedString(_QWORD *a1, __int64 *a2)
{
  ATL::CStringData *v4; // rcx
  __int64 v5; // rdi
  int v6; // edi
  int v7; // r13d
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int16 *v10; // r14
  __int16 v11; // cx
  int v12; // eax
  __int16 v13; // r12
  __int64 v14; // r8
  __int64 v15; // r15
  int v16; // ebx
  __int16 i; // ax
  __int64 v19; // [rsp+30h] [rbp-18h] BYREF
  __int64 v20; // [rsp+38h] [rbp-10h]
  char v21; // [rsp+90h] [rbp+48h] BYREF
  LPVOID pv; // [rsp+98h] [rbp+50h] BYREF
  __int64 v23; // [rsp+A0h] [rbp+58h] BYREF
  __int64 v24; // [rsp+A8h] [rbp+60h] BYREF

  v4 = (ATL::CStringData *)(*a2 - 24);
  v5 = *(_QWORD *)v4;
  if ( *((_DWORD *)v4 + 2) )
  {
    if ( *((int *)v4 + 4) >= 0 )
    {
      ATL::CStringData::Release(v4);
      *a2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 24LL))(v5) + 24;
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetLength(a2, 0);
    }
  }
  v6 = 0;
  v24 = 0LL;
  v23 = 0LL;
  v20 = 0LL;
  v19 = 0LL;
  pv = 0LL;
  v7 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, __int64 *))(*(_QWORD *)g_DeviceEnumerator + 40LL))(
         g_DeviceEnumerator,
         *a1,
         &v24);
  if ( v7 >= 0 )
  {
    v8 = v23;
    if ( v23 != v24 )
    {
      v9 = v23;
      if ( v24 )
      {
        (**(void (__fastcall ***)(__int64, GUID *, __int64 *))v24)(
          v24,
          &GUID_1be09788_6894_4089_8586_9a2a6c265ac5,
          &v23);
        v8 = v23;
      }
      if ( v9 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
        v8 = v23;
      }
    }
    v7 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v8 + 24LL))(v8, &v21);
    if ( v7 >= 0 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64))(*(_QWORD *)v24 + 24LL))(
             v24,
             &GUID_2a07407e_6497_4a18_9787_32f79bd0d98f,
             23LL);
      if ( v7 >= 0 )
      {
        v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v20 + 32LL))(v20, 0LL, &v19);
        if ( v7 >= 0 )
        {
          v7 = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v19 + 72LL))(v19, &pv);
          if ( v7 >= 0 )
          {
            v10 = (__int16 *)pv;
            v11 = *(_WORD *)pv;
            if ( !*(_WORD *)pv )
              goto LABEL_22;
            do
            {
              v12 = v6 + 1;
              if ( v11 != 35 )
                v12 = v6;
              v6 = v12;
              if ( v12 == 2 )
              {
                for ( i = *++v10; *v10 != 35; i = *v10 )
                {
                  if ( !i )
                    break;
                  ++v10;
                }
                v6 = 3;
              }
              v13 = _o_towlower();
              v14 = *a2;
              v15 = *(unsigned int *)(*a2 - 16);
              v16 = v15 + 1;
              if ( ((1 - *(_DWORD *)(*a2 - 8)) | (*(_DWORD *)(*a2 - 12) - ((int)v15 + 1))) < 0 )
              {
                ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(a2, (unsigned int)v16);
                v14 = *a2;
              }
              *(_WORD *)(v14 + 2 * v15) = v13;
              if ( v16 < 0 || v16 > *(_DWORD *)(*a2 - 12) )
                ATL::AtlThrowImpl(-2147024809);
              *(_DWORD *)(*a2 - 16) = v16;
              *(_WORD *)(*a2 + 2LL * v16) = 0;
              v11 = *++v10;
            }
            while ( *v10 );
          }
        }
      }
    }
  }
  v10 = (__int16 *)pv;
LABEL_22:
  if ( v10 )
  {
    CoTaskMemFree(v10);
    pv = 0LL;
  }
  if ( v7 < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioEndpointId::ToMigratedString", 0xFAu, v7);
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  if ( v24 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  return (unsigned int)v7;
}
