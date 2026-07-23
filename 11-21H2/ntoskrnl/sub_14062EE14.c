/*
 * XREFs of sub_14062EE14 @ 0x14062EE14
 * Callers:
 *     sub_14062FCB0 @ 0x14062FCB0 (sub_14062FCB0.c)
 *     sub_14062FF60 @ 0x14062FF60 (sub_14062FF60.c)
 * Callees:
 *     IoIs32bitProcess @ 0x1402DF4A0 (IoIs32bitProcess.c)
 */

ULONG_PTR *__fastcall sub_14062EE14(IRP *a1)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r8
  __int64 v2; // rbx
  ULONG LowPart; // edx
  unsigned __int64 v4; // rax
  __int64 v5; // r9
  struct _IRP *MasterIrp; // rdi
  unsigned int Options; // esi
  bool v8; // bp
  char *v9; // rax
  bool v10; // cf

  CurrentStackLocation = a1->Tail.Overlay.CurrentStackLocation;
  v2 = 0LL;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( LowPart != 315396 )
  {
    v4 = LowPart - 315412;
    if ( (unsigned int)v4 > 0x34 )
      return (ULONG_PTR *)v2;
    v5 = 0x11000000000001LL;
    if ( !_bittest64(&v5, v4) )
      return (ULONG_PTR *)v2;
  }
  MasterIrp = a1->AssociatedIrp.MasterIrp;
  if ( !MasterIrp )
    return (ULONG_PTR *)v2;
  Options = CurrentStackLocation->Parameters.Create.Options;
  v8 = ((LowPart - 315460) & 0xFFFFFFFB) != 0;
  if ( IoIs32bitProcess(a1) )
  {
    if ( v8 )
    {
      v9 = (char *)&MasterIrp->AssociatedIrp.SystemBuffer + 4;
      v10 = Options < 0x2C;
LABEL_12:
      if ( v10 )
        return 0LL;
      return (ULONG_PTR *)v9;
    }
    if ( Options >= 0x34 )
      return (ULONG_PTR *)&MasterIrp->IoStatus;
  }
  else
  {
    if ( v8 )
    {
      v9 = (char *)&MasterIrp->ThreadListEntry.Flink + 4;
      v10 = Options < 0x38;
      goto LABEL_12;
    }
    if ( Options >= 0x40 )
      return &MasterIrp->IoStatus.Information;
  }
  return (ULONG_PTR *)v2;
}
