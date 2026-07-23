/*
 * XREFs of sub_1406651F0 @ 0x1406651F0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406652DC @ 0x1406652DC (sub_1406652DC.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     sub_1407A9ED0 @ 0x1407A9ED0 (sub_1407A9ED0.c)
 */

__int64 __fastcall sub_1406651F0(HANDLE Handle, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v5; // ebx
  __int64 v6; // r8
  __int64 v7; // r9
  _QWORD v9[9]; // [rsp+30h] [rbp-48h] BYREF
  PVOID Object; // [rsp+90h] [rbp+18h] BYREF

  memset(v9, 0, 0x40uLL);
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  Object = 0LL;
  v5 = ObReferenceObjectByHandle(Handle, 1u, qword_140D069D8, *((_BYTE *)KeGetCurrentThread() + 562), &Object, 0LL);
  if ( v5 >= 0 )
  {
    LODWORD(v9[6]) = 0;
    v9[0] = Object;
    if ( (*((_DWORD *)Object + 104) & 0x2000) != 0 )
    {
      LOBYTE(v6) = *((_BYTE *)KeGetCurrentThread() + 562);
      v5 = sub_1406652DC(v9, a2, v6);
    }
    else
    {
      LODWORD(v9[6]) = 65537;
      LOBYTE(v7) = *((_BYTE *)KeGetCurrentThread() + 562);
      v5 = sub_1407A9ED0(v9, a2, 0LL, v7);
      if ( v5 == -1073740029 )
        v5 = -1073741769;
    }
    ObfDereferenceObject(Object);
  }
  sub_1402F9540((__int64)KeGetCurrentThread());
  return (unsigned int)v5;
}
