/*
 * XREFs of sub_140B06E60 @ 0x140B06E60
 * Callers:
 *     sub_140B06C7C @ 0x140B06C7C (sub_140B06C7C.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x1402D6CB0 (RtlImageDirectoryEntryToData.c)
 *     sub_1403C3418 @ 0x1403C3418 (sub_1403C3418.c)
 *     sub_140706200 @ 0x140706200 (sub_140706200.c)
 *     sub_140B4EA44 @ 0x140B4EA44 (sub_140B4EA44.c)
 */

__int64 __fastcall sub_140B06E60(char *BaseOfImage, ULONG64 Size, __int64 a3, __int64 a4)
{
  unsigned int v6; // ebp
  unsigned int *v8; // rax
  __int64 result; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // [rsp+20h] [rbp-38h]
  ULONG v13; // [rsp+40h] [rbp-18h] BYREF
  __int64 v14; // [rsp+44h] [rbp-14h] BYREF

  v13 = 0;
  LODWORD(v14) = 0;
  v6 = Size;
  if ( (dword_140D06880 & 0x4000) != 0 )
    return sub_140B4EA44(BaseOfImage, a3, a4);
  v8 = (unsigned int *)RtlImageDirectoryEntryToData(BaseOfImage, 1u, 0xAu, &v13);
  if ( !v8 || v13 != *v8 )
    return 0LL;
  result = sub_140706200(BaseOfImage, v6, (__int64)v8, *v8, 0LL, 523, &v14, 0LL);
  if ( (int)result >= 0 )
    return sub_1403C3418((__int64)BaseOfImage, &BaseOfImage[(unsigned int)v14], v10, v11, v12, a3, a4);
  if ( (_DWORD)result == -1073741637 )
    return 0LL;
  return result;
}
