/*
 * XREFs of sub_14062C800 @ 0x14062C800
 * Callers:
 *     sub_1409DC230 @ 0x1409DC230 (sub_1409DC230.c)
 * Callees:
 *     MmUnmapVideoDisplay @ 0x140215660 (MmUnmapVideoDisplay.c)
 *     sub_1408089C4 @ 0x1408089C4 (sub_1408089C4.c)
 *     sub_1409DC350 @ 0x1409DC350 (sub_1409DC350.c)
 *     sub_1409DC780 @ 0x1409DC780 (sub_1409DC780.c)
 */

__int64 __fastcall sub_14062C800(__int64 a1)
{
  int v1; // ebx
  int v2; // eax
  SIZE_T v3; // r14
  __int64 v4; // rdi
  char *v5; // rbp
  SIZE_T NumberOfBytes; // [rsp+40h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+48h] [rbp+10h] BYREF
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF

  v9 = 0LL;
  BaseAddress = 0LL;
  LODWORD(NumberOfBytes) = 0;
  if ( byte_140C165B8 == 1 )
  {
    return 0;
  }
  else
  {
    LOBYTE(a1) = 1;
    v2 = sub_1409DC350(a1, &v9, &BaseAddress, &NumberOfBytes);
    v3 = (unsigned int)NumberOfBytes;
    v1 = v2;
    if ( v2 >= 0 )
    {
      v4 = v9;
      v5 = (char *)BaseAddress + (unsigned int)(NumberOfBytes - 1);
      if ( *(_BYTE *)(v9 + 4) )
      {
        if ( *(_BYTE *)(v9 + 5) )
        {
          v1 = sub_1409DC780(
                 v9,
                 *(unsigned __int8 *)(v9 + 4),
                 (char *)BaseAddress + (unsigned int)(NumberOfBytes - 1),
                 &stru_140C165A0);
          if ( v1 >= 0 )
          {
            v1 = sub_1409DC780(v4, *(unsigned __int8 *)(v4 + 5), v5, &stru_140C16570);
            if ( v1 >= 0 )
              byte_140C165B8 = 1;
          }
        }
      }
    }
    if ( BaseAddress )
    {
      MmUnmapVideoDisplay(BaseAddress, v3);
      sub_1408089C4();
    }
  }
  return (unsigned int)v1;
}
