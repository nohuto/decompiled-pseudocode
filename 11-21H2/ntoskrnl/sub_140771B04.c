/*
 * XREFs of sub_140771B04 @ 0x140771B04
 * Callers:
 *     sub_14077198C @ 0x14077198C (sub_14077198C.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_140771CD0 @ 0x140771CD0 (sub_140771CD0.c)
 *     sub_140771F34 @ 0x140771F34 (sub_140771F34.c)
 *     sub_140771FFC @ 0x140771FFC (sub_140771FFC.c)
 *     sub_1407720B8 @ 0x1407720B8 (sub_1407720B8.c)
 *     sub_14077C924 @ 0x14077C924 (sub_14077C924.c)
 */

__int64 __fastcall sub_140771B04(
        int a1,
        int a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        ULONG SecurityDescriptorLength,
        int a10)
{
  void *v14; // r15
  int v15; // ebx
  int v16; // eax
  int v17; // edx
  int v18; // r9d
  HANDLE Handle[2]; // [rsp+50h] [rbp-38h] BYREF

  Handle[0] = 0LL;
  if ( (_WORD)a10 || !a8 && SecurityDescriptorLength )
    return (unsigned int)-1073741811;
  v14 = (void *)(a8 & -(__int64)(SecurityDescriptorLength != 0));
  v15 = sub_140771CD0(v14, SecurityDescriptorLength);
  if ( v15 >= 0 )
  {
    v16 = sub_140771F34(a1, a2, a3, a4, a5, a6, a7, (__int64)v14, SecurityDescriptorLength, a10);
    v15 = v16;
    if ( v16 >= 0 )
    {
      if ( a3 >= 7 )
        sub_1407720B8(a1, a2, a3, a4, a5, a6);
      goto LABEL_12;
    }
    if ( v16 == -1073741802 )
    {
      if ( a4 )
      {
        v17 = a4;
        goto LABEL_8;
      }
      v15 = sub_14077C924(a1, a2, a3, 33554439, 0, (__int64)Handle);
      if ( v15 >= 0 )
      {
        v17 = (int)Handle[0];
LABEL_8:
        v15 = sub_140771FFC(a1, v17, a5, a6, a7, (__int64)v14, SecurityDescriptorLength);
        if ( v15 >= 0 )
        {
          v18 = (int)Handle[0];
          if ( a4 )
            v18 = a4;
          sub_1407720B8(a1, a2, a3, v18, a5, a6);
        }
      }
    }
  }
LABEL_12:
  if ( Handle[0] )
    ZwClose(Handle[0]);
  return (unsigned int)v15;
}
