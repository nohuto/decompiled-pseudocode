/*
 * XREFs of sub_1C00459A0 @ 0x1C00459A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 */

void *__fastcall sub_1C00459A0(ULONG Length, ULONG Tag, __int64 a3, struct _MDL **a4)
{
  void *result; // rax
  void *v8; // rbx
  struct _MDL *Mdl; // rax

  result = (void *)sub_1C0007CF4(64LL, Length, Tag, 0LL);
  v8 = result;
  if ( result )
  {
    if ( a4 )
    {
      Mdl = IoAllocateMdl(result, Length, 0, 0, 0LL);
      *a4 = Mdl;
      if ( Mdl )
      {
        MmBuildMdlForNonPagedPool(Mdl);
      }
      else
      {
        ExFreePoolWithTag(v8, Tag);
        return 0LL;
      }
    }
    return v8;
  }
  return result;
}
