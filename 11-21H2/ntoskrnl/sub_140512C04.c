/*
 * XREFs of sub_140512C04 @ 0x140512C04
 * Callers:
 *     HalDmaAllocateCrashDumpRegistersEx @ 0x1403B58F0 (HalDmaAllocateCrashDumpRegistersEx.c)
 *     HalAllocateCrashDumpRegisters @ 0x1405055F0 (HalAllocateCrashDumpRegisters.c)
 * Callees:
 *     sub_14023A8D0 @ 0x14023A8D0 (sub_14023A8D0.c)
 *     sub_140457720 @ 0x140457720 (sub_140457720.c)
 *     sub_140503808 @ 0x140503808 (sub_140503808.c)
 *     sub_140505534 @ 0x140505534 (sub_140505534.c)
 *     sub_1405055B8 @ 0x1405055B8 (sub_1405055B8.c)
 *     sub_140513728 @ 0x140513728 (sub_140513728.c)
 *     sub_1405188FC @ 0x1405188FC (sub_1405188FC.c)
 */

__int64 __fastcall sub_140512C04(__int64 a1, int *a2)
{
  char v2; // al
  char v3; // r13
  int v4; // r14d
  __int64 v6; // r15
  int v8; // esi
  __int64 v9; // rdi
  bool v10; // zf
  __int64 result; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rax
  int v18; // eax
  int v19; // ecx
  __int64 v20; // rax
  int v21; // ecx
  __int64 v22; // rax
  __int64 v23; // rax
  _QWORD *v24; // r8
  __int64 v25; // rax
  int v26; // [rsp+70h] [rbp+40h] BYREF
  int v27; // [rsp+78h] [rbp+48h] BYREF

  v2 = *(_BYTE *)(a1 + 434);
  v3 = 0;
  v4 = *a2;
  v6 = *(_QWORD *)(a1 + 152);
  v26 = 0;
  v8 = 0;
  v27 = 0;
  v9 = 0LL;
  if ( v2 )
  {
    if ( *(_QWORD *)(a1 + 104) )
      goto LABEL_32;
    v10 = *(_DWORD *)(a1 + 112) == 0;
  }
  else
  {
    if ( *(_QWORD *)(a1 + 88) )
      goto LABEL_32;
    v10 = *(_DWORD *)(a1 + 96) == 0;
  }
  if ( v10 )
  {
    if ( !*(_BYTE *)(a1 + 337) )
    {
      if ( v2 )
      {
        result = sub_1405055B8(a1);
        v8 = v27;
        v9 = result;
        if ( v27 == v4 )
          return result;
      }
      else
      {
        result = sub_140505534(a1);
        v9 = result;
        if ( result )
          return result;
      }
    }
    if ( *(_BYTE *)(a1 + 434) )
    {
      v12 = sub_1405055B8(a1);
      if ( v12 )
      {
        v13 = sub_140457720(v12, v26, v9);
        v8 += v26;
        v9 = v13;
        v27 = v8;
      }
      if ( v8 == v4 )
        return v9;
      if ( (unsigned int)sub_14023A8D0(a1) == 2 )
        v16 = sub_1405188FC(v14, v6, v15, &v26);
      else
        v16 = sub_140503808(v14, v6, v15, (unsigned int *)&v26);
      if ( v16 )
      {
        v17 = sub_140457720(v16, v26, v9);
        v8 += v26;
        v9 = v17;
        v27 = v8;
      }
      if ( v8 == v4 )
        return v9;
    }
    else
    {
      result = sub_140505534(a1);
      v9 = result;
      if ( result )
        return result;
    }
    if ( byte_140C4C448 )
    {
      if ( *(_BYTE *)(a1 + 434) )
      {
        *a2 = v27;
      }
      else if ( !v9 )
      {
        *a2 = 0;
      }
      return v9;
    }
    v8 = v27;
  }
LABEL_32:
  if ( *(_BYTE *)(a1 + 434) )
  {
    v18 = a1 + 104;
    v19 = v6 + 104;
    while ( 1 )
    {
      if ( *(_BYTE *)(a1 + 337) )
      {
        v9 = 0LL;
      }
      else
      {
        result = sub_140513728((unsigned int)&v27, *(_QWORD *)(a1 + 48), v18, v4, 0, (__int64)&v27);
        v8 = v27;
        v9 = result;
        if ( v27 == v4 )
          return result;
        v19 = v6 + 104;
      }
      v20 = sub_140513728(v19, *(_QWORD *)(v6 + 48), v19, v4 - v8, 0, (__int64)&v26);
      if ( v20 )
      {
        v22 = sub_140457720(v20, v26, v9);
        v8 += v26;
        v9 = v22;
        v27 = v8;
      }
      if ( v8 == v4 )
        return v9;
      v23 = sub_140513728(v21, *(_QWORD *)(v6 + 40), (int)v6 + 88, v4 - v8, 0, (__int64)&v26);
      if ( v23 )
      {
        v25 = sub_140457720(v23, v26, v9);
        v8 += v26;
        v24 = (_QWORD *)(v6 + 88);
        v27 = v8;
        v9 = v25;
      }
      if ( v8 == v4 )
        return v9;
      if ( v3 )
        goto LABEL_50;
      *(_DWORD *)(a1 + 112) = 0;
      v18 = a1 + 104;
      *(_QWORD *)(a1 + 104) = 0LL;
      v19 = v6 + 104;
      *(_QWORD *)(v6 + 104) = 0LL;
      v3 = 1;
      *(_DWORD *)(v6 + 112) = 0;
      *v24 = 0LL;
      *(_DWORD *)(v6 + 96) = 0;
    }
  }
  if ( *(_BYTE *)(a1 + 337) || (result = sub_140513728(a1, *(_QWORD *)(a1 + 40), (int)a1 + 88, v4, 1, 0LL)) == 0 )
  {
    result = sub_140513728(a1, *(_QWORD *)(v6 + 40), (int)v6 + 88, v4, 1, 0LL);
    if ( !result )
    {
LABEL_50:
      *a2 = 0;
      return 0LL;
    }
  }
  return result;
}
