/*
 * XREFs of MmVerifierTrimMemory @ 0x140AE80F0
 * Callers:
 *     ViKeIrqlLogAndTrimMemory @ 0x140AD5DC8 (ViKeIrqlLogAndTrimMemory.c)
 * Callees:
 *     RtlpGetStackLimits @ 0x14022EA70 (RtlpGetStackLimits.c)
 *     KeGetCurrentStackPointer @ 0x14041F4C0 (KeGetCurrentStackPointer.c)
 *     MiTrimAllSystemPagableMemory @ 0x1406357E0 (MiTrimAllSystemPagableMemory.c)
 */

char *MmVerifierTrimMemory()
{
  char *result; // rax
  char v1; // bl
  BOOL v2; // edi
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0LL;
  v4 = 0LL;
  result = (char *)MEMORY[0xFFFFF78000000320];
  if ( (MEMORY[0xFFFFF78000000320] & MmVerifierTrimFrequency) == 0 )
  {
    result = (char *)RtlpGetStackLimits((__int64)&v3, (__int64)&v4);
    if ( (_BYTE)result )
    {
      result = &KeGetCurrentStackPointer()[-v3];
      if ( (unsigned __int64)result > 0x1A30 )
      {
        ++dword_140C13940;
        v1 = ViTrimSpaces;
        v2 = ViTrimSpaces < 0;
        if ( (ViTrimSpaces & 1) != 0 )
        {
          result = (char *)MiTrimAllSystemPagableMemory(0, ViTrimSpaces < 0);
          if ( (_DWORD)result )
            ++dword_140C13944;
        }
        if ( (v1 & 2) != 0 )
        {
          result = (char *)MiTrimAllSystemPagableMemory(1, v2);
          if ( (_DWORD)result )
            ++dword_140C13960;
        }
        if ( (v1 & 4) != 0 )
        {
          result = (char *)MiTrimAllSystemPagableMemory(2, v2);
          if ( (_DWORD)result )
            ++dword_140C1399C;
        }
      }
    }
  }
  return result;
}
