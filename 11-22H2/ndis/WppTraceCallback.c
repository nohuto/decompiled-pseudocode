/*
 * XREFs of WppTraceCallback @ 0x1C0139200
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00381E0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0038280 (memmove.c)
 *     memset @ 0x1C0038580 (memset.c)
 *     ?ndisEnableWppTracingCallback@@YAXPEBU_GUID@@_JEKE@Z @ 0x1C00B1AEC (-ndisEnableWppTracingCallback@@YAXPEBU_GUID@@_JEKE@Z.c)
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
  unsigned int v7; // ebx
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int *v13; // r14
  bool v14; // zf
  __int64 v15; // rbp
  unsigned int v16; // edi
  __int64 v17; // rax
  const void **v18; // r15
  unsigned int v19; // r14d
  unsigned int v20; // r12d
  _WORD *v21; // rcx
  _DWORD *v22; // rsi
  __int64 v23; // rcx
  __int128 v24; // xmm0
  __int64 v26; // [rsp+30h] [rbp-38h]
  int v27; // [rsp+70h] [rbp+8h] BYREF

  v6 = a6;
  v7 = 0;
  *a6 = 0;
  if ( a1 > 5u )
  {
    if ( a1 == 6 || a1 == 7 )
      return v7;
    if ( a1 == 8 )
    {
      v15 = a5;
      v16 = 0;
      v17 = a5;
      v18 = *(const void ***)(a5 + 32);
      do
      {
        v17 = *(_QWORD *)(v17 + 16);
        ++v16;
      }
      while ( v17 );
      if ( v16 <= 0x3F )
      {
        v19 = 32 * v16 + 24;
        if ( v18 )
        {
          v20 = 32 * v16 + 24;
          v19 += *(unsigned __int16 *)v18 + 2;
        }
        else
        {
          v20 = 0;
        }
        if ( v19 > (unsigned int)a3 )
        {
          v7 = -1073741789;
          if ( (unsigned int)a3 >= 4 )
          {
            *a4 = v19;
            *v6 = 4;
          }
        }
        else
        {
          memset(a4, 0, (unsigned int)a3);
          *a4 = v19;
          a4[2] = v20;
          a4[4] = v16;
          if ( v18 )
          {
            v21 = (_WORD *)((char *)a4 + v20);
            *v21 = *(_WORD *)v18;
            memmove(v21 + 1, v18[1], *(unsigned __int16 *)v18);
          }
          if ( v16 )
          {
            v22 = a4 + 10;
            v23 = v16;
            do
            {
              v24 = *(_OWORD *)*(_QWORD *)(v15 + 8);
              *v22 = 528384;
              v22 += 8;
              *((_OWORD *)v22 - 3) = v24;
              *(_BYTE *)(v15 + 41) = 0;
              *(_DWORD *)(v15 + 44) = 0;
              v15 = *(_QWORD *)(v15 + 16);
              --v23;
            }
            while ( v23 );
          }
          *v6 = v19;
        }
        return v7;
      }
      return (unsigned int)-1073741811;
    }
    return (unsigned int)-1073741808;
  }
  if ( a1 != 5 && (!a1 || a1 != 4) )
    return (unsigned int)-1073741808;
  v10 = a5;
  v27 = 0;
  LODWORD(a6) = 0;
  if ( !a5 )
    return (unsigned int)-1073741163;
  if ( (unsigned int)a3 < 0x30 )
    return (unsigned int)-1073741811;
  v11 = a4[6];
  do
  {
    v12 = *(_QWORD *)(v10 + 8);
    if ( *(_QWORD *)v12 == *((_QWORD *)a4 + 3) && *(_DWORD *)(v12 + 8) == a4[8] && *(_DWORD *)(v12 + 12) == a4[9] )
      break;
    v10 = *(_QWORD *)(v10 + 16);
  }
  while ( v10 );
  if ( !v10 )
    return (unsigned int)-1073741163;
  if ( a1 == 5 )
  {
    v13 = (unsigned int *)(v10 + 44);
    *(_BYTE *)(v10 + 41) = 0;
    *(_DWORD *)(v10 + 44) = 0;
    *(_QWORD *)(v10 + 24) = 0LL;
  }
  else
  {
    v14 = WPPTraceSuite == 2;
    v26 = *((_QWORD *)a4 + 1);
    *(_QWORD *)(v10 + 24) = v26;
    if ( v14 )
    {
      if ( !(unsigned int)((__int64 (__fastcall *)(__int64, int *, __int64, unsigned int **, unsigned int *))pfnWppQueryTraceInformation)(
                            3LL,
                            &v27,
                            4LL,
                            &a6,
                            a4) )
        *(_BYTE *)(v10 + 41) = v27;
      v13 = (unsigned int *)(v10 + 44);
      v7 = ((__int64 (__fastcall *)(__int64, __int64, __int64, unsigned int **, unsigned int *))pfnWppQueryTraceInformation)(
             2LL,
             v10 + 44,
             4LL,
             &a6,
             a4);
    }
    else
    {
      v13 = (unsigned int *)(v10 + 44);
      *(_DWORD *)(v10 + 44) = HIDWORD(v26);
      *(_BYTE *)(v10 + 41) = BYTE2(v26);
    }
  }
  LOBYTE(a3) = a1 != 5;
  ndisEnableWppTracingCallback((const struct _GUID *)v12, v11, a3, *v13, *(_BYTE *)(v10 + 41));
  return v7;
}
