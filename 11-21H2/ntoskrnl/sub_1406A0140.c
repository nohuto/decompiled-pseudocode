/*
 * XREFs of sub_1406A0140 @ 0x1406A0140
 * Callers:
 *     sub_140845800 @ 0x140845800 (sub_140845800.c)
 *     sub_140B1B688 @ 0x140B1B688 (sub_140B1B688.c)
 * Callees:
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ntoskrnl_27 @ 0x1406A0430 (ntoskrnl_27.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 *     sub_14082D870 @ 0x14082D870 (sub_14082D870.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1406A0140(unsigned __int64 a1, _DWORD *a2, volatile void *a3, unsigned int a4, _DWORD *a5)
{
  SIZE_T v5; // r12
  int v8; // ebx
  char v9; // dl
  _DWORD *v10; // r14
  int v11; // eax
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  PVOID PoolWithTag; // rax
  PVOID v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // eax
  int v20; // ecx
  unsigned int v21; // eax
  _DWORD Size[3]; // [rsp+44h] [rbp-64h] BYREF
  PVOID P; // [rsp+50h] [rbp-58h]
  _OWORD v25[5]; // [rsp+58h] [rbp-50h] BYREF
  int v26; // [rsp+B0h] [rbp+8h] BYREF
  _DWORD *v27; // [rsp+B8h] [rbp+10h]
  volatile void *v28; // [rsp+C0h] [rbp+18h]
  unsigned int v29; // [rsp+C8h] [rbp+20h]

  v29 = a4;
  v28 = a3;
  v27 = a2;
  v5 = a4;
  v25[0] = 0LL;
  v8 = 0;
  P = 0LL;
  v26 = 0;
  memset(Size, 0, sizeof(Size));
  v9 = *((_BYTE *)KeGetCurrentThread() + 562);
  if ( a1 && (v10 = a5) != 0LL && (a3 || !a4) )
  {
    if ( a4 > 0x800000 )
    {
      v8 = -1073741801;
    }
    else if ( v9 )
    {
      if ( a1 >= 0x7FFFFFFF0000LL )
        a1 = 0x7FFFFFFF0000LL;
      v11 = *(_DWORD *)a1;
      LODWORD(v25[0]) = *(_DWORD *)a1;
      v12 = *(_QWORD *)(a1 + 8);
      *((_QWORD *)&v25[0] + 1) = v12;
      if ( v12 && (_WORD)v11 && (v11 & 1) == 0 )
      {
        if ( (v12 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v13 = v12 + (unsigned __int16)v11;
        if ( v13 > 0x7FFFFFFF0000LL || v13 < v12 )
          MEMORY[0x7FFFFFFF0000] = 0;
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, LOWORD(v25[0]), 0x20534C53u);
        P = PoolWithTag;
        if ( PoolWithTag )
        {
          v15 = PoolWithTag;
          memmove(PoolWithTag, *((const void **)&v25[0] + 1), LOWORD(v25[0]));
          *((_QWORD *)&v25[0] + 1) = v15;
          if ( a2 )
          {
            v16 = (__int64)a2;
            if ( (unsigned __int64)a2 >= 0x7FFFFFFF0000LL )
              v16 = 0x7FFFFFFF0000LL;
            *(_DWORD *)v16 = *(_DWORD *)v16;
            v26 = *a2;
          }
          if ( a3
            && (_DWORD)v5
            && (ProbeForWrite(a3, v5, 1u),
                (*(_QWORD *)&Size[1] = ExAllocatePoolWithTag(PagedPool, v5, 0x20534C53u)) == 0LL) )
          {
            v8 = -1073741801;
          }
          else
          {
            v17 = (__int64)v10;
            if ( (unsigned __int64)v10 >= 0x7FFFFFFF0000LL )
              v17 = 0x7FFFFFFF0000LL;
            *(_DWORD *)v17 = *(_DWORD *)v17;
            Size[0] = *v10;
          }
        }
        else
        {
          v8 = -1073741801;
        }
      }
      else
      {
        v8 = -1073741811;
      }
      if ( v8 >= 0 )
      {
        v18 = *((_QWORD *)sub_140347DB0() + 113);
        if ( qword_140D3B4B0 )
          v19 = sub_14042A5E0(v18, v25);
        else
          v19 = sub_14082D870(v18, v25, &v26, *(_QWORD *)&Size[1], v5, Size);
        v20 = v19;
        v8 = v19;
        if ( a2 )
          *a2 = v26;
        v21 = Size[0];
        *v10 = Size[0];
        if ( v20 >= 0 && a3 )
        {
          if ( (unsigned int)v5 < v21 )
            v8 = -1073741789;
          else
            memmove((void *)a3, *(const void **)&Size[1], v21);
        }
      }
    }
    else
    {
      v8 = ntoskrnl_27(a1, (int)a2, (int)a3, a4, (__int64)a5);
    }
  }
  else
  {
    v8 = -1073741811;
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( *(_QWORD *)&Size[1] )
    ExFreePoolWithTag(*(PVOID *)&Size[1], 0);
  return (unsigned int)v8;
}
