/*
 * XREFs of ?Format@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ @ 0x180034568
 * Callers:
 *     ?OpenSessionKey@@YAJPEAUIAudioSessionInfo@@PEAUHKEY__@@PEAPEAU2@@Z @ 0x180036274 (-OpenSessionKey@@YAJPEAUIAudioSessionInfo@@PEAUHKEY__@@PEAPEAU2@@Z.c)
 * Callees:
 *     vswprintf_s @ 0x18000355C (vswprintf_s.c)
 *     _vscwprintf @ 0x1800035C0 (_vscwprintf.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000958C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ??4?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAAEAV01@PEBG@Z @ 0x1800332A4 (--4-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAAEAV01@PEBG@Z.c)
 *     ?CheckImplicitLoad@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@AEAA_NPEBX@Z @ 0x180033A60 (-CheckImplicitLoad@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@AEAA_NPEBX@Z.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180036FCC (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Format(
        wchar_t **a1,
        const wchar_t *a2,
        ...)
{
  int v4; // eax
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rcx
  wchar_t *v8; // r10
  wchar_t *v9; // rbx
  signed __int32 v10; // eax
  bool v11; // cc
  __int64 result; // rax
  wchar_t *Format[7]; // [rsp+20h] [rbp-38h] BYREF
  va_list va; // [rsp+70h] [rbp+18h] BYREF

  va_start(va, a2);
  va_copy((va_list)&Format[1], va);
  if ( !a2 )
    ATL::AtlThrowImpl(-2147024809);
  v4 = vscwprintf(a2, va);
  v5 = v4;
  if ( v4 == -1 )
    ATL::AtlThrowImpl(-2147024882);
  v6 = *((_QWORD *)*a1 - 3);
  if ( !v6 || (v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 32LL))(v6)) == 0 )
  {
    v7 = ((__int64 (__fastcall *)(void ***))ATL::g_strmgr[4])(&ATL::g_strmgr);
    if ( !v7 )
      ATL::AtlThrowImpl(-2147467259);
  }
  Format[0] = (wchar_t *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 24LL))(v7) + 24);
  if ( !ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CheckImplicitLoad(
          (ATL::CAtlBaseModule *)Format,
          (__int64)a2) )
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::operator=(
      (void **)Format,
      (__int64)a2);
  v8 = *a1;
  if ( ((1 - *((_DWORD *)*a1 - 2)) | (*((_DWORD *)*a1 - 3) - (int)v5)) < 0 )
  {
    ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(a1, (unsigned int)v5);
    v8 = *a1;
  }
  v9 = Format[0];
  vswprintf_s(v8, (int)v5 + 1, Format[0], va);
  if ( (int)v5 < 0 || (int)v5 > *((_DWORD *)*a1 - 3) )
    ATL::AtlThrowImpl(-2147024809);
  *((_DWORD *)*a1 - 4) = v5;
  (*a1)[v5] = 0;
  v10 = _InterlockedExchangeAdd((volatile signed __int32 *)v9 - 2, 0xFFFFFFFF);
  v11 = v10 <= 1;
  result = (unsigned int)(v10 - 1);
  if ( v11 )
    return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v9 - 3) + 8LL))(*((_QWORD *)v9 - 3));
  return result;
}
