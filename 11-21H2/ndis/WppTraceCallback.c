/*
 * XREFs of WppTraceCallback @ 0x1C012D410
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0036080 (memmove.c)
 *     memset @ 0x1C0036340 (memset.c)
 *     ?ndisEnableWppTracingCallback@@YAXPEBU_GUID@@_JEKE@Z @ 0x1C00AC0DC (-ndisEnableWppTracingCallback@@YAXPEBU_GUID@@_JEKE@Z.c)
 */

__int64 __fastcall WppTraceCallback(
        unsigned __int8 a1,
        __int64 a2,
        __int64 a3,
        unsigned int *a4,
        __int64 a5,
        unsigned int *a6)
{
  unsigned int *v6; // r13
  unsigned int v7; // edi
  __int64 v10; // rsi
  unsigned int v11; // ebx
  __int64 v12; // rax
  const void **v13; // r15
  unsigned int v14; // ebp
  unsigned int v15; // r12d
  _WORD *v16; // rcx
  _DWORD *v17; // r14
  __int64 v18; // rcx
  __int128 v19; // xmm0
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned int v23; // r9d
  bool v24; // zf
  unsigned int v25; // eax
  unsigned int v27[2]; // [rsp+30h] [rbp-38h]
  int v28; // [rsp+70h] [rbp+8h] BYREF

  v6 = a6;
  v7 = 0;
  *a6 = 0;
  if ( a1 <= 3u )
    return (unsigned int)-1073741808;
  if ( a1 > 5u )
  {
    if ( a1 <= 7u )
      return v7;
    if ( a1 == 8 )
    {
      v10 = a5;
      v11 = 0;
      v12 = a5;
      v13 = *(const void ***)(a5 + 32);
      do
      {
        v12 = *(_QWORD *)(v12 + 16);
        ++v11;
      }
      while ( v12 );
      if ( v11 > 0x3F )
        return (unsigned int)-1073741811;
      v14 = 32 * v11 + 24;
      if ( v13 )
      {
        v15 = 32 * v11 + 24;
        v14 += *(unsigned __int16 *)v13 + 2;
      }
      else
      {
        v15 = 0;
      }
      if ( v14 > (unsigned int)a3 )
      {
        v7 = -1073741789;
        if ( (unsigned int)a3 >= 4 )
        {
          *a4 = v14;
          *v6 = 4;
        }
      }
      else
      {
        memset(a4, 0, (unsigned int)a3);
        *a4 = v14;
        a4[2] = v15;
        a4[4] = v11;
        if ( v13 )
        {
          v16 = (_WORD *)((char *)a4 + v15);
          *v16 = *(_WORD *)v13;
          memmove(v16 + 1, v13[1], *(unsigned __int16 *)v13);
        }
        if ( v11 )
        {
          v17 = a4 + 10;
          v18 = v11;
          do
          {
            v19 = *(_OWORD *)*(_QWORD *)(v10 + 8);
            *v17 = 528384;
            v17 += 8;
            *((_OWORD *)v17 - 3) = v19;
            *(_BYTE *)(v10 + 41) = 0;
            *(_DWORD *)(v10 + 44) = 0;
            v10 = *(_QWORD *)(v10 + 16);
            --v18;
          }
          while ( v18 );
        }
        *v6 = v14;
      }
      return v7;
    }
    return (unsigned int)-1073741808;
  }
  v20 = a5;
  v28 = 0;
  LODWORD(a6) = 0;
  if ( !a5 )
    return (unsigned int)-1073741163;
  if ( (unsigned int)a3 < 0x30 )
    return (unsigned int)-1073741811;
  v21 = a4[6];
  do
  {
    v22 = *(_QWORD *)(v20 + 8);
    if ( *(_QWORD *)v22 == *((_QWORD *)a4 + 3) && *(_DWORD *)(v22 + 8) == a4[8] && *(_DWORD *)(v22 + 12) == a4[9] )
      break;
    v20 = *(_QWORD *)(v20 + 16);
  }
  while ( v20 );
  if ( !v20 )
    return (unsigned int)-1073741163;
  if ( a1 == 5 )
  {
    *(_DWORD *)(v20 + 44) = 0;
    v23 = 0;
    *(_QWORD *)(v20 + 24) = 0LL;
    *(_BYTE *)(v20 + 41) = 0;
  }
  else
  {
    v24 = WPPTraceSuite == 2;
    *(_QWORD *)v27 = *((_QWORD *)a4 + 1);
    *(_QWORD *)(v20 + 24) = *(_QWORD *)v27;
    if ( v24 )
    {
      if ( !(unsigned int)((__int64 (__fastcall *)(__int64, int *, __int64, unsigned int **, unsigned int *))pfnWppQueryTraceInformation)(
                            3LL,
                            &v28,
                            4LL,
                            &a6,
                            a4) )
        *(_BYTE *)(v20 + 41) = v28;
      v25 = ((__int64 (__fastcall *)(__int64, __int64, __int64, unsigned int **, unsigned int *))pfnWppQueryTraceInformation)(
              2LL,
              v20 + 44,
              4LL,
              &a6,
              a4);
      v23 = *(_DWORD *)(v20 + 44);
      v7 = v25;
    }
    else
    {
      v23 = v27[1];
      *(_BYTE *)(v20 + 41) = BYTE2(v27[0]);
      *(_DWORD *)(v20 + 44) = v27[1];
    }
  }
  LOBYTE(a3) = a1 != 5;
  ndisEnableWppTracingCallback((const struct _GUID *)v22, v21, a3, v23, *(_BYTE *)(v20 + 41));
  return v7;
}
