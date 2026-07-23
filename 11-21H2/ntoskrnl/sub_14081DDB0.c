/*
 * XREFs of sub_14081DDB0 @ 0x14081DDB0
 * Callers:
 *     sub_1405BFED0 @ 0x1405BFED0 (sub_1405BFED0.c)
 *     sub_140968388 @ 0x140968388 (sub_140968388.c)
 *     sub_140969850 @ 0x140969850 (sub_140969850.c)
 *     sub_140AF47DC @ 0x140AF47DC (sub_140AF47DC.c)
 * Callees:
 *     sub_14023FCF0 @ 0x14023FCF0 (sub_14023FCF0.c)
 *     sub_14023FF18 @ 0x14023FF18 (sub_14023FF18.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

__int64 __fastcall sub_14081DDB0(ULONG_PTR *a1, int a2)
{
  unsigned int *v2; // r13
  unsigned __int64 v3; // r14
  _DWORD *v5; // r15
  unsigned __int64 v6; // r12
  __int64 v7; // r9
  unsigned int *v8; // rdi
  unsigned int v9; // ebx
  volatile signed __int64 *v10; // rbp
  unsigned int *v11; // rdx
  _QWORD *v12; // r8
  _QWORD *v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r12
  _QWORD *v16; // rdx
  __int64 v17; // r8
  bool v18; // zf
  __int64 result; // rax
  unsigned int *v20; // rax
  unsigned int *v21; // rdx
  __int64 *v22; // r8
  __int64 v23; // r11
  unsigned __int64 v24; // rcx
  __int64 v25; // r10
  _QWORD *v26; // r9
  __int16 v27; // [rsp+20h] [rbp-88h]
  unsigned int v28; // [rsp+24h] [rbp-84h]
  unsigned __int64 v29; // [rsp+28h] [rbp-80h]
  unsigned __int64 v30; // [rsp+28h] [rbp-80h]
  int v31; // [rsp+30h] [rbp-78h]
  unsigned int v32; // [rsp+38h] [rbp-70h]
  struct _KTHREAD *CurrentThread; // [rsp+40h] [rbp-68h]
  unsigned __int64 v34; // [rsp+48h] [rbp-60h]
  unsigned int *v35; // [rsp+50h] [rbp-58h]
  _OWORD v36[2]; // [rsp+58h] [rbp-50h] BYREF
  __int64 v37; // [rsp+78h] [rbp-30h] BYREF

  v2 = (unsigned int *)a1[4];
  v3 = -1LL;
  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  v27 = *(_WORD *)a1;
  v31 = a2;
  v6 = 0LL;
  v29 = 0LL;
  v35 = v2;
  if ( v2 )
  {
    v7 = *v2;
    v32 = *v2;
    v8 = &v2[4 * v7 + 4];
    if ( (_DWORD)v7 )
    {
      v3 = *((_QWORD *)v2 + 2);
      v6 = *(_QWORD *)&v2[4 * (unsigned int)(v7 - 1) + 6] + *(_QWORD *)&v2[4 * (unsigned int)(v7 - 1) + 4] - 1LL;
      v29 = v6;
    }
    a1[2088] = v3;
    a1[2089] = v6;
  }
  else
  {
    LODWORD(v7) = 0;
    v8 = 0LL;
    v32 = 0;
    if ( !a2 )
    {
      v20 = (unsigned int *)sub_14023FF18((__int64)&StartContext, 1u);
      LODWORD(v7) = 0;
      a2 = v31;
      v5 = v20;
      v8 = &v20[4 * *v20 + 4];
    }
  }
  v9 = 0;
  if ( word_140D05000 )
  {
    v10 = (volatile signed __int64 *)(a1[2] + 22800);
    do
    {
      memset(v36, 0, sizeof(v36));
      if ( a2 )
      {
        if ( (_DWORD)v7 )
        {
          v11 = v8 + 1;
          v7 = (unsigned int)v7;
          v12 = v2 + 6;
          do
          {
            if ( *(v11 - 1) == v9 )
              *((_QWORD *)v36 + *v11) += *v12;
            v12 += 2;
            v11 += 2;
            --v7;
          }
          while ( v7 );
        }
      }
      else if ( *v5 )
      {
        v21 = v8;
        v22 = (__int64 *)(v5 + 6);
        v23 = (unsigned int)*v5;
        do
        {
          if ( *v21 == v9 )
          {
            v24 = *(v22 - 1);
            v25 = *v22;
            if ( *v22 )
            {
              v28 = v21[1];
              v26 = (_QWORD *)(48 * v24 - 0x21FFFFFFFFD8LL);
              do
              {
                v34 = v3;
                v30 = v3;
                if ( ((*v26 >> 43) & 0x3FF) == v27 )
                {
                  ++*((_QWORD *)v36 + v28);
                  v3 = v24;
                  if ( v30 <= v24 )
                    v3 = v34;
                  if ( v6 < v24 )
                    v6 = v24;
                }
                ++v24;
                v26 += 6;
                --v25;
              }
              while ( v25 );
              v29 = v6;
            }
          }
          v21 += 2;
          v22 += 2;
          --v23;
        }
        while ( v23 );
        v2 = v35;
      }
      if ( a1 == &StartContext && dword_140D05004 )
      {
        v13 = v36;
        v14 = (unsigned int)dword_140D05004;
        do
        {
          *v13 -= *(_QWORD *)((char *)v13 + (_QWORD)qword_140C52150 + 32LL * v9 - (_QWORD)v36);
          ++v13;
          --v14;
        }
        while ( v14 );
      }
      v15 = 0LL;
      --*((_WORD *)CurrentThread + 243);
      ExAcquirePushLockExclusiveEx((ULONG_PTR)v10, 0LL);
      if ( dword_140D05004 )
      {
        v16 = v36;
        v17 = (unsigned int)dword_140D05004;
        do
        {
          v15 += *v16;
          *(_QWORD *)((char *)v16 + (char *)v10 - (char *)&v37 - 192) = *v16;
          ++v16;
          --v17;
        }
        while ( v17 );
      }
      *((_QWORD *)v10 - 24) = v15;
      if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v10);
      sub_1402AFC00((ULONG_PTR)v10);
      v18 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
      if ( v18 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
        KiCheckForKernelApcDelivery();
      v10 += 3064;
      v6 = v29;
      ++v9;
      LODWORD(v7) = v32;
      a2 = v31;
    }
    while ( v9 < (unsigned __int16)word_140D05000 );
  }
  a1[2089] = v6;
  result = 0LL;
  if ( v3 <= v6 )
    result = v3;
  a1[2088] = result;
  if ( v5 )
    return sub_14023FCF0((__int64)v5);
  return result;
}
