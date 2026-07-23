/*
 * XREFs of sub_1403493B0 @ 0x1403493B0
 * Callers:
 *     sub_140216EB4 @ 0x140216EB4 (sub_140216EB4.c)
 *     PsReturnProcessPagedPoolQuota @ 0x1402331E0 (PsReturnProcessPagedPoolQuota.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x1403107C0 (PsReturnProcessNonPagedPoolQuota.c)
 *     sub_140348B40 @ 0x140348B40 (sub_140348B40.c)
 *     PsReturnPoolQuota @ 0x140367E30 (PsReturnPoolQuota.c)
 *     sub_1406FEC90 @ 0x1406FEC90 (sub_1406FEC90.c)
 *     sub_140724DC8 @ 0x140724DC8 (sub_140724DC8.c)
 *     sub_140726494 @ 0x140726494 (sub_140726494.c)
 *     sub_140733B40 @ 0x140733B40 (sub_140733B40.c)
 *     sub_1407CDBA0 @ 0x1407CDBA0 (sub_1407CDBA0.c)
 * Callees:
 *     sub_140243648 @ 0x140243648 (sub_140243648.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

signed __int64 __fastcall sub_1403493B0(char *a1, ULONG_PTR a2, signed int a3, ULONG_PTR a4)
{
  void *v5; // r12
  __int64 v6; // r14
  ULONG_PTR v9; // r15
  char v10; // r13
  volatile signed __int64 *v11; // rdi
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rdx
  ULONG_PTR BugCheckParameter4; // rcx
  unsigned __int64 v15; // r8
  signed __int64 v16; // rdx
  bool v17; // zf
  signed __int64 result; // rax
  unsigned __int64 *v19; // r9
  unsigned __int64 v20; // r8
  __int64 v21; // r8

  v5 = a1;
  v6 = (__int64)a3 << 7;
  v9 = a3;
  v10 = byte_140D07030[8 * a3];
  v11 = (volatile signed __int64 *)&a1[v6];
  _m_prefetchw(&a1[v6]);
  v12 = *(_QWORD *)&a1[v6];
  v13 = *(_QWORD *)&a1[v6 + 64];
  if ( *(_QWORD *)&a1[v6 + 80] )
  {
    if ( v13 > v12 )
    {
      v19 = (unsigned __int64 *)&qword_140C1BF08[7 * a3];
      v20 = *v19;
      if ( v13 - v12 > *v19 )
      {
        if ( v20 > a4 )
          v20 = a4;
        if ( v13 == _InterlockedCompareExchange64(v11 + 8, v13 - v20, v13)
          && _InterlockedExchangeAdd64(v11 + 9, v20) + v20 > *v19 )
        {
          v21 = _InterlockedExchange64(v11 + 9, 0LL);
          if ( v21 )
            sub_140243648(a3, (__int64)&a1[v6], v21, 0);
        }
      }
    }
  }
  BugCheckParameter4 = a4;
  while ( 1 )
  {
    do
    {
      if ( BugCheckParameter4 >= v12 )
      {
        v15 = v12;
        v16 = 0LL;
      }
      else
      {
        v15 = BugCheckParameter4;
        v16 = v12 - BugCheckParameter4;
      }
      result = _InterlockedCompareExchange64(v11, v16, v12);
      v17 = v12 == result;
      v12 = result;
    }
    while ( !v17 );
    BugCheckParameter4 -= v15;
    if ( !BugCheckParameter4 )
      break;
    if ( v5 == &unk_140C5A340 )
      KeBugCheckEx(0x21u, a2, v9, a4, BugCheckParameter4);
    v5 = &unk_140C5A340;
    v11 = (volatile signed __int64 *)((char *)&unk_140C5A340 + v6);
    _m_prefetchw((char *)&unk_140C5A340 + v6);
    v12 = *(_QWORD *)((char *)&unk_140C5A340 + v6);
  }
  if ( a2 )
  {
    if ( (v10 & 4) != 0 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 8 * v9 + 1136), -(__int64)a4);
  }
  return result;
}
