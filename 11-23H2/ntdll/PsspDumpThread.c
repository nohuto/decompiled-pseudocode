/*
 * XREFs of PsspDumpThread @ 0x18012B4E0
 * Callers:
 *     PsspCaptureThreadInformation @ 0x18012B180 (PsspCaptureThreadInformation.c)
 * Callees:
 *     ZwQueryInformationThread @ 0x1800A1350 (ZwQueryInformationThread.c)
 *     ZwGetContextThread @ 0x1800A2DC0 (ZwGetContextThread.c)
 *     PsspInitializeContextOrExtendedContext @ 0x18012B794 (PsspInitializeContextOrExtendedContext.c)
 *     memset$thunk$772440563353939046 @ 0x180132010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall PsspDumpThread(__int64 *a1, __int16 a2, __int64 a3, int a4, int a5)
{
  unsigned int v5; // eax
  __int64 v6; // rbx
  unsigned int v7; // r14d
  __int16 v9; // r13
  unsigned int v11; // ebp
  unsigned int v12; // ecx
  __int64 result; // rax

  v5 = *((_DWORD *)a1 + 3);
  v6 = *a1;
  v7 = (a4 + 15) & 0xFFFFFFF0;
  v9 = a4;
  v11 = v7 + 128;
  v12 = v5 + v7 + 128;
  if ( v12 < v5 )
    return 3221225621LL;
  if ( v12 > *((_DWORD *)a1 + 2) )
    return 3221225507LL;
  memset_thunk_772440563353939046((void *)v6, 0, 0x80uLL);
  result = ZwQueryInformationThread();
  if ( (int)result >= 0 )
  {
    if ( (a2 & 0x400) != 0 && (int)ZwQueryInformationThread() < 0 )
      *(_WORD *)(v6 + 56) = -1;
    result = ZwQueryInformationThread();
    if ( (int)result >= 0 )
    {
      result = ZwQueryInformationThread();
      if ( (int)result >= 0 )
      {
        result = ZwQueryInformationThread();
        if ( (int)result >= 0 )
        {
          *(_WORD *)(v6 + 122) = (a5 != 0) | *(_WORD *)(v6 + 122) & 0xFFFE;
          result = ZwQueryInformationThread();
          if ( (int)result >= 0 )
          {
            *(_WORD *)(v6 + 120) = a5;
            if ( (a2 & 0x100) != 0 )
            {
              *(_WORD *)(v6 + 122) &= 1u;
              *(_WORD *)(v6 + 122) |= 2 * v9;
              PsspInitializeContextOrExtendedContext((void *)(v6 + 128), v7);
              if ( (int)ZwGetContextThread() < 0 )
              {
                *(_WORD *)(v6 + 122) &= 1u;
                v11 = 128;
              }
            }
            *((_DWORD *)a1 + 3) += v11;
            ++*((_DWORD *)a1 + 4);
            *(_QWORD *)(v6 + 112) = MEMORY[0x7FFE0014];
            *a1 += v11;
            return 0LL;
          }
        }
      }
    }
  }
  return result;
}
