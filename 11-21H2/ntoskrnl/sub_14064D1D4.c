/*
 * XREFs of sub_14064D1D4 @ 0x14064D1D4
 * Callers:
 *     sub_140A210D4 @ 0x140A210D4 (sub_140A210D4.c)
 * Callees:
 *     swprintf_s @ 0x1403E5D20 (swprintf_s.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1408138F0 @ 0x1408138F0 (sub_1408138F0.c)
 *     sub_140A21408 @ 0x140A21408 (sub_140A21408.c)
 *     sub_140A21578 @ 0x140A21578 (sub_140A21578.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_14064D1D4(_OWORD **a1)
{
  _DWORD *v2; // rcx
  unsigned int v3; // ebx
  SIZE_T v4; // rsi
  wchar_t *PoolWithTag; // r12
  wchar_t *v6; // rax
  wchar_t *v7; // rbp
  __int64 v8; // rdx
  unsigned int v9; // eax
  _DWORD *v10; // rax
  _DWORD *v11; // rdi
  __int64 v12; // rax
  unsigned int v13; // r13d
  _OWORD *v14; // rax
  _OWORD *v15; // rsi
  _DWORD *v16; // r14
  __int64 v18; // [rsp+20h] [rbp-38h]
  char v19; // [rsp+60h] [rbp+8h] BYREF

  v2 = *a1;
  v3 = 0;
  v19 = 0;
  v4 = 108LL;
  if ( !v2 )
  {
    sub_1408138F0(3LL, L"BiSpacesUpdatePhysicalDevicePath null APPLICATION DEVICE");
    return (unsigned int)-1073741811;
  }
  if ( *v2 != 2 )
    return v3;
  v3 = sub_140A21578(v2 + 5, &v19);
  if ( (v3 & 0x80000000) != 0 )
  {
    sub_1408138F0(4LL, L"SyspartIsSpace failed for %s", (char *)*a1 + 20);
    return v3;
  }
  if ( !v19 )
    return v3;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x208uLL, 0x4B444342u);
  v6 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x208uLL, 0x4B444342u);
  v7 = v6;
  if ( PoolWithTag && v6 )
  {
    v8 = 22LL;
    if ( *((_WORD *)*a1 + 10) != 92 )
      v8 = 20LL;
    swprintf_s(PoolWithTag, 0x104uLL, L"%s\\%s", L"\\??\\GLOBALROOT", (char *)*a1 + v8);
    while ( 1 )
    {
      v10 = ExAllocatePoolWithTag(PagedPool, v4, 0x4B444342u);
      v11 = v10;
      if ( !v10 )
      {
        v3 = -1073741801;
        goto LABEL_31;
      }
      v3 = sub_140A21408(PoolWithTag, v10, (unsigned int)v4);
      if ( (int)(v3 + 0x80000000) >= 0 && v3 != -2147483643 )
      {
        sub_1408138F0(4LL, L"SyspartGetPhysicalPartitions failed with error code: %x", v3);
        goto LABEL_28;
      }
      v9 = v11[1];
      if ( v9 <= (unsigned int)v4 )
        break;
      v4 = v9;
      ExFreePoolWithTag(v11, 0x4B444342u);
    }
    if ( v11[2] )
    {
      LODWORD(v18) = v11[5];
      swprintf_s(v7, 0x104uLL, L"\\Device\\Harddisk%u\\Partition%u", (unsigned int)v11[4], v18);
      v12 = -1LL;
      do
        ++v12;
      while ( v7[v12] );
      v13 = 2 * v12 + 2;
      v14 = ExAllocatePoolWithTag(PagedPool, (unsigned int)(2 * v12 + 62), 0x4B444342u);
      v15 = v14;
      if ( v14 )
      {
        v16 = *a1;
        *v14 = **a1;
        v14[1] = *((_OWORD *)v16 + 1);
        v14[2] = *((_OWORD *)v16 + 2);
        *((_QWORD *)v14 + 6) = *((_QWORD *)v16 + 6);
        *((_DWORD *)v14 + 14) = v16[14];
        memmove((char *)v14 + 20, v7, v13);
        if ( v16 )
          ExFreePoolWithTag(v16, 0x4B444342u);
        *a1 = v15;
      }
      else
      {
        v3 = -1073741801;
      }
    }
    else
    {
      v3 = -1073741823;
    }
LABEL_28:
    if ( v11 )
      ExFreePoolWithTag(v11, 0x4B444342u);
  }
  else
  {
    v3 = -1073741801;
    if ( !PoolWithTag )
      goto LABEL_32;
  }
LABEL_31:
  ExFreePoolWithTag(PoolWithTag, 0x4B444342u);
LABEL_32:
  if ( v7 )
    ExFreePoolWithTag(v7, 0x4B444342u);
  return v3;
}
