/*
 * XREFs of sub_140630ACC @ 0x140630ACC
 * Callers:
 *     NtTraceEvent @ 0x1402FE320 (NtTraceEvent.c)
 * Callees:
 *     sub_14022AFF8 @ 0x14022AFF8 (sub_14022AFF8.c)
 *     sub_14022B0A0 @ 0x14022B0A0 (sub_14022B0A0.c)
 *     sub_1402ABBF0 @ 0x1402ABBF0 (sub_1402ABBF0.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1402FE2A0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 *     sub_1403884A4 @ 0x1403884A4 (sub_1403884A4.c)
 *     sub_1403B3C40 @ 0x1403B3C40 (sub_1403B3C40.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_140632EEC @ 0x140632EEC (sub_140632EEC.c)
 *     sub_14079435C @ 0x14079435C (sub_14079435C.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall sub_140630ACC(unsigned __int16 a1, void *a2, unsigned int a3, char a4)
{
  size_t v5; // r13
  int v6; // edi
  unsigned int v7; // r12d
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // rsi
  void *v11; // rax
  __int64 v12; // r9
  __int64 v14[2]; // [rsp+40h] [rbp-58h] BYREF
  __int128 v15; // [rsp+50h] [rbp-48h] BYREF
  __int64 v16; // [rsp+60h] [rbp-38h]
  char v17; // [rsp+A0h] [rbp+8h] BYREF
  void *Src; // [rsp+A8h] [rbp+10h]
  char v19; // [rsp+B8h] [rbp+20h]

  v19 = a4;
  Src = a2;
  v5 = a3;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0;
  v6 = 0;
  v14[0] = 0LL;
  v7 = a1;
  if ( a4 )
    v8 = *((_QWORD *)sub_140347DB0() + 108);
  else
    v8 = qword_140D05008;
  if ( v7 >= *(_DWORD *)(v8 + 16) )
    return (unsigned int)-1073741816;
  v9 = sub_14022AFF8(v7, v8, a4, &v17);
  v10 = v9;
  if ( (v14[1] = v9) == 0 )
    return (unsigned int)-1073741816;
  if ( (*(_DWORD *)(v9 + 12) & 0x80u) != 0 )
  {
    v6 = -1073741790;
    goto LABEL_31;
  }
  if ( a4 )
  {
    v6 = sub_14079435C(0x200u);
    if ( v6 >= 0 )
    {
      if ( (_DWORD)v5 )
      {
        if ( ((unsigned __int8)Src & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)Src + v5 > 0x7FFFFFFF0000LL || (char *)Src + v5 < Src )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      goto LABEL_21;
    }
  }
  else
  {
    if ( (*(_DWORD *)(v9 + 12) & 0x1000000) == 0 )
    {
LABEL_21:
      v11 = (void *)sub_1402ABBF0(v10, v5, (__int64)&v15, v14, 0);
      if ( v11 )
      {
        memmove(v11, Src, v5);
        if ( (*(_DWORD *)(v10 + 12) & 0x80000) != 0
          && (!(_BYTE)KdDebuggerNotPresent && !byte_140C09804 || byte_140C40504) )
        {
          sub_1403B3C40(v10, (__int64)&v15);
        }
        if ( *(_QWORD *)(v10 + 1288) )
        {
          LOBYTE(v12) = a4;
          sub_140632EEC(v10, &v15, 0LL, v12);
        }
        sub_14022B0A0((signed __int64 *)&v15);
      }
      else
      {
        v6 = sub_1403884A4(v10, v5);
      }
      goto LABEL_31;
    }
    v6 = -1073741637;
  }
LABEL_31:
  if ( v17 )
  {
    ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v8 + 448) + 8LL * v7), 1u);
    sub_1402F9540((__int64)KeGetCurrentThread());
  }
  return (unsigned int)v6;
}
