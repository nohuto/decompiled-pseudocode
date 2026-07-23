/*
 * XREFs of sub_1406BF4AC @ 0x1406BF4AC
 * Callers:
 *     sub_1406BF480 @ 0x1406BF480 (sub_1406BF480.c)
 *     sub_1407F8B60 @ 0x1407F8B60 (sub_1407F8B60.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 */

__int64 __fastcall sub_1406BF4AC(volatile signed __int32 *Object)
{
  unsigned int v2; // edi
  _DWORD *v3; // rsi
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v5; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rcx

  v2 = -1072103391;
  v3 = sub_140347DB0();
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(v3 + 180), 0LL);
  _InterlockedOr(Object + 84, 2u);
  v5 = (_QWORD *)*((_QWORD *)Object + 40);
  if ( v5 )
  {
    *((_QWORD *)Object + 40) = 0LL;
    v5[2] = 0LL;
    v6 = *v5;
    if ( *(_QWORD **)(*v5 + 8LL) != v5 || (v7 = (_QWORD *)v5[1], (_QWORD *)*v7 != v5) )
      __fastfail(3u);
    *v7 = v6;
    *(_QWORD *)(v6 + 8) = v7;
    --v3[182];
    ObfDereferenceObject((PVOID)Object);
    v2 = 0;
  }
  ExReleasePushLockEx((ULONG_PTR)(v3 + 180), 0LL);
  sub_1402F9540((__int64)KeGetCurrentThread());
  return v2;
}
