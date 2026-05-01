/*
 * XREFs of ?IsFrozen@_ResourceSetInfo@ExecutionModel@@QEBA_NXZ @ 0x180083B64
 * Callers:
 *     ?RmpResourceSetIsCommitSaveEligible@@YAEPEBU_ResourceSetInfo@ExecutionModel@@@Z @ 0x180083D64 (-RmpResourceSetIsCommitSaveEligible@@YAEPEBU_ResourceSetInfo@ExecutionModel@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExecutionModel::_ResourceSetInfo::IsFrozen(ExecutionModel::_ResourceSetInfo *this)
{
  unsigned __int64 v1; // rax
  __int64 v2; // rcx
  bool result; // al

  result = 1;
  if ( (*((_BYTE *)this + 40) & 0x10) == 0 )
  {
    if ( *(_DWORD *)this > 0x28u )
      return 0;
    v1 = *(int *)this;
    v2 = 0x11000002000LL;
    if ( !_bittest64(&v2, v1) )
      return 0;
  }
  return result;
}
