/*
 * XREFs of sub_14068F1F8 @ 0x14068F1F8
 * Callers:
 *     sub_1406885A4 @ 0x1406885A4 (sub_1406885A4.c)
 *     sub_14091ADA0 @ 0x14091ADA0 (sub_14091ADA0.c)
 * Callees:
 *     RtlNumberOfSetBits @ 0x140209960 (RtlNumberOfSetBits.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14068A23C @ 0x14068A23C (sub_14068A23C.c)
 *     sub_14068F39C @ 0x14068F39C (sub_14068F39C.c)
 *     sub_14068F440 @ 0x14068F440 (sub_14068F440.c)
 *     sub_14079AE04 @ 0x14079AE04 (sub_14079AE04.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 *     sub_140AB41B0 @ 0x140AB41B0 (sub_140AB41B0.c)
 */

__int64 __fastcall sub_14068F1F8(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // r14
  int v5; // r15d
  char v7; // r13
  _DWORD *v8; // r9
  int v9; // eax
  int v10; // eax
  int v11; // ebx
  _QWORD *PoolWithTag; // rsi
  ULONG v13; // eax
  bool v14; // zf
  unsigned int i; // ebx
  int v17; // edx
  __int64 v18; // rax
  __int64 v19; // rcx
  int v20; // [rsp+20h] [rbp-48h]
  __int64 v21; // [rsp+B8h] [rbp+50h] BYREF
  __int64 v22; // [rsp+C0h] [rbp+58h] BYREF
  __int64 v23; // [rsp+C8h] [rbp+60h]

  v23 = 0LL;
  LODWORD(v21) = 0;
  v4 = a2;
  LODWORD(v22) = 0;
  v5 = a3 & 1;
  v7 = 0;
  if ( !(_BYTE)a2 )
  {
    if ( *(_DWORD *)(BugCheckParameter2 + 128) )
    {
      v8 = *(_DWORD **)(BugCheckParameter2 + 64);
      v8[10] = *(_DWORD *)(BugCheckParameter2 + 280);
      v8[11] = 1;
      goto LABEL_4;
    }
LABEL_23:
    v11 = 0;
    goto LABEL_22;
  }
  if ( !*(_QWORD *)(BugCheckParameter2 + 1760) )
    goto LABEL_23;
  v8 = *(_DWORD **)(BugCheckParameter2 + 1776);
LABEL_4:
  v9 = *(_DWORD *)(BugCheckParameter2 + 184);
  v8[2] = v9;
  v8[1] = v9 + 1;
  v10 = sub_140AB41B0(v8, a2, a3);
  v14 = dword_140D01840 == 1;
  *(_DWORD *)(a4 + 508) = v10;
  if ( v14 )
    goto LABEL_26;
  v20 = v5;
  v7 = 1;
  v11 = sub_14042A5E0(BugCheckParameter2, 0LL);
  if ( v11 < 0 )
  {
LABEL_22:
    v14 = v4 == 0;
    goto LABEL_19;
  }
  if ( dword_140D01840 == 2 )
  {
LABEL_26:
    v11 = -1073741823;
    goto LABEL_22;
  }
  if ( v4 )
  {
    PoolWithTag = *(_QWORD **)(BugCheckParameter2 + 1760);
  }
  else
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 24LL * *(unsigned int *)(BugCheckParameter2 + 128), 0x62534D43u);
    if ( !PoolWithTag )
    {
      v11 = -1073741801;
      goto LABEL_22;
    }
    for ( i = 0; i < *(_DWORD *)(BugCheckParameter2 + 128); LODWORD(v21) = v18 + v17 )
    {
      if ( !(unsigned __int8)sub_14079AE04(BugCheckParameter2, (__int64)&v22, (__int64)&v21, 0) )
        break;
      v17 = v21;
      v18 = i++;
      v19 = 3 * v18;
      PoolWithTag[v19 + 1] = v23;
      LODWORD(v18) = v22;
      LODWORD(PoolWithTag[v19]) = v17;
      LODWORD(PoolWithTag[v19 + 2]) = v18;
    }
  }
  if ( dword_140D01840 == 3 )
    goto LABEL_20;
  v20 = v5;
  v11 = sub_14042A5E0(BugCheckParameter2, 0LL);
  if ( v11 < 0 )
    goto LABEL_17;
  if ( dword_140D01840 == 4 )
    goto LABEL_20;
  v11 = sub_14068A23C(BugCheckParameter2, 0);
  if ( v11 < 0 )
    goto LABEL_17;
  if ( dword_140D01840 == 5 )
  {
LABEL_20:
    v11 = -1073741823;
  }
  else
  {
    if ( v4 )
      v13 = RtlNumberOfSetBits((PRTL_BITMAP)(BugCheckParameter2 + 1736));
    else
      v13 = *(_DWORD *)(BugCheckParameter2 + 128);
    sub_14068F440(v13, v13 << 9);
    v7 = 0;
    v11 = 0;
  }
LABEL_17:
  if ( !PoolWithTag )
    goto LABEL_22;
  v14 = v4 == 0;
  if ( !v4 )
  {
    ExFreePoolWithTag(PoolWithTag, 0);
    goto LABEL_22;
  }
LABEL_19:
  LOBYTE(a4) = v14;
  LOBYTE(a3) = v7;
  sub_14068F39C(BugCheckParameter2, v11 >= 0, a3, a4, v20);
  return (unsigned int)v11;
}
