/*
 * XREFs of IoCreateDriver @ 0x14084F500
 * Callers:
 *     sub_14084F4C0 @ 0x14084F4C0 (sub_14084F4C0.c)
 *     sub_140A9BF20 @ 0x140A9BF20 (sub_140A9BF20.c)
 *     sub_140A9E12C @ 0x140A9E12C (sub_140A9E12C.c)
 *     sub_140AFFEF4 @ 0x140AFFEF4 (sub_140AFFEF4.c)
 *     sub_140B0046C @ 0x140B0046C (sub_140B0046C.c)
 *     sub_140B2359C @ 0x140B2359C (sub_140B2359C.c)
 *     sub_140B235FC @ 0x140B235FC (sub_140B235FC.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     sub_1402E0198 @ 0x1402E0198 (sub_1402E0198.c)
 *     sub_1402E0AC4 @ 0x1402E0AC4 (sub_1402E0AC4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwMakeTemporaryObject @ 0x14041DA20 (ZwMakeTemporaryObject.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ObInsertObject @ 0x14066BA50 (ObInsertObject.c)
 *     ObMakeTemporaryObject @ 0x1406E1700 (ObMakeTemporaryObject.c)
 *     sub_14072B3B0 @ 0x14072B3B0 (sub_14072B3B0.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     sub_140747D68 @ 0x140747D68 (sub_140747D68.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall IoCreateDriver(_OWORD *a1, unsigned __int64 a2)
{
  __int64 result; // rax
  _QWORD *v4; // r15
  struct _KTHREAD *CurrentThread; // rax
  PVOID *v6; // rcx
  void **v7; // rbx
  PVOID v8; // rdx
  _WORD *Pool2; // rax
  _WORD *v10; // r14
  unsigned __int64 v11; // rdi
  __int128 v12; // xmm0
  int inserted; // edi
  NTSTATUS v14; // eax
  __int64 v15; // rax
  PVOID *NewObject; // [rsp+20h] [rbp-E0h]
  void *Src[2]; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-A0h] BYREF
  PVOID v19; // [rsp+68h] [rbp-98h] BYREF
  PVOID Object; // [rsp+70h] [rbp-90h] BYREF
  __int128 v21; // [rsp+78h] [rbp-88h]
  _DWORD v22[2]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v23; // [rsp+90h] [rbp-70h]
  void **v24; // [rsp+98h] [rbp-68h]
  int v25; // [rsp+A0h] [rbp-60h]
  int v26; // [rsp+A4h] [rbp-5Ch]
  __int128 v27; // [rsp+A8h] [rbp-58h]
  wchar_t v28[64]; // [rsp+C0h] [rbp-40h] BYREF

  v22[1] = 0;
  v26 = 0;
  Object = 0LL;
  Handle = 0LL;
  v19 = 0LL;
  *(_OWORD *)Src = 0LL;
  v21 = 0LL;
  if ( a1 )
  {
    *(_OWORD *)Src = *a1;
    goto LABEL_3;
  }
  sub_1402E0198(v28, 60LL, L"\\Driver\\%08u", (unsigned int)_InterlockedIncrement(&dword_140C46FC4));
  result = sub_1402E0AC4(v28, 0x3CuLL, &v19);
  if ( (int)result >= 0 )
  {
    if ( (unsigned __int64)v19 > 0xFFFF )
      return 2147483653LL;
    LOWORD(Src[0]) = 2 * (_WORD)v19;
    WORD1(Src[0]) = 2 * (_WORD)v19 + 2;
    Src[1] = v28;
LABEL_3:
    v24 = Src;
    v22[0] = 48;
    v23 = 0LL;
    v25 = 592;
    v27 = 0LL;
    result = sub_14072B3B0(0, IoDriverObjectType, (int)v22, 0, (__int64)NewObject, 416, 0, 0, &Object, 0LL);
    if ( (int)result < 0 )
      return result;
    v4 = Object;
    memset(Object, 0, 0x1A0uLL);
    v4[6] = v4 + 42;
    v4[42] = v4;
    *(_DWORD *)v4 = 22020100;
    *((_DWORD *)v4 + 4) = 4;
    memset64(v4 + 14, (unsigned __int64)sub_14023EE50, 0x1CuLL);
    v4[11] = a2;
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
    v6 = (PVOID *)PsLoadedModuleList;
    v7 = (void **)Object;
    while ( v6 != &PsLoadedModuleList )
    {
      v8 = v6[6];
      if ( a2 >= (unsigned __int64)v8 && a2 < (unsigned __int64)v8 + *((unsigned int *)v6 + 16) )
      {
        *((_QWORD *)Object + 3) = v8;
        break;
      }
      v6 = (PVOID *)*v6;
    }
    ExReleaseResourceLite(&PsLoadedModuleResource);
    KeLeaveCriticalRegion();
    Pool2 = (_WORD *)ExAllocatePool2(256LL, LOWORD(Src[0]) + 2LL, 538996553LL);
    *((_QWORD *)&v21 + 1) = Pool2;
    v10 = Pool2;
    if ( Pool2 )
    {
      LOWORD(v21) = Src[0];
      v11 = LOWORD(Src[0]);
      WORD1(v21) = LOWORD(Src[0]) + 2;
      memmove(Pool2, Src[1], LOWORD(Src[0]));
      v12 = v21;
      v10[v11 >> 1] = 0;
      *(_OWORD *)(v4[6] + 24LL) = v12;
      inserted = ObInsertObject(v7, 0LL, 1u, 0, 0LL, &Handle);
      if ( inserted < 0 )
        return (unsigned int)inserted;
      v19 = 0LL;
      v14 = ObReferenceObjectByHandle(Handle, 0, IoDriverObjectType, 0, &v19, 0LL);
      v7 = (void **)v19;
      inserted = v14;
      if ( v14 < 0 )
      {
        ZwMakeTemporaryObject(Handle);
        ZwClose(Handle);
        return (unsigned int)inserted;
      }
      ZwClose(Handle);
      v15 = ExAllocatePool2(64LL, WORD1(Src[0]), 538996553LL);
      v7[8] = (void *)v15;
      if ( v15 )
      {
        *((_DWORD *)v7 + 14) = Src[0];
        memmove(v7[8], Src[1], WORD1(Src[0]));
      }
      inserted = sub_14042A5E0(v7, 0LL);
      if ( inserted >= 0 )
      {
        sub_140747D68((unsigned __int16 *)Src);
        return (unsigned int)inserted;
      }
    }
    else
    {
      inserted = -1073741670;
    }
    ObMakeTemporaryObject(v7);
    ObfDereferenceObject(v7);
    return (unsigned int)inserted;
  }
  return result;
}
