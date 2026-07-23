/*
 * XREFs of sub_14085B02C @ 0x14085B02C
 * Callers:
 *     ObRegisterCallbacks @ 0x14085AE70 (ObRegisterCallbacks.c)
 * Callees:
 *     RtlCompareAltitudes @ 0x140212060 (RtlCompareAltitudes.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 */

__int64 __fastcall sub_14085B02C(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v3; // r14
  unsigned int v4; // esi
  ULONG_PTR v6; // r15
  _QWORD *v7; // rbx
  __int64 *v8; // rax
  __int64 v9; // rcx
  struct _KTHREAD *v10; // rcx
  const UNICODE_STRING *v12; // rbp
  LONG v13; // eax
  bool v14; // zf

  CurrentThread = KeGetCurrentThread();
  v3 = (_QWORD *)(a1 + 200);
  v4 = 0;
  --*((_WORD *)CurrentThread + 243);
  v6 = a1 + 184;
  ExAcquirePushLockExclusiveEx(a1 + 184, 0LL);
  v7 = (_QWORD *)*v3;
  if ( (_QWORD *)*v3 == v3 )
    goto LABEL_2;
  v12 = (const UNICODE_STRING *)a2[3];
  while ( 1 )
  {
    v13 = RtlCompareAltitudes((PCUNICODE_STRING)(v7[3] + 16LL), v12 + 1);
    v14 = v13 == 0;
    if ( v13 <= 0 )
      break;
    v7 = (_QWORD *)*v7;
    if ( v7 == v3 )
    {
      v14 = v13 == 0;
      break;
    }
  }
  if ( !v14 )
  {
LABEL_2:
    v8 = (__int64 *)v7[1];
    v9 = *v8;
    if ( *(__int64 **)(*v8 + 8) != v8 )
      __fastfail(3u);
    *a2 = v9;
    a2[1] = v8;
    *(_QWORD *)(v9 + 8) = a2;
    *v8 = (__int64)a2;
  }
  else
  {
    v4 = -1071906799;
  }
  ExReleasePushLockEx(v6, 0LL);
  v10 = KeGetCurrentThread();
  v14 = (*((_WORD *)v10 + 243))++ == 0xFFFF;
  if ( v14 && *((struct _KTHREAD **)v10 + 19) != (struct _KTHREAD *)((char *)v10 + 152) )
    KiCheckForKernelApcDelivery();
  return v4;
}
