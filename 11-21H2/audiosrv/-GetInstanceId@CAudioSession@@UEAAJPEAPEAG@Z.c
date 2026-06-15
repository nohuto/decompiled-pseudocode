/*
 * XREFs of ?GetInstanceId@CAudioSession@@UEAAJPEAPEAG@Z @ 0x1800D8050
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800084A0 (--3@YAXPEAX@Z.c)
 *     MIDL_user_allocate @ 0x18001AC90 (MIDL_user_allocate.c)
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z @ 0x18001CA18 (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18001CA60 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?ToString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18001CAA0 (-ToString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@A.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1800463D0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x180056D74 (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 */

__int64 __fastcall CAudioSession::GetInstanceId(CAudioSession *this, unsigned __int16 **a2)
{
  int v4; // edi
  unsigned __int16 *v5; // rbx
  size_t v6; // rdi
  unsigned __int16 *v7; // rax
  unsigned __int16 *v9; // [rsp+30h] [rbp+8h] BYREF

  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v9, (__int64)&ATL::g_strmgr);
  v4 = CAudioSessionInstanceId::ToString((__int64)this + 584, (void **)&v9);
  v5 = v9;
  if ( v4 < 0 )
    goto LABEL_6;
  v6 = 2LL * (*((_DWORD *)v9 - 4) + 1);
  v7 = (unsigned __int16 *)MIDL_user_allocate(v6);
  *a2 = v7;
  if ( !v7 )
  {
    v4 = -2147024882;
LABEL_6:
    AudSrvTraceLoggingErrorHelper("CAudioSession::GetInstanceId", 354, v4);
    goto LABEL_7;
  }
  v4 = StringCbCopyW((char *)v7, v6, (char *)v5);
  if ( v4 < 0 )
  {
    operator delete(*a2);
    *a2 = 0LL;
    goto LABEL_6;
  }
LABEL_7:
  ATL::CStringData::Release((ATL::CStringData *)(v5 - 12));
  return (unsigned int)v4;
}
