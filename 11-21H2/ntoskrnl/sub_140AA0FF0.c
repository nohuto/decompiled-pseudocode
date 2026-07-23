/*
 * XREFs of sub_140AA0FF0 @ 0x140AA0FF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14062C8D8 @ 0x14062C8D8 (sub_14062C8D8.c)
 *     sub_14062C930 @ 0x14062C930 (sub_14062C930.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140AA0FF0(__int64 a1)
{
  __int64 v2; // rdx
  unsigned int *v3; // rcx
  int v4; // ebx
  __int64 v5; // rdx
  PVOID v6; // rsi
  void *v7; // rcx

  if ( sub_14062C930(a1) )
  {
    v6 = sub_14062C8D8(v3);
    if ( v6 )
    {
      v4 = sub_14042A5E0(v6, v5);
      v7 = (void *)a1;
      if ( v4 < 0 )
        v7 = v6;
      ExFreePoolWithTag(v7, 0);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)sub_14042A5E0(v3, v2);
  }
  return (unsigned int)v4;
}
