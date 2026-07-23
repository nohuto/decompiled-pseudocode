/*
 * XREFs of sub_14020C5E4 @ 0x14020C5E4
 * Callers:
 *     sub_14068C820 @ 0x14068C820 (sub_14068C820.c)
 *     sub_14091ADA0 @ 0x14091ADA0 (sub_14091ADA0.c)
 * Callees:
 *     RtlCopyBitMap @ 0x140209CA0 (RtlCopyBitMap.c)
 *     RtlClearBits @ 0x140347580 (RtlClearBits.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_14020C5E4(__int64 a1, unsigned int a2)
{
  unsigned int v2; // esi
  _RTL_BITMAP *v3; // r15
  ULONG v4; // r13d
  ULONG v5; // r14d
  unsigned int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // rax
  ULONG *v11; // r12
  ULONG *v12; // rax
  __int64 v13; // r8
  __int64 v14; // r8
  ULONG *v15; // r13
  __int64 v16; // rcx
  __int64 v17; // rcx
  _RTL_BITMAP Destination; // [rsp+20h] [rbp-20h] BYREF
  _RTL_BITMAP BitMapHeader; // [rsp+30h] [rbp-10h] BYREF
  ULONG *v20; // [rsp+80h] [rbp+40h]
  ULONG NumberToClear; // [rsp+88h] [rbp+48h]

  v2 = 0;
  v3 = (_RTL_BITMAP *)(a1 + 88);
  v4 = *(_DWORD *)(a1 + 88);
  v5 = a2 >> 9;
  *(&Destination.SizeOfBitMap + 1) = 0;
  *(&BitMapHeader.SizeOfBitMap + 1) = 0;
  v7 = ((a2 >> 12) + 3) & 0xFFFFFFFC;
  if ( *(_DWORD *)(a1 + 108) < v7 )
  {
    v11 = (ULONG *)sub_14042A5E0(v7, 0LL, 959532355LL);
    if ( v11 )
    {
      v12 = (ULONG *)sub_14042A5E0(v7, 0LL, 959532355LL);
      v20 = v12;
      if ( v12 )
      {
        BitMapHeader.Buffer = v12;
        Destination.SizeOfBitMap = v5;
        Destination.Buffer = v11;
        BitMapHeader.SizeOfBitMap = v5;
        NumberToClear = v5 - v4;
        if ( *(_QWORD *)(a1 + 96) )
        {
          RtlCopyBitMap(v3, &Destination, 0);
          RtlClearBits(&Destination, v4, NumberToClear);
        }
        else
        {
          memset(v11, 0, v7);
        }
        if ( *(_QWORD *)(a1 + 120) )
        {
          RtlCopyBitMap((PRTL_BITMAP)(a1 + 112), &BitMapHeader, 0);
          RtlClearBits(&BitMapHeader, v4, NumberToClear);
          v15 = v20;
        }
        else
        {
          v15 = v20;
          memset(v20, 0, v7);
        }
        v16 = *(_QWORD *)(a1 + 96);
        if ( v16 )
          sub_14042A5E0(v16, *(unsigned int *)(a1 + 108), v14);
        v17 = *(_QWORD *)(a1 + 120);
        if ( v17 )
          sub_14042A5E0(v17, *(unsigned int *)(a1 + 108), v14);
        v3->SizeOfBitMap = v5;
        v3->Buffer = v11;
        *(_DWORD *)(a1 + 112) = v5;
        *(_QWORD *)(a1 + 120) = v15;
        *(_DWORD *)(a1 + 108) = v7;
      }
      else
      {
        v2 = -1073741670;
        sub_14042A5E0(v11, v7, v13);
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    v8 = *(_QWORD *)(a1 + 96);
    v3->SizeOfBitMap = v5;
    *(_QWORD *)(a1 + 96) = v8;
    RtlClearBits((PRTL_BITMAP)(a1 + 88), v4, v5 - v4);
    v9 = *(_QWORD *)(a1 + 120);
    *(_DWORD *)(a1 + 112) = v5;
    *(_QWORD *)(a1 + 120) = v9;
    RtlClearBits((PRTL_BITMAP)(a1 + 112), v4, v5 - v4);
  }
  return v2;
}
