/*
 * XREFs of SmpCreateKnownSubSys @ 0x1400039F8
 * Callers:
 *     SmpHandleConnectionRequest @ 0x140003230 (SmpHandleConnectionRequest.c)
 *     SmpLoadSubSystem @ 0x1400199F8 (SmpLoadSubSystem.c)
 * Callees:
 *     SmpGetSubSysSynch @ 0x14001AEBC (SmpGetSubSysSynch.c)
 */

_DWORD *__fastcall SmpCreateKnownSubSys(int a1)
{
  _DWORD *Heap; // rax
  _DWORD *v3; // rbx
  _DWORD *result; // rax
  __int64 SubSysSynch; // rax

  Heap = RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), SmBaseTag + 0x80000, 0x58uLL);
  v3 = Heap;
  if ( Heap )
  {
    if ( (a1 & 1) != 0 )
    {
      *((_QWORD *)Heap + 2) = 0LL;
LABEL_4:
      v3[1] = 0;
      v3[6] = -1;
      result = v3;
      *((_QWORD *)v3 + 4) = 0LL;
      *((_QWORD *)v3 + 5) = 0LL;
      *v3 = 1;
      v3[2] = a1;
      *((_OWORD *)v3 + 3) = 0LL;
      return result;
    }
    SubSysSynch = SmpGetSubSysSynch();
    *((_QWORD *)v3 + 2) = SubSysSynch;
    if ( SubSysSynch )
      goto LABEL_4;
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v3);
  }
  return 0LL;
}
