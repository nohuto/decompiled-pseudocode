/*
 * XREFs of sub_1409B1074 @ 0x1409B1074
 * Callers:
 *     sub_140A6AEC0 @ 0x140A6AEC0 (sub_140A6AEC0.c)
 * Callees:
 *     sub_140204738 @ 0x140204738 (sub_140204738.c)
 *     sub_14024BA7C @ 0x14024BA7C (sub_14024BA7C.c)
 *     sub_140276A48 @ 0x140276A48 (sub_140276A48.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1402DF580 (PsIsCurrentThreadInServerSilo.c)
 *     KeWaitForMultipleObjects @ 0x1402F13C0 (KeWaitForMultipleObjects.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_14030263C @ 0x14030263C (sub_14030263C.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_14068A6A0 @ 0x14068A6A0 (sub_14068A6A0.c)
 *     EtwUnregister @ 0x1406B7470 (EtwUnregister.c)
 *     sub_1406BF0AC @ 0x1406BF0AC (sub_1406BF0AC.c)
 *     MmUnmapViewOfSection @ 0x1406CD150 (MmUnmapViewOfSection.c)
 *     sub_1407B6B90 @ 0x1407B6B90 (sub_1407B6B90.c)
 *     sub_1407D80A4 @ 0x1407D80A4 (sub_1407D80A4.c)
 *     PsTerminateServerSilo @ 0x1409AB9B0 (PsTerminateServerSilo.c)
 *     sub_1409B196C @ 0x1409B196C (sub_1409B196C.c)
 */

__int64 sub_1409B1074()
{
  unsigned int v0; // r12d
  void *v1; // r15
  void *i; // rcx
  void *v4; // rax
  void *v5; // rbx
  unsigned int v6; // esi
  __int64 v7; // rdi
  __int64 *v8; // rbx
  __int64 v9; // rcx
  int v10; // ecx
  NTSTATUS v11; // r14d
  PVOID *v12; // rbx
  __int64 v13; // rbp
  __int64 v14; // rcx
  __int64 *v15; // rbx
  __int64 v16; // rdi
  __int64 v17; // rax
  volatile __int64 *v18; // rbp
  struct _KTHREAD *CurrentThread; // rsi
  void *v20; // r14
  void *v21; // rcx
  REGHANDLE v22; // rcx
  signed __int32 v23[8]; // [rsp+0h] [rbp-88h] BYREF
  LARGE_INTEGER Timeout; // [rsp+40h] [rbp-48h] BYREF
  PVOID Object[2]; // [rsp+48h] [rbp-40h] BYREF
  __int64 v26; // [rsp+58h] [rbp-30h]

  Timeout.QuadPart = -1000000000LL;
  *(_OWORD *)Object = 0LL;
  v26 = 0LL;
  v0 = 1;
  v1 = sub_140204738(0LL);
  if ( _InterlockedCompareExchange64(&qword_140D3D200, (signed __int64)KeGetCurrentThread(), 0LL) )
    return 0LL;
  if ( PsIsCurrentThreadInServerSilo() )
    __int2c();
  for ( i = 0LL; ; i = v5 )
  {
    v4 = sub_14068A6A0(i, 1);
    v5 = v4;
    if ( !v4 )
      break;
    PsTerminateServerSilo((__int64)v4);
  }
  sub_1406BF0AC((__int64)sub_1409B1740, 0LL);
  v6 = 0;
  do
  {
    while ( 1 )
    {
      v7 = 0LL;
      v8 = sub_1407B6B90(0LL);
      if ( v8 )
      {
        do
        {
          if ( (*((_DWORD *)v8 + 543) & 0x1000) == 0
            && v8 != qword_140D06940
            && v8 != *((__int64 **)v1 + 110)
            && !sub_14030263C(v8) )
          {
            v10 = sub_1407D80A4(v9, 0xC00002EB);
            if ( (*((_DWORD *)v8 + 281) & 4) == 0 && v10 != 290 && (unsigned int)v7 < 3 )
            {
              ObfReferenceObject(v8);
              Object[v7] = v8;
              v7 = (unsigned int)(v7 + 1);
            }
          }
          v8 = sub_1407B6B90(v8);
        }
        while ( v8 );
        if ( (_DWORD)v7 )
        {
          v11 = KeWaitForMultipleObjects(v7, Object, WaitAny, Executive, 0, 0, &Timeout, 0LL);
          v12 = Object;
          v13 = (unsigned int)v7;
          do
          {
            ObfDereferenceObject(*v12++);
            --v13;
          }
          while ( v13 );
          if ( v11 == 258 )
            break;
        }
      }
      v6 = 0;
      if ( !(_DWORD)v7 )
        goto LABEL_26;
    }
    ++v6;
  }
  while ( v6 <= 0xA || byte_140D3B0BC );
  v0 = 0;
LABEL_26:
  if ( dword_140C23508 )
  {
    v14 = *((_QWORD *)v1 + 110);
    if ( v14 )
    {
      sub_1407D80A4(v14, 0xC00002EB);
      sub_1409B196C(*((_QWORD *)v1 + 110));
    }
  }
  v15 = (__int64 *)off_140D3B180;
  v16 = 6LL;
  do
  {
    v17 = *v15;
    if ( *v15 )
    {
      if ( *(_QWORD *)(v17 + 32) )
      {
        MmUnmapViewOfSection((ULONG_PTR)PsInitialSystemProcess);
        v17 = *v15;
      }
      v18 = *(volatile __int64 **)v17;
      CurrentThread = KeGetCurrentThread();
      v20 = (void *)sub_140276A48(*(volatile __int64 **)v17, 0LL);
      if ( v20 )
      {
        --*((_WORD *)CurrentThread + 242);
        _InterlockedOr(v23, 0);
        if ( (v18[1] & 1) != 0 )
          sub_14024BA7C((ULONG_PTR)(v18 + 1));
        sub_1402F9540((__int64)CurrentThread);
        ObfDereferenceObject(v20);
      }
    }
    ++v15;
    --v16;
  }
  while ( v16 );
  ZwClose(*((HANDLE *)qword_140D06C40 + 14));
  *((_QWORD *)qword_140D06C40 + 14) = 0LL;
  v21 = (void *)*((_QWORD *)PsInitialSystemProcess + 183);
  if ( (unsigned __int64)v21 >= 2 )
  {
    ObfDereferenceObject(v21);
    *((_QWORD *)PsInitialSystemProcess + 183) = 1LL;
  }
  v22 = qword_140C03068;
  qword_140C03068 = 0LL;
  dword_140C03048 = 0;
  EtwUnregister(v22);
  return v0;
}
