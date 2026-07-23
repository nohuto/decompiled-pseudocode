/*
 * XREFs of sub_1409EB878 @ 0x1409EB878
 * Callers:
 *     sub_1406ECE0C @ 0x1406ECE0C (sub_1406ECE0C.c)
 * Callees:
 *     sub_14024BA7C @ 0x14024BA7C (sub_14024BA7C.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     ObLogSecurityDescriptor @ 0x140724E60 (ObLogSecurityDescriptor.c)
 *     ObDereferenceSecurityDescriptor @ 0x140725730 (ObDereferenceSecurityDescriptor.c)
 *     sub_1409E0AEC @ 0x1409E0AEC (sub_1409E0AEC.c)
 */

__int64 __fastcall sub_1409EB878(__int64 a1, char *a2)
{
  int v3; // edi
  __int64 v4; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rcx
  signed __int32 v8[10]; // [rsp+0h] [rbp-28h] BYREF
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = 0LL;
  v3 = ObLogSecurityDescriptor(a2, &v9, 0x10u);
  if ( v3 >= 0 )
  {
    v4 = _InterlockedExchange64((volatile __int64 *)(a1 + 784), (v9 | 0xF) & -(__int64)(v9 != 0));
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    _InterlockedOr(v8, 0);
    if ( (qword_140C162F0 & 1) != 0 )
      sub_14024BA7C((ULONG_PTR)&qword_140C162F0);
    sub_1402F9540((__int64)KeGetCurrentThread());
    ObDereferenceSecurityDescriptor(v4 & 0xFFFFFFFFFFFFFFF0uLL, (v4 & 0xF) + 1);
    if ( EtwEventEnabled(qword_140C15FA8, &stru_1400396F0) )
      sub_1409E0AEC(v6, &stru_1400396F0, a1);
  }
  return (unsigned int)v3;
}
