/*
 * XREFs of sub_1409404FC @ 0x1409404FC
 * Callers:
 *     sub_140A651B8 @ 0x140A651B8 (sub_140A651B8.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1407655BC @ 0x1407655BC (sub_1407655BC.c)
 *     sub_140767220 @ 0x140767220 (sub_140767220.c)
 *     sub_1407673E8 @ 0x1407673E8 (sub_1407673E8.c)
 *     sub_14078C4EC @ 0x14078C4EC (sub_14078C4EC.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 sub_1409404FC()
{
  unsigned int v0; // esi
  __int64 v1; // rdi
  _QWORD *v3; // rbx
  struct _KTHREAD *CurrentThread; // rax
  int v5; // eax
  _QWORD *v6; // rax
  PVOID P; // [rsp+78h] [rbp-90h] BYREF
  __int64 v8; // [rsp+80h] [rbp-88h] BYREF
  __int64 v9; // [rsp+88h] [rbp-80h] BYREF
  char *v10; // [rsp+90h] [rbp-78h]
  char v11; // [rsp+98h] [rbp-70h] BYREF

  P = 0LL;
  HIDWORD(v9) = 0;
  LODWORD(v8) = 0;
  KeSetEvent(&stru_140C46280, 0, 0);
  v0 = 0;
  if ( !byte_140C46BFC && (dword_140C23508 & 0x20) == 0 )
    return v0;
  v1 = sub_14078C4EC(0x189u);
  if ( !v1 )
    return 3221225626LL;
  KeWaitForSingleObject(&stru_140C448E0, Executive, 0, 0, 0LL);
  KeWaitForSingleObject(&stru_140C44A20, Executive, 0, 0, 0LL);
  v3 = qword_140C46278;
  v10 = &v11;
  LODWORD(v9) = 10485760;
  sub_140767220((__int64)qword_140C46278, 16);
  while ( 2 )
  {
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    ExAcquireResourceSharedLite(&stru_140C462A0, 1u);
    v3 = (_QWORD *)v3[1];
    while ( v3 )
    {
      v5 = *((_DWORD *)v3 + 100);
      if ( (v5 & 0x20) != 0 )
      {
        if ( v3 == qword_140C46278 )
        {
          v3 = 0LL;
          break;
        }
LABEL_17:
        v6 = (_QWORD *)*v3;
        if ( *v3 )
          goto LABEL_19;
        v3 = (_QWORD *)v3[2];
        sub_140767220((__int64)v3, 32);
      }
      else
      {
        if ( (v5 & 0x10) == 0 )
          break;
        v6 = (_QWORD *)v3[1];
        if ( !v6 )
        {
          sub_140767220((__int64)v3, 32);
          goto LABEL_17;
        }
LABEL_19:
        v3 = v6;
      }
    }
    ExReleaseResourceLite(&stru_140C462A0);
    sub_1402F9540((__int64)KeGetCurrentThread());
    if ( v3 )
    {
      sub_1407673E8((char *)v1, 0x189uLL, (PVOID)v3[4], 0, 1, 0, 0, 46, 0, 0LL, 0LL, (__int64)&v8, (__int64)&v9);
      P = (PVOID)v1;
      v0 = sub_1407655BC((__int64 *)&P);
      if ( P != (PVOID)v1 && _InterlockedExchangeAdd((volatile signed __int32 *)P + 16, 0xFFFFFFFF) == 1 )
        ExFreePoolWithTag(P, 0x4B706E50u);
      continue;
    }
    break;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 64), 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)v1, 0x4B706E50u);
  return v0;
}
