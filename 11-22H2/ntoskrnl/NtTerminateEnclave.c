/*
 * XREFs of NtTerminateEnclave @ 0x140A3F910
 * Callers:
 *     <none>
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x140274970 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x140274B90 (MiObtainReferencedVadEx.c)
 *     MiTerminateEnclave @ 0x140A3E960 (MiTerminateEnclave.c)
 */

__int64 __fastcall NtTerminateEnclave(unsigned __int64 a1, int a2)
{
  __int64 *v5; // rax
  char *v6; // rdi
  unsigned int v7; // ebx
  unsigned int v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = 0;
  if ( (a2 & 0xFFFFFFFA) != 0 )
    return 3221225712LL;
  v5 = MiObtainReferencedVadEx(a1, 0, (int *)&v8);
  v6 = (char *)v5;
  if ( !v5 )
    return v8;
  if ( (v5[6] & 0x6200000) == 0x4200000
    && (*((unsigned int *)v5 + 6) | ((unsigned __int64)*((unsigned __int8 *)v5 + 32) << 32)) << 12 == a1 )
  {
    v7 = MiTerminateEnclave((__int64)KeGetCurrentThread()->ApcState.Process, (__int64)v5, a2);
  }
  else
  {
    v7 = -1073741800;
  }
  MiUnlockAndDereferenceVad(v6);
  return v7;
}
