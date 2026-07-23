/*
 * XREFs of sub_140847260 @ 0x140847260
 * Callers:
 *     sub_140847028 @ 0x140847028 (sub_140847028.c)
 * Callees:
 *     sub_140205A98 @ 0x140205A98 (sub_140205A98.c)
 *     sub_140276A48 @ 0x140276A48 (sub_140276A48.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_1402DF7D8 @ 0x1402DF7D8 (sub_1402DF7D8.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_140300B40 @ 0x140300B40 (sub_140300B40.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     sub_140672524 @ 0x140672524 (sub_140672524.c)
 *     sub_1406965F4 @ 0x1406965F4 (sub_1406965F4.c)
 *     sub_1406AB17C @ 0x1406AB17C (sub_1406AB17C.c)
 *     SeAuditingWithTokenForSubcategory @ 0x14079D560 (SeAuditingWithTokenForSubcategory.c)
 *     sub_140847400 @ 0x140847400 (sub_140847400.c)
 */

__int64 __fastcall sub_140847260(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  bool v4; // zf
  void *v7; // rdi
  unsigned int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // eax
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int v14; // ebp
  __int64 v15; // r8
  int v16; // r14d
  unsigned __int64 v17; // rbx
  struct _KTHREAD *v18; // rax
  __int64 result; // rax
  PVOID v20; // rcx
  unsigned int v21; // ecx
  __int64 v22; // r8
  __int64 v23; // rdx
  signed __int32 v24[8]; // [rsp+0h] [rbp-58h] BYREF
  char v25; // [rsp+68h] [rbp+10h] BYREF
  PVOID Object; // [rsp+78h] [rbp+20h] BYREF

  v4 = *(_DWORD *)(a2 + 192) == 1;
  Object = 0LL;
  v7 = 0LL;
  v25 = 0;
  if ( !v4 )
    return 3221225640LL;
  v8 = sub_140287F30(a1);
  if ( v8 != -1 && !dword_140D3B0CC )
    v7 = sub_1402DF7D8(v8, v9, v10, v11);
  v12 = sub_140300B40(a1);
  CurrentThread = KeGetCurrentThread();
  v14 = v12;
  --*((_WORD *)CurrentThread + 242);
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a2 + 48), 1u);
  _InterlockedOr(v24, 0);
  if ( *(_BYTE *)(a2 + 204) )
  {
    _InterlockedOr(v24, 0);
    ExReleaseResourceLite(*(PERESOURCE *)(a2 + 48));
    sub_1402F9540((__int64)KeGetCurrentThread());
    if ( v7 )
      ObfDereferenceObject(v7);
    return 3221225771LL;
  }
  else
  {
    *(_BYTE *)(a2 + 204) = 1;
    v16 = sub_140205A98(a2, a1, &v25);
    if ( v16 < 0 )
    {
      _InterlockedOr(v24, 0);
      ExReleaseResourceLite(*(PERESOURCE *)(a2 + 48));
      sub_1402F9540((__int64)KeGetCurrentThread());
      if ( !v7 )
        return (unsigned int)v16;
      v20 = v7;
LABEL_21:
      ObfDereferenceObject(v20);
      return (unsigned int)v16;
    }
    if ( (*(_DWORD *)(a2 + 200) & 0x4000) != 0 )
    {
      v21 = *(_DWORD *)(a2 + 120);
      if ( v21 != v14 )
      {
        sub_1406AB17C(v21, *(_QWORD *)(a2 + 1080));
        *(_QWORD *)(a2 + 1080) = 0LL;
        LOBYTE(v22) = 1;
        sub_140672524(a2, v14, v22, (__int64)v7, &Object);
        v23 = *(_QWORD *)(a2 + 784);
        *(_DWORD *)(a2 + 120) = v14;
        v16 = sub_1406965F4(a2, v23);
        if ( v16 < 0 )
        {
          _InterlockedOr(v24, 0);
          ExReleaseResourceLite(*(PERESOURCE *)(a2 + 48));
          sub_1402F9540((__int64)KeGetCurrentThread());
          v20 = Object;
          if ( !Object )
            return (unsigned int)v16;
          goto LABEL_21;
        }
      }
    }
    LOBYTE(v15) = 1;
    sub_140672524(a2, v14, v15, (__int64)v7, &Object);
    *(_DWORD *)(a2 + 120) = v14;
    _InterlockedOr(v24, 0);
    ExReleaseResourceLite(*(PERESOURCE *)(a2 + 48));
    sub_1402F9540((__int64)KeGetCurrentThread());
    if ( Object )
      ObfDereferenceObject(Object);
    if ( SeAuditingWithTokenForSubcategory(133, 0LL) )
      sub_140847400(a1, a2);
    ObfReferenceObject((PVOID)a2);
    v17 = sub_140276A48((volatile __int64 *)(a1 + 1208), a2);
    if ( v17 )
    {
      v18 = KeGetCurrentThread();
      --*((_WORD *)v18 + 242);
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v17 + 48), 1u);
      _InterlockedOr(v24, 0);
      *(_BYTE *)(v17 + 204) = 0;
      _InterlockedOr(v24, 0);
      ExReleaseResourceLite(*(PERESOURCE *)(v17 + 48));
      sub_1402F9540((__int64)KeGetCurrentThread());
      result = 0LL;
      *a3 = v17;
    }
    else
    {
      return 3221225596LL;
    }
  }
  return result;
}
