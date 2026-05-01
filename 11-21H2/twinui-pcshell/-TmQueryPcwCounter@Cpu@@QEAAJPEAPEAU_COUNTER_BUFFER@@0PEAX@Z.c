/*
 * XREFs of ?TmQueryPcwCounter@Cpu@@QEAAJPEAPEAU_COUNTER_BUFFER@@0PEAX@Z @ 0x180345738
 * Callers:
 *     ?PerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ @ 0x1803368A4 (-PerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ.c)
 *     ?InitializeCpuQuery@Cpu@@QEAAJXZ @ 0x1803455A0 (-InitializeCpuQuery@Cpu@@QEAAJXZ.c)
 * Callees:
 *     memcpy_s_1 @ 0x18022B0C0 (memcpy_s_1.c)
 *     ?TmExpandMemory@@YAJPEAPEAX_K@Z @ 0x1803456FC (-TmExpandMemory@@YAJPEAPEAX_K@Z.c)
 */

__int64 __fastcall Cpu::TmQueryPcwCounter(Cpu *this, const void *const **a2, void *const **a3, void *a4)
{
  unsigned int v4; // ebp
  struct _COUNTER_BUFFER *v5; // rcx
  void *v9; // r15
  const void *const *v10; // rcx
  NTSTATUS v11; // eax
  unsigned int v12; // ebx
  signed int v13; // eax
  const void *const *v14; // rcx
  __int64 result; // rax
  unsigned int v16; // [rsp+50h] [rbp+8h] BYREF
  int v17; // [rsp+54h] [rbp+Ch]

  v17 = HIDWORD(this);
  v16 = 0;
  v4 = 0;
  v5 = (struct _COUNTER_BUFFER *)*a2;
  if ( !*a2 || !a4 )
    return 2147942487LL;
  v9 = **a3;
  *a2 = (const void *const *)*a3;
  *a3 = (void *const *)v5;
  do
  {
    v10 = *a2;
    do
    {
      *((_DWORD *)v10 + 5) = MEMORY[0x7FFE0018];
      *((_DWORD *)v10 + 4) = MEMORY[0x7FFE0014];
    }
    while ( *((_DWORD *)v10 + 5) != MEMORY[0x7FFE001C] );
    v11 = PcwCollectData(a4, **a2, *((unsigned int *)*a2 + 2), &v16);
    if ( v11 )
    {
      v13 = RtlNtStatusToDosError(v11);
      v12 = 0;
      if ( v13 )
      {
        if ( v13 > 0 )
          v12 = (unsigned __int16)v13 | 0x80070000;
        else
          v12 = v13;
      }
    }
    else
    {
      v12 = 0;
    }
    v14 = *a2;
    do
    {
      *((_DWORD *)v14 + 7) = MEMORY[0x7FFE0018];
      *((_DWORD *)v14 + 6) = MEMORY[0x7FFE0014];
    }
    while ( *((_DWORD *)v14 + 7) != MEMORY[0x7FFE001C] );
    if ( v12 != -2147024662 )
      break;
    result = TmExpandMemory((void **)*a2, v16);
    if ( (int)result < 0 )
      return result;
    ++v4;
    *((_DWORD *)*a2 + 2) = v16;
  }
  while ( v4 < 0xA );
  if ( !v9 )
  {
    result = TmExpandMemory((void **)*a3, *((unsigned int *)*a2 + 2));
    v12 = result;
    if ( (int)result < 0 )
      return result;
    *((_DWORD *)*a3 + 2) = *((_DWORD *)*a2 + 2);
    memcpy_s_1(**a3, *((unsigned int *)*a3 + 2), **a2, *((unsigned int *)*a2 + 2));
  }
  return v12;
}
