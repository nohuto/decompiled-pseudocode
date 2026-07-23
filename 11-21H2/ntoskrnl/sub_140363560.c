/*
 * XREFs of sub_140363560 @ 0x140363560
 * Callers:
 *     sub_14023D4C8 @ 0x14023D4C8 (sub_14023D4C8.c)
 *     sub_14023DD4C @ 0x14023DD4C (sub_14023DD4C.c)
 *     sub_140363490 @ 0x140363490 (sub_140363490.c)
 *     sub_140363A64 @ 0x140363A64 (sub_140363A64.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

char __fastcall sub_140363560(unsigned __int8 *a1)
{
  char **v1; // rax
  unsigned __int64 v2; // rbx
  struct _KTHREAD *CurrentThread; // rdx
  bool v4; // zf
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v6; // r9

  v1 = (char **)*((_QWORD *)a1 + 1);
  if ( *((_BYTE *)v1 + 48) )
  {
    LOBYTE(v1) = dword_140D06B08;
    v2 = *a1;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        LOBYTE(v1) = KeGetCurrentIrql();
        if ( (unsigned __int8)v1 <= 0xFu && (unsigned __int8)v2 <= 0xFu && (unsigned __int8)v1 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v6 = *((_QWORD *)CurrentPrcb + 4375);
          LODWORD(v1) = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
          v4 = ((unsigned int)v1 & *(_DWORD *)(v6 + 20)) == 0;
          *(_DWORD *)(v6 + 20) &= (unsigned int)v1;
          if ( v4 )
            LOBYTE(v1) = sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(v2);
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v4 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
    if ( v4 )
    {
      v1 = (char **)((char *)CurrentThread + 152);
      if ( *v1 != (char *)v1 )
        LOBYTE(v1) = KiCheckForKernelApcDelivery();
    }
  }
  return (char)v1;
}
