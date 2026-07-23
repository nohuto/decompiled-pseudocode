/*
 * XREFs of sub_1409ACDC0 @ 0x1409ACDC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140298720 @ 0x140298720 (sub_140298720.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     DnsPrint_RpcZoneInfo_0 @ 0x140701B64 (DnsPrint_RpcZoneInfo_0.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall sub_1409ACDC0(
        _QWORD *a1,
        int a2,
        __int64 a3,
        ULONG_PTR a4,
        unsigned __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  _BYTE *v12; // rbx
  __int64 result; // rax
  char v14; // dl
  __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  _OWORD *v17; // rax
  __int64 v18; // rcx
  void *v19; // r10
  __int128 v20; // xmm0
  __int64 v21; // rcx
  __int16 v22; // ax
  bool v23; // zf
  char v24; // al
  unsigned int v25; // eax
  _BYTE *v26; // [rsp+78h] [rbp-5B0h]
  __int64 v27[10]; // [rsp+90h] [rbp-598h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+E0h] [rbp-548h]
  struct _KTHREAD *v29; // [rsp+E8h] [rbp-540h]
  _BYTE v30[17]; // [rsp+F0h] [rbp-538h] BYREF
  __int64 v31; // [rsp+101h] [rbp-527h]
  _BYTE v32[152]; // [rsp+110h] [rbp-518h] BYREF
  unsigned __int64 v33; // [rsp+1A8h] [rbp-480h]

  v12 = (_BYTE *)a6;
  memset(v27, 0, 0x48uLL);
  *(_OWORD *)&v30[1] = 0LL;
  v31 = 0LL;
  if ( !a6 )
    return 3221225485LL;
  CurrentThread = KeGetCurrentThread();
  v14 = *((_BYTE *)CurrentThread + 562);
  if ( v14 )
  {
    v15 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v15 = (__int64)a1;
    *(_QWORD *)v15 = *(_QWORD *)v15;
    if ( a5 )
    {
      if ( (a5 & 3) != 0 )
        goto LABEL_16;
      v16 = 0x7FFFFFFF0000LL;
      if ( a5 < 0x7FFFFFFF0000LL )
        v16 = a5;
      *(_BYTE *)v16 = *(_BYTE *)v16;
      *(_BYTE *)(v16 + 15) = *(_BYTE *)(v16 + 15);
    }
    if ( (a6 & 0xF) == 0 )
    {
      v17 = v32;
      v18 = 9LL;
      do
      {
        *v17 = *(_OWORD *)v12;
        v17[1] = *((_OWORD *)v12 + 1);
        v17[2] = *((_OWORD *)v12 + 2);
        v17[3] = *((_OWORD *)v12 + 3);
        v17[4] = *((_OWORD *)v12 + 4);
        v17[5] = *((_OWORD *)v12 + 5);
        v17[6] = *((_OWORD *)v12 + 6);
        v17 += 8;
        *(v17 - 1) = *((_OWORD *)v12 + 7);
        v12 += 128;
        --v18;
      }
      while ( v18 );
      *v17 = *(_OWORD *)v12;
      v17[1] = *((_OWORD *)v12 + 1);
      v17[2] = *((_OWORD *)v12 + 2);
      v17[3] = *((_OWORD *)v12 + 3);
      v17[4] = *((_OWORD *)v12 + 4);
      v26 = v32;
      v33 = (v33 & 0xFFFFFFFFFFFFFFF0uLL) - 40;
      if ( (a7 & 3) == 0 )
      {
        v12 = v32;
        goto LABEL_18;
      }
    }
LABEL_16:
    ExRaiseDatatypeMisalignment();
  }
  v26 = (_BYTE *)a6;
LABEL_18:
  result = sub_140298720((unsigned int *)v12 + 12, v14);
  if ( (int)result >= 0 )
  {
    *((_DWORD *)v12 + 12) &= 0x10001Fu;
    *a1 = v19;
    v20 = *(_OWORD *)a7;
    *(_OWORD *)v27 = *(_OWORD *)a7;
    if ( *(_OWORD *)v27 == __PAIR128__((unsigned __int64)v19, 0LL) )
    {
      *(_OWORD *)v27 = v20;
      *(_OWORD *)&v27[2] = *(_OWORD *)(a7 + 16);
      v27[4] = *(_QWORD *)(a7 + 32);
      if ( (void *)v27[4] == v19 )
      {
        return 3221225485LL;
      }
      else
      {
        v29 = KeGetCurrentThread();
        v21 = *((_QWORD *)v29 + 23);
        if ( *(void **)(v21 + 1408) != v19 )
        {
          v22 = *(_WORD *)(v21 + 2412);
          if ( v22 == 332 || (v23 = v22 == 452, v24 = (char)v19, v23) )
            v24 = 1;
          if ( v24 )
          {
            v27[7] = v27[4];
            *(_OWORD *)&v27[5] = *(_OWORD *)&v27[2];
            v27[4] = (__int64)v19;
            *(_OWORD *)&v27[2] = 0LL;
          }
        }
        v30[0] = 1;
        v25 = (unsigned int)v19;
        LOBYTE(v25) = a8 == 1;
        return DnsPrint_RpcZoneInfo_0(
                 (__int64)a1,
                 a2,
                 a3,
                 a4,
                 v19,
                 (__int64)v19,
                 a5,
                 (__int64)v26,
                 v27,
                 v25,
                 (__int64)v19,
                 (__int64)v19,
                 (__int64)v30);
      }
    }
    else
    {
      return 3221225659LL;
    }
  }
  return result;
}
