/*
 * XREFs of sub_14084D7F0 @ 0x14084D7F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14084D8D0 @ 0x14084D8D0 (sub_14084D8D0.c)
 */

__int64 __fastcall sub_14084D7F0(__int64 a1, __int64 a2, __int64 a3, int a4, unsigned int *a5, int a6)
{
  unsigned int v6; // ebx
  struct _KPRCB *CurrentPrcb; // rbp
  unsigned __int8 *v9; // rcx
  __int64 v10; // rax
  int v11; // r8d
  int v12; // edx

  v6 = 0;
  if ( !a3 || !a5 || a6 != 4 || a4 != 4 )
    return 1LL;
  CurrentPrcb = KeGetCurrentPrcb();
  if ( **(_BYTE **)a3 == 42 )
    goto LABEL_17;
  v9 = (unsigned __int8 *)CurrentPrcb + 35216;
  v10 = *(_QWORD *)a3 - ((_QWORD)CurrentPrcb + 35216);
  do
  {
    v11 = v9[v10];
    v12 = *v9 - v11;
    if ( v12 )
      break;
    ++v9;
  }
  while ( v11 );
  if ( !v12 )
  {
LABEL_17:
    if ( (unsigned int)sub_14084D8D0(*(_QWORD *)(a3 + 8), (unsigned int)*((char *)CurrentPrcb + 64), a5[1]) )
    {
      if ( (unsigned int)sub_14084D8D0(*(_QWORD *)(a3 + 16), *((unsigned __int8 *)CurrentPrcb + 67), a5[2]) )
        return (unsigned int)sub_14084D8D0(*(_QWORD *)(a3 + 24), *((unsigned __int8 *)CurrentPrcb + 66), a5[3]) != 0
             ? 2
             : 0;
    }
  }
  return v6;
}
