/*
 * XREFs of ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x180018778
 * Callers:
 *     ??0_ResourceSetInfo@ExecutionModel@@QEAA@XZ @ 0x18001E940 (--0_ResourceSetInfo@ExecutionModel@@QEAA@XZ.c)
 *     ?ResetExternalResourcePriorities@ResourceSetClientProxy@@UEAAJXZ @ 0x180020540 (-ResetExternalResourcePriorities@ResourceSetClientProxy@@UEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180015750 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall `vector constructor iterator'(char *a1, __int64 a2, __int64 a3, void (__fastcall *a4)(char *))
{
  __int64 v5; // rbx

  if ( a3 )
  {
    v5 = a3;
    do
    {
      a4(a1);
      a1 += a2;
      --v5;
    }
    while ( v5 );
  }
}
