/*
 * XREFs of sub_14097ECFC @ 0x14097ECFC
 * Callers:
 *     sub_14079D6B0 @ 0x14079D6B0 (sub_14079D6B0.c)
 * Callees:
 *     sub_14030B440 @ 0x14030B440 (sub_14030B440.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     sub_14058C330 @ 0x14058C330 (sub_14058C330.c)
 *     sub_1406EBA90 @ 0x1406EBA90 (sub_1406EBA90.c)
 *     sub_1406FC2F0 @ 0x1406FC2F0 (sub_1406FC2F0.c)
 *     sub_14096D000 @ 0x14096D000 (sub_14096D000.c)
 *     sub_140977F8C @ 0x140977F8C (sub_140977F8C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14097ECFC(__int64 a1)
{
  void **v1; // rdi
  int v2; // ebx
  unsigned __int64 v3; // rbp
  void **v4; // rsi
  void *v5; // rcx
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  v1 = *(void ***)a1;
  v2 = *(_DWORD *)(a1 + 40);
  v6 = 0LL;
  v7 = 0LL;
  v3 = *((_QWORD *)KeGetCurrentThread() + 23);
  if ( v1 )
  {
    do
    {
      v4 = (void **)*v1;
      sub_14030B440((__int64)v1, (__int64)&v6);
      if ( !v4 && (v2 & 2) == 0 )
      {
        v7 = 0LL;
        *((_QWORD *)&v6 + 1) = 0LL;
      }
      sub_140977F8C(&v6);
      if ( v4 || (v2 & 2) != 0 )
      {
        if ( ((_DWORD)v1[6] & 0x200000) == 0 )
        {
          v5 = v1[16];
          if ( v5 )
            ObfReferenceObject(v5);
          if ( !v4 && (v2 & 4) == 0 )
            goto LABEL_14;
          sub_14058C330((__int64)v1, 0);
        }
        if ( v4 )
          goto LABEL_15;
      }
LABEL_14:
      if ( (v2 & 1) != 0 )
      {
LABEL_15:
        if ( ((_DWORD)v1[6] & 0x200000) == 0 )
          sub_1406FC2F0(*(_QWORD **)v1[9], v3, 0);
      }
      sub_14096D000((__int64)v1);
      sub_1406EBA90((__int64)v1);
      ExFreePoolWithTag(v1, 0);
      v1 = v4;
    }
    while ( v4 );
  }
}
