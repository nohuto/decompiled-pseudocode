/*
 * XREFs of sub_1403DBD50 @ 0x1403DBD50
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1403DBD50(_QWORD *a1, char *a2, int a3)
{
  unsigned int v3; // r10d
  __int64 v4; // r9
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR *i; // rbx
  ULONG_PTR v8; // r8
  char v9[24]; // [rsp+20h] [rbp-18h] BYREF

  v3 = -1073741811;
  v4 = 0x470FEAA4E1233993LL - *a1;
  if ( *a1 == 0x470FEAA4E1233993LL )
    v4 = 0x71FBB6C151A3E79DLL - a1[1];
  if ( !v4 && a3 == 4 && a2 )
  {
    byte_140C5AD32 = *a2;
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C23C48, 0LL);
    for ( i = (ULONG_PTR *)qword_140C23B70; i != &qword_140C23B70; i = (ULONG_PTR *)*i )
    {
      v8 = i[12];
      v9[0] = 0;
      if ( v8 )
      {
        v9[0] = byte_140C5AD32;
        sub_14042A5E0(24LL, v9);
      }
    }
    byte_140C20B28 = byte_140C5AD32;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C23C48, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_140C23C48);
    sub_1402AFC00((ULONG_PTR)&qword_140C23C48);
    sub_1402F9540((__int64)KeGetCurrentThread());
    return 0;
  }
  return v3;
}
