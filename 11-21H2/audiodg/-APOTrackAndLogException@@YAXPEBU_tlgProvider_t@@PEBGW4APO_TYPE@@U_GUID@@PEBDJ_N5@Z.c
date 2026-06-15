/*
 * XREFs of ?APOTrackAndLogException@@YAXPEBU_tlgProvider_t@@PEBGW4APO_TYPE@@U_GUID@@PEBDJ_N5@Z @ 0x14006CBD0
 * Callers:
 *     ?CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z @ 0x14006CF68 (-CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z.c)
 * Callees:
 *     ?TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@M@Z @ 0x140014BD0 (-TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@M@Z.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x14006CA10 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapSz@G@@U1@U-$_tlgWrapperByVal@$03.c)
 */

__int64 __fastcall APOTrackAndLogException(
        __int64 a1,
        void *a2,
        int a3,
        __int64 a4,
        const unsigned __int16 *a5,
        int a6)
{
  __int64 v7; // rbx
  __int64 result; // rax
  const char *v11; // rcx
  int v12; // [rsp+50h] [rbp-48h] BYREF
  const unsigned __int16 *v13; // [rsp+58h] [rbp-40h] BYREF
  void *v14; // [rsp+60h] [rbp-38h] BYREF
  __int64 v15; // [rsp+68h] [rbp-30h] BYREF
  const char *v16; // [rsp+70h] [rbp-28h] BYREF

  v7 = a3;
  if ( *(_DWORD *)a1 > 2u && (*(_QWORD *)(a1 + 16) & 0x400000000000LL) != 0 )
  {
    result = *(_QWORD *)(a1 + 24) & 0x400000000000LL;
    if ( result == *(_QWORD *)(a1 + 24) )
    {
      v12 = a6;
      v13 = a5;
      v14 = a2;
      v15 = a4;
      if ( (unsigned int)v7 >= 4 )
        v11 = "Unknown";
      else
        v11 = off_14009FC78[v7];
      v16 = v11;
      result = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
                 a1,
                 byte_1400A6F99,
                 a1,
                 a4,
                 (const unsigned __int16 **)&v16,
                 &v15,
                 &v14,
                 &v13,
                 (__int64)&v12);
    }
  }
  if ( a2 )
    return TrackSystemEffectBehavior((__int64)a2, v7, 0, 1, a4, SLODWORD(FLOAT_1_0));
  return result;
}
