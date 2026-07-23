/*
 * XREFs of RtlpHpSegMgrRelease @ 0x180065644
 * Callers:
 *     RtlpHpSegMgrAllocate @ 0x18004ACC0 (RtlpHpSegMgrAllocate.c)
 *     RtlpHpSegSegmentFree @ 0x180065548 (RtlpHpSegSegmentFree.c)
 * Callees:
 *     RtlpHpSegMgrCommit @ 0x180047080 (RtlpHpSegMgrCommit.c)
 *     RtlpHpFreeVA @ 0x180047764 (RtlpHpFreeVA.c)
 *     RtlpHpQueryVA @ 0x18006462C (RtlpHpQueryVA.c)
 *     RtlpHpSegMgrVaCtxFree @ 0x180123B28 (RtlpHpSegMgrVaCtxFree.c)
 */

char __fastcall RtlpHpSegMgrRelease(__int64 a1, __int64 a2, int a3)
{
  signed __int64 v4; // rbx
  ULONG_PTR v5; // rcx
  ULONG_PTR v6; // rax
  _WORD *v7; // rbx
  unsigned int v8; // esi
  unsigned __int64 v9; // r14
  __int128 v11; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int64 v12; // [rsp+80h] [rbp+30h] BYREF
  ULONG_PTR v13; // [rsp+88h] [rbp+38h] BYREF
  _WORD *v14; // [rsp+98h] [rbp+48h] BYREF

  v12 = a2;
  v4 = a2;
  v5 = (unsigned int)-*(_DWORD *)a1;
  v13 = v5;
  LOBYTE(v6) = *(_BYTE *)(a1 + 13) & 7;
  if ( !(_BYTE)v6 )
  {
LABEL_2:
    if ( v4 )
    {
      v11 = *(_OWORD *)(a1 + 40);
      LOBYTE(v6) = RtlpHpFreeVA((PVOID *)&v12, &v13, 0x8000, &v11);
    }
    return v6;
  }
  if ( v5 >= 0x200000 )
    goto LABEL_9;
  if ( a3 > 0 )
    RtlpHpSegMgrCommit((int *)a1, a2, 0, (unsigned int)v5 >> 12, -a3, 0x4000, 0);
  v6 = RtlpHpSegMgrVaCtxFree(a1, v4, &v13);
  v12 = v6;
  v4 = v6;
  if ( v6 )
  {
LABEL_9:
    RtlpHpQueryVA(v4, a2, &v14, 0LL);
    v7 = v14;
    v8 = 0;
    v6 = v13 >> 21;
    v9 = (unsigned __int64)&v14[v13 >> 21];
    if ( (unsigned __int64)v14 < v9 )
    {
      do
      {
        LOWORD(v6) = *v7;
        if ( (*v7 & 0x7FF) != 0 )
          LOBYTE(v6) = RtlpHpSegMgrCommit((int *)a1, v12, v8, 512, -(v6 & 0x7FF), 0x4000, 0);
        ++v7;
        v8 += 512;
      }
      while ( (unsigned __int64)v7 < v9 );
    }
    v4 = v12;
    goto LABEL_2;
  }
  return v6;
}
