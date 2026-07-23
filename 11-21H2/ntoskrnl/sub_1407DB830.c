/*
 * XREFs of sub_1407DB830 @ 0x1407DB830
 * Callers:
 *     sub_14072ACC0 @ 0x14072ACC0 (sub_14072ACC0.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_14035FB90 @ 0x14035FB90 (sub_14035FB90.c)
 *     sub_140360674 @ 0x140360674 (sub_140360674.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 *     sub_140A484F0 @ 0x140A484F0 (sub_140A484F0.c)
 */

__int64 __fastcall sub_1407DB830(_QWORD *a1, unsigned int a2, char a3, unsigned int *a4)
{
  _DWORD *v4; // rbx
  unsigned int v5; // r14d
  int v6; // r13d
  BOOL v7; // edx
  int v8; // eax
  int *v9; // r12
  _QWORD *v10; // rdi
  _DWORD *v11; // rcx
  __int64 v12; // rax
  unsigned int v13; // esi

  v4 = 0LL;
  v5 = 0;
  v6 = 1;
  while ( 1 )
  {
    ExAcquireFastMutex(&stru_140C4EB90);
    if ( !dword_140C4EB88 )
      break;
    dword_140C4EB88 = 0;
    KeReleaseGuardedMutex(&stru_140C4EB90);
    sub_14035FB90((__int64)&unk_140C4EA40);
  }
  v7 = dword_140C4EB78 < (unsigned int)dword_140C4EB7C;
  v8 = 0;
  while ( 1 )
  {
    v9 = &dword_140C4EB80;
    if ( v8 )
      v9 = &dword_140C4EB78;
    v10 = &unk_140C4EB68;
    if ( v8 )
      v10 = &unk_140C4EB58;
    v11 = (_DWORD *)*v10;
    if ( (_QWORD *)*v10 != v10 )
      break;
    if ( (unsigned int)++v8 >= 2 )
      goto LABEL_15;
  }
  v4 = (_DWORD *)*v10;
  v5 = v11[6] + 16;
  if ( v5 > a2 )
  {
    *a4 = v5;
    v13 = -1073741789;
    goto LABEL_20;
  }
  v12 = *(_QWORD *)v11;
  if ( *((_QWORD **)v11 + 1) != v10 || *(_DWORD **)(v12 + 8) != v11 )
    __fastfail(3u);
  *v10 = v12;
  *(_QWORD *)(v12 + 8) = v10;
  --*v9;
LABEL_15:
  if ( !v7 && dword_140C4EB78 < (unsigned int)dword_140C4EB7C )
  {
    sub_140A484F0(&qword_140C4E960, &qword_140CF5E00, 2LL);
    KeSetEvent(&stru_140CF5E10, 0, 0);
  }
  KeReleaseGuardedMutex(&stru_140C4EB90);
  v6 = 0;
  if ( v4 )
  {
    if ( a3 )
      ProbeForWrite(a1, a2, 8u);
    *(_OWORD *)a1 = 0LL;
    *(_DWORD *)a1 = 1048577;
    a1[1] = ((MEMORY[0xFFFFF78000000004] * HIDWORD(qword_140C54628)) << 8)
          + ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)(unsigned int)qword_140C54628) >> 24);
    memmove(a1 + 2, v4 + 4, (unsigned int)v4[6]);
    *a4 = v5;
    sub_140360674(v4);
    v13 = 0;
  }
  else
  {
    v13 = -2147483622;
  }
LABEL_20:
  if ( v6 )
    KeReleaseGuardedMutex(&stru_140C4EB90);
  return v13;
}
