/*
 * XREFs of IoIs32bitProcess @ 0x1402DF4A0
 * Callers:
 *     IoIsInitiator32bitProcess @ 0x14025D580 (IoIsInitiator32bitProcess.c)
 *     sub_140542128 @ 0x140542128 (sub_140542128.c)
 *     sub_14062EE14 @ 0x14062EE14 (sub_14062EE14.c)
 *     NtCopyFileChunk @ 0x1406588A0 (NtCopyFileChunk.c)
 *     sub_1406C3540 @ 0x1406C3540 (sub_1406C3540.c)
 *     sub_1406C39F4 @ 0x1406C39F4 (sub_1406C39F4.c)
 *     sub_1406C3AAC @ 0x1406C3AAC (sub_1406C3AAC.c)
 *     sub_140776650 @ 0x140776650 (sub_140776650.c)
 *     sub_14077BC30 @ 0x14077BC30 (sub_14077BC30.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall IoIs32bitProcess(PIRP Irp)
{
  PETHREAD Thread; // rdx
  unsigned __int64 v2; // rax
  __int64 v4; // rcx
  __int16 v5; // dx
  CCHAR ApcEnvironment; // al
  __int16 v7; // cx

  if ( !Irp )
  {
    if ( *((_BYTE *)KeGetCurrentThread() + 562) != 1 )
      return 0;
    v4 = *((_QWORD *)KeGetCurrentThread() + 23);
    if ( !*(_QWORD *)(v4 + 1408) )
      return 0;
    v5 = *(_WORD *)(v4 + 2412);
    return v5 == 332 || v5 == 452;
  }
  if ( Irp->RequestorMode != 1 )
    return 0;
  Thread = Irp->Tail.Overlay.Thread;
  if ( (Irp->Flags & 0x2000) == 0 )
  {
    if ( Thread )
    {
      ApcEnvironment = Irp->ApcEnvironment;
      if ( !ApcEnvironment )
      {
        v2 = *((_QWORD *)Thread + 68);
        goto LABEL_5;
      }
      if ( ApcEnvironment == 1 )
      {
        v2 = *((_QWORD *)Thread + 23);
        goto LABEL_5;
      }
    }
    return 0;
  }
  v2 = Irp->Overlay.AllocationSize.QuadPart & 0xFFFFFFFFFFFFFFF9uLL;
LABEL_5:
  if ( !v2 )
    return 0;
  if ( !*(_QWORD *)(v2 + 1408) )
    return 0;
  v7 = *(_WORD *)(v2 + 2412);
  return v7 == 332 || v7 == 452;
}
