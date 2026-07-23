/*
 * XREFs of CcPinRead @ 0x1406A5510
 * Callers:
 *     <none>
 * Callees:
 *     sub_14032AD00 @ 0x14032AD00 (sub_14032AD00.c)
 *     CcUnpinData @ 0x1406FE6A0 (CcUnpinData.c)
 *     sub_14080C6EC @ 0x14080C6EC (sub_14080C6EC.c)
 */

BOOLEAN __stdcall CcPinRead(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        ULONG Flags,
        PVOID *Bcb,
        PVOID *Buffer)
{
  char v6; // r15
  _DWORD *SharedCacheMap; // r14
  PVOID *v10; // rbx
  unsigned int v11; // esi
  __int64 v12; // rax
  PVOID *v13; // rdi
  BOOLEAN v15; // [rsp+50h] [rbp-68h]
  PVOID v16; // [rsp+58h] [rbp-60h] BYREF
  PVOID *v17; // [rsp+60h] [rbp-58h]
  void *v18; // [rsp+68h] [rbp-50h] BYREF
  __int64 v19; // [rsp+C0h] [rbp+8h] BYREF
  LONGLONG QuadPart; // [rsp+C8h] [rbp+10h] BYREF
  ULONG v21; // [rsp+D0h] [rbp+18h]

  v21 = Length;
  v6 = Flags;
  v18 = 0LL;
  v19 = 0LL;
  QuadPart = FileOffset->QuadPart;
  v16 = 0LL;
  v17 = &v16;
  __incgsdword(4 * (Flags & 1) + 33880);
  *((_DWORD *)KeGetCurrentThread() + 359) = 0;
  SharedCacheMap = FileObject->SectionObjectPointer->SharedCacheMap;
  v10 = Buffer;
  v11 = v21;
  v12 = v19;
  v13 = v17;
  do
  {
    if ( v16 )
    {
      if ( v13 == &v16 )
      {
        v16 = (PVOID)sub_14080C6EC(FileOffset, v11);
        v13 = (PVOID *)((char *)v16 + 16);
        v17 = (PVOID *)((char *)v16 + 16);
        *v10 = v18;
        v12 = v19;
      }
      v11 += QuadPart - v12;
      v21 = v11;
      QuadPart = v12;
      v17 = ++v13;
    }
    if ( !(unsigned __int8)sub_14032AD00(
                             (__int64)FileObject,
                             &QuadPart,
                             v11,
                             (SharedCacheMap[38] & 0x200) == 0,
                             0,
                             v6,
                             (ULONG_PTR *)v13,
                             (__int64 *)&v18,
                             &v19) )
    {
      __incgsdword(0x8494u);
      v15 = 0;
      goto LABEL_12;
    }
    v12 = v19;
  }
  while ( v19 - QuadPart < v11 );
  *Bcb = v16;
  if ( v13 == &v16 )
    *v10 = v18;
  v15 = 1;
LABEL_12:
  __addgsdword(0x8498u, *((_DWORD *)KeGetCurrentThread() + 359));
  if ( !v15 && v16 )
    CcUnpinData(v16);
  return v15;
}
