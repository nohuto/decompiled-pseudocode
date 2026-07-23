/*
 * XREFs of sub_14037DAEC @ 0x14037DAEC
 * Callers:
 *     sub_140253900 @ 0x140253900 (sub_140253900.c)
 *     sub_1405FBB30 @ 0x1405FBB30 (sub_1405FBB30.c)
 * Callees:
 *     sub_140238BC4 @ 0x140238BC4 (sub_140238BC4.c)
 *     sub_140379C24 @ 0x140379C24 (sub_140379C24.c)
 *     sub_14037AE58 @ 0x14037AE58 (sub_14037AE58.c)
 *     sub_14037DA00 @ 0x14037DA00 (sub_14037DA00.c)
 *     sub_14037DD88 @ 0x14037DD88 (sub_14037DD88.c)
 *     ZwUnlockVirtualMemory @ 0x14041F240 (ZwUnlockVirtualMemory.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1405FC1B0 @ 0x1405FC1B0 (sub_1405FC1B0.c)
 *     sub_1405FC2D0 @ 0x1405FC2D0 (sub_1405FC2D0.c)
 *     sub_1407FABA0 @ 0x1407FABA0 (sub_1407FABA0.c)
 *     sub_1408042A4 @ 0x1408042A4 (sub_1408042A4.c)
 */

void __fastcall sub_14037DAEC(__int64 a1, int a2, __int64 a3)
{
  int v5; // edx
  int v6; // edx
  int v7; // edx
  struct _MDL *v8; // r14
  int v9; // r15d
  int v10; // ebx
  PVOID v11; // rcx
  PVOID v12; // rcx
  int v13; // eax
  ULONG_PTR v14; // rcx
  int v15; // edx
  struct _MDL *v16; // r12
  int v17; // eax
  struct _KTHREAD *v18[2]; // [rsp+30h] [rbp-10h] BYREF
  PVOID BaseAddress; // [rsp+80h] [rbp+40h] BYREF
  ULONG_PTR RegionSize; // [rsp+88h] [rbp+48h] BYREF

  BaseAddress = 0LL;
  RegionSize = 0LL;
  v5 = a2 - 2;
  if ( !v5 )
  {
    RegionSize = *(_QWORD *)(a3 + 8);
    BaseAddress = (PVOID)sub_1407FABA0();
    v11 = BaseAddress;
    if ( BaseAddress )
    {
      if ( *(_QWORD *)(a1 + 112) )
      {
        if ( (*(_DWORD *)(a3 + 32) & 1) == 0 )
        {
          v17 = sub_1405FC1B0(*(_QWORD *)(a1 + 112));
          v11 = BaseAddress;
          v10 = v17;
          if ( v17 < 0 )
          {
            sub_1408042A4(BaseAddress);
            goto LABEL_12;
          }
        }
      }
      *(_QWORD *)(a3 + 24) = v11;
      goto LABEL_11;
    }
    goto LABEL_24;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    v12 = *(PVOID *)a3;
    RegionSize = *(_QWORD *)(a3 + 8);
    v13 = *(_DWORD *)(a3 + 16);
    BaseAddress = v12;
    if ( (v13 & 1) == 0 )
    {
      sub_1408042A4(v12);
      v14 = *(_QWORD *)(a1 + 112);
      if ( v14 )
        sub_1405FC2D0(v14);
    }
    goto LABEL_11;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    BaseAddress = *(PVOID *)a3;
    RegionSize = *(_QWORD *)(a3 + 8);
    v8 = (struct _MDL *)sub_14037DA00(*(PEX_SPIN_LOCK *)(a1 + 120), 2, a1, 0LL, *(_DWORD *)(a3 + 20) & 1);
    if ( v8 )
    {
      v18[0] = KeGetCurrentThread();
      v9 = sub_140238BC4(v18);
      v10 = sub_14037DD88(BaseAddress, RegionSize, v8, 0LL);
      if ( v10 == -1073741395 && (*(_DWORD *)(a3 + 20) & 1) != 0 )
      {
        v16 = (struct _MDL *)sub_14037DA00(*(PEX_SPIN_LOCK *)(a1 + 120), 4, a1, 0LL, 1);
        v10 = sub_14037DD88(BaseAddress, RegionSize, v8, 1LL);
        if ( v10 >= 0 )
          v8->Next = v16;
        else
          sub_14037AE58(*(_QWORD *)(a1 + 120), 4, a1, v16);
      }
      if ( v9 != *(_DWORD *)(a3 + 16) )
        sub_140238BC4(v18);
      if ( v10 >= 0 )
      {
        BaseAddress = (PVOID)sub_14037DA00(*(PEX_SPIN_LOCK *)(a1 + 120), 5, a1, (__int64)v8, *(_DWORD *)(a3 + 20) & 1);
        if ( BaseAddress )
        {
          *(_QWORD *)(a3 + 24) = v8;
          goto LABEL_11;
        }
        v10 = -1073741670;
        sub_140379C24(v8, *(_QWORD *)(a1 + 120), a1);
      }
      sub_14037AE58(*(_QWORD *)(a1 + 120), 2, a1, v8);
      goto LABEL_12;
    }
LABEL_24:
    v10 = -1073741670;
    goto LABEL_12;
  }
  v15 = v7 - 1;
  if ( !v15 )
  {
    v10 = sub_14042A5E0(a1, *(_QWORD *)(a3 + 8));
    goto LABEL_12;
  }
  if ( v15 != 1 )
  {
    v10 = -1073741811;
    goto LABEL_12;
  }
  BaseAddress = *(PVOID *)a3;
  RegionSize = *(_QWORD *)(a3 + 8);
  ZwUnlockVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 1u);
LABEL_11:
  v10 = 0;
LABEL_12:
  *(_DWORD *)(a3 + 40) = v10;
}
