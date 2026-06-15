/*
 * XREFs of ??1?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@QEAA@XZ @ 0x180033EC0
 * Callers:
 *     ??1TSSession@@QEAA@XZ @ 0x1800340EC (--1TSSession@@QEAA@XZ.c)
 *     ?TsSessionRefreshUserSid@@YAJPEAVTSSession@@@Z @ 0x180039218 (-TsSessionRefreshUserSid@@YAJPEAVTSSession@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18000D330 (--3@YAXPEAX@Z.c)
 */

void __fastcall std::unique_ptr<unsigned char [0]>::~unique_ptr<unsigned char [0]>(void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1);
}
