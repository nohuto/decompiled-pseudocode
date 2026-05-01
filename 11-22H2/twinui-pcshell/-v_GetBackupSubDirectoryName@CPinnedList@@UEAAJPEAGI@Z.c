/*
 * XREFs of ?v_GetBackupSubDirectoryName@CPinnedList@@UEAAJPEAGI@Z @ 0x18075F590
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPinnedList::v_GetBackupSubDirectoryName(CPinnedList *this, char *a2, unsigned int a3)
{
  __int64 v3; // rcx
  signed __int64 v4; // r10
  unsigned __int16 v5; // ax
  unsigned __int16 *v6; // rax
  __int64 result; // rax

  v3 = a3;
  if ( (unsigned __int64)a3 - 1 > 0x7FFFFFFE )
  {
    result = 2147942487LL;
    if ( a3 )
      *(_WORD *)a2 = 0;
  }
  else
  {
    v4 = (char *)L"TaskBar" - a2;
    do
    {
      if ( !(2147483646LL - a3 + v3) )
        break;
      v5 = *(_WORD *)&a2[v4];
      if ( !v5 )
        break;
      *(_WORD *)a2 = v5;
      a2 += 2;
      --v3;
    }
    while ( v3 );
    v6 = (unsigned __int16 *)(a2 - 2);
    if ( v3 )
      v6 = (unsigned __int16 *)a2;
    *v6 = 0;
    return v3 == 0 ? 0x8007007A : 0;
  }
  return result;
}
