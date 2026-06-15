/*
 * XREFs of ?RemoveAt@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@@2@@ATL@@QEAAHH@Z @ 0x140003A48
 * Callers:
 *     ?Remove@CSystemAudioDeviceCollection@@SAXPEAVCSystemAudioDeviceBase@@@Z @ 0x1400039F4 (-Remove@CSystemAudioDeviceCollection@@SAXPEAVCSystemAudioDeviceBase@@@Z.c)
 * Callees:
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x140003EE4 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     memmove_s @ 0x14000A578 (memmove_s.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140050DC8 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CSystemAudioDeviceBase *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CSystemAudioDeviceBase *>>::RemoveAt(
        __int64 a1,
        int a2)
{
  __int64 v2; // rbx
  int v3; // edx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 result; // rax
  errno_t v7; // eax
  errno_t v8; // eax

  v2 = a2;
  if ( a2 < 0 || a2 >= (int)qword_1400C1638 )
    return 0LL;
  ATL::CStringData::Release((ATL::CStringData *)(*(_QWORD *)(SadMap + 8LL * a2) - 24LL));
  v3 = qword_1400C1638;
  if ( (_DWORD)v2 != (_DWORD)qword_1400C1638 - 1 )
  {
    v7 = memmove_s(
           (void *const)(SadMap + 8 * v2),
           8LL * ((int)qword_1400C1638 - (int)v2),
           (const void *const)(SadMap + 8 * v2 + 8),
           8LL * ((int)qword_1400C1638 - (int)v2 - 1));
    if ( v7 )
    {
      if ( v7 == 12 )
        goto LABEL_24;
      if ( v7 == 22 || v7 == 34 )
        goto LABEL_23;
      if ( v7 != 80 )
        goto LABEL_22;
    }
    v8 = memmove_s(
           (void *const)(qword_1400C1630 + 8 * v2),
           8LL * ((int)qword_1400C1638 - (int)v2),
           (const void *const)(qword_1400C1630 + 8 * v2 + 8),
           8LL * ((int)qword_1400C1638 - (int)v2 - 1));
    if ( !v8 )
      goto LABEL_25;
    if ( v8 != 12 )
    {
      if ( v8 != 22 && v8 != 34 )
      {
        if ( v8 != 80 )
LABEL_22:
          ATL::AtlThrowImpl(-2147467259);
LABEL_25:
        v3 = qword_1400C1638;
        goto LABEL_4;
      }
LABEL_23:
      ATL::AtlThrowImpl(-2147024809);
    }
LABEL_24:
    ATL::AtlThrowImpl(-2147024882);
  }
LABEL_4:
  v4 = _o__recalloc(SadMap, v3 - 1, 8LL);
  if ( v4 || (_DWORD)qword_1400C1638 == 1 )
    SadMap = v4;
  v5 = _o__recalloc(qword_1400C1630, (int)qword_1400C1638 - 1, 8LL);
  if ( v5 || (_DWORD)qword_1400C1638 == 1 )
    qword_1400C1630 = v5;
  result = 1LL;
  LODWORD(qword_1400C1638) = qword_1400C1638 - 1;
  return result;
}
