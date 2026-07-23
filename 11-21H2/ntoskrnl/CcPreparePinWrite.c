/*
 * XREFs of CcPreparePinWrite @ 0x140705F90
 * Callers:
 *     <none>
 * Callees:
 *     sub_14029C154 @ 0x14029C154 (sub_14029C154.c)
 *     CcSetDirtyPinnedData @ 0x14029D3D0 (CcSetDirtyPinnedData.c)
 *     sub_14032AD00 @ 0x14032AD00 (sub_14032AD00.c)
 *     memset @ 0x140435E00 (memset.c)
 *     CcUnpinData @ 0x1406FE6A0 (CcUnpinData.c)
 *     sub_14080C6EC @ 0x14080C6EC (sub_14080C6EC.c)
 */

BOOLEAN __stdcall CcPreparePinWrite(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        BOOLEAN Zero,
        ULONG Flags,
        PVOID *Bcb,
        PVOID *Buffer)
{
  ULONG v8; // edi
  LONGLONG v11; // r10
  LONGLONG QuadPart; // rax
  PVOID *p_BcbVoid; // rsi
  BOOLEAN v15; // bl
  PVOID v16; // rcx
  PVOID BcbVoid; // [rsp+58h] [rbp-50h] BYREF
  LONGLONG v18; // [rsp+60h] [rbp-48h] BYREF
  LONGLONG v19; // [rsp+68h] [rbp-40h] BYREF
  void *v20; // [rsp+70h] [rbp-38h] BYREF
  PVOID *v21; // [rsp+78h] [rbp-30h]

  v8 = Length;
  v20 = 0LL;
  v11 = 0LL;
  v19 = 0LL;
  QuadPart = FileOffset->QuadPart;
  v18 = FileOffset->QuadPart;
  BcbVoid = 0LL;
  p_BcbVoid = &BcbVoid;
  if ( (Flags & 0x20) != 0 )
  {
    sub_14029C154((__int64)FileObject, FileOffset, Length, Bcb, (__int64 *)Buffer);
    return 1;
  }
  else
  {
    v15 = 1;
    do
    {
      if ( BcbVoid )
      {
        if ( p_BcbVoid == &BcbVoid )
        {
          BcbVoid = (PVOID)sub_14080C6EC(FileOffset, v8);
          p_BcbVoid = (PVOID *)((char *)BcbVoid + 16);
          v21 = (PVOID *)((char *)BcbVoid + 16);
          *Buffer = v20;
          v11 = v19;
          LODWORD(QuadPart) = v18;
        }
        v8 += QuadPart - v11;
        v18 = v11;
        v21 = ++p_BcbVoid;
      }
      if ( !(unsigned __int8)sub_14032AD00(
                               (__int64)FileObject,
                               &v18,
                               v8,
                               0,
                               1,
                               Flags,
                               (ULONG_PTR *)p_BcbVoid,
                               (__int64 *)&v20,
                               &v19) )
      {
        v15 = 0;
        v16 = BcbVoid;
        goto LABEL_16;
      }
      v11 = v19;
      LODWORD(QuadPart) = v18;
    }
    while ( v19 - v18 < v8 );
    if ( p_BcbVoid == &BcbVoid )
      *Buffer = v20;
    if ( Zero )
      memset(*Buffer, 0, Length);
    CcSetDirtyPinnedData(BcbVoid, 0LL);
    v16 = BcbVoid;
    *Bcb = BcbVoid;
LABEL_16:
    if ( !v15 )
    {
      if ( v16 )
        CcUnpinData(v16);
    }
    return v15;
  }
}
