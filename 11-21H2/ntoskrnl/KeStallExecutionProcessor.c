/*
 * XREFs of KeStallExecutionProcessor @ 0x140303560
 * Callers:
 *     sub_1402DA0F0 @ 0x1402DA0F0 (sub_1402DA0F0.c)
 *     sub_1403B2F9C @ 0x1403B2F9C (sub_1403B2F9C.c)
 *     sub_1403B5D40 @ 0x1403B5D40 (sub_1403B5D40.c)
 *     sub_1403BB040 @ 0x1403BB040 (sub_1403BB040.c)
 *     sub_1403BBEC4 @ 0x1403BBEC4 (sub_1403BBEC4.c)
 *     sub_140508F00 @ 0x140508F00 (sub_140508F00.c)
 *     sub_14050A93C @ 0x14050A93C (sub_14050A93C.c)
 *     sub_14050E088 @ 0x14050E088 (sub_14050E088.c)
 *     sub_14050F9E0 @ 0x14050F9E0 (sub_14050F9E0.c)
 *     sub_14051FA44 @ 0x14051FA44 (sub_14051FA44.c)
 *     sub_140522AA0 @ 0x140522AA0 (sub_140522AA0.c)
 *     sub_140522BA0 @ 0x140522BA0 (sub_140522BA0.c)
 *     sub_14052448C @ 0x14052448C (sub_14052448C.c)
 *     sub_1405245B8 @ 0x1405245B8 (sub_1405245B8.c)
 *     sub_14052FAA8 @ 0x14052FAA8 (sub_14052FAA8.c)
 *     sub_140532460 @ 0x140532460 (sub_140532460.c)
 *     sub_140547AF4 @ 0x140547AF4 (sub_140547AF4.c)
 *     sub_140553244 @ 0x140553244 (sub_140553244.c)
 *     sub_1405660A0 @ 0x1405660A0 (sub_1405660A0.c)
 *     sub_140578BB4 @ 0x140578BB4 (sub_140578BB4.c)
 *     ?Process@CPullPin@@AEAAXXZ @ 0x14057C3C0 (-Process@CPullPin@@AEAAXXZ.c)
 *     sub_14063A300 @ 0x14063A300 (sub_14063A300.c)
 *     sub_14064E7FC @ 0x14064E7FC (sub_14064E7FC.c)
 *     sub_14064E9C0 @ 0x14064E9C0 (sub_14064E9C0.c)
 *     sub_140652EC8 @ 0x140652EC8 (sub_140652EC8.c)
 *     sub_140A63CE0 @ 0x140A63CE0 (sub_140A63CE0.c)
 *     sub_140AA8D9C @ 0x140AA8D9C (sub_140AA8D9C.c)
 * Callees:
 *     sub_140302560 @ 0x140302560 (sub_140302560.c)
 *     sub_140303720 @ 0x140303720 (sub_140303720.c)
 *     KeQueryActiveProcessorCountEx @ 0x140348830 (KeQueryActiveProcessorCountEx.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14035BE00 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x14035BFE0 (KeSetSystemGroupAffinityThread.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

void __stdcall KeStallExecutionProcessor(ULONG MicroSeconds)
{
  __int64 v1; // rdx
  __int64 v2; // rbp
  ULONG_PTR v4; // rdi
  __int64 v5; // rsi
  char v6; // r12
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // r15
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdi
  __int64 v12; // r13
  unsigned int v13; // ebx
  unsigned __int128 v14; // rax
  unsigned __int64 v15; // r14
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rsi
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rdx
  unsigned __int64 v24; // r11
  signed __int64 v25; // rax
  int v26; // r9d
  __int64 v27; // r8
  __int64 v28; // r10
  unsigned __int64 v29; // r8
  signed __int64 v30; // rcx
  unsigned int v31; // edx
  signed __int32 v32[8]; // [rsp+0h] [rbp-78h] BYREF
  _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-58h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-48h] BYREF
  int v35; // [rsp+70h] [rbp-8h]

  v2 = 0LL;
  if ( dword_140C4E420 )
  {
    v4 = qword_140C4E500;
    if ( qword_140C4E500 )
    {
      if ( *(_DWORD *)(qword_140C4E500 + 220) == 64 )
      {
        v18 = sub_140303720(qword_140C4E500);
        sub_14042A5E0(v18, v19);
      }
      else
      {
        do
        {
          v20 = *(_QWORD *)(v4 + 208);
          do
          {
            v21 = *(_QWORD *)(v4 + 200);
            v22 = sub_140303720(v4);
            v24 = sub_14042A5E0(v22, v23);
            _InterlockedOr(v32, 0);
            v25 = *(_QWORD *)(v4 + 200);
          }
          while ( v21 != v25 );
        }
        while ( v20 != *(_QWORD *)(v4 + 208) );
        v26 = *(_DWORD *)(v4 + 220);
        if ( ((v21 ^ v24) & (1LL << ((unsigned __int8)v26 - 1))) != 0 )
        {
          if ( v26 == 64 )
            v27 = -1LL;
          else
            v27 = (1LL << v26) - 1;
          v28 = 0LL;
          if ( v26 != 64 )
            v28 = 1LL << v26;
          v29 = v21 & v27;
          v30 = v24 | v21 ^ v29;
          if ( v24 < v29 )
            v30 += v28;
          _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 200), v30, v25);
        }
      }
    }
    sub_140302560((__int64)KeGetCurrentPrcb(), 0);
  }
  v5 = qword_140C4E4C0;
  v6 = 0;
  Affinity = 0LL;
  v7 = *(_DWORD *)(qword_140C4E4C0 + 224);
  PreviousAffinity = 0LL;
  if ( (v7 & 1) != 0
    && KeQueryActiveProcessorCountEx(0xFFFFu) >= 2
    && KeGetCurrentIrql() < 2u
    && (v35 & 0x200) != 0
    && (*(_DWORD *)(v5 + 184) & 0x20) == 0 )
  {
    v6 = 1;
    v31 = dword_140D0E5E0[HIDWORD(KeGetPcr()[1].LockArray)];
    Affinity.Reserved[1] = 0;
    Affinity.Reserved[2] = 0;
    *(_DWORD *)&Affinity.Group = (unsigned __int16)(v31 >> 6);
    Affinity.Mask = 1LL << (v31 & 0x3F);
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
  }
  if ( (*(_DWORD *)(v5 + 224) & 0x10000) != 0 )
    v8 = *(_QWORD *)(v5 + 72) + (unsigned int)(*(_DWORD *)(v5 + 80) * HIDWORD(KeGetPcr()[1].LockArray));
  else
    v8 = *(_QWORD *)(v5 + 72);
  v9 = sub_14042A5E0(v8, v1);
  v10 = __readcr2();
  __writecr2(v10);
  v11 = v9;
  v12 = 1LL << *(_DWORD *)(v5 + 220);
  v13 = 0;
  v14 = (*(_QWORD *)(v5 + 192) * (unsigned __int64)(10 * MicroSeconds) + 9999999)
      * (unsigned __int128)0xD6BF94D5E57A42BDuLL;
  v15 = (*(_QWORD *)(v5 + 192) * (unsigned __int64)(10 * MicroSeconds) + 9999999) / 0x989680 + 1;
  if ( v15 )
  {
    do
    {
      if ( (++v13 & dword_140C4C47C) == 0 && qword_140C4C480 )
        sub_14042A5E0(v13, *((_QWORD *)&v14 + 1));
      else
        _mm_pause();
      v16 = sub_140303720(v5);
      *(_QWORD *)&v14 = sub_14042A5E0(v16, v17);
      if ( (unsigned __int64)v14 < v11 )
        v2 += v12;
      v11 = v14;
    }
    while ( (__int64)v14 + v2 - v9 < v15 );
  }
  if ( v6 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
}
