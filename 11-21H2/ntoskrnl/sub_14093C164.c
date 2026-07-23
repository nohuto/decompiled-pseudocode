/*
 * XREFs of sub_14093C164 @ 0x14093C164
 * Callers:
 *     sub_14093AAEC @ 0x14093AAEC (sub_14093AAEC.c)
 * Callees:
 *     IoAllocateMdl @ 0x14029C7F0 (IoAllocateMdl.c)
 *     sub_140801D08 @ 0x140801D08 (sub_140801D08.c)
 *     sub_14093C640 @ 0x14093C640 (sub_14093C640.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14093C164(__int64 a1)
{
  unsigned int v1; // esi
  __int64 Pool2; // rax
  unsigned int v4; // ebx
  int v6; // ebp
  __int64 i; // r14
  __int64 v8; // r15
  void *v9; // rax
  PMDL Mdl; // rax

  v1 = dword_140D06884;
  Pool2 = ExAllocatePool2(64LL, 16LL * (unsigned int)dword_140D06884, 1886217292LL);
  v4 = 0;
  *(_QWORD *)(a1 + 888) = Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)(a1 + 880) = v1;
    v6 = 0;
    if ( !v1 )
      return v4;
    for ( i = 0LL; ; i += 16LL )
    {
      v8 = *(_QWORD *)(a1 + 888);
      v9 = (void *)sub_140801D08(0x10000uLL);
      *(_QWORD *)(i + v8) = v9;
      if ( !v9 )
        break;
      Mdl = IoAllocateMdl(v9, 0x10000u, 0, 0, 0LL);
      *(_QWORD *)(i + v8 + 8) = Mdl;
      if ( !Mdl )
        break;
      if ( ++v6 >= v1 )
        return v4;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 880) = 0;
  }
  sub_14093C640(a1);
  return (unsigned int)-1073741670;
}
