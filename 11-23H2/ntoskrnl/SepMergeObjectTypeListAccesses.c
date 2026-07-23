/*
 * XREFs of SepMergeObjectTypeListAccesses @ 0x1405B83EC
 * Callers:
 *     SeAccessCheckByType @ 0x1402B3D50 (SeAccessCheckByType.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1406C10A0 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SepMergeObjectTypeListAccesses(__int64 a1, __int64 a2, unsigned int a3)
{
  _DWORD *v3; // r9
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 result; // rax

  if ( a3 )
  {
    v3 = (_DWORD *)(a1 + 28);
    v4 = a2 - a1;
    v5 = a3;
    do
    {
      *v3 &= *(_DWORD *)((char *)v3 + v4);
      result = *(unsigned int *)((char *)v3 + v4 + 4);
      v3[1] |= result;
      v3 += 12;
      --v5;
    }
    while ( v5 );
  }
  return result;
}
