/*
 * XREFs of CcPinMappedData @ 0x1407BEEB0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireSharedStarveExclusive @ 0x1402339A0 (ExAcquireSharedStarveExclusive.c)
 *     sub_140329430 @ 0x140329430 (sub_140329430.c)
 *     sub_14032AD00 @ 0x14032AD00 (sub_14032AD00.c)
 *     CcUnpinData @ 0x1406FE6A0 (CcUnpinData.c)
 *     sub_14080C6EC @ 0x14080C6EC (sub_14080C6EC.c)
 */

BOOLEAN __stdcall CcPinMappedData(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        ULONG Flags,
        PVOID *Bcb)
{
  char v5; // r13
  __int64 *v8; // rbx
  _DWORD *SharedCacheMap; // r14
  unsigned int v10; // edi
  __int64 v11; // rax
  PVOID *v12; // r15
  BOOLEAN v13; // di
  PVOID v15; // [rsp+58h] [rbp-50h] BYREF
  LONGLONG QuadPart; // [rsp+60h] [rbp-48h] BYREF
  PVOID *v17; // [rsp+68h] [rbp-40h]
  __int64 v18; // [rsp+70h] [rbp-38h] BYREF
  __int64 v19; // [rsp+B8h] [rbp+10h] BYREF
  ULONG v20; // [rsp+C0h] [rbp+18h]

  v20 = Length;
  v5 = Flags;
  v18 = 0LL;
  v19 = 0LL;
  QuadPart = FileOffset->QuadPart;
  v15 = 0LL;
  v17 = &v15;
  v8 = (__int64 *)Bcb;
  if ( ((unsigned __int8)*Bcb & 1) == 0 )
    return 1;
  *Bcb = (char *)*Bcb - 1;
  SharedCacheMap = FileObject->SectionObjectPointer->SharedCacheMap;
  __incgsdword(0x8454u);
  if ( *(_WORD *)*v8 != 765 )
  {
    v10 = v20;
    v11 = v19;
    v12 = v17;
    while ( 1 )
    {
      if ( v15 )
      {
        if ( v12 == &v15 )
        {
          v15 = (PVOID)sub_14080C6EC(FileOffset, v10);
          v12 = (PVOID *)((char *)v15 + 16);
          v17 = (PVOID *)((char *)v15 + 16);
          v11 = v19;
        }
        v10 += QuadPart - v11;
        v20 = v10;
        QuadPart = v11;
        v17 = ++v12;
      }
      if ( !(unsigned __int8)sub_14032AD00(
                               (__int64)FileObject,
                               &QuadPart,
                               v10,
                               (SharedCacheMap[38] & 0x200) == 0,
                               0,
                               v5,
                               (ULONG_PTR *)v12,
                               &v18,
                               &v19) )
        goto LABEL_13;
      v11 = v19;
      if ( v19 - QuadPart >= v10 )
      {
        sub_140329430(*v8);
        *v8 = (__int64)v15;
        goto LABEL_8;
      }
    }
  }
  if ( !ExAcquireSharedStarveExclusive((PERESOURCE)(*v8 + 72), Flags & 1) )
  {
LABEL_13:
    v13 = 0;
    goto LABEL_14;
  }
LABEL_8:
  v13 = 1;
LABEL_14:
  if ( !v13 )
  {
    ++*v8;
    if ( v15 )
      CcUnpinData(v15);
  }
  return v13;
}
