/*
 * XREFs of PsTlsSetValue @ 0x1406941F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14021BB0C @ 0x14021BB0C (sub_14021BB0C.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_1406942E8 @ 0x1406942E8 (sub_1406942E8.c)
 */

__int64 __fastcall PsTlsSetValue(__int64 a1, int a2)
{
  __int64 *v3; // rdi
  int v4; // edx
  int v5; // esi
  struct _KTHREAD *CurrentThread; // rax
  int v7; // ebx
  struct _KTHREAD *v8; // rax
  bool v9; // zf
  unsigned int v11; // eax
  __int64 v12; // [rsp+60h] [rbp+18h] BYREF
  __int64 v13; // [rsp+68h] [rbp+20h] BYREF

  v12 = 0LL;
  v3 = (__int64 *)((char *)KeGetCurrentThread() + 2280);
  v13 = 0LL;
  v4 = a1;
  if ( (*(_DWORD *)v3 & 2) != 0 )
    return (unsigned int)-1073741749;
  if ( (*(_DWORD *)v3 & 1) == 0 )
  {
    v5 = 0;
    goto LABEL_4;
  }
  v7 = sub_14021BB0C(a1, a1, &v13);
  if ( v7 < 0 )
    return (unsigned int)v7;
  if ( (_DWORD)v13 != 0x40000000 )
    return (unsigned int)-1073741749;
  v5 = 1;
  v12 = *v3;
  v3 = &v12;
  LODWORD(v12) = v12 & 0xFFFFFFFE;
LABEL_4:
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 243);
  v7 = sub_1406942E8(a1, (_DWORD)v3, v4, a2, v5);
  v8 = KeGetCurrentThread();
  v9 = (*((_WORD *)v8 + 243))++ == 0xFFFF;
  if ( v9 && *((struct _KTHREAD **)v8 + 19) != (struct _KTHREAD *)((char *)v8 + 152) )
    KiCheckForKernelApcDelivery();
  if ( v7 == -1073741801 )
  {
    v11 = -1073741801;
    if ( v5 )
      return (unsigned int)-1073741749;
    return v11;
  }
  return (unsigned int)v7;
}
