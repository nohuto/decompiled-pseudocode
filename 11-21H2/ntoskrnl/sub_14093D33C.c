/*
 * XREFs of sub_14093D33C @ 0x14093D33C
 * Callers:
 *     sub_14093D400 @ 0x14093D400 (sub_14093D400.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14093D33C(__int64 a1)
{
  unsigned int v1; // r8d
  POBJECT_TYPE *v3; // rax

  v1 = 0;
  if ( !a1 )
    return 0LL;
  v3 = (POBJECT_TYPE *)qword_140D07490[(unsigned __int8)dword_140D06C0C ^ *(unsigned __int8 *)(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a1 - 48) >> 8)];
  if ( v3 != ExEventObjectType && v3 != PsProcessType && v3 != PsThreadType && v3 != (POBJECT_TYPE *)ExTimerObjectType )
    return (unsigned int)-1073741811;
  return v1;
}
