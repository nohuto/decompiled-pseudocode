/*
 * XREFs of IoWithinStackLimits @ 0x140218AE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LOGICAL __stdcall IoWithinStackLimits(ULONG_PTR RegionStart, SIZE_T RegionSize)
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v3; // r9
  ULONG_PTR v5; // rdx
  _QWORD *v6; // rcx
  ULONG64 v8; // rcx
  __int128 v9; // [rsp+0h] [rbp-48h]

  CurrentThread = KeGetCurrentThread();
  v3 = RegionStart + RegionSize;
  if ( (KeGetPcr()[36].Unused0[2] & 1) == 0 || CurrentThread == *((struct _KTHREAD **)KeGetCurrentPrcb() + 3) )
  {
    v5 = *((_QWORD *)CurrentThread + 6);
    *(_QWORD *)&v9 = *((_QWORD *)CurrentThread + 7);
    v6 = (_QWORD *)*((_QWORD *)CurrentThread + 5);
    while ( RegionStart < v5 || v3 > (unsigned __int64)v9 )
    {
      if ( !v6[2] )
        return 0;
      v9 = *((_OWORD *)v6 + 1);
      v5 = v6[3];
      v6 = (_QWORD *)v6[5];
    }
  }
  else
  {
    v8 = KeGetPcr()[36].Unused[0] + 80;
    if ( v3 > v8 || RegionStart < v8 - (unsigned int)dword_140D05050 )
      return 0;
  }
  return 1;
}
