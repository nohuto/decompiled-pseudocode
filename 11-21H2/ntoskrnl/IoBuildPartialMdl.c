/*
 * XREFs of IoBuildPartialMdl @ 0x14021A4E0
 * Callers:
 *     sub_14037A8BC @ 0x14037A8BC (sub_14037A8BC.c)
 *     sub_140503D4C @ 0x140503D4C (sub_140503D4C.c)
 *     sub_140513310 @ 0x140513310 (sub_140513310.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

void __stdcall IoBuildPartialMdl(PMDL SourceMdl, PMDL TargetMdl, PVOID VirtualAddress, ULONG Length)
{
  __int64 ByteOffset; // rax
  _BYTE *StartVa; // r11
  ULONG_PTR BugCheckParameter4; // rbx
  int v8; // r10d
  unsigned int v10; // r10d
  __int16 v11; // di
  ULONG v12; // esi
  void *v13; // r9
  char *v14; // rax
  unsigned __int64 v15; // rdx
  signed __int64 v16; // r8

  ByteOffset = SourceMdl->ByteOffset;
  StartVa = SourceMdl->StartVa;
  BugCheckParameter4 = Length;
  v8 = (int)VirtualAddress;
  v10 = v8 - ByteOffset - (_DWORD)StartVa;
  v11 = (__int16)VirtualAddress;
  if ( (_DWORD)BugCheckParameter4 )
    v12 = BugCheckParameter4;
  else
    v12 = SourceMdl->ByteCount - v10;
  if ( VirtualAddress < StartVa
    || (char *)VirtualAddress - ByteOffset - StartVa > (unsigned __int64)SourceMdl->ByteCount )
  {
    KeBugCheckEx(0x12Eu, (ULONG_PTR)SourceMdl, (ULONG_PTR)TargetMdl, (ULONG_PTR)VirtualAddress, BugCheckParameter4);
  }
  v13 = (void *)((unsigned __int64)VirtualAddress & 0xFFFFFFFFFFFFF000uLL);
  TargetMdl->Process = SourceMdl->Process;
  TargetMdl->StartVa = v13;
  LODWORD(v13) = (_DWORD)v13 - LODWORD(SourceMdl->StartVa);
  TargetMdl->MdlFlags &= 8u;
  TargetMdl->ByteOffset = v11 & 0xFFF;
  TargetMdl->ByteCount = v12;
  TargetMdl->MdlFlags |= SourceMdl->MdlFlags & 0x48C5 | 0x10;
  TargetMdl->MappedSystemVa = (char *)SourceMdl->MappedSystemVa + v10;
  v14 = (char *)(&SourceMdl[1].Next + ((unsigned int)v13 >> 12));
  v15 = ((v11 & 0xFFF) + 4095LL + (unsigned __int64)v12) >> 12;
  if ( (_DWORD)v15 )
  {
    v16 = (char *)TargetMdl - v14;
    do
    {
      *(_QWORD *)&v14[v16 + 48] = *(_QWORD *)v14;
      v14 += 8;
      LODWORD(v15) = v15 - 1;
    }
    while ( (_DWORD)v15 );
  }
}
