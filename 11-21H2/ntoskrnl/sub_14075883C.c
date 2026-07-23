/*
 * XREFs of sub_14075883C @ 0x14075883C
 * Callers:
 *     RtlFindMessage @ 0x140758920 (RtlFindMessage.c)
 *     LdrAccessResource @ 0x1408550E0 (LdrAccessResource.c)
 *     RtlLoadString @ 0x1409B7260 (RtlLoadString.c)
 * Callees:
 *     sub_1402D6C18 @ 0x1402D6C18 (sub_1402D6C18.c)
 *     RtlImageDirectoryEntryToData @ 0x1402D6CB0 (RtlImageDirectoryEntryToData.c)
 *     sub_1402D7A40 @ 0x1402D7A40 (sub_1402D7A40.c)
 *     sub_140757C9C @ 0x140757C9C (sub_140757C9C.c)
 */

__int64 __fastcall sub_14075883C(unsigned __int64 BaseOfImage, unsigned int *a2, unsigned __int64 *a3, _DWORD *a4)
{
  PVOID v7; // rdi
  unsigned __int64 v8; // rsi
  unsigned int *v9; // rax
  __int64 v10; // rdx
  __int64 result; // rax
  __int64 v12; // rax
  __int64 v13; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v14[4]; // [rsp+28h] [rbp-20h] BYREF
  ULONG v15; // [rsp+50h] [rbp+8h] BYREF

  v14[0] = 0LL;
  v13 = 0LL;
  v7 = (PVOID)BaseOfImage;
  if ( !BaseOfImage || !a2 )
    return 3221225485LL;
  if ( byte_140C4629A == 1 )
  {
    v8 = BaseOfImage & 0xFFFFFFFFFFFFFFFCuLL;
    v9 = (unsigned int *)RtlImageDirectoryEntryToData((PVOID)BaseOfImage, 1u, 2u, &v15);
    if ( !v9 )
      return 3221225609LL;
    if ( a2 < v9 )
      goto LABEL_10;
    result = sub_1402D6C18((__int64)v7, &v13);
    if ( (_DWORD)result == -1073741701 )
      return result;
    if ( v13 && ((unsigned __int64)a2 < v8 || (unsigned __int64)a2 >= v8 + v13) )
    {
LABEL_10:
      v12 = sub_1402D7A40((__int64)v7, v10, (__int64)a2, v14);
      if ( (unsigned __int64)(v12 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        v7 = (PVOID)v12;
    }
  }
  return sub_140757C9C(v7, a2, a3, a4);
}
