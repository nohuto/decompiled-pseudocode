/*
 * XREFs of sub_180038328 @ 0x180038328
 * Callers:
 *     sub_1800344A0 @ 0x1800344A0 (sub_1800344A0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180038328(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  unsigned __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rbx

  *(_OWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  if ( (*(_DWORD *)(a1 + 112) & 0x22) != 2 && ((__int64 (*)(void))std::wstreambuf::pptr)() )
  {
    v4 = std::wstreambuf::pbase(a1);
    *(_QWORD *)a2 = v4;
    v5 = std::wstreambuf::pptr(a1);
    if ( v5 < *(_QWORD *)(a1 + 104) )
      v5 = *(_QWORD *)(a1 + 104);
    *(_QWORD *)(a2 + 8) = (__int64)(v5 - v4) >> 1;
    v6 = (std::wstreambuf::epptr(a1) - v4) >> 1;
    goto LABEL_9;
  }
  if ( (*(_BYTE *)(a1 + 112) & 4) == 0 && std::wstreambuf::gptr(a1) )
  {
    v7 = std::wstreambuf::eback(a1);
    *(_QWORD *)a2 = v7;
    v6 = (std::wstreambuf::egptr(a1) - v7) >> 1;
    *(_QWORD *)(a2 + 8) = v6;
LABEL_9:
    *(_QWORD *)(a2 + 16) = v6;
  }
  return a2;
}
