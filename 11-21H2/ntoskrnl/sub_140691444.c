/*
 * XREFs of sub_140691444 @ 0x140691444
 * Callers:
 *     sub_140690FEC @ 0x140690FEC (sub_140690FEC.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_1406915F0 @ 0x1406915F0 (sub_1406915F0.c)
 *     sub_14069175C @ 0x14069175C (sub_14069175C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140691444(PCUNICODE_STRING String1, __int64 a2, __int64 *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v4; // ebx
  _QWORD *v8; // rdi
  __int64 v9; // rdx
  _QWORD *v10; // r14
  struct _KTHREAD *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v15; // [rsp+58h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  v8 = 0LL;
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C48CF8, 0LL);
  v9 = sub_1406915F0(String1);
  if ( v9 )
    goto LABEL_8;
  ExReleasePushLockEx((ULONG_PTR)&qword_140C48CF8, 0LL);
  sub_1402F9540((__int64)KeGetCurrentThread());
  v8 = (_QWORD *)sub_14069175C(String1, a2);
  v10 = v8;
  if ( !v8 )
    return (unsigned int)-1073741670;
  v11 = KeGetCurrentThread();
  --*((_WORD *)v11 + 242);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C48CF8, 0LL);
  v9 = sub_1406915F0(String1);
  if ( v9 )
  {
LABEL_8:
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v9 + 16)) <= 1 )
      __fastfail(0xEu);
  }
  else
  {
    v8 = 0LL;
    v15 = v10[1] & (-1LL << (dword_140C48D04 & 0x1F));
    v12 = qword_140C48D08;
    v13 = (37
         * (BYTE6(v15)
          + 37
          * (BYTE5(v15)
           + 37
           * (BYTE4(v15)
            + 37 * (BYTE3(v15) + 37 * (BYTE2(v15) + 37 * (BYTE1(v15) + 37 * ((unsigned __int8)v15 + 11623883)))))))
         + HIBYTE(v15)) & (((unsigned int)dword_140C48D04 >> 5) - 1);
    *v10 = *(_QWORD *)(qword_140C48D08 + 8 * v13);
    *(_QWORD *)(v12 + 8 * v13) = v10;
    v9 = (__int64)v10;
    ++dword_140C48D00;
  }
  *a3 = v9;
  ExReleasePushLockEx((ULONG_PTR)&qword_140C48CF8, 0LL);
  sub_1402F9540((__int64)KeGetCurrentThread());
  if ( v8 )
    ExFreePoolWithTag(v8, 0x67655256u);
  return v4;
}
