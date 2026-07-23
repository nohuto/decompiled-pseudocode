/*
 * XREFs of sub_14032A7D0 @ 0x14032A7D0
 * Callers:
 *     sub_1407BDF60 @ 0x1407BDF60 (sub_1407BDF60.c)
 * Callees:
 *     FsRtlIsNtstatusExpected @ 0x140247160 (FsRtlIsNtstatusExpected.c)
 *     MmUnlockPages @ 0x1402B8AD0 (MmUnlockPages.c)
 *     IoFreeMdl @ 0x140349550 (IoFreeMdl.c)
 *     sub_140376F34 @ 0x140376F34 (sub_140376F34.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_14053A460 @ 0x14053A460 (sub_14053A460.c)
 *     sub_1405F2B80 @ 0x1405F2B80 (sub_1405F2B80.c)
 */

__int64 __fastcall sub_14032A7D0(char *a1, char *Src, size_t Size, __int64 a4)
{
  char v4; // r15
  unsigned int v5; // ebx
  char *v6; // r14
  unsigned int v8; // edi
  struct _MDL *v9; // r13
  __int64 v10; // rcx
  unsigned int v11; // esi
  __int64 v13; // [rsp+38h] [rbp-40h]
  struct _MDL *v14; // [rsp+40h] [rbp-38h] BYREF
  unsigned int v15; // [rsp+98h] [rbp+20h] BYREF

  v4 = a4;
  v5 = Size;
  v6 = Src;
  v8 = 0;
  v9 = 0LL;
  v14 = 0LL;
  v10 = 0LL;
  v13 = 0LL;
  v15 = 0;
  if ( !(_BYTE)a4 || (v10 = sub_14053A460(Src, &v14, Size, 0LL, &v15), v13 = v10, v9 = v14, v10) )
  {
    while ( v5 )
    {
      if ( v5 >= 0x40000 )
        v11 = 0x40000;
      else
        v11 = v5;
      if ( v4 )
        sub_1405F2B80(a1, v10, v11, a4);
      else
        memmove(a1, v6, v11);
      v5 -= v11;
      a1 += v11;
      v10 = v13;
      if ( v4 )
      {
        v10 = v11 + v13;
        v13 = v10;
      }
      else
      {
        v6 += v11;
      }
    }
  }
  else
  {
    v8 = v15;
  }
  if ( v9 )
  {
    MmUnlockPages(v9);
    IoFreeMdl(v9);
  }
  return v8;
}
