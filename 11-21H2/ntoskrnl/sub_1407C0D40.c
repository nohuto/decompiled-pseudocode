/*
 * XREFs of sub_1407C0D40 @ 0x1407C0D40
 * Callers:
 *     <none>
 * Callees:
 *     sub_14022EA30 @ 0x14022EA30 (sub_14022EA30.c)
 *     sub_14029EF4C @ 0x14029EF4C (sub_14029EF4C.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     InitializeListHead @ 0x1402AD320 (InitializeListHead.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_140346C60 @ 0x140346C60 (sub_140346C60.c)
 *     sub_140347770 @ 0x140347770 (sub_140347770.c)
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 *     sub_140359548 @ 0x140359548 (sub_140359548.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1406BBAD8 @ 0x1406BBAD8 (sub_1406BBAD8.c)
 *     sub_1407C0854 @ 0x1407C0854 (sub_1407C0854.c)
 *     sub_1407C0940 @ 0x1407C0940 (sub_1407C0940.c)
 *     sub_1407C09E0 @ 0x1407C09E0 (sub_1407C09E0.c)
 *     sub_140AB4260 @ 0x140AB4260 (sub_140AB4260.c)
 *     sub_140AB4300 @ 0x140AB4300 (sub_140AB4300.c)
 *     sub_140AB4370 @ 0x140AB4370 (sub_140AB4370.c)
 *     sub_140AB4550 @ 0x140AB4550 (sub_140AB4550.c)
 *     sub_140AB4580 @ 0x140AB4580 (sub_140AB4580.c)
 */

__int64 __fastcall sub_1407C0D40(__int64 a1)
{
  bool v1; // r12
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  unsigned int v5; // esi
  __int64 v6; // rax
  __int64 v7; // rbx
  unsigned __int8 CurrentIrql; // di
  _BYTE *v9; // r9
  int v10; // eax
  unsigned __int64 v11; // rbx
  signed __int32 v12; // eax
  unsigned int v13; // ebp
  char *v14; // r14
  ULONG_PTR *v15; // r13
  unsigned int v16; // r15d
  ULONG_PTR *v17; // rdi
  ULONG_PTR v18; // rbx
  __int64 v19; // rbx
  ULONG_PTR v20; // rax
  __int64 v21; // rdx
  ULONG_PTR v22; // rbx
  ULONG_PTR v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v29; // r8
  _QWORD *v30; // rdx
  __int64 v31; // rax
  __int64 v32; // r8
  unsigned __int8 v33; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v35; // r9
  int v36; // eax
  bool v37; // zf
  _LIST_ENTRY ListHead; // [rsp+20h] [rbp-E8h] BYREF
  __int128 v39; // [rsp+30h] [rbp-D8h] BYREF
  _OWORD v40[3]; // [rsp+40h] [rbp-C8h] BYREF
  char v41; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v42[88]; // [rsp+78h] [rbp-90h] BYREF

  v1 = a1 != 0;
  ListHead = 0LL;
  memset(v40, 0, sizeof(v40));
  v39 = 0LL;
  sub_140347770((__int64)&v39);
  sub_140AB4550(v40);
  InitializeListHead(&ListHead);
  sub_140AB4370(v3, v2, v4);
  do
  {
    if ( !v1 )
      _InterlockedExchange(&dword_140CE1FC0, 2);
    do
    {
      v5 = 0;
      v6 = sub_140347C10((__int64)&stru_140C49340, 0LL);
      v7 = v6;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(1uLL);
      if ( !_interlockedbittestandreset((volatile signed __int32 *)&stru_140C49340, 0) )
        sub_14029EF4C((__int64)&stru_140C49340, v6);
      if ( v7 )
        *(_BYTE *)(v7 + 18) = 1;
      v9 = v42;
      *(&stru_140C49340 + 1) = (ULONG_PTR)KeGetCurrentThread();
      *((_DWORD *)&stru_140C49340 + 12) = CurrentIrql;
      do
      {
        v10 = dword_140C4E8B0;
        if ( dword_140C4E8B0 <= (unsigned int)dword_140C0C618 && (!v1 || !dword_140C4E8B0) )
          break;
        v29 = qword_140C49328 - 224;
        v30 = *(_QWORD **)(qword_140C49328 + 8);
        if ( *(__int64 **)qword_140C49328 != &qword_140C49320 || *v30 != qword_140C49328 )
          __fastfail(3u);
        qword_140C49328 = *(_QWORD *)(qword_140C49328 + 8);
        *v30 = &qword_140C49320;
        --qword_140D3D2C8;
        dword_140C4E8B0 = v10 - 1;
        *((_QWORD *)v9 - 1) = *(_QWORD *)(v29 + 32);
        *(_QWORD *)v9 = v29;
        v31 = v5++;
        v42[24 * v31 + 8] = 0;
        *((_DWORD *)v9 + 3) = *(_DWORD *)(v29 + 16);
        v9 += 24;
        *(_BYTE *)(v29 + 64) |= 4u;
        *(_QWORD *)(v29 + 224) = &v42[24 * v31 + 8];
      }
      while ( v5 < 4 );
      v11 = *((unsigned __int8 *)&stru_140C49340 + 48);
      *(&stru_140C49340 + 1) = 0LL;
      v12 = _InterlockedCompareExchange((volatile signed __int32 *)&stru_140C49340, 1, 0);
      if ( v12 )
        sub_140359548((volatile signed __int32 *)&stru_140C49340, v12);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v33 = KeGetCurrentIrql();
          if ( v33 <= 0xFu && (unsigned __int8)v11 <= 0xFu && v33 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v35 = *((_QWORD *)CurrentPrcb + 4375);
            v36 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
            v37 = (v36 & *(_DWORD *)(v35 + 20)) == 0;
            *(_DWORD *)(v35 + 20) &= v36;
            if ( v37 )
              sub_140418E4C((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(v11);
      sub_1402AFC00((ULONG_PTR)&stru_140C49340);
      v13 = 0;
      if ( v5 )
      {
        v14 = &v41;
        v15 = (ULONG_PTR *)v42;
        do
        {
          sub_1407C0940(*(_QWORD *)v14, *((unsigned int *)v15 + 3));
          v16 = v13;
          if ( v13 < v5 )
          {
            v17 = v15;
            do
            {
              if ( *((_DWORD *)v17 + 3) == *((_DWORD *)v14 + 5) && *(v17 - 1) == *(_QWORD *)v14 && !*((_BYTE *)v17 + 8) )
              {
                v18 = *v17;
                ExAcquirePushLockExclusiveEx(*v17 + 48, 0LL);
                *(_QWORD *)(v18 + 56) = KeGetCurrentThread();
                v19 = 0LL;
                v20 = *v17;
                v21 = *(_QWORD *)(*v17 + 192);
                if ( v21 )
                {
                  v32 = *(_QWORD *)(v21 + 24);
                  if ( v32 )
                  {
                    v19 = *(_QWORD *)(v32 + 16);
                    sub_140AB4300(*v17);
                    sub_1407C0854(v19);
                    sub_1407C0854(*v17);
                    v20 = *v17;
                  }
                }
                sub_1407C09E0(v20, (__int64)&ListHead);
                sub_140AB4300(*v17);
                if ( v19 )
                  sub_140AB4300(v19);
                v42[24 * v16 + 8] = 1;
              }
              ++v16;
              v17 += 3;
            }
            while ( v16 < v5 );
          }
          v22 = *(_QWORD *)v14;
          v23 = *(_QWORD *)(*(_QWORD *)v14 + 1648LL)
              + 24
              * ((unsigned int)(*(_DWORD *)(*(_QWORD *)v14 + 1656LL) - 1) & ((unsigned int)(101027
                                                                                          * (*((_DWORD *)v14 + 5) ^ (*((_DWORD *)v14 + 5) >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*((_DWORD *)v14 + 5) ^ (*((_DWORD *)v14 + 5) >> 9))) >> 9)));
          *(_QWORD *)(v23 + 8) = 0LL;
          ExReleasePushLockEx(v23, 0LL);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v22 + 4232), 0xFFFFFFFF) == 1 )
            sub_1406BBAD8((_QWORD *)v22);
          ++v13;
          v15 += 3;
          v14 += 24;
        }
        while ( v13 < v5 );
      }
    }
    while ( v5 == 4 );
  }
  while ( !v1 && _InterlockedCompareExchange(&dword_140CE1FC0, 0, 2) != 2 );
  sub_140346C60(&ListHead);
  sub_140AB4260(v25, v24, v26, v27);
  sub_140AB4580(v40);
  return sub_14022EA30((__int64 *)&v39);
}
