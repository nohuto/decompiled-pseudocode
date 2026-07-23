/*
 * XREFs of MiCreateEnclave @ 0x140A3D91C
 * Callers:
 *     NtCreateEnclave @ 0x140A3ED60 (NtCreateEnclave.c)
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x140274D20 (MiUnlockAndDereferenceVad.c)
 *     MiDeleteVad @ 0x1406FA630 (MiDeleteVad.c)
 *     MiAllocateEnclaveVad @ 0x140A3CF38 (MiAllocateEnclaveVad.c)
 *     MiCreateHardwareEnclave @ 0x140A3DA38 (MiCreateHardwareEnclave.c)
 *     MiCreateVsmEnclave @ 0x140A3DD70 (MiCreateVsmEnclave.c)
 */

__int64 __fastcall MiCreateEnclave(
        int a1,
        unsigned __int64 *a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        int a6,
        __int64 a7,
        int a8,
        __int64 a9)
{
  int EnclaveVad; // eax
  char *v12; // rbx
  int v13; // edi
  int VsmEnclave; // eax
  PVOID P[3]; // [rsp+30h] [rbp-18h] BYREF

  P[0] = 0LL;
  EnclaveVad = MiAllocateEnclaveVad(a6, a4, *a2, a3, (__int64 *)P);
  v12 = (char *)P[0];
  v13 = EnclaveVad;
  if ( EnclaveVad >= 0 )
  {
    *a2 = (*((unsigned int *)P[0] + 6) | ((unsigned __int64)*((unsigned __int8 *)P[0] + 32) << 32)) << 12;
    if ( (unsigned int)(a6 - 16) <= 1 )
    {
      *((_QWORD *)v12 + 11) = v12 + 80;
      *((_QWORD *)v12 + 10) = v12 + 80;
      VsmEnclave = MiCreateVsmEnclave(a1, (_DWORD)v12, a6, a7, a8);
    }
    else
    {
      if ( a8 != 4096 )
      {
        v13 = -1073741811;
        goto LABEL_8;
      }
      VsmEnclave = MiCreateHardwareEnclave(a1, (_DWORD)v12, a5, a7, a9);
    }
    v13 = VsmEnclave;
  }
LABEL_8:
  if ( v12 )
  {
    if ( v13 >= 0 )
      MiUnlockAndDereferenceVad(v12);
    else
      MiDeleteVad((unsigned int *)v12, 0LL, 0);
  }
  return (unsigned int)v13;
}
