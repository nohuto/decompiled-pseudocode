/*
 * XREFs of MiHotPatchAllProcesses @ 0x140A37408
 * Callers:
 *     MiLoadHotPatch @ 0x140A37F60 (MiLoadHotPatch.c)
 *     MiLoadHotPatchForUserSid @ 0x140A382F8 (MiLoadHotPatchForUserSid.c)
 *     MiUnloadHotPatch @ 0x140A3BF34 (MiUnloadHotPatch.c)
 *     MiUnloadHotPatchForUserSid @ 0x140A3C080 (MiUnloadHotPatchForUserSid.c)
 * Callees:
 *     KiStackAttachProcess @ 0x14022D600 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x14022D9C0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     PsGetNextProcess @ 0x1407441B0 (PsGetNextProcess.c)
 *     MiHotPatchProcess @ 0x140A374C4 (MiHotPatchProcess.c)
 */

__int64 __fastcall MiHotPatchAllProcesses(unsigned int a1, unsigned int a2)
{
  __int64 *i; // rcx
  int v5; // eax
  __int64 *NextProcess; // rax
  __int64 *v7; // rbx
  $115DCDF994C6370D29323EAB0E0C9502 v9; // [rsp+20h] [rbp-48h] BYREF

  memset(&v9, 0, sizeof(v9));
  for ( i = 0LL; ; i = v7 )
  {
    NextProcess = PsGetNextProcess(i);
    v7 = NextProcess;
    if ( !NextProcess )
      break;
    v5 = *((_DWORD *)NextProcess + 543);
    if ( (v5 & 0x1000) == 0 && v7 != (__int64 *)PsSecureSystemProcess && (v5 & 1) == 0 && !v7[280] )
    {
      KiStackAttachProcess((_KPROCESS *)v7, 0, (__int64)&v9);
      MiHotPatchProcess(v7, a1, a2);
      KiUnstackDetachProcess(&v9);
    }
  }
  return 0LL;
}
