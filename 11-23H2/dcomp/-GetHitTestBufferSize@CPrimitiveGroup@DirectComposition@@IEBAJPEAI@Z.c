/*
 * XREFs of ?GetHitTestBufferSize@CPrimitiveGroup@DirectComposition@@IEBAJPEAI@Z @ 0x180033744
 * Callers:
 *     ?RebuildInternal@CPrimitiveGroup@DirectComposition@@MEAAJXZ @ 0x180031010 (-RebuildInternal@CPrimitiveGroup@DirectComposition@@MEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CPrimitiveGroup::GetHitTestBufferSize(
        DirectComposition::CPrimitiveGroup *this,
        unsigned int *a2)
{
  int v2; // r9d
  unsigned __int64 v3; // r8
  __int64 v5; // rdx
  __int64 result; // rax
  unsigned int v7; // ecx
  unsigned int v8; // eax
  unsigned int v9; // edx

  v2 = -1;
  v3 = 17LL * *((unsigned int *)this + 68);
  if ( v3 > 0xFFFFFFFF )
    return 2147942934LL;
  v5 = *((unsigned int *)this + 74);
  result = 0LL;
  if ( !(_DWORD)v5 )
  {
LABEL_3:
    *a2 = v3;
    return result;
  }
  if ( (unsigned __int64)(24 * v5) > 0xFFFFFFFF )
    return 2147942934LL;
  v7 = v3 + 24 * v5;
  v8 = v3;
  v9 = v3;
  if ( v7 >= (unsigned int)v3 )
    v2 = v7;
  LODWORD(v3) = v2;
  result = v7 < v8 ? 0x80070216 : 0;
  if ( v7 >= v9 )
    goto LABEL_3;
  return result;
}
