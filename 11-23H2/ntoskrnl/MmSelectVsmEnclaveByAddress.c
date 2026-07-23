/*
 * XREFs of MmSelectVsmEnclaveByAddress @ 0x140A3ECBC
 * Callers:
 *     PsCallEnclave @ 0x1409B6A00 (PsCallEnclave.c)
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x140274D20 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x140274F40 (MiObtainReferencedVadEx.c)
 */

__int64 __fastcall MmSelectVsmEnclaveByAddress(__int64 a1, unsigned __int64 a2, _QWORD *a3)
{
  __int64 *v4; // rax
  __int64 *v5; // rdx
  int v7; // eax
  unsigned int v8; // ebx
  unsigned int v9; // [rsp+30h] [rbp+8h] BYREF
  int v10; // [rsp+34h] [rbp+Ch]

  v10 = HIDWORD(a1);
  v9 = 0;
  v4 = MiObtainReferencedVadEx(a2, 0, (int *)&v9);
  v5 = v4;
  if ( !v4 )
    return v9;
  v7 = *((_DWORD *)v4 + 12);
  v8 = -1073741800;
  if ( (v7 & 0x200000) != 0 && (v7 & 0x2000000) == 0 && (v7 & 0x4000000) != 0 && (v5[8] & 1) == 0 )
  {
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v5[9] + 16)) <= 1 )
      __fastfail(0xEu);
    v8 = 0;
    *a3 = v5[9];
  }
  MiUnlockAndDereferenceVad((char *)v5);
  return v8;
}
