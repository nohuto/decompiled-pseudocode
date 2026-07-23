/*
 * XREFs of sub_1403C1C58 @ 0x1403C1C58
 * Callers:
 *     sub_1405685CC @ 0x1405685CC (sub_1405685CC.c)
 *     sub_140A5943C @ 0x140A5943C (sub_140A5943C.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_1403C1C58(__int64 a1, int a2, int a3)
{
  ULONG v3; // r8d
  unsigned __int64 v4; // r10
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  unsigned __int64 result; // rax

  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_OWORD *)(a1 + 32) = 0LL;
  *(_DWORD *)(a1 + 44) = a2;
  *(_DWORD *)(a1 + 40) = a3;
  v3 = DesiredTime;
  v4 = DesiredTime;
  v5 = (DesiredTime + 10000 * (unsigned __int64)(unsigned int)dword_140D0501C - 1) / DesiredTime;
  if ( v5 > 0xFFFFFFFF )
    LODWORD(v5) = -1;
  *(_DWORD *)(a1 + 20) = v5;
  if ( dword_140D0501C )
  {
    v6 = v3 * (unsigned int)v5 / 0x4E20uLL;
    if ( v6 > 0xFFFFFFFF )
      LODWORD(v6) = -1;
    *(_QWORD *)(a1 + 8) = -v3;
    *(_DWORD *)a1 = v6;
  }
  v7 = (10000LL * (unsigned int)dword_140D05028 + v4 - 1) / v4;
  if ( v7 > 0xFFFFFFFF )
    LODWORD(v7) = -1;
  *(_DWORD *)(a1 + 16) = v7;
  v8 = (v4 + 10000LL * (unsigned int)dword_140D05020 - 1) / v4;
  if ( v8 > 0xFFFFFFFF )
    LODWORD(v8) = -1;
  *(_DWORD *)(a1 + 36) = v8;
  v9 = (v4 + 10000LL * (unsigned int)dword_140D05024 - 1) / v4;
  if ( v9 > 0xFFFFFFFF )
    LODWORD(v9) = -1;
  *(_DWORD *)(a1 + 32) = v9;
  v10 = (v4 + 10000LL * (unsigned int)dword_140D05034 - 1) / v4;
  if ( v10 > 0xFFFFFFFF )
    LODWORD(v10) = -1;
  *(_DWORD *)(a1 + 24) = v10;
  result = (10000LL * (unsigned int)dword_140D05030 + v4 - 1) / v4;
  if ( result > 0xFFFFFFFF )
    result = 0xFFFFFFFFLL;
  *(_DWORD *)(a1 + 28) = result;
  return result;
}
