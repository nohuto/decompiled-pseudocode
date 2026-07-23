/*
 * XREFs of sub_1405CF2B0 @ 0x1405CF2B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1405CF2B0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // ebx
  __int64 v5; // rax

  v2 = *(_QWORD *)(a1 + 64);
  v3 = 0;
  if ( v2 && *(_QWORD *)(v2 + 104) )
  {
    if ( (unsigned __int8)sub_14042A5E0(*(_QWORD *)(a1 + 72), 30LL) )
    {
      v5 = *(_QWORD *)(a2 + 16);
      if ( v5 )
        *(_QWORD *)(a2 + 16) = *(_QWORD *)(v5 + 192);
    }
    else
    {
      return (unsigned int)-1073741637;
    }
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return v3;
}
