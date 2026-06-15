/*
 * XREFs of ?APOTrackAndLogException@@YAXPEBU_tlgProvider_t@@PEBGW4APO_TYPE@@U_GUID@@PEBDJ@Z @ 0x14007553C
 * Callers:
 *     ?CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z @ 0x14007570C (-CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z.c)
 * Callees:
 *     ?TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@J_NAEBU_GUID@@M@Z @ 0x14000CFD8 (-TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@J_NAEBU_GUID@@M@Z.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x14007537C (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapSz@G@@U1@U-$_tlgWrapperByVal@$03.c)
 */

__int64 __fastcall APOTrackAndLogException(
        __int64 a1,
        void *a2,
        __int64 a3,
        __int64 a4,
        const unsigned __int16 *a5,
        unsigned int a6)
{
  unsigned int v8; // edi
  __int64 result; // rax
  const char *v10; // rdx
  unsigned int v11; // [rsp+50h] [rbp-58h] BYREF
  const unsigned __int16 *v12; // [rsp+58h] [rbp-50h] BYREF
  void *v13; // [rsp+60h] [rbp-48h] BYREF
  __int64 v14; // [rsp+68h] [rbp-40h] BYREF
  const char *v15; // [rsp+70h] [rbp-38h] BYREF

  v8 = a3;
  if ( *(_DWORD *)a1 > 2u && (*(_QWORD *)(a1 + 16) & 0x400000000000LL) != 0 )
  {
    result = *(_QWORD *)(a1 + 24) & 0x400000000000LL;
    if ( result == *(_QWORD *)(a1 + 24) )
    {
      v12 = a5;
      v11 = a6;
      v13 = a2;
      v14 = a4;
      if ( (int)a3 < 0 || (unsigned __int64)(int)a3 >= 4 )
        v10 = "Unknown";
      else
        v10 = off_1400AB7C8[(int)a3];
      v15 = v10;
      result = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
                 a1,
                 byte_1400B3C19,
                 a3,
                 a4,
                 (const unsigned __int16 **)&v15,
                 &v14,
                 &v13,
                 &v12,
                 (__int64)&v11);
    }
  }
  if ( a2 )
    return TrackSystemEffectBehavior((__int64)a2, v8, a6, 1, a4, SLODWORD(FLOAT_1_0));
  return result;
}
