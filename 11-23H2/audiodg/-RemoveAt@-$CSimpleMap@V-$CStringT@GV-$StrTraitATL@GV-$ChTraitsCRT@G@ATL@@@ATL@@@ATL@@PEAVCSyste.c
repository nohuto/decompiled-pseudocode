/*
 * XREFs of ?RemoveAt@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@@2@@ATL@@QEAAHH@Z @ 0x1400567D8
 * Callers:
 *     ?Remove@CSystemAudioDeviceCollection@@SAXPEAVCSystemAudioDeviceBase@@@Z @ 0x140056774 (-Remove@CSystemAudioDeviceCollection@@SAXPEAVCSystemAudioDeviceBase@@@Z.c)
 * Callees:
 *     memmove_s @ 0x140021438 (memmove_s.c)
 *     ??_G?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAPEAXI@Z @ 0x14003806A (--_G-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAPEAXI@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14004B99C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CSystemAudioDeviceBase *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CSystemAudioDeviceBase *>>::RemoveAt(
        __int64 a1,
        int a2)
{
  __int64 v2; // rbx
  int v3; // edx
  errno_t v4; // eax
  errno_t v5; // eax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 result; // rax

  v2 = a2;
  if ( a2 < 0 || a2 >= (int)qword_1400CF7B0 )
    return 0LL;
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::`scalar deleting destructor'((_QWORD *)(SadMap + 8LL * a2));
  v3 = qword_1400CF7B0;
  if ( (_DWORD)v2 != (_DWORD)qword_1400CF7B0 - 1 )
  {
    v4 = memmove_s(
           (void *const)(SadMap + 8 * v2),
           8LL * ((int)qword_1400CF7B0 - (int)v2),
           (const void *const)(SadMap + 8 * v2 + 8),
           8LL * ((int)qword_1400CF7B0 - (int)v2 - 1));
    if ( v4 )
    {
      if ( v4 == 12 )
        goto LABEL_16;
      if ( v4 == 22 || v4 == 34 )
        goto LABEL_15;
      if ( v4 != 80 )
        goto LABEL_14;
    }
    v5 = memmove_s(
           (void *const)(qword_1400CF7A8 + 8 * v2),
           8LL * ((int)qword_1400CF7B0 - (int)v2),
           (const void *const)(qword_1400CF7A8 + 8 * v2 + 8),
           8LL * ((int)qword_1400CF7B0 - (int)v2 - 1));
    if ( !v5 )
    {
LABEL_17:
      v3 = qword_1400CF7B0;
      goto LABEL_18;
    }
    if ( v5 != 12 )
    {
      if ( v5 != 22 && v5 != 34 )
      {
        if ( v5 != 80 )
LABEL_14:
          ATL::AtlThrowImpl(-2147467259);
        goto LABEL_17;
      }
LABEL_15:
      ATL::AtlThrowImpl(-2147024809);
    }
LABEL_16:
    ATL::AtlThrowImpl(-2147024882);
  }
LABEL_18:
  v6 = _o__recalloc(SadMap, v3 - 1, 8LL);
  if ( v6 || (_DWORD)qword_1400CF7B0 == 1 )
    SadMap = v6;
  v7 = _o__recalloc(qword_1400CF7A8, (int)qword_1400CF7B0 - 1, 8LL);
  if ( v7 || (_DWORD)qword_1400CF7B0 == 1 )
    qword_1400CF7A8 = v7;
  result = 1LL;
  LODWORD(qword_1400CF7B0) = qword_1400CF7B0 - 1;
  return result;
}
