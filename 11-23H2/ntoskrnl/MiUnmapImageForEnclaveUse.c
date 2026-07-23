/*
 * XREFs of MiUnmapImageForEnclaveUse @ 0x140A3EC44
 * Callers:
 *     MiInitializeVsmEnclave @ 0x140A3E250 (MiInitializeVsmEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x140A3E748 (MiLoadSectionIntoVsmEnclave.c)
 * Callees:
 *     KiStackAttachProcess @ 0x14022D710 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x14022DAD0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     MiUnmapViewOfSection @ 0x14071F1C0 (MiUnmapViewOfSection.c)
 */

__int64 __fastcall MiUnmapImageForEnclaveUse(unsigned __int64 a1)
{
  $115DCDF994C6370D29323EAB0E0C9502 v3; // [rsp+20h] [rbp-48h] BYREF

  memset(&v3, 0, sizeof(v3));
  KiStackAttachProcess((_KPROCESS *)PsSecureSystemProcess, 0, (__int64)&v3);
  MiUnmapViewOfSection(PsSecureSystemProcess, a1, 0, 0);
  return KiUnstackDetachProcess(&v3);
}
