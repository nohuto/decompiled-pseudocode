/*
 * XREFs of ?CalculateStaticId@CAppAudioSessionId@@AEAAJXZ @ 0x18001C524
 * Callers:
 *     ?Initialize@CAppAudioSessionId@@QEAAJPEAUIAudioProcess@@PEBU_GUID@@H@Z @ 0x18003EFC8 (-Initialize@CAppAudioSessionId@@QEAAJPEAUIAudioProcess@@PEBU_GUID@@H@Z.c)
 *     ?Initialize@CAppAudioSessionId@@QEAAJPEBG@Z @ 0x180050574 (-Initialize@CAppAudioSessionId@@QEAAJPEBG@Z.c)
 * Callees:
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z @ 0x180019318 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z.c)
 *     ?CloneData@?$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z @ 0x1800194A4 (-CloneData@-$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z.c)
 *     ?Format@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ @ 0x18001C9D4 (-Format@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18001CE68 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?EscapeIdentifierString@CAudioIdentifier@@SAXAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18001CEA4 (-EscapeIdentifierString@CAudioIdentifier@@SAXAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@AT.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800CE7C4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CAppAudioSessionId::CalculateStaticId(const GUID *this)
{
  volatile signed __int32 *v2; // rbx
  BSTR v3; // rax
  OLECHAR *v4; // rdi
  const GUID *v5; // rcx
  __int64 v7; // [rsp+20h] [rbp-B8h] BYREF
  _QWORD v8[3]; // [rsp+28h] [rbp-B0h] BYREF
  OLECHAR sz[64]; // [rsp+40h] [rbp-98h] BYREF

  v2 = ATL::CSimpleStringT<unsigned short,0>::CloneData((volatile signed __int32 *)(*(_QWORD *)&this->Data1 - 24LL)) + 6;
  v8[0] = v2;
  if ( !*(_DWORD *)this[2].Data4 )
  {
    CAudioIdentifier::EscapeIdentifierString(v8);
    v2 = (volatile signed __int32 *)v8[0];
  }
  StringFromGUID2(this + 1, sz, 64);
  v3 = SysAllocString(sz);
  v4 = v3;
  v8[1] = v3;
  if ( !v3 )
    ATL::AtlThrowImpl(-2147024882);
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
    &v7,
    (__int64)v3);
  SysFreeString(v4);
  CAudioIdentifier::EscapeIdentifierString(&v7);
  v5 = this + 2;
  if ( *(_DWORD *)this[2].Data4 )
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Format(
      v5,
      L"#|%s",
      v7);
  else
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Format(
      v5,
      L"%s|%s",
      v2,
      v7);
  ATL::CStringData::Release((ATL::CStringData *)(v7 - 24));
  ATL::CStringData::Release((ATL::CStringData *)(v2 - 6));
  return 0LL;
}
