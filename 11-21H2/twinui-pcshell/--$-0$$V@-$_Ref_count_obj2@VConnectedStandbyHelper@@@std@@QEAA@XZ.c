/*
 * XREFs of ??$?0$$V@?$_Ref_count_obj2@VConnectedStandbyHelper@@@std@@QEAA@XZ @ 0x18016098C
 * Callers:
 *     ??$make_shared@VConnectedStandbyHelper@@$$V@std@@YA?AV?$shared_ptr@VConnectedStandbyHelper@@@0@XZ @ 0x1801608E4 (--$make_shared@VConnectedStandbyHelper@@$$V@std@@YA-AV-$shared_ptr@VConnectedStandbyHelper@@@0@X.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Ref_count_obj2<ConnectedStandbyHelper>::_Ref_count_obj2<ConnectedStandbyHelper>(__int64 a1)
{
  int UniqueContext; // eax
  __int64 result; // rax

  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj2<ConnectedStandbyHelper>::`vftable';
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_OWORD *)(a1 + 32) = 0LL;
  *(_OWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  UniqueContext = SHTaskPoolGetUniqueContext();
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_DWORD *)(a1 + 32) = UniqueContext;
  result = a1;
  *(_BYTE *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0LL;
  return result;
}
