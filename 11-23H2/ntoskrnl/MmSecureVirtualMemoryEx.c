/*
 * XREFs of MmSecureVirtualMemoryEx @ 0x1407BAB90
 * Callers:
 *     PspAllocateThread @ 0x140740BC0 (PspAllocateThread.c)
 *     MmSecureVirtualMemory @ 0x1407BAB60 (MmSecureVirtualMemory.c)
 *     VmSecureBackingMemory @ 0x1409DCC80 (VmSecureBackingMemory.c)
 *     VmpLockMemoryForPin @ 0x1409DD408 (VmpLockMemoryForPin.c)
 *     AslpFileLargeMapCreate @ 0x140A59CF0 (AslpFileLargeMapCreate.c)
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x140274D20 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x140274F40 (MiObtainReferencedVadEx.c)
 *     MiSecureVad @ 0x1407BACEC (MiSecureVad.c)
 */

__int64 __fastcall MmSecureVirtualMemoryEx(unsigned __int64 a1, __int64 a2, unsigned int a3, int a4)
{
  int v6; // esi
  int v7; // ebx
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  __int64 *v11; // rax
  char *v12; // rdi
  unsigned int v13; // r9d
  int v14; // ebx
  __int64 v16[5]; // [rsp+30h] [rbp-28h] BYREF
  int v17; // [rsp+78h] [rbp+20h] BYREF

  v16[0] = 0LL;
  v6 = a2;
  v7 = a1;
  if ( (a4 & 0xFFFFFFF0) == 0 )
  {
    v8 = a1 + a2 - 1;
    v9 = v8;
    if ( !a2 )
      v9 = a1;
    if ( v9 >= a1 )
    {
      v10 = a2 + a1 - 1;
      if ( !a2 )
        v10 = a1;
      if ( v10 <= 0x7FFFFFFEFFFFLL && ((a3 - 1) & 0xFFFFFFFC) == 0 && a3 != 3 )
      {
        v11 = MiObtainReferencedVadEx(a1 & 0xFFFFFFFFFFFFF000uLL, 0, &v17);
        v12 = (char *)v11;
        if ( v11 )
        {
          if ( (v8 | 0xFFF) > (((*((unsigned int *)v11 + 7) | ((unsigned __int64)*((unsigned __int8 *)v11 + 33) << 32)) << 12) | 0xFFF)
            || (v11[6] & 0x70) == 0x30 )
          {
            MiUnlockAndDereferenceVad((char *)v11);
          }
          else
          {
            v13 = a3 | 0x80000000;
            if ( (a4 & 2) == 0 )
              v13 = a3;
            v14 = MiSecureVad((_DWORD)v11, v7, v6, v13, a4, (__int64)v16);
            MiUnlockAndDereferenceVad(v12);
            if ( v14 >= 0 )
              return v16[0] ^ qword_140C65A40 ^ (__int64)KeGetCurrentThread()->ApcState.Process;
          }
        }
      }
    }
  }
  return 0LL;
}
