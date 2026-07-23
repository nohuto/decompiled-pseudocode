/*
 * XREFs of sub_1407C09E0 @ 0x1407C09E0
 * Callers:
 *     sub_14069F904 @ 0x14069F904 (sub_14069F904.c)
 *     sub_1406FEA54 @ 0x1406FEA54 (sub_1406FEA54.c)
 *     sub_1407362A0 @ 0x1407362A0 (sub_1407362A0.c)
 *     sub_1407C0D40 @ 0x1407C0D40 (sub_1407C0D40.c)
 *     sub_1407C2680 @ 0x1407C2680 (sub_1407C2680.c)
 *     sub_140915544 @ 0x140915544 (sub_140915544.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     sub_140346D64 @ 0x140346D64 (sub_140346D64.c)
 *     sub_14067EA88 @ 0x14067EA88 (sub_14067EA88.c)
 *     sub_14067EC64 @ 0x14067EC64 (sub_14067EC64.c)
 *     sub_14067ED34 @ 0x14067ED34 (sub_14067ED34.c)
 *     sub_1407C0C50 @ 0x1407C0C50 (sub_1407C0C50.c)
 *     sub_140910724 @ 0x140910724 (sub_140910724.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1407C09E0(ULONG_PTR BugCheckParameter4, __int64 a2)
{
  ULONG_PTR v3; // r15
  _WORD *v4; // rsi
  __int64 v5; // rdi
  unsigned int v6; // eax
  _QWORD *v7; // rcx
  _QWORD *v8; // rax
  _QWORD *v9; // rcx
  _DWORD *v10; // rdi
  ULONG_PTR v11; // rsi
  __int64 *v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  _QWORD *v16; // rax

  v3 = 0LL;
  if ( !*(_QWORD *)BugCheckParameter4 )
  {
    if ( qword_140D3B008 )
    {
      LOBYTE(a2) = 23;
      sub_140910724(BugCheckParameter4, a2);
    }
    if ( (*(_WORD *)(BugCheckParameter4 + 186) & 0x40) == 0 && (*(_BYTE *)(BugCheckParameter4 + 8) & 8) != 0 )
    {
      sub_1407C0C50(*(_QWORD *)(BugCheckParameter4 + 104));
      *(_QWORD *)(BugCheckParameter4 + 104) = 0LL;
      *(_WORD *)(BugCheckParameter4 + 8) &= ~8u;
    }
    v4 = *(_WORD **)(BugCheckParameter4 + 80);
    v5 = 16LL
       * (((unsigned __int16)(-30045 * (v4[4] ^ (*((_DWORD *)v4 + 2) >> 9))) ^ (unsigned __int16)((unsigned __int64)(unsigned int)(101027 * (*((_DWORD *)v4 + 2) ^ (*((_DWORD *)v4 + 2) >> 9))) >> 9)) & 0x7FF);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)qword_140C493B8 + v5, 0LL);
    v6 = *(_DWORD *)v4 & 1 | (2 * (*(_DWORD *)v4 >> 1) - 2);
    *(_DWORD *)v4 = v6;
    if ( v6 < 2 )
    {
      v7 = (char *)qword_140C493B8 + v5 + 8;
      if ( v7 )
      {
        do
        {
          v8 = (_QWORD *)*v7;
          if ( !*v7 )
            break;
          if ( v8 == (_QWORD *)(v4 + 4) )
          {
            *v7 = v8[1];
            break;
          }
          v7 = v8 + 1;
        }
        while ( v8 != (_QWORD *)-8LL );
      }
      sub_140346D64(v4, 0x624E4D43u);
    }
    ExReleasePushLockEx((ULONG_PTR)qword_140C493B8 + v5, 0LL);
    if ( (*(_DWORD *)(BugCheckParameter4 + 8) & 4) != 0 )
      ExFreePoolWithTag(*(PVOID *)(BugCheckParameter4 + 112), 0x6E494D43u);
    v9 = *(_QWORD **)(BugCheckParameter4 + 192);
    if ( v9 )
    {
      v14 = v9[3];
      if ( v14 )
      {
        v15 = *v9;
        v3 = *(_QWORD *)(v14 + 16);
        if ( *(_QWORD **)(*v9 + 8LL) != v9 || (v16 = (_QWORD *)v9[1], (_QWORD *)*v16 != v9) )
          __fastfail(3u);
        *v16 = v15;
        *(_QWORD *)(v15 + 8) = v16;
      }
      ExFreePoolWithTag(v9, 0);
      *(_QWORD *)(BugCheckParameter4 + 192) = 0LL;
    }
    v10 = (_DWORD *)(BugCheckParameter4 + 16);
    v11 = *(_QWORD *)(BugCheckParameter4 + 72);
    if ( (*(_DWORD *)(BugCheckParameter4 + 8) & 0x20000) != 0 )
    {
      sub_14067ED34(BugCheckParameter4);
      sub_14067EA88(*(_QWORD *)(BugCheckParameter4 + 32), v10);
      sub_14067EC64(BugCheckParameter4);
    }
    else
    {
      v12 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter4 + 32) + 1648LL)
                      + 8
                      * (3
                       * ((unsigned int)(*(_DWORD *)(*(_QWORD *)(BugCheckParameter4 + 32) + 1656LL) - 1) & ((unsigned int)(101027 * (*v10 ^ (*v10 >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*v10 ^ (*v10 >> 9))) >> 9)))
                       + 2));
      if ( v12 )
      {
        do
        {
          v13 = *v12;
          if ( !*v12 )
            break;
          if ( (_DWORD *)v13 == v10 )
          {
            *v12 = *(_QWORD *)(v13 + 8);
            break;
          }
          v12 = (__int64 *)(v13 + 8);
        }
        while ( v13 != -8 );
      }
    }
    *(_DWORD *)(BugCheckParameter4 + 8) |= 0x80000u;
    if ( v3 )
      sub_1407C0C50(v3);
    if ( v11 )
      sub_1407C0C50(v11);
  }
}
