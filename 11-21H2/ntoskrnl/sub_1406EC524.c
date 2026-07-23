/*
 * XREFs of sub_1406EC524 @ 0x1406EC524
 * Callers:
 *     NtTraceControl @ 0x1407954F0 (NtTraceControl.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406EC9F8 @ 0x1406EC9F8 (sub_1406EC9F8.c)
 *     sub_1406ECA80 @ 0x1406ECA80 (sub_1406ECA80.c)
 *     sub_140729C30 @ 0x140729C30 (sub_140729C30.c)
 *     sub_14072B3B0 @ 0x14072B3B0 (sub_14072B3B0.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 *     sub_14079435C @ 0x14079435C (sub_14079435C.c)
 *     sub_140797594 @ 0x140797594 (sub_140797594.c)
 *     sub_1407981E8 @ 0x1407981E8 (sub_1407981E8.c)
 */

__int64 __fastcall sub_1406EC524(int *a1)
{
  PVOID v2; // r15
  PVOID v3; // r12
  volatile void *v4; // rsi
  unsigned __int64 v5; // r13
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  SIZE_T v10; // rdx
  __int16 v11; // ax
  char v12; // al
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rsi
  int v17; // ebx
  void *v18; // rcx
  void *v19; // rcx
  __int64 v20; // rcx
  char v21; // cl
  __int64 v22; // rdx
  int v23; // edi
  __int16 v25; // ax
  char v26; // al
  PVOID Object; // [rsp+50h] [rbp-C8h] BYREF
  PVOID v28; // [rsp+58h] [rbp-C0h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-B8h] BYREF
  volatile void *Address; // [rsp+68h] [rbp-B0h]
  unsigned __int64 v31; // [rsp+70h] [rbp-A8h]
  unsigned __int64 v32; // [rsp+78h] [rbp-A0h]
  volatile void *v33; // [rsp+80h] [rbp-98h]
  unsigned __int64 v34; // [rsp+88h] [rbp-90h]
  __int64 v35; // [rsp+90h] [rbp-88h]
  volatile void *v36; // [rsp+98h] [rbp-80h]
  __int64 v37; // [rsp+A0h] [rbp-78h] BYREF
  _DWORD v38[2]; // [rsp+A8h] [rbp-70h] BYREF
  __int64 v39; // [rsp+B0h] [rbp-68h]
  __int64 v40; // [rsp+B8h] [rbp-60h]
  int v41; // [rsp+C0h] [rbp-58h]
  int v42; // [rsp+C4h] [rbp-54h]
  __int128 v43; // [rsp+C8h] [rbp-50h]
  unsigned int v44; // [rsp+120h] [rbp+8h]
  unsigned int v45; // [rsp+128h] [rbp+10h]

  v37 = 0LL;
  v38[1] = 0;
  v42 = 0;
  v2 = 0LL;
  v3 = 0LL;
  v44 = *a1;
  Handle = 0LL;
  v36 = (volatile void *)*((_QWORD *)a1 + 2);
  Address = (volatile void *)*((_QWORD *)a1 + 1);
  v45 = a1[1];
  v32 = *((_QWORD *)a1 + 6);
  v4 = (volatile void *)*((_QWORD *)a1 + 5);
  v33 = v4;
  v5 = *((_QWORD *)a1 + 7);
  v34 = v5;
  v31 = *((_QWORD *)a1 + 8);
  ProbeForWrite(v36, (((v45 >> 12) + 31) >> 3) & 0x1FFFFFFC, 4u);
  ProbeForWrite(Address, v45, 4u);
  v6 = v32;
  if ( v32 >= 0x7FFFFFFF0000LL )
    v6 = 0x7FFFFFFF0000LL;
  *(_DWORD *)v6 = *(_DWORD *)v6;
  v7 = v5;
  if ( v5 >= 0x7FFFFFFF0000LL )
    v7 = 0x7FFFFFFF0000LL;
  *(_DWORD *)v7 = *(_DWORD *)v7;
  v8 = v31;
  if ( v31 >= 0x7FFFFFFF0000LL )
    v8 = 0x7FFFFFFF0000LL;
  *(_DWORD *)v8 = *(_DWORD *)v8;
  v9 = *((_QWORD *)KeGetCurrentThread() + 23);
  if ( !*(_QWORD *)(v9 + 1408)
    || ((v11 = *(_WORD *)(v9 + 2412), v11 == 332) || v11 == 452 ? (v12 = 1) : (v12 = 0), v10 = 4LL, !v12) )
  {
    v10 = 8LL;
  }
  ProbeForWrite(v4, v10, 4u);
  v35 = *((_QWORD *)sub_140347DB0() + 108);
  LOBYTE(v13) = 1;
  v14 = sub_140797594(v35, v44, v13);
  v16 = v14;
  if ( !v14 )
    return 3221225485LL;
  if ( (*(_DWORD *)(v14 + 12) & 0x100) != 0 )
  {
    v17 = sub_14079435C(0x400u);
    if ( v17 >= 0 )
    {
      v17 = sub_1406ECA80(&Handle);
      if ( v17 >= 0 )
      {
        v18 = (void *)*((_QWORD *)a1 + 3);
        Object = 0LL;
        v17 = ObReferenceObjectByHandle(v18, 2u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
        v3 = Object;
        if ( v17 >= 0 )
        {
          v19 = (void *)*((_QWORD *)a1 + 4);
          v28 = 0LL;
          v17 = ObReferenceObjectByHandle(v19, 2u, (POBJECT_TYPE)ExEventObjectType, 1, &v28, 0LL);
          v2 = v28;
          if ( v17 >= 0 )
          {
            v38[0] = 48;
            v39 = 0LL;
            v41 = 64;
            v40 = 0LL;
            v43 = 0LL;
            v17 = sub_14072B3B0(0, (_DWORD)qword_140D053C0, (unsigned int)v38, 1);
            if ( v17 >= 0 )
            {
              memset(0LL, 0, 0xA0uLL);
              MEMORY[0x58] = v44;
              MEMORY[0x10] = Handle;
              MEMORY[0x18] = *((_QWORD *)KeGetCurrentThread() + 23);
              MEMORY[0x30] = Object;
              MEMORY[0x38] = v28;
              MEMORY[0x40] = v32;
              MEMORY[0x48] = v33;
              MEMORY[0x70] = Address;
              MEMORY[0x78] = v45;
              MEMORY[0x88] = v34;
              MEMORY[0x90] = v31;
              MEMORY[0x98] = v35;
              MEMORY[0x60] = v45 >> 12;
              MEMORY[0x68] = v36;
              v20 = *((_QWORD *)KeGetCurrentThread() + 23);
              if ( *(_QWORD *)(v20 + 1408)
                && ((v25 = *(_WORD *)(v20 + 2412), v25 == 332) || v25 == 452 ? (v26 = 1) : (v26 = 0), v26) )
              {
                v21 = 16;
              }
              else
              {
                v21 = 0;
              }
              MEMORY[0x5A] = v21 | MEMORY[0x5A] & 0xEF;
              MEMORY[0x28] = a1;
              v23 = sub_140729C30(0LL, 0LL, 0, (__int64)&v37, (__int64)(a1 + 18));
              if ( v23 >= 0 )
              {
                ExAcquirePushLockExclusiveEx(v16 + 688, 0LL);
                *(_QWORD *)(v16 + 352) = 0LL;
                ExReleasePushLockEx(v16 + 688, 0LL);
                sub_1406EC9F8(v16, 32LL);
              }
              LOBYTE(v22) = 1;
              sub_1407981E8(v16, v22);
              return (unsigned int)v23;
            }
          }
        }
      }
    }
  }
  else
  {
    v17 = -1073741811;
  }
  LOBYTE(v15) = 1;
  sub_1407981E8(v16, v15);
  if ( Handle )
    ZwClose(Handle);
  if ( v3 )
    ObfDereferenceObject(v3);
  if ( v2 )
    ObfDereferenceObject(v2);
  return (unsigned int)v17;
}
