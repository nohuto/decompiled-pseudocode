/*
 * XREFs of sub_1409ACAD0 @ 0x1409ACAD0
 * Callers:
 *     sub_1409AC180 @ 0x1409AC180 (sub_1409AC180.c)
 * Callees:
 *     sub_140204738 @ 0x140204738 (sub_140204738.c)
 *     PsDetachSiloFromCurrentThread @ 0x1402D7F90 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x1402D7FB0 (PsAttachSiloToCurrentThread.c)
 *     sub_140647164 @ 0x140647164 (sub_140647164.c)
 *     sub_140835508 @ 0x140835508 (sub_140835508.c)
 *     sub_1409AB9D8 @ 0x1409AB9D8 (sub_1409AB9D8.c)
 *     sub_140A0A644 @ 0x140A0A644 (sub_140A0A644.c)
 */

__int64 __fastcall sub_1409ACAD0(__int64 a1)
{
  __int64 v2; // r14
  int v3; // esi
  _QWORD *v4; // rbx
  __int64 v6; // [rsp+20h] [rbp-20h] BYREF
  _QWORD v7[3]; // [rsp+28h] [rbp-18h] BYREF
  void *Src; // [rsp+68h] [rbp+28h] BYREF
  size_t Size; // [rsp+70h] [rbp+30h] BYREF
  __int64 v10; // [rsp+78h] [rbp+38h] BYREF

  v6 = 0LL;
  v10 = 0LL;
  Src = 0LL;
  Size = 0LL;
  v7[1] = L"\\SystemRoot\\System32\\ApiSetSchema.dll";
  v7[0] = 4980810LL;
  v2 = PsAttachSiloToCurrentThread(a1);
  v3 = sub_140A0A644(v7, &Src, &Size);
  if ( v3 >= 0 )
  {
    v3 = sub_1409AB9D8(Src, Size, &v10, &v6);
    if ( v3 >= 0 )
    {
      v4 = sub_140204738(a1);
      v4[129] = v10;
      v4[130] = v6;
      *((_BYTE *)v4 + 1048) = sub_140835508();
    }
    if ( Src )
      sub_140647164((ULONG_PTR)Src);
  }
  PsDetachSiloFromCurrentThread(v2);
  return (unsigned int)v3;
}
