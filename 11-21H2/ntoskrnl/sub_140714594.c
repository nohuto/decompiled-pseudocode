/*
 * XREFs of sub_140714594 @ 0x140714594
 * Callers:
 *     sub_140713F50 @ 0x140713F50 (sub_140713F50.c)
 *     sub_1409180B0 @ 0x1409180B0 (sub_1409180B0.c)
 * Callees:
 *     SeFreePrivileges @ 0x140208AC0 (SeFreePrivileges.c)
 *     Allocate @ 0x14024AC60 (Allocate.c)
 *     sub_14025C430 @ 0x14025C430 (sub_14025C430.c)
 *     sub_14025C448 @ 0x14025C448 (sub_14025C448.c)
 *     sub_1402A20D4 @ 0x1402A20D4 (sub_1402A20D4.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeWaitForMultipleObjects @ 0x1402F13C0 (KeWaitForMultipleObjects.c)
 *     ZwWriteFile @ 0x14041B860 (ZwWriteFile.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14071489C @ 0x14071489C (sub_14071489C.c)
 */

__int64 __fastcall sub_140714594(void *a1, __int64 a2, __int64 a3, struct _LOOKASIDE_LIST_EX *a4, char a5)
{
  int v6; // edi
  ULONG v7; // esi
  char *v8; // rax
  char *v9; // rbx
  unsigned int v10; // eax
  _DWORD *v11; // r14
  char *Buffer; // rdi
  unsigned int v13; // ebp
  HANDLE *v14; // r12
  NTSTATUS v15; // edi
  ULONG Length; // r15d
  unsigned int v17; // ebp
  HANDLE *v18; // rsi
  unsigned int v20; // ecx
  NTSTATUS *v21; // rax
  unsigned int v22; // [rsp+50h] [rbp-58h]
  LARGE_INTEGER ByteOffset; // [rsp+60h] [rbp-48h] BYREF
  char *v24; // [rsp+68h] [rbp-40h]
  char v26; // [rsp+B8h] [rbp+10h]
  unsigned int v27; // [rsp+C8h] [rbp+20h]
  char v28; // [rsp+D8h] [rbp+30h]

  v27 = (unsigned int)a4;
  ByteOffset.QuadPart = 0LL;
  v26 = 0;
  v6 = (int)a4;
  v7 = 0;
  v8 = (char *)Allocate(NonPagedPoolNx, 0x1400uLL, 0x77624D43u, a4);
  v9 = v8;
  if ( v8 )
  {
    memset(v8, 0, 0x1400uLL);
    if ( (a5 & 1) != 0 )
    {
      sub_14025C430();
      sub_14025C448((ULONG_PTR)KeGetCurrentThread());
      v26 = 1;
    }
    v28 = sub_1402A20D4((__int64)KeGetCurrentThread(), 1);
    v10 = 0;
    v22 = 0;
    if ( v6 )
    {
      v11 = (_DWORD *)(a3 + 16);
      while ( 1 )
      {
        Buffer = (char *)*((_QWORD *)v11 - 1);
        v13 = *v11;
        ByteOffset.QuadPart = (unsigned int)*(v11 - 4);
        v24 = Buffer;
        if ( v13 )
          break;
LABEL_16:
        ++v10;
        v11 += 6;
        v22 = v10;
        if ( v10 >= v27 )
          goto LABEL_17;
      }
      while ( 1 )
      {
        v14 = (HANDLE *)&v9[8 * v7];
        if ( !*v14 )
        {
          v15 = sub_14071489C(SynchronizationEvent);
          if ( v15 < 0 )
            goto LABEL_18;
          Buffer = v24;
        }
        Length = 0x100000;
        if ( v13 < 0x100000 )
          Length = v13;
        if ( ZwWriteFile(a1, *v14, 0LL, 0LL, (PIO_STATUS_BLOCK)&v9[16 * v7 + 4096], Buffer, Length, &ByteOffset, 0LL) < 0 )
        {
          Length = 0x10000;
          if ( v13 < 0x10000 )
            Length = v13;
          v15 = ZwWriteFile(a1, *v14, 0LL, 0LL, (PIO_STATUS_BLOCK)&v9[16 * v7 + 4096], Buffer, Length, &ByteOffset, 0LL);
          if ( v15 < 0 )
            goto LABEL_18;
          Buffer = v24;
        }
        v13 -= Length;
        ByteOffset.QuadPart += Length;
        Buffer += Length;
        ++v7;
        v24 = Buffer;
        if ( v7 == 64 )
          break;
LABEL_14:
        if ( !v13 )
        {
          v10 = v22;
          goto LABEL_16;
        }
      }
      KeWaitForMultipleObjects(0x40u, (PVOID *)v9 + 64, WaitAll, Executive, 0, 0, 0LL, (PKWAIT_BLOCK)(v9 + 1024));
      v20 = 0;
      v21 = (NTSTATUS *)(v9 + 4096);
      v7 = 0;
      while ( 1 )
      {
        v15 = *v21;
        if ( *v21 < 0 )
          break;
        ++v20;
        v21 += 4;
        if ( v20 >= 0x40 )
        {
          Buffer = v24;
          goto LABEL_14;
        }
      }
    }
    else
    {
LABEL_17:
      v15 = 0;
LABEL_18:
      if ( v7 )
        KeWaitForMultipleObjects(v7, (PVOID *)v9 + 64, WaitAll, Executive, 0, 0, 0LL, (PKWAIT_BLOCK)(v9 + 1024));
    }
    if ( v26 )
    {
      sub_14025C430();
      sub_14025C448((ULONG_PTR)KeGetCurrentThread());
    }
    sub_1402A20D4((__int64)KeGetCurrentThread(), v28);
    v17 = 0;
    v18 = (HANDLE *)v9;
    do
    {
      if ( !*v18 )
        break;
      ObfDereferenceObject(v18[64]);
      ZwClose(*v18);
      ++v17;
      ++v18;
    }
    while ( v17 < 0x40 );
    SeFreePrivileges((PPRIVILEGE_SET)v9);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v15;
}
