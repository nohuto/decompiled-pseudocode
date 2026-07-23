/*
 * XREFs of RtlpHpSegMgrRelease @ 0x180058608
 * Callers:
 *     RtlpHpSegMgrAllocate @ 0x1800566B4 (RtlpHpSegMgrAllocate.c)
 *     RtlpHpSegSegmentFree @ 0x180057A70 (RtlpHpSegSegmentFree.c)
 * Callees:
 *     RtlpHpFreeVA @ 0x180021224 (RtlpHpFreeVA.c)
 *     RtlpHpSegMgrCommit @ 0x180023B70 (RtlpHpSegMgrCommit.c)
 *     RtlpHpQueryVA @ 0x180058CE8 (RtlpHpQueryVA.c)
 *     RtlpHpSegMgrVaCtxFree @ 0x180120620 (RtlpHpSegMgrVaCtxFree.c)
 */

char __fastcall RtlpHpSegMgrRelease(__int64 a1, PVOID a2, int a3)
{
  ULONG_PTR v4; // rax
  int v5; // edx
  ULONG_PTR v6; // rdx
  _WORD *v8; // rbx
  unsigned int v9; // esi
  unsigned __int64 v10; // r14
  __int128 v12; // [rsp+40h] [rbp-10h] BYREF
  PVOID BaseAddress; // [rsp+80h] [rbp+30h] BYREF
  ULONG_PTR RegionSize; // [rsp+88h] [rbp+38h] BYREF
  _WORD *v15; // [rsp+98h] [rbp+48h] BYREF

  LOBYTE(v4) = *(_BYTE *)(a1 + 13) & 7;
  v5 = ~*(_DWORD *)a1;
  BaseAddress = a2;
  v6 = (unsigned int)(v5 + 1);
  RegionSize = v6;
  if ( !(_BYTE)v4 )
  {
LABEL_2:
    if ( a2 )
    {
      v12 = *(_OWORD *)(a1 + 40);
      LOBYTE(v4) = RtlpHpFreeVA(&BaseAddress, &RegionSize, 0x8000, &v12);
    }
    return v4;
  }
  if ( v6 >= 0x200000 )
    goto LABEL_9;
  if ( a3 > 0 )
    RtlpHpSegMgrCommit((int *)a1, (unsigned __int64)a2, 0, (unsigned int)v6 >> 12, -a3, 0x4000, 0);
  v4 = RtlpHpSegMgrVaCtxFree(a1, a2, &RegionSize);
  BaseAddress = (PVOID)v4;
  a2 = (PVOID)v4;
  if ( v4 )
  {
LABEL_9:
    RtlpHpQueryVA(a2, v6, &v15, 0LL);
    v8 = v15;
    v9 = 0;
    v4 = RegionSize >> 21;
    v10 = (unsigned __int64)&v15[RegionSize >> 21];
    if ( (unsigned __int64)v15 < v10 )
    {
      do
      {
        LOWORD(v4) = *v8;
        if ( (*v8 & 0x7FF) != 0 )
          LOBYTE(v4) = RtlpHpSegMgrCommit((int *)a1, (unsigned __int64)BaseAddress, v9, 512, -(v4 & 0x7FF), 0x4000, 0);
        ++v8;
        v9 += 512;
      }
      while ( (unsigned __int64)v8 < v10 );
    }
    a2 = BaseAddress;
    goto LABEL_2;
  }
  return v4;
}
