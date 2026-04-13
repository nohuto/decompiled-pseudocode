/*
 * XREFs of ?SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z @ 0x180045130
 * Callers:
 *     ?RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z @ 0x180040158 (-RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z.c)
 *     ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x180040664 (-RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800324E8 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall wil::details_abi::RawUsageIndex::SetBuffer(
        wil::details_abi::RawUsageIndex *this,
        _WORD *a2,
        unsigned __int64 a3,
        const char *a4)
{
  void *v8; // rsi
  HANDLE ProcessHeap; // rax
  char v10; // al
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( (unsigned __int64)a4 < 0xA )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      3821LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\Staging.h",
      a4);
  v8 = (void *)*((_QWORD *)this + 6);
  *((_QWORD *)this + 6) = 0LL;
  if ( v8 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v8);
  }
  *((_QWORD *)this + 3) = a2;
  *((_QWORD *)this + 4) = (char *)a2 + a3;
  *((_QWORD *)this + 5) = &a4[(_QWORD)a2];
  *((_BYTE *)this + 57) = 0;
  if ( a3 < 0xA )
    goto LABEL_14;
  if ( *a2 || (v10 = 0, a2[1] > *(_WORD *)this) )
    v10 = 1;
  *((_BYTE *)this + 57) = v10;
  if ( *a2
    || a2[1] != *(_WORD *)this
    || a2[2] != *((_WORD *)this + 1)
    || *((_BYTE *)a2 + 8) != *((_BYTE *)this + 4)
    || a2[3] != *((_WORD *)this + 3)
    || *((_BYTE *)a2 + 9) != *((_BYTE *)this + 8) )
  {
LABEL_14:
    *a2 = 0;
    a2[1] = *(_WORD *)this;
    a2[2] = *((_WORD *)this + 1);
    *((_BYTE *)a2 + 8) = *((_BYTE *)this + 4);
    a2[3] = *((_WORD *)this + 3);
    *((_BYTE *)a2 + 9) = *((_BYTE *)this + 8);
    *((_QWORD *)this + 4) = *((_QWORD *)this + 3) + 10LL;
  }
}
