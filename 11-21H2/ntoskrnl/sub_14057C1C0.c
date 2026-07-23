/*
 * XREFs of sub_14057C1C0 @ 0x14057C1C0
 * Callers:
 *     <none>
 * Callees:
 *     WheaAttemptPhysicalPageOffline @ 0x140A08CB0 (WheaAttemptPhysicalPageOffline.c)
 */

void __fastcall sub_14057C1C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r10
  __int64 v6; // r8
  int v7; // edx
  unsigned int *v8; // rcx
  __int64 v9; // rax

  v4 = *(_QWORD *)(a2 + 32);
  v6 = 3221225473LL;
  LOBYTE(a4) = *(_BYTE *)(a2 + 24) & 0x10;
  v7 = 0;
  v8 = (unsigned int *)(v4 + 128);
  if ( *(_WORD *)(v4 + 10) )
  {
    while ( 1 )
    {
      v9 = *((_QWORD *)v8 + 2) - 0x455742F98A1E1D01LL;
      if ( *((_QWORD *)v8 + 2) == 0x455742F98A1E1D01LL )
        v9 = *((_QWORD *)v8 + 3) + 0x17083CA3A1A9CC64LL;
      if ( !v9 )
        break;
      v8 += 18;
      if ( ++v7 >= (unsigned int)*(unsigned __int16 *)(v4 + 10) )
        goto LABEL_8;
    }
    LOBYTE(v6) = 1;
    LODWORD(v6) = WheaAttemptPhysicalPageOffline(*(_QWORD *)(*v8 + v4 + 48) >> 12, 0LL, v6, a4);
  }
LABEL_8:
  *(_DWORD *)(a2 + 40) = v6;
  _InterlockedDecrement((volatile signed __int32 *)(a2 + 16));
}
