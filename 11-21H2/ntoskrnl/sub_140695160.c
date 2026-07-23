/*
 * XREFs of sub_140695160 @ 0x140695160
 * Callers:
 *     sub_14070BD10 @ 0x14070BD10 (sub_14070BD10.c)
 *     sub_140847028 @ 0x140847028 (sub_140847028.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     sub_1402ED880 @ 0x1402ED880 (sub_1402ED880.c)
 *     sub_1402ED98C @ 0x1402ED98C (sub_1402ED98C.c)
 *     sub_1402F89B0 @ 0x1402F89B0 (sub_1402F89B0.c)
 *     sub_1402F8A20 @ 0x1402F8A20 (sub_1402F8A20.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_140347920 @ 0x140347920 (sub_140347920.c)
 *     sub_14069532C @ 0x14069532C (sub_14069532C.c)
 *     sub_1406953C8 @ 0x1406953C8 (sub_1406953C8.c)
 */

__int64 __fastcall sub_140695160(__int64 a1, char *a2)
{
  char v2; // di
  unsigned __int64 v5; // rbx
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // r12
  struct _KTHREAD *v9; // rax
  int v10; // ebx
  int v11; // r15d
  __int64 v12; // r13
  char v13; // bl
  bool v14; // [rsp+88h] [rbp+48h] BYREF
  char v15; // [rsp+90h] [rbp+50h] BYREF
  char v16; // [rsp+98h] [rbp+58h] BYREF

  v2 = 0;
  *a2 = 0;
  v15 = 0;
  v16 = 0;
  v14 = 0;
  v5 = sub_140347920(*((_QWORD *)KeGetCurrentThread() + 23), 0x746C6644u);
  if ( !v5 )
    return 3221225473LL;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquireResourceSharedLite(*(PERESOURCE *)(v5 + 48), 1u);
  sub_1402ED98C(v5);
  v8 = *(_QWORD *)(v5 + 1104);
  ExReleaseResourceLite(*(PERESOURCE *)(v5 + 48));
  sub_1402F9540((__int64)KeGetCurrentThread());
  sub_1402F89B0((signed __int64 *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1208LL), v5, 0x746C6644u);
  v9 = KeGetCurrentThread();
  --*((_WORD *)v9 + 242);
  ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
  sub_1402ED98C(a1);
  v10 = *(_DWORD *)(a1 + 192);
  v11 = *(_DWORD *)(a1 + 196);
  v12 = *(_QWORD *)(a1 + 1104);
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  sub_1402F9540((__int64)KeGetCurrentThread());
  if ( v10 == 2 && v11 < 2 )
    return 3221225637LL;
  result = sub_1402ED880(0LL, 0LL, &v14);
  if ( (int)result >= 0 )
  {
    if ( !v14 )
      goto LABEL_15;
    v14 = 0;
    result = sub_1402F8A20(v8, v12, &v14);
    if ( (int)result < 0 )
      return result;
    if ( !v14 )
    {
LABEL_15:
      v13 = v15;
LABEL_16:
      if ( v13 || v16 )
        v2 = 1;
      *a2 = v2;
      return result;
    }
    result = sub_14069532C(a1, &v15);
    v13 = v15;
    if ( !v15 )
    {
      if ( (int)result < 0 )
        return result;
      result = sub_1406953C8(a1, &v16);
    }
    if ( (int)result >= 0 )
      goto LABEL_16;
  }
  return result;
}
