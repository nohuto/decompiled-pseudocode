/*
 * XREFs of ?GetStreamSwitchId@CAudioSession@@UEAAJPEAPEAG@Z @ 0x1800D8510
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800084A0 (--3@YAXPEAX@Z.c)
 *     MIDL_user_allocate @ 0x18001AC90 (MIDL_user_allocate.c)
 *     ?Format@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ @ 0x18001C6E0 (-Format@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ.c)
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z @ 0x18001CA18 (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18001CA60 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1800463D0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x180056D74 (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_S @ 0x1800C6210 (WPP_SF_S.c)
 *     ?EscapeIdentifierString@CAudioIdentifier@@SAXAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x1800E63F4 (-EscapeIdentifierString@CAudioIdentifier@@SAXAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@AT.c)
 *     ?ToStreamSwitchString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x1800E7884 (-ToStreamSwitchString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsC.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall CAudioSession::GetStreamSwitchId(const wchar_t **this, unsigned __int16 **a2)
{
  void **v2; // rsi
  int v4; // edi
  unsigned int v5; // eax
  unsigned __int16 *v6; // rbx
  size_t v7; // rdi
  char *v8; // rax
  __int64 v10; // [rsp+30h] [rbp-38h] BYREF
  __int64 v11; // [rsp+38h] [rbp-30h] BYREF
  unsigned __int16 *v12; // [rsp+40h] [rbp-28h] BYREF
  ATL::CAtlException *v13; // [rsp+48h] [rbp-20h] BYREF
  __int64 v15; // [rsp+80h] [rbp+18h] BYREF
  __int64 v16; // [rsp+88h] [rbp+20h] BYREF

  v2 = (void **)a2;
  if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0xCu,
      (__int64)&WPP_d4601149da203bf03f1316021d4590fb_Traceguids,
      this[82]);
  }
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v11, (__int64)&ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v10, (__int64)&ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v16, (__int64)&ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v15, (__int64)&ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v12, (__int64)&ATL::g_strmgr);
  v4 = CAudioSessionInstanceId::ToStreamSwitchString(this + 73, &v11);
  if ( v4 < 0 )
    goto LABEL_13;
  try
  {
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Format(&v10, L"%d");
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Format(
      &v16,
      L"%d",
      *((unsigned int *)this + 58));
    v5 = (*((__int64 (__fastcall **)(char *))this[4] + 3))((char *)this + 32);
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Format(
      &v15,
      L"%d",
      v5);
    CAudioIdentifier::EscapeIdentifierString(&v11);
    CAudioIdentifier::EscapeIdentifierString(&v10);
    CAudioIdentifier::EscapeIdentifierString(&v16);
    CAudioIdentifier::EscapeIdentifierString(&v15);
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Format(
      (__int64 *)&v12,
      L"%s|%s|%s|%s",
      v11,
      v10,
      v16,
      v15);
  }
  catch ( ATL::CAtlException *v13 )
  {
    v4 = *(_DWORD *)v13;
    if ( *(int *)v13 >= 0 )
    {
      v2 = (void **)a2;
      goto LABEL_9;
    }
LABEL_13:
    v6 = v12;
    goto LABEL_14;
  }
LABEL_9:
  v6 = v12;
  v7 = 2LL * (*((_DWORD *)v12 - 4) + 1);
  v8 = (char *)MIDL_user_allocate(v7);
  *v2 = v8;
  if ( !v8 )
  {
    v4 = -2147024882;
LABEL_14:
    AudSrvTraceLoggingErrorHelper("CAudioSession::GetStreamSwitchId", 490, v4);
    goto LABEL_15;
  }
  v4 = StringCbCopyW(v8, v7, (char *)v6);
  if ( v4 < 0 )
  {
    operator delete(*v2);
    *v2 = 0LL;
    goto LABEL_14;
  }
LABEL_15:
  ATL::CStringData::Release((ATL::CStringData *)(v6 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v15 - 24));
  ATL::CStringData::Release((ATL::CStringData *)(v16 - 24));
  ATL::CStringData::Release((ATL::CStringData *)(v10 - 24));
  ATL::CStringData::Release((ATL::CStringData *)(v11 - 24));
  return (unsigned int)v4;
}
