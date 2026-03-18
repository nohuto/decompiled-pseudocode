/*
 * XREFs of PiSwFreeInterfaceList @ 0x14081C66C
 * Callers:
 *     PiSwIrpStartCreateWorker @ 0x14081B5CC (PiSwIrpStartCreateWorker.c)
 *     PiSwCompleteCreate @ 0x14081BD64 (PiSwCompleteCreate.c)
 *     PiSwDeviceFree @ 0x140967290 (PiSwDeviceFree.c)
 *     PiSwProcessRemove @ 0x140967780 (PiSwProcessRemove.c)
 * Callees:
 *     PiSwInterfaceFree @ 0x140967590 (PiSwInterfaceFree.c)
 */

void __fastcall PiSwFreeInterfaceList(_QWORD **a1)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rax

  while ( 1 )
  {
    v2 = *a1;
    if ( *a1 == a1 )
      break;
    if ( (_QWORD **)v2[1] != a1 || (v3 = (_QWORD *)*v2, *(_QWORD **)(*v2 + 8LL) != v2) )
      __fastfail(3u);
    *a1 = v3;
    v3[1] = a1;
    PiSwInterfaceFree(v2);
  }
}
