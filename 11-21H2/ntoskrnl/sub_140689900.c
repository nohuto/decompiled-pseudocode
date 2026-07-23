/*
 * XREFs of sub_140689900 @ 0x140689900
 * Callers:
 *     sub_140689848 @ 0x140689848 (sub_140689848.c)
 *     sub_14091ADA0 @ 0x14091ADA0 (sub_14091ADA0.c)
 * Callees:
 *     RtlNumberOfSetBits @ 0x140209960 (RtlNumberOfSetBits.c)
 *     RtlClearBits @ 0x140347580 (RtlClearBits.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14068CF68 @ 0x14068CF68 (sub_14068CF68.c)
 *     sub_14068D5F8 @ 0x14068D5F8 (sub_14068D5F8.c)
 *     sub_1406D16F8 @ 0x1406D16F8 (sub_1406D16F8.c)
 *     sub_1406DEA6C @ 0x1406DEA6C (sub_1406DEA6C.c)
 *     sub_14079B740 @ 0x14079B740 (sub_14079B740.c)
 *     sub_14079CF18 @ 0x14079CF18 (sub_14079CF18.c)
 *     sub_14091A000 @ 0x14091A000 (sub_14091A000.c)
 *     sub_140AB44C0 @ 0x140AB44C0 (sub_140AB44C0.c)
 */

__int64 __fastcall sub_140689900(ULONG_PTR BugCheckParameter2, unsigned int a2, unsigned int a3)
{
  __int64 v5; // r12
  unsigned int v7; // esi
  __int64 result; // rax
  int v9; // r13d
  unsigned int v10; // ebx
  __int64 v11; // rax
  __int64 v12; // rdi
  _QWORD *v13; // rax
  _QWORD *v14; // rcx
  __int64 v15; // rdx
  _QWORD *v16; // rax
  __int64 v17; // r8
  __int64 v18; // rcx
  __int64 v19; // rax
  unsigned int v20; // r8d
  __int64 v21; // rdx
  ULONG v22; // r14d
  ULONG v23; // ebx
  int v24; // ebx
  unsigned int v25; // [rsp+68h] [rbp+10h]

  v5 = 632LL * (int)a3;
  v7 = a2;
  result = *(unsigned int *)(v5 + BugCheckParameter2 + 280);
  v25 = result;
  if ( a2 != (_DWORD)result )
  {
    v9 = a3 << 31;
    do
    {
      v10 = v7 + v9;
      v11 = sub_140AB44C0(BugCheckParameter2, v7 + v9);
      v12 = v11;
      if ( !v11 )
        KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v10, 0x165uLL);
      v13 = (_QWORD *)sub_14079B740(v11);
      v14 = v13;
      if ( v13 )
      {
        v15 = *v13;
        if ( *(_QWORD **)(*v13 + 8LL) != v13 || (v16 = (_QWORD *)v13[1], (_QWORD *)*v16 != v14) )
          __fastfail(3u);
        *v16 = v15;
        *(_QWORD *)(v15 + 8) = v16;
        sub_14042A5E0(v14, 24LL);
      }
      v17 = *(_QWORD *)(v12 + 8);
      v18 = *(unsigned int *)(v12 + 16);
      if ( (v17 & 8) != 0 )
        sub_1406D16F8(BugCheckParameter2, (unsigned int)v18, v17 & 0xFFFFFFFFFFFFFFF0uLL);
      else
        sub_14079CF18(v18);
      v7 += *(_DWORD *)(v12 + 16);
      do
      {
        v19 = sub_140AB44C0(BugCheckParameter2, v10);
        if ( !v19 )
          KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v10, 0x19EuLL);
        v10 += 4096;
        *(_OWORD *)v19 = 0LL;
        *(_QWORD *)(v19 + 16) = 0LL;
      }
      while ( v10 - v9 < v7 );
    }
    while ( v7 < v25 );
    if ( a2 )
      v20 = (a2 - 1) >> 21;
    else
      v20 = -1;
    sub_1406DEA6C(
      BugCheckParameter2,
      *(_QWORD *)(v5 + BugCheckParameter2 + 288),
      v20 + 1,
      (unsigned int)((*(_DWORD *)(v5 + BugCheckParameter2 + 280) >> 12) - 1) >> 9);
    if ( !a3 )
    {
      sub_14068D5F8(BugCheckParameter2, a2 & 0x7FFFFFFF, *(unsigned int *)(v5 + BugCheckParameter2 + 280));
      if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 0x20000) != 0 && a2 < *(_DWORD *)(BugCheckParameter2 + 232) - 4096 )
        sub_14091A000(BugCheckParameter2 + 224, a2 & 0x7FFFFFFF);
    }
    v21 = a2 & 0x7FFFFFFF;
    *(_DWORD *)(v5 + BugCheckParameter2 + 280) = v21;
    if ( !a3 )
    {
      v22 = a2 >> 9;
      v23 = *(_DWORD *)(BugCheckParameter2 + 88) - v22;
      RtlClearBits((PRTL_BITMAP)(BugCheckParameter2 + 88), v22, v23);
      RtlClearBits((PRTL_BITMAP)(BugCheckParameter2 + 112), v22, v23);
      *(_QWORD *)(BugCheckParameter2 + 96) = *(_QWORD *)(BugCheckParameter2 + 96);
      *(_DWORD *)(BugCheckParameter2 + 88) = v22;
      *(_QWORD *)(BugCheckParameter2 + 120) = *(_QWORD *)(BugCheckParameter2 + 120);
      *(_DWORD *)(BugCheckParameter2 + 112) = v22;
      v24 = *(_DWORD *)(BugCheckParameter2 + 104);
      *(_DWORD *)(BugCheckParameter2 + 104) = RtlNumberOfSetBits((PRTL_BITMAP)(BugCheckParameter2 + 88));
      *(_DWORD *)(BugCheckParameter2 + 128) = RtlNumberOfSetBits((PRTL_BITMAP)(BugCheckParameter2 + 112));
      _InterlockedExchangeAdd(&dword_140C48DF4, *(_DWORD *)(BugCheckParameter2 + 104) - v24);
      v21 = *(unsigned int *)(v5 + BugCheckParameter2 + 280);
    }
    return sub_14068CF68(BugCheckParameter2, v21, a3);
  }
  return result;
}
