/*
 * XREFs of VhdDeferredAutoAttachVirtualDisks @ 0x14041A784
 * Callers:
 *     PipOobeCompleteAsyncCallback @ 0x14067E970 (PipOobeCompleteAsyncCallback.c)
 * Callees:
 *     VhdiAutoAttachOneVhd @ 0x140681468 (VhdiAutoAttachOneVhd.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void VhdDeferredAutoAttachVirtualDisks()
{
  char *v0; // rbx
  __int64 v1; // rax

  while ( 1 )
  {
    v0 = (char *)qword_140CF8260;
    if ( qword_140CF8260 == &qword_140CF8260 )
      break;
    if ( *((PVOID **)qword_140CF8260 + 1) != &qword_140CF8260
      || (v1 = *(_QWORD *)qword_140CF8260, *(PVOID *)(*(_QWORD *)qword_140CF8260 + 8LL) != qword_140CF8260) )
    {
      __fastfail(3u);
    }
    qword_140CF8260 = *(PVOID *)qword_140CF8260;
    *(_QWORD *)(v1 + 8) = &qword_140CF8260;
    VhdiAutoAttachOneVhd(v0 + 36);
    ExFreePoolWithTag(v0, 0);
  }
}
