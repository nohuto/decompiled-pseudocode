/*
 * XREFs of sub_1405A36D0 @ 0x1405A36D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14059A6AC @ 0x14059A6AC (sub_14059A6AC.c)
 *     sub_1405EEA98 @ 0x1405EEA98 (sub_1405EEA98.c)
 *     sub_14096EBDC @ 0x14096EBDC (sub_14096EBDC.c)
 */

char __fastcall sub_1405A36D0(__int64 a1, unsigned int *a2, int a3, unsigned __int8 a4)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rcx

  if ( a4 == *(_DWORD *)(a1 + 8) && a3 == 114688 )
  {
    v4 = *(_QWORD *)a1 + *a2;
    if ( (unsigned int)sub_14096EBDC(*((_QWORD *)KeGetCurrentThread() + 23)) )
    {
      if ( sub_14059A6AC(v4, (const signed __int64 **)(*(_QWORD *)(v5 + 1680) + 424LL)) )
        sub_1405EEA98(v4);
    }
  }
  return 0;
}
