/*
 * XREFs of sub_140506DF0 @ 0x140506DF0
 * Callers:
 *     sub_140A5A6CC @ 0x140A5A6CC (sub_140A5A6CC.c)
 * Callees:
 *     MmMapIoSpaceEx @ 0x140215340 (MmMapIoSpaceEx.c)
 *     MmUnmapVideoDisplay @ 0x140215660 (MmUnmapVideoDisplay.c)
 *     sub_140506CE0 @ 0x140506CE0 (sub_140506CE0.c)
 */

__int64 sub_140506DF0()
{
  SIZE_T v0; // rbp
  __int64 v1; // rdi
  __int64 v2; // rax
  __int64 v3; // rsi
  unsigned int v4; // ebx
  unsigned __int64 v5; // rax
  __int64 v6; // rax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0LL;
  v0 = 4096LL;
  if ( sub_140506CE0(&v8) < 0 || (v1 = v8) == 0 )
  {
    v4 = -1073741637;
    goto LABEL_18;
  }
  v2 = MmMapIoSpaceEx(v8, 4096LL, 0x204u);
  v3 = v2;
  if ( !v2 )
  {
LABEL_4:
    v4 = -1073741670;
LABEL_18:
    byte_140D014BA = 0;
LABEL_19:
    memset(&qword_140D01A98, 0, 0x30uLL);
    return v4;
  }
  if ( *(_DWORD *)v2 != 256 )
    goto LABEL_6;
  if ( *(_DWORD *)(v2 + 4) != 64 )
    goto LABEL_6;
  v5 = *(_QWORD *)(v2 + 8);
  if ( v5 <= 0x40 )
    goto LABEL_6;
  v0 = v5;
  MmUnmapVideoDisplay((PVOID)v3, 0x1000uLL);
  v6 = MmMapIoSpaceEx(v1, v0, 0x204u);
  v3 = v6;
  if ( !v6 )
    goto LABEL_4;
  qword_140D01A98 = v6;
  dword_140D01AA8 = *(_DWORD *)(v6 + 48);
  qword_140D01AA0 = (*(_QWORD *)(v6 + 8) - (unsigned __int64)*(unsigned int *)(v6 + 4)) >> 3;
  if ( qword_140D01AA0 < (unsigned __int64)(unsigned int)dword_140D01AA8 )
  {
LABEL_6:
    v4 = -1073741637;
LABEL_13:
    byte_140D014BA = 0;
    if ( qword_140D01AB8 )
      MmUnmapVideoDisplay(qword_140D01AB8, *(_QWORD *)(v3 + 24));
    MmUnmapVideoDisplay((PVOID)v3, v0);
    goto LABEL_19;
  }
  qword_140D01AB8 = (PVOID)MmMapIoSpaceEx(*(_QWORD *)(v6 + 16), *(_QWORD *)(v6 + 24), 0x204u);
  if ( !qword_140D01AB8 )
  {
    v4 = -1073741670;
    goto LABEL_13;
  }
  qword_140D01AB0 = *(_QWORD *)(v3 + 16);
  qword_140D01AC0 = *(_QWORD *)(v3 + 24);
  *(_DWORD *)(v3 + 32) |= 1u;
  return 0;
}
