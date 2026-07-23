/*
 * XREFs of HvlpDynamicUpdateMicrocode @ 0x140941798
 * Callers:
 *     HvlUpdateMicrocodeDatabase @ 0x140941780 (HvlUpdateMicrocodeDatabase.c)
 * Callees:
 *     MmBuildMdlForNonPagedPool @ 0x14020D950 (MmBuildMdlForNonPagedPool.c)
 *     IoAllocateMdl @ 0x14022E3B0 (IoAllocateMdl.c)
 *     IoFreeMdl @ 0x1402AD270 (IoFreeMdl.c)
 *     HvcallInitInputControl @ 0x140372D90 (HvcallInitInputControl.c)
 *     HvcallFastExtended @ 0x1403CC390 (HvcallFastExtended.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     HvlpHvStatusIsInsufficientMemory @ 0x14045F8EE (HvlpHvStatusIsInsufficientMemory.c)
 *     HvlpHvToNtStatus @ 0x14045F916 (HvlpHvToNtStatus.c)
 *     HvlpHandleInsufficientMemory @ 0x140540508 (HvlpHandleInsufficientMemory.c)
 *     HvlpLogMicrocodeUpdateStatus @ 0x140941374 (HvlpLogMicrocodeUpdateStatus.c)
 */

__int64 __fastcall HvlpDynamicUpdateMicrocode(void *a1, ULONG a2, char a3)
{
  struct _MDL *Mdl; // rax
  struct _MDL *v7; // rdi
  __int16 v9; // ax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // ebx
  __int64 v14; // [rsp+30h] [rbp-58h] BYREF
  void *v15; // [rsp+40h] [rbp-48h] BYREF
  ULONG v16; // [rsp+48h] [rbp-40h]
  BOOL v17; // [rsp+58h] [rbp-30h]

  v14 = 0LL;
  Mdl = IoAllocateMdl(a1, a2, 0, 0, 0LL);
  v7 = Mdl;
  if ( !Mdl )
    return 3221225626LL;
  MmBuildMdlForNonPagedPool(Mdl);
  HvcallInitInputControl(7, &v14);
  LODWORD(v14) = v14 | 0x10000;
  v15 = a1;
  v16 = a2;
  v17 = a3 != 0;
  while ( 1 )
  {
    v9 = HvcallFastExtended(v14, (__int64)&v15, 0x20u, 0LL, 0);
    if ( !HvlpHvStatusIsInsufficientMemory(v9) )
      break;
    v13 = HvlpHandleInsufficientMemory(v11, v10, v11, v12);
    if ( v13 < 0 )
      goto LABEL_8;
  }
  v13 = HvlpHvToNtStatus(v11);
LABEL_8:
  IoFreeMdl(v7);
  if ( v13 >= 0 )
    HvlpLogMicrocodeUpdateStatus();
  return (unsigned int)v13;
}
