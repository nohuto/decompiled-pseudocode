/*
 * XREFs of PiSwFreeInterfaceList @ 0x14081A3BC
 * Callers:
 *     PiSwIrpStartCreateWorker @ 0x14081931C (PiSwIrpStartCreateWorker.c)
 *     PiSwCompleteCreate @ 0x140819AB4 (PiSwCompleteCreate.c)
 *     PiSwDeviceFree @ 0x1409673E0 (PiSwDeviceFree.c)
 *     PiSwProcessRemove @ 0x1409678D0 (PiSwProcessRemove.c)
 * Callees:
 *     PiSwInterfaceFree @ 0x1409676E0 (PiSwInterfaceFree.c)
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
