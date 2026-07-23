/*
 * XREFs of sub_1407A76C0 @ 0x1407A76C0
 * Callers:
 *     sub_1407A76A0 @ 0x1407A76A0 (sub_1407A76A0.c)
 *     sub_140864060 @ 0x140864060 (sub_140864060.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406652DC @ 0x1406652DC (sub_1406652DC.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     sub_1407A7658 @ 0x1407A7658 (sub_1407A7658.c)
 *     sub_1407A7850 @ 0x1407A7850 (sub_1407A7850.c)
 *     sub_1407A9ED0 @ 0x1407A9ED0 (sub_1407A9ED0.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall sub_1407A76C0(HANDLE Handle, __int64 a2, __int128 *a3, unsigned __int64 a4, __int64 a5)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int8 v10; // r15
  __int64 v11; // rax
  NTSTATUS v12; // esi
  PVOID v13; // rdi
  bool v15; // zf
  int v16; // eax
  PVOID Object; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v18[8]; // [rsp+40h] [rbp-58h] BYREF

  memset(v18, 0, sizeof(v18));
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  v10 = *((_BYTE *)KeGetCurrentThread() + 562);
  if ( v10 )
  {
    v11 = a4;
    if ( (a4 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( a4 >= 0x7FFFFFFF0000LL )
      v11 = 0x7FFFFFFF0000LL;
    *(_BYTE *)v11 = *(_BYTE *)v11;
    *(_BYTE *)(v11 + 39) = *(_BYTE *)(v11 + 39);
  }
  Object = 0LL;
  v12 = ObReferenceObjectByHandle(Handle, 1u, qword_140D069D8, v10, &Object, 0LL);
  if ( v12 >= 0 )
  {
    v13 = Object;
    v18[0] = Object;
    LODWORD(v18[6]) = 0;
    if ( a3
      && ((v15 = (*((_DWORD *)Object + 104) & 0x2000) == 0, memset(&v18[3], 0, 24), v15)
        ? (LODWORD(v18[6]) = 65541, v16 = sub_1407A9ED0(v18, a3, 0LL, v10))
        : (LODWORD(v18[6]) = 4, v16 = sub_1406652DC((__int64)v18, a3, v10)),
          v12 = v16,
          v16 < 0) )
    {
      ObfDereferenceObject(v13);
      if ( v12 == -1073740029 )
        v12 = -1073741769;
    }
    else
    {
      v12 = sub_1407A7850(v18, a4, a5, a2);
      sub_1407A7658((__int64)v18);
      ObfDereferenceObject(v13);
    }
  }
  sub_1402F9540((__int64)KeGetCurrentThread());
  return (unsigned int)v12;
}
