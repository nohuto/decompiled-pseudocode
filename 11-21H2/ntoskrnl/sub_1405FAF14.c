/*
 * XREFs of sub_1405FAF14 @ 0x1405FAF14
 * Callers:
 *     sub_14037FC84 @ 0x14037FC84 (sub_14037FC84.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1405FAF14(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  __int64 v3; // rax
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rdx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 16);
  v3 = 600000000LL;
  v4 = a2 - v2;
  if ( v4 >= 0x23C34600 )
  {
    v5 = (v4 + 599999999) / 0x23C34600;
    v3 = 600000000LL * (unsigned int)v5;
  }
  else
  {
    LODWORD(v5) = 1;
  }
  *(_DWORD *)(a1 + 8) += v5;
  *(_QWORD *)(a1 + 16) = v2 + v3;
  result = a1 + 4 * (5LL * (*(_DWORD *)(a1 + 8) & 0x3F) + 6);
  *(_OWORD *)result = 0LL;
  *(_DWORD *)(result + 16) = 0;
  *(_QWORD *)a1 = result;
  return result;
}
