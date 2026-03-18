/*
 * XREFs of ?Cleanup@UMPDSURFOBJ@@SAXPEAX@Z @ 0x1C015F730
 * Callers:
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C0123F3C (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     NtGdiEngCheckAbort @ 0x1C02B1210 (NtGdiEngCheckAbort.c)
 *     NtGdiPATHOBJ_vEnumStartClipLines @ 0x1C02B3A90 (NtGdiPATHOBJ_vEnumStartClipLines.c)
 * Callees:
 *     <none>
 */

void __fastcall UMPDSURFOBJ::Cleanup(_QWORD *a1)
{
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1[2];
  if ( v2 )
    PDEVOBJ::vUnreferencePdev(&v2, 0LL);
  if ( *((_DWORD *)a1 + 2) )
    EngUnlockSurface((SURFOBJ *)*a1);
}
