/*
 * XREFs of ?FreeListAdd@@YAHPEAUtagDDECONV@@PEAXK@Z @ 0x1C01F99B8
 * Callers:
 *     ?xxxAdviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01F9E90 (-xxxAdviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxAdviseDataAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01FA140 (-xxxAdviseDataAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxPokeAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01FAA70 (-xxxPokeAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01FAB50 (-xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FreeListAdd(struct tagDDECONV *a1, void *a2, int a3)
{
  __int64 result; // rax
  __int64 v7; // r9

  result = Win32AllocPoolZInit(24LL, 828666709LL);
  v7 = result;
  if ( result )
  {
    *(_QWORD *)(result + 8) = a2;
    *(_DWORD *)(result + 16) = a3;
    *(_QWORD *)result = *((_QWORD *)a1 + 9);
    result = 1LL;
    *((_QWORD *)a1 + 9) = v7;
  }
  return result;
}
