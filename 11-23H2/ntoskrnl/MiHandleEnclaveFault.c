/*
 * XREFs of MiHandleEnclaveFault @ 0x140A3CED4
 * Callers:
 *     MmAccessFault @ 0x140235440 (MmAccessFault.c)
 * Callees:
 *     MiObtainReferencedVadEx @ 0x140274F40 (MiObtainReferencedVadEx.c)
 *     MiUnlockAndDereferenceVadShared @ 0x140275700 (MiUnlockAndDereferenceVadShared.c)
 */

__int64 __fastcall MiHandleEnclaveFault(unsigned __int64 a1)
{
  __int64 *v1; // rax
  unsigned int v3; // ebx
  int v4; // [rsp+38h] [rbp+10h] BYREF

  v1 = MiObtainReferencedVadEx(a1, 2, &v4);
  if ( !v1 )
    return 3221225477LL;
  v3 = -1073741819;
  if ( (v1[6] & 0x6200000) == 0x4200000 && (v1[8] & 1) != 0 && (v1[9] & 1) != 0 )
    v3 = -1073740638;
  MiUnlockAndDereferenceVadShared((char *)v1);
  return v3;
}
