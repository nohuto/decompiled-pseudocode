/*
 * XREFs of ??0DiyFp@internal@tip_rapidjson@@QEAA@N@Z @ 0x180653F74
 * Callers:
 *     ?Grisu2@internal@tip_rapidjson@@YAXNPEADPEAH1@Z @ 0x1806544BC (-Grisu2@internal@tip_rapidjson@@YAXNPEADPEAH1@Z.c)
 * Callees:
 *     <none>
 */

tip_rapidjson::internal::DiyFp *__fastcall tip_rapidjson::internal::DiyFp::DiyFp(
        tip_rapidjson::internal::DiyFp *this,
        double a2)
{
  __int64 v3; // rdx
  int v4; // ecx
  __int64 v5; // rax
  tip_rapidjson::internal::DiyFp *result; // rax

  v3 = (*(_QWORD *)&a2 >> 52) & 0x7FFLL;
  v4 = v3 - 1075;
  if ( ((*(_QWORD *)&a2 >> 52) & 0x7FF) == 0 )
    v4 = -1074;
  v5 = (*(_QWORD *)&a2 & 0xFFFFFFFFFFFFFLL) + 0x10000000000000LL;
  if ( !(_DWORD)v3 )
    v5 = *(_QWORD *)&a2 & 0xFFFFFFFFFFFFFLL;
  *(_QWORD *)this = v5;
  result = this;
  *((_DWORD *)this + 2) = v4;
  return result;
}
