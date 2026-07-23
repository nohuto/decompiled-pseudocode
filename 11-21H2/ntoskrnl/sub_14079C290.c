/*
 * XREFs of sub_14079C290 @ 0x14079C290
 * Callers:
 *     sub_14079BD98 @ 0x14079BD98 (sub_14079BD98.c)
 *     sub_14079C014 @ 0x14079C014 (sub_14079C014.c)
 *     sub_14079C920 @ 0x14079C920 (sub_14079C920.c)
 * Callees:
 *     RtlSetBits @ 0x1402E4C80 (RtlSetBits.c)
 *     RtlFindSetBits @ 0x1402E4EE0 (RtlFindSetBits.c)
 *     RtlClearBits @ 0x140347580 (RtlClearBits.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140AB44C0 @ 0x140AB44C0 (sub_140AB44C0.c)
 *     sub_140AB451C @ 0x140AB451C (sub_140AB451C.c)
 *     sub_140AB4534 @ 0x140AB4534 (sub_140AB4534.c)
 */

void __fastcall sub_14079C290(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3, __int64 a3, int a4, int a5)
{
  __int64 v6; // rdi
  ULONG_PTR v7; // rbx
  char v8; // r12
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r10
  __int64 v13; // r15
  unsigned int v14; // r14d
  unsigned int *v15; // rdx
  __int64 v16; // r11
  int v17; // r8d
  unsigned int v18; // eax
  ULONG v19; // r14d
  int v20; // ebx
  ULONG_PTR v21; // rbp
  ULONG_PTR v22; // rdi
  _RTL_BITMAP *v23; // rcx
  ULONG SetBits; // eax
  int v25; // ecx
  unsigned int v26; // ecx
  unsigned int v27; // ecx
  _WORD v28[20]; // [rsp+30h] [rbp-28h] BYREF

  v6 = a4;
  v28[0] = 0;
  v7 = (unsigned int)BugCheckParameter3;
  v8 = 0;
  sub_140AB4534(v28);
  v10 = sub_140AB44C0(BugCheckParameter2, v9);
  if ( !v10 )
    KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v7, 0x310uLL);
  v13 = sub_140AB451C(v11, v10, v28);
  v14 = *(_DWORD *)(v13 + 4);
  v15 = (unsigned int *)(v13 + 32);
  v16 = *(unsigned int *)(v13 + 8);
  v17 = ((_DWORD)v6 << 31) | (v14 + 32);
  if ( v13 + 32 < (unsigned __int64)(v13 + v16) )
  {
    do
    {
      v18 = *v15;
      if ( (*v15 & 0x80000000) == 0 )
      {
        v26 = (v18 >> 3) - 1;
        if ( v26 >= 0x10 )
        {
          v27 = v26 >> 4;
          if ( v27 > 0xFF )
          {
            v26 = 23;
          }
          else
          {
            _BitScanReverse(&v27, v27);
            v26 = v27 + 16;
          }
        }
        if ( (_DWORD)v12 == v26 && v17 != (_DWORD)v7 && v17 != a5 )
        {
          v8 = 1;
          break;
        }
      }
      else
      {
        v18 = -v18;
      }
      v17 += v18;
      v15 = (unsigned int *)((char *)v15 + v18);
    }
    while ( (unsigned __int64)v15 < v13 + v16 );
  }
  v19 = v14 >> 12;
  v20 = 1 << v12;
  v21 = BugCheckParameter2 + 632 * v6 + 24 * v12;
  v22 = 632 * v6 + BugCheckParameter2;
  v23 = (_RTL_BITMAP *)(v21 + 320);
  if ( v8 )
  {
    *(_DWORD *)(v22 + 904) |= v20;
    *(_DWORD *)(v21 + 316) = v19;
    RtlSetBits(v23, v19, *(_DWORD *)(v13 + 8) >> 12);
  }
  else
  {
    RtlClearBits(v23, v19, (unsigned int)v16 >> 12);
    SetBits = RtlFindSetBits((PRTL_BITMAP)(v21 + 320), 1u, v19);
    v25 = *(_DWORD *)(v22 + 904);
    if ( SetBits == -1 )
    {
      *(_DWORD *)(v22 + 904) = v25 & ~v20;
    }
    else
    {
      *(_DWORD *)(v22 + 904) = v20 | v25;
      *(_DWORD *)(v21 + 316) = SetBits;
    }
  }
}
