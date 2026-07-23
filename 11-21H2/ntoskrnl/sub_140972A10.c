/*
 * XREFs of sub_140972A10 @ 0x140972A10
 * Callers:
 *     sub_140971068 @ 0x140971068 (sub_140971068.c)
 * Callees:
 *     RtlClearAllBits @ 0x14020AE80 (RtlClearAllBits.c)
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     sub_140287970 @ 0x140287970 (sub_140287970.c)
 *     RtlSetBits @ 0x1402E4C80 (RtlSetBits.c)
 *     sub_1409C04B8 @ 0x1409C04B8 (sub_1409C04B8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140972A10(__int64 a1)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // r14
  _RTL_BITMAP *v4; // rax
  _RTL_BITMAP *v5; // rsi
  _RTL_BITMAP *v6; // rax
  _RTL_BITMAP *v7; // rdi
  ULONG v8; // edx
  ULONG v9; // ebp
  unsigned __int64 i; // rbx
  unsigned __int64 v11; // rbx
  ULONG v12; // ebp
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned int v15; // ebx
  __int128 v17; // [rsp+20h] [rbp-38h] BYREF
  __int64 v18; // [rsp+30h] [rbp-28h]

  v17 = 0LL;
  v18 = 0LL;
  v2 = sub_140287970(*(_QWORD *)(**(_QWORD **)a1 + 112LL));
  v3 = sub_140287970(*(_QWORD *)(**(_QWORD **)(a1 + 8) + 112LL));
  v4 = (_RTL_BITMAP *)sub_1402828F0(
                        256,
                        8
                      * ((*(_DWORD *)(*(_QWORD *)v2 + 8LL) >> 6)
                       + (unsigned int)((*(_DWORD *)(*(_QWORD *)v2 + 8LL) & 0x3F) != 0)
                       + 2),
                        0x20206D4Du);
  v5 = v4;
  if ( v4 )
  {
    v4->SizeOfBitMap = *(_DWORD *)(*(_QWORD *)v2 + 8LL);
    v4->Buffer = &v4[1].SizeOfBitMap;
    v6 = (_RTL_BITMAP *)sub_1402828F0(
                          256,
                          8
                        * ((*(_DWORD *)(*(_QWORD *)v3 + 8LL) >> 6)
                         + (unsigned int)((*(_DWORD *)(*(_QWORD *)v3 + 8LL) & 0x3F) != 0)
                         + 2),
                          0x20206D4Du);
    v7 = v6;
    if ( v6 )
    {
      v8 = *(_DWORD *)(*(_QWORD *)v3 + 8LL);
      v6->Buffer = &v6[1].SizeOfBitMap;
      v6->SizeOfBitMap = v8;
      RtlClearAllBits(v5);
      RtlClearAllBits(v7);
      v9 = 0;
      for ( i = v2 + 128; i; i = *(_QWORD *)(i + 16) )
      {
        if ( (*(_BYTE *)(i + 32) & 4) == 0 )
          RtlSetBits(v5, v9, *(_DWORD *)(i + 44));
        v9 += *(_DWORD *)(i + 44);
      }
      v11 = v3 + 128;
      v12 = 0;
      while ( v11 )
      {
        if ( (*(_BYTE *)(v11 + 34) & 2) != 0 )
          RtlSetBits(v7, v12, *(_DWORD *)(v11 + 44));
        v12 += *(_DWORD *)(v11 + 44);
        v11 = *(_QWORD *)(v11 + 16);
      }
      v18 = 0LL;
      v13 = *(_QWORD *)(a1 + 32);
      v14 = *(_QWORD *)(a1 + 24);
      *(_QWORD *)&v17 = v5;
      *((_QWORD *)&v17 + 1) = v7;
      sub_1409C04B8(v14, v13, sub_140972980, &v17);
      v15 = v18;
    }
    else
    {
      v15 = -1073741670;
    }
    ExFreePoolWithTag(v5, 0);
    if ( v7 )
      ExFreePoolWithTag(v7, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v15;
}
