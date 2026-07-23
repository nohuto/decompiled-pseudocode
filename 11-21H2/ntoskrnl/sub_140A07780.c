/*
 * XREFs of sub_140A07780 @ 0x140A07780
 * Callers:
 *     <none>
 * Callees:
 *     IoAllocateMdl @ 0x14029C7F0 (IoAllocateMdl.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     MmUnlockPages @ 0x1402B8AD0 (MmUnlockPages.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140308CD0 (MmMapLockedPagesSpecifyCache.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     MmProbeAndLockPages @ 0x140319E90 (MmProbeAndLockPages.c)
 *     IoFreeMdl @ 0x140349550 (IoFreeMdl.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14041DFC0 @ 0x14041DFC0 (sub_14041DFC0.c)
 *     sub_140732D40 @ 0x140732D40 (sub_140732D40.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 *     sub_1407BA750 @ 0x1407BA750 (sub_1407BA750.c)
 */

__int64 __fastcall sub_140A07780(ULONG_PTR a1, unsigned __int64 a2, __int128 *a3, SIZE_T a4, __int64 *a5)
{
  ULONG v5; // r10d
  __int128 *MappedSystemVa; // r14
  unsigned int v7; // ebx
  struct _MDL *v8; // r15
  int v9; // edi
  char v11; // r12
  __int64 v12; // rcx
  ULONG_PTR v13; // r13
  struct _MDL *Mdl; // rax
  __int64 v15; // r9
  unsigned __int64 v16; // r12
  _QWORD *v17; // r13
  unsigned __int64 v18; // [rsp+58h] [rbp-F0h]
  __int64 v19; // [rsp+60h] [rbp-E8h]
  PVOID Object; // [rsp+88h] [rbp-C0h] BYREF
  __int64 v23; // [rsp+90h] [rbp-B8h] BYREF
  __int128 v24; // [rsp+98h] [rbp-B0h]
  ULONG_PTR v25; // [rsp+A8h] [rbp-A0h]
  unsigned __int64 v26; // [rsp+B0h] [rbp-98h]
  __int128 *v27; // [rsp+B8h] [rbp-90h]
  SIZE_T v28; // [rsp+C0h] [rbp-88h]
  struct _KTHREAD *CurrentThread; // [rsp+C8h] [rbp-80h]
  _BYTE v30[48]; // [rsp+D0h] [rbp-78h] BYREF

  v5 = a4;
  MappedSystemVa = a3;
  v18 = a2;
  v25 = a1;
  v26 = a2;
  v27 = a3;
  v28 = a4;
  Object = 0LL;
  memset(v30, 0, sizeof(v30));
  v23 = 0LL;
  v19 = 0LL;
  v7 = 0;
  v8 = 0LL;
  v9 = 0;
  if ( a4 < 0x10 )
    return 3221225476LL;
  CurrentThread = KeGetCurrentThread();
  v11 = *((_BYTE *)CurrentThread + 562);
  if ( v11 )
  {
    v24 = 0LL;
    ProbeForWrite(a3, a4, 8u);
    if ( a5 )
    {
      v12 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a5 < 0x7FFFFFFF0000LL )
        v12 = (__int64)a5;
      *(_QWORD *)v12 = *(_QWORD *)v12;
    }
    v24 = *MappedSystemVa;
    a2 = v18;
    v5 = a4;
    v13 = a1;
  }
  else
  {
    v24 = *a3;
    v13 = a1;
  }
  if ( (_DWORD)v24 )
  {
    if ( (v24 & 0xFFFFFFFC) != 0 )
    {
      v9 = -1073741637;
    }
    else
    {
      if ( a2 <= 0x7FFFFFFEFFFFLL )
      {
        if ( v11 )
        {
          Mdl = IoAllocateMdl(MappedSystemVa, v5, 0, 0, 0LL);
          v8 = Mdl;
          if ( !Mdl
            || ((MmProbeAndLockPages(Mdl, 0, IoWriteAccess), v7 = 2, (v8->MdlFlags & 5) == 0)
              ? (MappedSystemVa = (__int128 *)MmMapLockedPagesSpecifyCache(v8, 0, MmCached, 0LL, 0, 0x40000010u))
              : (MappedSystemVa = (__int128 *)v8->MappedSystemVa),
                !MappedSystemVa) )
          {
            v9 = -1073741670;
            goto LABEL_44;
          }
        }
        else
        {
          v8 = 0LL;
        }
        if ( v13 != -1LL )
        {
          v9 = sub_140732D40(v13, 4096, (__int64)PsProcessType, v11, 0x41737350u, &Object, 0LL, 0LL);
          if ( v9 < 0 )
            goto LABEL_44;
          if ( (*((_DWORD *)Object + 543) & 0x1000) != 0 )
          {
            ObfDereferenceObjectWithTag(Object, 0x41737350u);
            v9 = -1073741790;
            goto LABEL_44;
          }
          sub_14030D5C0((ULONG_PTR)Object, 0LL, (__int64)v30, v15);
          v7 |= 1u;
        }
        if ( v11 )
        {
          v9 = sub_14041DFC0(-1LL, v18);
        }
        else
        {
          *((_DWORD *)MappedSystemVa + 1) = 0;
          v19 = 16LL;
          v16 = a4 - 16;
          v17 = MappedSystemVa + 1;
          while ( v16 >= 0x30 )
          {
            if ( (*((_DWORD *)CurrentThread + 344) & 1) != 0 )
            {
              v9 = -1073741749;
              goto LABEL_44;
            }
            v9 = sub_1407BA750(0xFFFFFFFFFFFFFFFFuLL, v18, 0, (unsigned __int64)v17, 0x30uLL, &v23, 2);
            if ( v9 < 0 )
            {
              if ( *((_DWORD *)MappedSystemVa + 1) )
                v9 = 0;
              break;
            }
            v16 -= v23;
            v19 += v23;
            v18 = *v17 + v17[3];
            v17 += 6;
            ++*((_DWORD *)MappedSystemVa + 1);
            *((_QWORD *)MappedSystemVa + 1) = v18;
          }
          if ( v9 >= 0 && *((_QWORD *)MappedSystemVa + 1) != 0x7FFFFFFF0000LL )
            v9 = 261;
        }
        goto LABEL_44;
      }
      v9 = -1073741503;
    }
  }
  else
  {
    v9 = -1073741811;
  }
LABEL_44:
  if ( (v7 & 1) != 0 )
    sub_1402D0930((__int64)v30, 0LL);
  if ( v8 )
  {
    if ( v7 >= 2 )
      MmUnlockPages(v8);
    IoFreeMdl(v8);
  }
  if ( a5 )
    *a5 = v19;
  return (unsigned int)v9;
}
