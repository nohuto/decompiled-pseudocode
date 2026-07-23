/*
 * XREFs of sub_14065D114 @ 0x14065D114
 * Callers:
 *     sub_14065D5C8 @ 0x14065D5C8 (sub_14065D5C8.c)
 * Callees:
 *     Allocate @ 0x14024AC60 (Allocate.c)
 *     sub_140346D64 @ 0x140346D64 (sub_140346D64.c)
 *     sub_14065DBC8 @ 0x14065DBC8 (sub_14065DBC8.c)
 *     sub_14065DDFC @ 0x14065DDFC (sub_14065DDFC.c)
 *     sub_14065DE48 @ 0x14065DE48 (sub_14065DE48.c)
 *     sub_1406BEFA0 @ 0x1406BEFA0 (sub_1406BEFA0.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_140716D50 @ 0x140716D50 (sub_140716D50.c)
 *     sub_14071F300 @ 0x14071F300 (sub_14071F300.c)
 *     sub_14071F68C @ 0x14071F68C (sub_14071F68C.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_14065D114(__int64 a1, __int64 a2, __int64 a3, struct _LOOKASIDE_LIST_EX *a4)
{
  _DWORD *v4; // rbx
  __int64 v6; // rax
  ULONG_PTR v7; // rdi
  _DWORD *v8; // rax
  _DWORD *v9; // rsi
  __int64 v10; // rax
  ULONG_PTR v11; // r15
  PVOID PoolWithTag; // r12
  unsigned int v13; // r15d
  __int64 v14; // rax
  __int64 v15; // r13
  int v16; // ebx
  _DWORD *v18; // [rsp+30h] [rbp-28h] BYREF
  __int128 v19; // [rsp+38h] [rbp-20h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+A0h] [rbp+48h] BYREF
  int v21; // [rsp+A8h] [rbp+50h] BYREF
  int v22; // [rsp+B0h] [rbp+58h] BYREF
  int v23; // [rsp+B4h] [rbp+5Ch]
  int v24; // [rsp+B8h] [rbp+60h] BYREF
  int v25; // [rsp+BCh] [rbp+64h]

  v4 = *(_DWORD **)(a1 + 104);
  v21 = 0;
  LODWORD(BugCheckParameter4) = 0;
  v25 = 0;
  v23 = 0;
  v6 = *(_QWORD *)(a1 + 48);
  v24 = -1;
  v22 = -1;
  v18 = v4;
  v7 = *(_QWORD *)(v6 + 32);
  v19 = 0LL;
  if ( !v4 )
  {
    v16 = sub_14065DE48(a1, &v18);
    if ( v16 < 0 )
      return (unsigned int)v16;
    v4 = v18;
    sub_14065DDFC(v18, *(_QWORD *)(a1 + 48));
    --*v4;
  }
  v8 = Allocate(PagedPool, 0x10uLL, 0x77554D43u, a4);
  v9 = v8;
  if ( !v8 )
    return (unsigned int)-1073741670;
  *((_QWORD *)v8 + 1) = 0LL;
  *v8 = -1;
  v8[1] = -1;
  if ( (*(_BYTE *)(v7 + 140) & 1) != 0 )
    v10 = sub_1406BF400(v7, *(unsigned int *)(a1 + 88));
  else
    v10 = sub_1407C9820(v7);
  v11 = v10;
  if ( !v10 )
  {
    v16 = -1073741670;
LABEL_29:
    sub_140346D64(v9, 0x77554D43u);
    return (unsigned int)v16;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x8000uLL, 0x62534D43u);
  if ( PoolWithTag
    && (sub_14065DBC8(v11),
        v18 = v4 + 1,
        (unsigned __int8)sub_14071F68C(
                           v7,
                           (int)v4 + 4,
                           (unsigned int)&v19,
                           0,
                           (__int64)&v21,
                           (__int64)&BugCheckParameter4)) )
  {
    v13 = BugCheckParameter4;
    if ( (*(_BYTE *)(v7 + 140) & 1) != 0 )
      v14 = sub_1406BF400(v7, (unsigned int)BugCheckParameter4);
    else
      v14 = sub_1407C9820(v7);
    v15 = v14;
    v16 = sub_140716D50(v7);
    if ( v16 >= 0 )
    {
      v16 = sub_14071F300(v7, v13);
      if ( v16 >= 0 )
      {
        v16 = sub_1406BEFA0(v7);
        if ( v16 >= 0 )
        {
          v9[1] = v13;
          v16 = 0;
          *(_QWORD *)(a1 + 112) = v9;
          v9 = 0LL;
        }
      }
    }
    if ( v15 )
    {
      if ( (*(_BYTE *)(v7 + 140) & 1) != 0 )
        sub_1406BF450(v7, &v22);
      else
        sub_1407C97C0(v7, &v22);
    }
  }
  else
  {
    v16 = -1073741670;
  }
  if ( (*(_BYTE *)(v7 + 140) & 1) != 0 )
    sub_1406BF450(v7, &v24);
  else
    sub_1407C97C0(v7, &v24);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( v9 )
    goto LABEL_29;
  return (unsigned int)v16;
}
