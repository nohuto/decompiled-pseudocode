/*
 * XREFs of PsspDumpThread @ 0x180061500
 * Callers:
 *     PsspCaptureThreadInformation @ 0x18006117C (PsspCaptureThreadInformation.c)
 * Callees:
 *     ZwQueryInformationThread @ 0x1800A4510 (ZwQueryInformationThread.c)
 *     ZwGetContextThread @ 0x1800A5F60 (ZwGetContextThread.c)
 *     memset @ 0x1800AAE00 (memset.c)
 */

__int64 __fastcall PsspDumpThread(__int64 *a1, __int16 a2, int a3, int a4, int a5, __int64 a6)
{
  unsigned int v6; // eax
  __int64 v7; // rbx
  unsigned int v8; // r14d
  __int16 v10; // r15
  unsigned int v12; // esi
  __int64 v13; // rbp
  __int64 result; // rax
  __int16 v15; // ax
  char v17; // [rsp+88h] [rbp+20h] BYREF

  v6 = *((_DWORD *)a1 + 3);
  v7 = *a1;
  v8 = (a4 + 15) & 0xFFFFFFF0;
  v10 = a4;
  v12 = v8 + 128;
  if ( v6 + v8 + 128 < v6 )
    return 3221225621LL;
  if ( v6 + v12 > *((_DWORD *)a1 + 2) )
    return 3221225507LL;
  memset((void *)v7, 0, 0x80uLL);
  v13 = a6;
  result = ZwQueryInformationThread(a6, 0LL, v7, 48LL, &v17);
  if ( (int)result >= 0 )
  {
    if ( (a2 & 0x400) != 0 && (int)ZwQueryInformationThread(v13, 21LL, v7 + 48, 24LL, &v17) < 0 )
      *(_WORD *)(v7 + 56) = -1;
    result = ZwQueryInformationThread(v13, 1LL, v7 + 72, 32LL, &v17);
    if ( (int)result >= 0 )
    {
      result = ZwQueryInformationThread(v13, 9LL, v7 + 104, 8LL, &v17);
      if ( (int)result >= 0 )
      {
        result = ZwQueryInformationThread(v13, 20LL, &a5, 4LL, &v17);
        if ( (int)result >= 0 )
        {
          v15 = a5 != 0;
          *(_WORD *)(v7 + 122) &= ~1u;
          *(_WORD *)(v7 + 122) |= v15;
          result = ZwQueryInformationThread(v13, 35LL, &a5, 4LL, &v17);
          if ( (int)result >= 0 )
          {
            *(_WORD *)(v7 + 120) = a5;
            if ( (a2 & 0x100) != 0 )
            {
              *(_WORD *)(v7 + 122) &= 1u;
              *(_WORD *)(v7 + 122) |= 2 * v10;
              memset((void *)(v7 + 128), 0, v8);
              *(_DWORD *)(v7 + 176) = a3;
              if ( (int)ZwGetContextThread(v13, v7 + 128) < 0 )
              {
                *(_WORD *)(v7 + 122) &= 1u;
                v12 = 128;
              }
            }
            *((_DWORD *)a1 + 3) += v12;
            ++*((_DWORD *)a1 + 4);
            *(_QWORD *)(v7 + 112) = MEMORY[0x7FFE0014];
            *a1 += v12;
            return 0LL;
          }
        }
      }
    }
  }
  return result;
}
