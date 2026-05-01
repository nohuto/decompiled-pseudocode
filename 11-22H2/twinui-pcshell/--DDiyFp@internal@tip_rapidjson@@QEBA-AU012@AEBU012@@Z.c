/*
 * XREFs of ??DDiyFp@internal@tip_rapidjson@@QEBA?AU012@AEBU012@@Z @ 0x180417570
 * Callers:
 *     ?StrtodDiyFp@internal@tip_rapidjson@@YA_NPEBD_K1HPEAN@Z @ 0x18041A09C (-StrtodDiyFp@internal@tip_rapidjson@@YA_NPEBD_K1HPEAN@Z.c)
 *     ?Grisu2@internal@tip_rapidjson@@YAXNPEADPEAH1@Z @ 0x1806544BC (-Grisu2@internal@tip_rapidjson@@YAXNPEADPEAH1@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall tip_rapidjson::internal::DiyFp::operator*(unsigned __int64 *a1, __int64 a2, unsigned __int64 *a3)
{
  unsigned __int128 v4; // rax
  int v5; // ecx

  v4 = *a1 * (unsigned __int128)*a3;
  if ( (v4 & 0x8000000000000000uLL) != 0LL )
    ++*((_QWORD *)&v4 + 1);
  *(_QWORD *)&v4 = a2;
  v5 = *((_DWORD *)a1 + 2) + 64;
  *(_QWORD *)a2 = *((_QWORD *)&v4 + 1);
  *(_DWORD *)(a2 + 8) = *((_DWORD *)a3 + 2) + v5;
  return v4;
}
