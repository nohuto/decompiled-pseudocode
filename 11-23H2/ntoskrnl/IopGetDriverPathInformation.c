/*
 * XREFs of IopGetDriverPathInformation @ 0x140555CE4
 * Callers:
 *     NtQueryVolumeInformationFile @ 0x140686AF0 (NtQueryVolumeInformationFile.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireQueuedSpinLock @ 0x1402A09F0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140302AA0 (KeReleaseQueuedSpinLock.c)
 *     IopVerifyDriverObjectOnStack @ 0x140556C68 (IopVerifyDriverObjectOnStack.c)
 *     ObReferenceObjectByName @ 0x1406C2C80 (ObReferenceObjectByName.c)
 */

__int64 __fastcall IopGetDriverPathInformation(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax
  KIRQL v6; // al
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // r9
  __int64 v10; // rcx
  _WORD v11[2]; // [rsp+40h] [rbp-18h] BYREF
  int v12; // [rsp+44h] [rbp-14h]
  __int64 v13; // [rsp+48h] [rbp-10h]
  PVOID Object; // [rsp+68h] [rbp+10h] BYREF

  v12 = 0;
  Object = 0LL;
  if ( (unsigned int)(a3 - 8) < *(_DWORD *)(a2 + 4) )
    return 3221225485LL;
  v13 = a2 + 8;
  v11[0] = *(_WORD *)(a2 + 4);
  v11[1] = v11[0];
  result = ObReferenceObjectByName((unsigned int)v11, 64, 0, 0, (__int64)IoDriverObjectType, 0, 0, (__int64)&Object);
  if ( (int)result >= 0 )
  {
    v6 = KeAcquireQueuedSpinLock(0xAuLL);
    v8 = *(_QWORD *)(a1 + 16);
    LOBYTE(v9) = v6;
    if ( v8 && (v10 = *(_QWORD *)(v8 + 8)) != 0 && (unsigned __int8)IopVerifyDriverObjectOnStack(v10, Object, v7, v9) )
      *(_BYTE *)a2 = 1;
    else
      *(_BYTE *)a2 = IopVerifyDriverObjectOnStack(*(_QWORD *)(a1 + 8), Object, v7, v9);
    KeReleaseQueuedSpinLock(0xAuLL, v9);
    ObfDereferenceObjectWithTag(Object, 0x746C6644u);
    return 0LL;
  }
  return result;
}
