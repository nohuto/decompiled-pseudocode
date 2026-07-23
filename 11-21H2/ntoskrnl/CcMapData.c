/*
 * XREFs of CcMapData @ 0x1407BDE60
 * Callers:
 *     <none>
 * Callees:
 *     sub_14028A370 @ 0x14028A370 (sub_14028A370.c)
 *     sub_140328180 @ 0x140328180 (sub_140328180.c)
 *     sub_140328510 @ 0x140328510 (sub_140328510.c)
 *     sub_14032AD00 @ 0x14032AD00 (sub_14032AD00.c)
 */

BOOLEAN __stdcall CcMapData(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        ULONG Flags,
        PVOID *Bcb,
        PVOID *Buffer)
{
  char v8; // di
  ULONG v9; // r9d
  unsigned int v10; // eax
  __int64 *v11; // rsi
  ULONG v12; // ebx
  BOOLEAN result; // al
  int v14; // [rsp+54h] [rbp-34h] BYREF
  __int64 *v15; // [rsp+58h] [rbp-30h] BYREF
  _QWORD v16[5]; // [rsp+60h] [rbp-28h] BYREF

  v8 = 0;
  v16[0] = 0LL;
  v15 = 0LL;
  v9 = Flags & 1;
  if ( v9 )
    v10 = 33872;
  else
    v10 = 33868;
  __incgsdword(v10);
  *((_DWORD *)KeGetCurrentThread() + 359) = 0;
  if ( v9 )
  {
    v11 = (__int64 *)Buffer;
    *Buffer = (PVOID)sub_140328180(
                       (__int64)FileObject->SectionObjectPointer->SharedCacheMap,
                       FileOffset->QuadPart,
                       &v15,
                       &v14,
                       (Flags >> 6) & 1,
                       0);
  }
  else
  {
    v11 = (__int64 *)Buffer;
    result = sub_14032AD00(
               (__int64)FileObject,
               (__int64 *)FileOffset,
               Length,
               1,
               0,
               Flags,
               (ULONG_PTR *)&v15,
               (__int64 *)Buffer,
               v16);
    if ( !result )
    {
      __incgsdword(0x848Cu);
      return result;
    }
  }
  if ( (Flags & 0x10) == 0 )
  {
    v12 = Flags & 0x100;
    if ( v12 )
    {
      v8 = *((_BYTE *)KeGetCurrentThread() + 1389) + 2;
      *((_BYTE *)KeGetCurrentThread() + 1389) = 1;
    }
    sub_140328510(Length, 0, 1, *v11);
    if ( v12 )
      *((_BYTE *)KeGetCurrentThread() + 1389) = v8 - 2;
  }
  __addgsdword(0x8490u, *((_DWORD *)KeGetCurrentThread() + 359));
  *Bcb = (char *)v15 + 1;
  return 1;
}
