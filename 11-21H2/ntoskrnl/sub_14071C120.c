/*
 * XREFs of sub_14071C120 @ 0x14071C120
 * Callers:
 *     sub_140657ADC @ 0x140657ADC (sub_140657ADC.c)
 *     sub_140677810 @ 0x140677810 (sub_140677810.c)
 *     sub_14067E1BC @ 0x14067E1BC (sub_14067E1BC.c)
 *     sub_140714E58 @ 0x140714E58 (sub_140714E58.c)
 *     sub_140719278 @ 0x140719278 (sub_140719278.c)
 *     sub_14071BC94 @ 0x14071BC94 (sub_14071BC94.c)
 *     sub_140720260 @ 0x140720260 (sub_140720260.c)
 *     sub_140913964 @ 0x140913964 (sub_140913964.c)
 *     sub_140913E28 @ 0x140913E28 (sub_140913E28.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14071C0FC @ 0x14071C0FC (sub_14071C0FC.c)
 *     sub_14071C238 @ 0x14071C238 (sub_14071C238.c)
 *     sub_14071C25C @ 0x14071C25C (sub_14071C25C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall sub_14071C120(_QWORD *BugCheckParameter4)
{
  ULONG_PTR v1; // rsi
  ULONG_PTR v3; // rsi
  __int64 v4; // rax
  _QWORD *v5; // rcx
  _QWORD *result; // rax
  _QWORD *v7; // rdx
  volatile signed __int64 *v8; // rcx
  _QWORD *v9; // r8
  unsigned int v10; // edx
  unsigned int v11; // edx
  __int64 v12; // rcx
  unsigned int v13; // r8d
  __int64 v14; // rdx
  __int64 v15; // r9
  __int64 v16; // r10
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 *v19; // rcx
  __int64 v20; // rbx
  __int64 v21; // rcx
  unsigned int v22; // edx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // r10
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 *v28; // rcx
  __int64 v29; // rbx

  v1 = BugCheckParameter4[2];
  if ( v1 )
  {
    BugCheckParameter4[2] = 0LL;
    v10 = *(_DWORD *)v1 & 0x7FFFFFFF;
    if ( v10 == 1 )
    {
      if ( *(_QWORD **)(v1 + 8) != BugCheckParameter4 )
        KeBugCheckEx(0x51u, 0x12uLL, 1uLL, v1, (ULONG_PTR)BugCheckParameter4);
      *(_DWORD *)v1 = 0;
      *(_QWORD *)(v1 + 8) = 0LL;
    }
    else
    {
      v12 = 0LL;
      if ( v10 )
      {
        while ( *(_QWORD **)(*(_QWORD *)(v1 + 8) + 8 * v12) != BugCheckParameter4 )
        {
          v12 = (unsigned int)(v12 + 1);
          if ( (unsigned int)v12 >= v10 )
            goto LABEL_22;
        }
      }
      else
      {
LABEL_22:
        if ( (_DWORD)v12 == v10 )
          KeBugCheckEx(0x51u, 0x12uLL, 2uLL, v1, (ULONG_PTR)BugCheckParameter4);
      }
      v13 = v10 - 1;
      if ( (unsigned int)v12 < v10 - 1 )
      {
        v14 = 8LL * (unsigned int)(v12 + 1);
        v15 = 8 * v12;
        v16 = v13 - (unsigned int)v12;
        do
        {
          v17 = *(_QWORD *)(v1 + 8);
          v18 = *(_QWORD *)(v14 + v17);
          v14 += 8LL;
          *(_QWORD *)(v15 + v17) = v18;
          v15 += 8LL;
          --v16;
        }
        while ( v16 );
      }
      if ( --*(_DWORD *)v1 == 1 )
      {
        v19 = *(__int64 **)(v1 + 8);
        v20 = *v19;
        ExFreePoolWithTag(v19, 0x78494D43u);
        *(_QWORD *)(v1 + 8) = v20;
      }
    }
  }
  v3 = BugCheckParameter4[3];
  if ( v3 )
  {
    BugCheckParameter4[3] = 0LL;
    v11 = *(_DWORD *)v3 & 0x7FFFFFFF;
    if ( v11 == 1 )
    {
      if ( *(_QWORD **)(v3 + 8) != BugCheckParameter4 )
        KeBugCheckEx(0x51u, 0x12uLL, 1uLL, v3, (ULONG_PTR)BugCheckParameter4);
      *(_DWORD *)v3 = 0;
      *(_QWORD *)(v3 + 8) = 0LL;
    }
    else
    {
      v21 = 0LL;
      if ( v11 )
      {
        while ( *(_QWORD **)(*(_QWORD *)(v3 + 8) + 8 * v21) != BugCheckParameter4 )
        {
          v21 = (unsigned int)(v21 + 1);
          if ( (unsigned int)v21 >= v11 )
            goto LABEL_33;
        }
      }
      else
      {
LABEL_33:
        if ( (_DWORD)v21 == v11 )
          KeBugCheckEx(0x51u, 0x12uLL, 2uLL, v3, (ULONG_PTR)BugCheckParameter4);
      }
      v22 = v11 - 1;
      if ( (unsigned int)v21 < v22 )
      {
        v23 = 8LL * (unsigned int)(v21 + 1);
        v24 = 8 * v21;
        v25 = v22 - (unsigned int)v21;
        do
        {
          v26 = *(_QWORD *)(v3 + 8);
          v27 = *(_QWORD *)(v23 + v26);
          v23 += 8LL;
          *(_QWORD *)(v24 + v26) = v27;
          v24 += 8LL;
          --v25;
        }
        while ( v25 );
      }
      if ( --*(_DWORD *)v3 == 1 )
      {
        v28 = *(__int64 **)(v3 + 8);
        v29 = *v28;
        ExFreePoolWithTag(v28, 0x78494D43u);
        *(_QWORD *)(v3 + 8) = v29;
      }
    }
  }
  if ( (_QWORD *)*BugCheckParameter4 != BugCheckParameter4 )
  {
    sub_14071C25C();
    v4 = *BugCheckParameter4;
    if ( *(_QWORD **)(*BugCheckParameter4 + 8LL) != BugCheckParameter4 )
      goto LABEL_40;
    v5 = (_QWORD *)BugCheckParameter4[1];
    if ( (_QWORD *)*v5 != BugCheckParameter4 )
      goto LABEL_40;
    *v5 = v4;
    *(_QWORD *)(v4 + 8) = v5;
    sub_14071C238();
    BugCheckParameter4[7] = 0LL;
  }
  result = BugCheckParameter4 + 4;
  v7 = (_QWORD *)BugCheckParameter4[4];
  if ( v7 == BugCheckParameter4 + 4 )
    return result;
  v8 = (volatile signed __int64 *)BugCheckParameter4[6];
  if ( (_QWORD *)v7[1] != result || (v9 = (_QWORD *)BugCheckParameter4[5], (_QWORD *)*v9 != result) )
LABEL_40:
    __fastfail(3u);
  *v9 = v7;
  v7[1] = v9;
  result = (_QWORD *)sub_14071C0FC(v8);
  BugCheckParameter4[6] = 0LL;
  return result;
}
