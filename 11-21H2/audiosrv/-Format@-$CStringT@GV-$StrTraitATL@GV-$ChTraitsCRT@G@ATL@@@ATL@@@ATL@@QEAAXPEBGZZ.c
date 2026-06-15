/*
 * XREFs of ?Format@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ @ 0x18001C6E0
 * Callers:
 *     ?ToString@CAppInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x1800195F4 (-ToString@CAppInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@.c)
 *     ?ToPersistedString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@H@Z @ 0x18001DB80 (-ToPersistedString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@.c)
 *     ?CalculateStaticId@CAppAudioSessionId@@AEAAJXZ @ 0x18001DD20 (-CalculateStaticId@CAppAudioSessionId@@AEAAJXZ.c)
 *     ?CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ @ 0x18001E150 (-CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ.c)
 *     ?GetStreamSwitchId@CAudioSession@@UEAAJPEAPEAG@Z @ 0x1800D8510 (-GetStreamSwitchId@CAudioSession@@UEAAJPEAPEAG@Z.c)
 *     ?ToStreamSwitchString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x1800E7884 (-ToStreamSwitchString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsC.c)
 * Callees:
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18000C0AC (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x18001C7F0 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18001C8C0 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z @ 0x18001CA18 (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18001CA60 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     vswprintf_s @ 0x18005FA4C (vswprintf_s.c)
 *     _vscwprintf @ 0x18005FAB0 (_vscwprintf.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800C3178 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?AtlFindStringResourceInstance@ATL@@YAPEAUHINSTANCE__@@IG@Z @ 0x1800D691C (-AtlFindStringResourceInstance@ATL@@YAPEAUHINSTANCE__@@IG@Z.c)
 *     ?LoadStringW@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEAUHINSTANCE__@@I@Z @ 0x1800D90B8 (-LoadStringW@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEAUHINSTANCE__@.c)
 */

// Hidden C++ exception states: #wind=2
void ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Format(
        __int64 *a1,
        const wchar_t *a2,
        ...)
{
  unsigned int v4; // esi
  __int64 v5; // rcx
  __int64 v6; // rax
  unsigned __int16 v7; // dx
  __int64 v8; // rax
  wchar_t *v9; // r10
  wchar_t *v10; // rbx
  HINSTANCE StringResourceInstance; // rax
  wchar_t *Format[7]; // [rsp+20h] [rbp-38h] BYREF
  va_list ArgList; // [rsp+70h] [rbp+18h] BYREF

  va_start(ArgList, a2);
  if ( !a2 )
    ATL::AtlThrowImpl(-2147024809);
  v4 = vscwprintf(a2, ArgList);
  if ( v4 == -1 )
    ATL::AtlThrowImpl(-2147024882);
  v5 = *(_QWORD *)(*a1 - 24);
  if ( !v5 || (v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 32LL))(v5)) == 0 )
    v6 = (*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 32))(&ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(Format, v6);
  if ( (unsigned __int64)a2 < 0x10000 )
  {
    StringResourceInstance = ATL::AtlFindStringResourceInstance((unsigned __int16)a2, v7);
    if ( StringResourceInstance )
      ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::LoadStringW(
        Format,
        StringResourceInstance,
        (unsigned __int16)a2);
  }
  else
  {
    v8 = -1LL;
    do
      ++v8;
    while ( a2[v8] );
    ATL::CSimpleStringT<unsigned short,0>::SetString(Format, a2, (unsigned int)v8);
  }
  v9 = (wchar_t *)*a1;
  if ( (((*(_DWORD *)(*a1 - 12) - v4) | (1 - *(_DWORD *)(*a1 - 8))) & 0x80000000) != 0 )
  {
    ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(a1, v4);
    v9 = (wchar_t *)*a1;
  }
  v10 = Format[0];
  vswprintf_s(v9, (int)(v4 + 1), Format[0], ArgList);
  ATL::CSimpleStringT<unsigned short,0>::SetLength(a1, v4);
  ATL::CStringData::Release((ATL::CStringData *)(v10 - 12));
}
