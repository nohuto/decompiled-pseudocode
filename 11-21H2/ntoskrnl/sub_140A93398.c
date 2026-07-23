/*
 * XREFs of sub_140A93398 @ 0x140A93398
 * Callers:
 *     MmAddVerifierSpecialThunks @ 0x140969FB0 (MmAddVerifierSpecialThunks.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402F91C0 (KeReleaseMutex.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 *     sub_140A89D58 @ 0x140A89D58 (sub_140A89D58.c)
 *     sub_140A93B28 @ 0x140A93B28 (sub_140A93B28.c)
 *     sub_140A93E2C @ 0x140A93E2C (sub_140A93E2C.c)
 *     sub_140A9415C @ 0x140A9415C (sub_140A9415C.c)
 */

__int64 __fastcall sub_140A93398(__int64 a1, void *a2, __int64 a3, __int64 a4)
{
  _QWORD *v6; // rbx
  _QWORD *v8; // rdx
  __int64 Pool2; // rax
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  _QWORD *v13; // rdx
  signed __int32 v14[10]; // [rsp+0h] [rbp-28h] BYREF
  __int64 v15; // [rsp+30h] [rbp+8h] BYREF

  v15 = a1;
  v6 = (_QWORD *)sub_140A93B28(a2);
  if ( !v6 )
    return 3221225626LL;
  sub_140A89D58();
  if ( (*(_DWORD *)(a4 + 104) & 0x2000000) != 0 )
    sub_140A9415C(v6);
  v8 = (_QWORD *)sub_140A93E2C(&v15, 1LL);
  if ( !v8 )
  {
    Pool2 = ExAllocatePool2(256LL, 0x28uLL, 0x74566D4Du);
    v8 = (_QWORD *)Pool2;
    if ( !Pool2 )
    {
      qword_140C1AD40 = 0LL;
      KeReleaseMutex(&stru_140C1AD60, 0);
      return 3221225626LL;
    }
    *(_QWORD *)(Pool2 + 16) = a1;
    v10 = (_QWORD *)(Pool2 + 24);
    v10[1] = v10;
    *v10 = v10;
    v11 = xmmword_140C1B1F0;
    if ( *((PVOID **)xmmword_140C1B1F0 + 1) != &xmmword_140C1B1F0 )
LABEL_11:
      __fastfail(3u);
    ++dword_140C1AFA4;
    *v8 = xmmword_140C1B1F0;
    v8[1] = &xmmword_140C1B1F0;
    v11[1] = v8;
    xmmword_140C1B1F0 = v8;
  }
  byte_140C1AFA0 = 1;
  _InterlockedOr(v14, 0);
  v12 = (_QWORD *)v8[4];
  v13 = v8 + 3;
  ++dword_140C1AFA8;
  if ( (_QWORD *)*v12 != v13 )
    goto LABEL_11;
  *v6 = v13;
  v6[1] = v12;
  *v12 = v6;
  v13[1] = v6;
  qword_140C1AD40 = 0LL;
  KeReleaseMutex(&stru_140C1AD60, 0);
  return 0LL;
}
