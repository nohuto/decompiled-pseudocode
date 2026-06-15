/*
 * XREFs of ?Add@?$CSimpleMap@KPEAVCVpoContext@@V?$CSimpleMapEqualHelper@KPEAVCVpoContext@@@ATL@@@ATL@@QEAAHAEBKAEBQEAVCVpoContext@@@Z @ 0x14006633C
 * Callers:
 *     ?Initialize@CVpoContext@@UEAAJPEAUISubmix@@PEAUIAudioDeviceGraph@@@Z @ 0x1400666B0 (-Initialize@CVpoContext@@UEAAJPEAUISubmix@@PEAUIAudioDeviceGraph@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CSimpleMap<unsigned long,CVpoContext *,ATL::CSimpleMapEqualHelper<unsigned long,CVpoContext *>>::Add(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  _DWORD *v8; // r8
  _QWORD *v9; // rcx
  __int64 result; // rax

  v5 = _o__recalloc(CVpoContext::s_mapVpoContext, (int)qword_1400CF818 + 1, 4LL);
  if ( !v5 )
    return 0LL;
  CVpoContext::s_mapVpoContext = v5;
  v6 = _o__recalloc(qword_1400CF810, (int)qword_1400CF818 + 1, 8LL);
  if ( !v6 )
    return 0LL;
  v7 = (int)qword_1400CF818;
  qword_1400CF810 = v6;
  v8 = (_DWORD *)(CVpoContext::s_mapVpoContext + 4LL * (int)qword_1400CF818);
  if ( v8 )
  {
    *v8 = *a2;
    v6 = qword_1400CF810;
  }
  v9 = (_QWORD *)(v6 + 8 * v7);
  if ( v9 )
    *v9 = *a3;
  result = 1LL;
  LODWORD(qword_1400CF818) = qword_1400CF818 + 1;
  return result;
}
